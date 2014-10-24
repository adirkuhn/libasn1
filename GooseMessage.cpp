#include "GooseMessage.h"
#include "QDebug"

GooseMessage::GooseMessage()
{
    //initialize multicast
    this->multicast = new Multicast();
}

GooseMessage::~GooseMessage() {
}

//public
void GooseMessage::setGocbRef(QString gocbRef) {
    this->gocbRef = gocbRef;
}
QString GooseMessage::getGocbRef() {
    return this->gocbRef;
}

void GooseMessage::setTimeAllowedtoLive(int timeAllowedtoLive) {
    this->timeAllowedtoLive = timeAllowedtoLive;
}
int GooseMessage::getTimeAllowedtoLive() {
    return this->timeAllowedtoLive;
}

void GooseMessage::setDatSet(QString datSet) {
    this->datSet = datSet;
}
QString GooseMessage::getDatSet() {
    return this->datSet;
}

void GooseMessage::setGoID(QString goID) {
    this->goID = goID;
}
QString GooseMessage::getGoID() {
    return this->goID;
}

void GooseMessage::setT() {

    this->t = "20141017";

    //time_t mytime = time(NULL);

    //asn_time2GT(&(this->gooseMessage->choice.goosePdu.t), gmtime(&mytime), 1);
    //asn_time2GT(&(meterValue->timestamp), gmtime(&mytime), 1);

    //this->QString2Octet(&this->gooseMessage->choice.goosePdu.t, t);

//    OCTET_STRING_t * Time;
//    Time = OCTET_STRING_new_fromBuf(&asn_DEF_BIT_STRING,"20141028020000Z", 8);

//    this->gooseMessage->choice.goosePdu.t.buf = Time->buf;
//    this->gooseMessage->choice.goosePdu.t.size = 8;
//    this->gooseMessage->choice.goosePdu.t._asn_ctx = Time->_asn_ctx;
//    this->QString2Octet(&this->gooseMessage->choice.goosePdu.t, "20141012");
}
QString GooseMessage::getT() {
    return this->t;
}

void GooseMessage::setStNum(int stNum) {
    this->stNum = stNum;
}
int GooseMessage::getStNum() {
    return this->stNum;
}

void GooseMessage::setSqNum(int sqNum) {
    this->sqNum = sqNum;
}
int GooseMessage::getSqNum() {
    return this->sqNum;
}

void GooseMessage::setTest(bool test) {
    this->test = test;
}
bool GooseMessage::getTest() {
    return this->test;
}

void GooseMessage::setConfRev(int confRev) {
    this->confRev = confRev;
}
int GooseMessage::getConfRev() {
    return this->confRev;
}

void GooseMessage::setNdsCom(bool ndsCom) {
    this->ndsCom = ndsCom;
}
bool GooseMessage::getNdsCom() {
    return this->ndsCom;
}

void GooseMessage::setNumDatSetEntries(int numDatSetEntries) {
    this->numDatSetEntries = numDatSetEntries;
}
int GooseMessage::getNumDatSetEntries() {
    return this->numDatSetEntries;
}

void GooseMessage::addAllData(QString data) {
    this->allData.append(data);
}
QList<QString> GooseMessage::getAllData() {
    return this->allData;
}

