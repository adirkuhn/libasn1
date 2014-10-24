#ifndef MULTICAST_H
#define MULTICAST_H

//lib pcap para raw socket
#include <pcap.h>
//cabecalho e pacote ethernet
#include <netinet/if_ether.h>
//pacote ethernet
#include <net/ethernet.h>
//estrutura cabecalho IP
#include <netinet/ip.h>
//funcoes inet_*
#include <arpa/inet.h>

//Qt
#include "QDebug"

//
#include "IMulticastProcess.h"

class Multicast
{
public:
    Multicast();
    void listenMulticast(pcap_handler multicastProcessPackageHandle);
    void sendPackage(const void *packet, size_t packetSize);

private:
    //placa de rede
    char *networkDevice;
    //buff para erro
    char errorBuffer[PCAP_ERRBUF_SIZE];
    //pcap "socket"
    pcap_t* socket;
    //ponteiro pacote
    const u_char *packet;
    //cabecalho do pcap
    struct pcap_pkthdr hdr;
    //estrutura do cabeçalho do frame ethernet
    struct ether_header *eptr;
    //filtro do pcap
    struct bpf_program pcapFilter;
    //network mask
    bpf_u_int32 netp;
};

#endif // MULTICAST_H
