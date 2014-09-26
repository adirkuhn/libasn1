#include "GooseMessage.h"

GooseMessage::GooseMessage()
{
    //alocate IECMessage on memory
    this->gooseMessage = (IEC61850_8_1SpecificProtocol *) calloc(1, sizeof(IEC61850_8_1SpecificProtocol));

    //Set CHOICE to GoosePdu
    this->gooseMessage->present = IEC61850_8_1SpecificProtocol_PR_goosePdu;

    //initialize vars
    //this->encodedMessage
    this->encodedMessageSize = 0;
}

GooseMessage::~GooseMessage() {
    //delete alocated memory
    free(this->gooseMessage);
}

//public
void GooseMessage::setGocbRef(QString gocbRef) {
    this->QString2Octet(&this->gooseMessage->choice.goosePdu.gocbRef, gocbRef);
}

void GooseMessage::setTimeAllowedtoLive(int timeAllowedtoLive) {
    this->gooseMessage->choice.goosePdu.timeAllowedtoLive = timeAllowedtoLive;
}

void GooseMessage::setDatSet(QString datSet) {
    this->QString2Octet(&this->gooseMessage->choice.goosePdu.datSet, datSet);
}

void GooseMessage::setGoID(QString goID) {
    this->gooseMessage->choice.goosePdu.goID = OCTET_STRING_new_fromBuf(&asn_DEF_VisibleString, goID.toLocal8Bit().data(), sizeof(goID));
}

void GooseMessage::setT() {
    QTime UtcTime = QDateTime::currentDateTime ().toTimeSpec(Qt::UTC).time();

    this->QString2Octet(&this->gooseMessage->choice.goosePdu.t, UtcTime.toString());
}

void GooseMessage::setStNum(int stNum) {
    this->gooseMessage->choice.goosePdu.stNum = stNum;
}

void GooseMessage::setSqNum(int sqNum) {
    this->gooseMessage->choice.goosePdu.sqNum = sqNum;
}

void GooseMessage::setTest(bool test) {
    this->gooseMessage->choice.goosePdu.test = (int *) test;
}

void GooseMessage::setConfRev(int confRev) {
    this->gooseMessage->choice.goosePdu.confRev = confRev;
}

void GooseMessage::setNdsCom(bool ndsCom) {
    this->gooseMessage->choice.goosePdu.ndsCom = (int *) ndsCom;
}

void GooseMessage::setNumDatSetEntries(int numDatSetEntries) {
    this->gooseMessage->choice.goosePdu.numDatSetEntries = numDatSetEntries;
}

void GooseMessage::addDatSet(Data *data) {
    asn_set_add(&this->gooseMessage->choice.goosePdu.allData, data);
}

//Encode Message
void GooseMessage::encodeMessage() {
    asn_enc_rval_t encodeReturn;

    encodeReturn = der_encode_to_buffer(&asn_DEF_IEC61850_8_1SpecificProtocol, this->gooseMessage, this->encodedMessage, 500);

    if (encodeReturn.encoded > -1) {
        this->encodedMessageSize = encodeReturn.encoded;
    }
    else {
        throw encodeReturn.failed_type->name;
    }
}

//private
void GooseMessage::QString2Octet(OCTET_STRING_t *st, QString string) {
    QByteArray ba = string.toLocal8Bit();
    char *pchar = ba.data();

    OCTET_STRING_fromBuf(st, pchar, sizeof(string));
}