//Encode Message
void GooseMessage::encodeMessage() {
    qDebug() << "===============================";
    qDebug() << "Enviando Msg goose";

    IEC61850_8_1SpecificProtocol *gooseMessage;

    //alocate IECMessage on memory
    gooseMessage = (IEC61850_8_1SpecificProtocol *) calloc(1, sizeof(IEC61850_8_1SpecificProtocol));

    //Set CHOICE to GoosePdu
    gooseMessage->present = IEC61850_8_1SpecificProtocol_PR_goosePdu;

    //initialize vars
    this->encodedMessageSize = 0;

    //set goose message values
    this->QString2Octet(&gooseMessage->choice.goosePdu.gocbRef, this->getGocbRef());
    gooseMessage->choice.goosePdu.timeAllowedtoLive = this->getTimeAllowedtoLive();
    this->QString2Octet(&gooseMessage->choice.goosePdu.datSet, this->getDatSet());
    gooseMessage->choice.goosePdu.goID = OCTET_STRING_new_fromBuf(&asn_DEF_VisibleString, this->getGoID().toLocal8Bit().data(), this->getGoID().size());
    this->QString2Octet(&gooseMessage->choice.goosePdu.t, this->getT());
    gooseMessage->choice.goosePdu.stNum = this->getStNum();
    gooseMessage->choice.goosePdu.sqNum = this->getSqNum();
    gooseMessage->choice.goosePdu.test = (int *) this->getTest();
    gooseMessage->choice.goosePdu.confRev = this->getConfRev();
    gooseMessage->choice.goosePdu.ndsCom = (int *) this->getNdsCom();
    gooseMessage->choice.goosePdu.numDatSetEntries = this->getNumDatSetEntries();

    QList<Data*> m_data;
    for(int i=0; i < this->getAllData().count(); i++) {
        qDebug() << "Tam tot: " << this->getAllData().count();
        qDebug() << "COISA de DEBUSG: " << this->getAllData().at(i).toInt();

        m_data.append(new Data());
        m_data.at(i)->present = Data_PR_integer;
        m_data.at(i)->choice.integer = this->getAllData().at(i).toInt();
        asn_set_add(&gooseMessage->choice.goosePdu.allData, m_data.at(i));
    }

    //Encode message
    asn_enc_rval_t encodeReturn;

    encodeReturn = der_encode_to_buffer(&asn_DEF_IEC61850_8_1SpecificProtocol, gooseMessage, this->encodedMessage, 500);

    if (encodeReturn.encoded > -1) {
        this->encodedMessageSize = encodeReturn.encoded;
        qDebug() << "tamanho da msg encodada  " << encodeReturn.encoded;
    }
    else {
        throw encodeReturn.failed_type->name;
        qDebug() << encodeReturn.failed_type->name;
        qDebug() << encodeReturn.failed_type->xml_tag;
        return ;
    }
}

void GooseMessage::setMacAddress(QString macAddress)
{
    this->macAddress = macAddress;
}

QString GooseMessage::getMacAddress()
{
    return this->macAddress;
}

void GooseMessage::addSubscriber(QString macAddress)
{
    this->subscribers.append(macAddress);
}

bool GooseMessage::removeSubscriber(QString macAddress)
{
    return this->subscribers.removeAll(macAddress);
}

QList<QString> GooseMessage::getSubscribers()
{
    return this->subscribers;
}

void GooseMessage::sendMessageToSubscribers() {

    //encode message
    this->encodeMessage();

    //tamanho do pacote a ser enviado
    int goose_ether_pkt_len = sizeof(goose_header) + this->encodedMessageSize;
    //aloca ponteiro para mensagem
    unsigned char *goose_ether_pkt = (unsigned char *) malloc(goose_ether_pkt_len);

    //goose_header *goose_msg_header = new goose_header;
    goose_header goose_msg_header = {0};

    //destination host
    //memcpy(goose_msg_header.dhost, ether_aton(mac), sizeof(unsigned char[6]));

    //sender host
    //memcpy(goose_msg_header.shost, ether_aton(mac2), sizeof(unsigned char[6]));
    memcpy(goose_msg_header.shost, ether_aton(this->getMacAddress().toLocal8Bit().data()), sizeof(unsigned char[6]));

    //ethertype
    goose_msg_header.ethertype = htons(0x88b8);

    //appid
    goose_msg_header.appid = htons(0x0001);


    //length
    goose_msg_header.length = htons(this->encodedMessageSize);

    //Monta mensagem

    for(int i = 0; i < this->getSubscribers().count(); i++) {

        //destination host
        memcpy(goose_msg_header.dhost, ether_aton(this->getSubscribers().at(i).toLocal8Bit().data()), sizeof(unsigned char[6]));

        //header
        memcpy(goose_ether_pkt, &goose_msg_header, sizeof(goose_header));
        //apdu
        memcpy(goose_ether_pkt + sizeof(goose_msg_header), this->encodedMessage, this->encodedMessageSize);

        printf("\n");
        for (int j =0; j<= goose_ether_pkt_len; j++) {
            printf(" %02x", goose_ether_pkt[j]);
        }
        printf("\n\n");

        //Enviar mensagem
        this->multicast->sendPackage(goose_ether_pkt, goose_ether_pkt_len);
    }

    free(goose_ether_pkt);
    //clear char array
    memset(this->encodedMessage, 0, sizeof(this->encodedMessage));
}

//private
void GooseMessage::QString2Octet(OCTET_STRING_t *st, QString string) {
    QByteArray ba = string.toLocal8Bit();
    char *pchar = ba.data();

    OCTET_STRING_fromBuf(st, pchar, string.size());
}
