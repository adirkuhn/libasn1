#ifndef IMULTICASTPROCESS_H
#define IMULTICASTPROCESS_H

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

class IMulticastProcess
{
public:
    IMulticastProcess();
    virtual pcap_handler multicastPackageHandle(u_char *args, const pcap_pkthdr *pkthdr, const u_char *packet);
};

#endif // IMULTICASTPROCESS_H
