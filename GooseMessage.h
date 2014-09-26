#ifndef GOOSEMESSAGE_H
#define GOOSEMESSAGE_H

//Qt
#include "QString"
#include "QTime"
//ASN.1
#include "asn1/IEC61850-8-1SpecificProtocol.h"
#include "asn1/OCTET_STRING.h"

class GooseMessage
{
public:
    GooseMessage();
    ~GooseMessage();
    void setGocbRef(QString gocbRef);
    void setTimeAllowedtoLive(int timeAllowedtoLive);
    void setDatSet(QString datSet);
    void setGoID(QString goID);
    void setT();
    void setStNum(int stNum);
    void setSqNum(int sqNum);
    void setTest(bool test);
    void setConfRev(int confRev);
    void setNdsCom(bool ndsCom);
    void setNumDatSetEntries(int numDatSetEntries);
    void addDatSet(Data *data);

    void encodeMessage();
    char getEncodedMessage();
    short int getEncodedMessageSize();

private:
    IEC61850_8_1SpecificProtocol *gooseMessage;
    char encodedMessage[500];
    short int encodedMessageSize;

    void QString2Octet(OCTET_STRING_t *st, QString String);
};

#endif // GOOSEMESSAGE_H
