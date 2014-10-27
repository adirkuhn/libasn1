#ifndef GOOSEMESSAGE_H
#define GOOSEMESSAGE_H

//Qt
#include "QString"
#include "QList"
#include "QTime"
//ASN.1
#include "IEC61850-8-1SpecificProtocol.h"
#include "OCTET_STRING.h"
//Multicast
#include "Multicast.h"

class GooseMessage
{
public:
    GooseMessage();
    ~GooseMessage();
    void setGocbRef(QString gocbRef);
    QString getGocbRef();

    void setTimeAllowedtoLive(int timeAllowedtoLive);
    int getTimeAllowedtoLive();

    void setDatSet(QString datSet);
    QString getDatSet();

    void setGoID(QString goID);
    QString getGoID();

    void setT();
    QString getT();

    void setStNum(int stNum);
    int getStNum();

    void setSqNum(int sqNum);
    int getSqNum();

    void setTest(bool test);
    bool getTest();

    void setConfRev(int confRev);
    int getConfRev();

    void setNdsCom(bool ndsCom);
    bool getNdsCom();

    void setNumDatSetEntries(int numDatSetEntries);
    int getNumDatSetEntries();

    void addAllData(QString data);
    QList<QString> getAllData();
    void cleanAllData();

    void encodeMessage();
    char getEncodedMessage();
    short int getEncodedMessageSize();

    void setMacAddress(QString macAddress);
    QString getMacAddress();

    void addSubscriber(QString macAddress);
    bool removeSubscriber(QString macAddress);
    QList<QString> getSubscribers();

    void sendMessageToSubscribers();

    struct goose_header {
        unsigned char dhost[6];
        unsigned char shost[6];
        //libpacap nao esta conseguindo filtrar os pacotes com as essas tags definidas
        //o IEDScout tb nao consegue achar
        //unsigned short tpid;
        //unsigned short tci;
        unsigned short ethertype; //2 bytes
        unsigned short appid;
        unsigned short length;
        unsigned short reserved1;
        unsigned short reserved2;
    };

private:
    char encodedMessage[500];
    short int encodedMessageSize;
    QString macAddress;
    QList<QString> subscribers;
    Multicast *multicast;

    void QString2Octet(OCTET_STRING_t *st, QString String);

    QString gocbRef;        //80
    int timeAllowedtoLive;  //81
    QString datSet;         //82
    QString goID;           //83
    QString t;              //84
    int stNum;              //85
    int sqNum;              //86
    bool test;              //87
    int confRev;            //88
    bool ndsCom;            //89
    int numDatSetEntries;   //8A
    QList<QString> allData; //AB

};

#endif // GOOSEMESSAGE_H
