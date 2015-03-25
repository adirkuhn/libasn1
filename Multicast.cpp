#include "Multicast.h"

Multicast::Multicast()
{
    //pega placa de rede
    this->networkDevice = pcap_lookupdev(this->errorBuffer);

    if(this->networkDevice == NULL) {
        qDebug() << "Erro: " << this->errorBuffer;
    }
}

//loop para escutar rede (Multicast)
void Multicast::listenMulticast(pcap_handler multicastProcessPackageHandle, char* filtro)
{
    /**
     * abre socket pcap em modo promiscuo
     *
     * pcap_t *pcap_open_live(const char *device, int snaplen,
     *          int promisc, int to_ms, char *errbuf);
     */
    this->socket = pcap_open_live(this->networkDevice, BUFSIZ, 1, 1000, this->errorBuffer);

    if (this->socket == NULL) {
        qDebug() << "Erro ao abrir socket: " << this->errorBuffer;
    }

    //define filtro para pegar multicast
    //pcap multicast -> ether[0] & 1
    //filtrar somente os mac's conhecidos da aplicação começando com 01:0C:CD:*:*:*
    //filtrar tipo de pacote goose(0x88b8) ether proto
    char *mFiltro = filtro;
    //char *filtro = "ether[0] & 1 AND ether proto 0x88B8";
    //char *filtro = "ether proto 0x88B8 and multicast";

    //compila filtro
    if(pcap_compile(this->socket, &this->pcapFilter, filtro, 0, this->netp) == -1) {
        qDebug() << "Erro ao compilar filtro: " << pcap_geterr(this->socket);
        return ;
    }

    //aplica filtro
    if (pcap_setfilter(this->socket, &this->pcapFilter) == -1) {
        qDebug() << "Erro ao aplicar filtro";
        return ;
    }

    //loop
    int loopReturn;
    loopReturn = pcap_loop(this->socket, -1, multicastProcessPackageHandle, NULL);

    if (loopReturn == 0) {
        qDebug() << "Cnt Exaustaed";
    }
    if (loopReturn == -1) {
        qDebug() << "Error";
    }
    if (loopReturn == -2) {
        qDebug() << "Erro 2";
    }
}

//envia um pacote na rede
void Multicast::sendPackage(const void* packet, size_t packetSize)
{
    //abre socket
    this->socket = pcap_open_live(this->networkDevice, packetSize, 0, 0, this->errorBuffer);

    if (this->socket == NULL) {
        qDebug() << "Erro ao abrir socket: " << this->errorBuffer;
    }

    if (pcap_inject(this->socket, packet, packetSize) == -1) {
        pcap_perror(this->socket, 0);
        pcap_close(this->socket);
        qDebug() << "Erro ao enviar pacote";
    }
    qDebug() << "Pacote enviado: " << packet;

    //fecha socket
    pcap_close(this->socket);
}


