#-------------------------------------------------
#
# Project created by QtCreator 2014-09-16T11:37:49
#
#-------------------------------------------------

QT       -= gui

TARGET = libasn1
TEMPLATE = lib

DEFINES += LIBASN1_LIBRARY

SOURCES += libasn1.cpp \
        asn1/Access-Control-List-instance.c \
        asn1/AccessCondition.c \
        asn1/AccessResult.c \
        asn1/AcknowledgeEventNotification-Request.c \
        asn1/AcknowledgeEventNotification-Response.c \
        asn1/AddEventConditionListReference-Error.c \
        asn1/AddEventConditionListReference-Request.c \
        asn1/AddEventConditionListReference-Response.c \
        asn1/AdditionalCBBOptions.c \
        asn1/AdditionalService-Error.c \
        asn1/AdditionalService-Request.c \
        asn1/AdditionalService-Response.c \
        asn1/AdditionalSupportOptions.c \
        asn1/Address.c \
        asn1/AddToUnitControl-Request.c \
        asn1/AddToUnitControl-Response.c \
        asn1/AE-invocation-identifier.c \
        asn1/AE-qualifier.c \
        asn1/AlarmAckRule.c \
        asn1/AlarmEnrollmentSummary.c \
        asn1/AlarmSummary.c \
        asn1/AlterEventConditionListMonitoring-Request.c \
        asn1/AlterEventConditionListMonitoring-Response.c \
        asn1/AlterEventConditionMonitoring-Request.c \
        asn1/AlterEventConditionMonitoring-Response.c \
        asn1/AlterEventEnrollment-Request.c \
        asn1/AlterEventEnrollment-Response.c \
        asn1/AlternateAccess.c \
        asn1/AlternateAccessSelection.c \
        asn1/AlterProgramInvocationAttributes-Request.c \
        asn1/AlterProgramInvocationAttributes-Response.c \
        asn1/AP-invocation-identifier.c \
        asn1/AP-title.c \
        asn1/ApplicationReference.c \
        asn1/asn_codecs_prim.c \
        asn1/asn_SEQUENCE_OF.c \
        asn1/asn_SET_OF.c \
        asn1/AttachToEventCondition.c \
        asn1/AttachToSemaphore.c \
        asn1/Authentication-value.c \
        asn1/ber_decoder.c \
        asn1/ber_tlv_length.c \
        asn1/ber_tlv_tag.c \
        asn1/BIT_STRING.c \
        asn1/BOOLEAN.c \
        asn1/Cancel-ErrorPDU.c \
        asn1/Cancel-RequestPDU.c \
        asn1/Cancel-ResponsePDU.c \
        asn1/ChangeAccessControl-Error.c \
        asn1/ChangeAccessControl-Request.c \
        asn1/ChangeAccessControl-Response.c \
        asn1/Conclude-ErrorPDU.c \
        asn1/Conclude-RequestPDU.c \
        asn1/Conclude-ResponsePDU.c \
        asn1/Confirmed-ErrorPDU.c \
        asn1/Confirmed-RequestPDU.c \
        asn1/Confirmed-ResponsePDU.c \
        asn1/ConfirmedServiceRequest.c \
        asn1/ConfirmedServiceResponse.c \
        asn1/constr_CHOICE.c \
        asn1/constr_SEQUENCE.c \
        asn1/constr_SEQUENCE_OF.c \
        asn1/constr_SET_OF.c \
        asn1/constr_TYPE.c \
        asn1/constraints.c \
        asn1/Control-State.c \
        asn1/ControlElement.c \
        #asn1/converter-sample.c \
        asn1/CreateJournal-Request.c \
        asn1/CreateJournal-Response.c \
        asn1/CreateProgramInvocation-Request.c \
        asn1/CreateProgramInvocation-Response.c \
        asn1/CreateUnitControl-Request.c \
        asn1/CreateUnitControl-Response.c \
        asn1/CS-AlterEventConditionMonitoring-Request.c \
        asn1/CS-AlterEventEnrollment-Request.c \
        asn1/CS-CreateProgramInvocation-Request.c \
        asn1/CS-DefineEventCondition-Request.c \
        asn1/CS-DefineEventEnrollment-Request.c \
        asn1/CS-EventNotification.c \
        asn1/CS-GetEventConditionAttributes-Response.c \
        asn1/CS-GetProgramInvocationAttributes-Response.c \
        asn1/CS-Resume-Request.c \
        asn1/CS-Start-Request.c \
        asn1/CS-Status-Response.c \
        asn1/Data-Exchange-instance.c \
        asn1/Data.c \
        asn1/DataAccessError.c \
        asn1/DataParameters.c \
        asn1/DefineAccessControlList-Request.c \
        asn1/DefineAccessControlList-Response.c \
        asn1/DefineEventAction-Request.c \
        asn1/DefineEventAction-Response.c \
        asn1/DefineEventCondition-Request.c \
        asn1/DefineEventCondition-Response.c \
        asn1/DefineEventConditionList-Error.c \
        asn1/DefineEventConditionList-Request.c \
        asn1/DefineEventConditionList-Response.c \
        asn1/DefineEventEnrollment-Error.c \
        asn1/DefineEventEnrollment-Request.c \
        asn1/DefineEventEnrollment-Response.c \
        asn1/DefineNamedType-Request.c \
        asn1/DefineNamedType-Response.c \
        asn1/DefineNamedVariable-Request.c \
        asn1/DefineNamedVariable-Response.c \
        asn1/DefineNamedVariableList-Request.c \
        asn1/DefineNamedVariableList-Response.c \
        asn1/DefineScatteredAccess-Request.c \
        asn1/DefineScatteredAccess-Response.c \
        asn1/DefineSemaphore-Request.c \
        asn1/DefineSemaphore-Response.c \
        asn1/DeleteAccessControlList-Request.c \
        asn1/DeleteAccessControlList-Response.c \
        asn1/DeleteDomain-Request.c \
        asn1/DeleteDomain-Response.c \
        asn1/DeleteEventAction-Request.c \
        asn1/DeleteEventAction-Response.c \
        asn1/DeleteEventCondition-Request.c \
        asn1/DeleteEventCondition-Response.c \
        asn1/DeleteEventConditionList-Request.c \
        asn1/DeleteEventConditionList-Response.c \
        asn1/DeleteEventEnrollment-Request.c \
        asn1/DeleteEventEnrollment-Response.c \
        asn1/DeleteJournal-Request.c \
        asn1/DeleteJournal-Response.c \
        asn1/DeleteNamedType-Error.c \
        asn1/DeleteNamedType-Request.c \
        asn1/DeleteNamedType-Response.c \
        asn1/DeleteNamedVariableList-Error.c \
        asn1/DeleteNamedVariableList-Request.c \
        asn1/DeleteNamedVariableList-Response.c \
        asn1/DeleteProgramInvocation-Request.c \
        asn1/DeleteProgramInvocation-Response.c \
        asn1/DeleteSemaphore-Request.c \
        asn1/DeleteSemaphore-Response.c \
        asn1/DeleteUnitControl-Error.c \
        asn1/DeleteUnitControl-Request.c \
        asn1/DeleteUnitControl-Response.c \
        asn1/DeleteVariableAccess-Error.c \
        asn1/DeleteVariableAccess-Request.c \
        asn1/DeleteVariableAccess-Response.c \
        asn1/der_encoder.c \
        asn1/DirectoryEntry.c \
        asn1/Domain-instance.c \
        asn1/DomainManagementParameters.c \
        asn1/DomainState.c \
        asn1/DownloadSegment-Request.c \
        asn1/DownloadSegment-Response.c \
        asn1/EC-Class.c \
        asn1/EC-State.c \
        asn1/EE-Class.c \
        asn1/EE-Duration.c \
        asn1/EE-State.c \
        asn1/EEAttributes.c \
        asn1/EN-Additional-Detail.c \
        asn1/EntryContent.c \
        asn1/ErrorParameters.c \
        asn1/ErrorReason.c \
        asn1/Event-Action-instance.c \
        asn1/Event-Condition-instance.c \
        asn1/Event-Condition-List-instance.c \
        asn1/Event-Enrollment-instance.c \
        asn1/EventConditionStatus.c \
        asn1/EventNotification.c \
        asn1/EventTime.c \
        asn1/ExchangeData-Request.c \
        asn1/ExchangeData-Response.c \
        asn1/ExtendedStatus.c \
        asn1/FileAttributes.c \
        asn1/FileClose-Request.c \
        asn1/FileClose-Response.c \
        asn1/FileDelete-Request.c \
        asn1/FileDelete-Response.c \
        asn1/FileDirectory-Request.c \
        asn1/FileDirectory-Response.c \
        asn1/FileManagementParameters.c \
        asn1/FileName.c \
        asn1/FileOpen-Request.c \
        asn1/FileOpen-Response.c \
        asn1/FileRead-Request.c \
        asn1/FileRead-Response.c \
        asn1/FileRename-Error.c \
        asn1/FileRename-Request.c \
        asn1/FileRename-Response.c \
        asn1/FloatingPoint.c \
        asn1/GeneralizedTime.c \
        asn1/GeneralManagementParameters.c \
        asn1/GetAccessControlListAttributes-Request.c \
        asn1/GetAccessControlListAttributes-Response.c \
        asn1/GetAlarmEnrollmentSummary-Request.c \
        asn1/GetAlarmEnrollmentSummary-Response.c \
        asn1/GetAlarmSummary-Request.c \
        asn1/GetAlarmSummary-Response.c \
        asn1/GetCapabilityList-Request.c \
        asn1/GetCapabilityList-Response.c \
        asn1/GetDataExchangeAttributes-Request.c \
        asn1/GetDataExchangeAttributes-Response.c \
        asn1/GetDomainAttributes-Request.c \
        asn1/GetDomainAttributes-Response.c \
        asn1/GetElementRequestPdu.c \
        asn1/GetEventActionAttributes-Request.c \
        asn1/GetEventActionAttributes-Response.c \
        asn1/GetEventConditionAttributes-Request.c \
        asn1/GetEventConditionAttributes-Response.c \
        asn1/GetEventConditionListAttributes-Request.c \
        asn1/GetEventConditionListAttributes-Response.c \
        asn1/GetEventEnrollmentAttributes-Request.c \
        asn1/GetEventEnrollmentAttributes-Response.c \
        asn1/GetNamedTypeAttributes-Request.c \
        asn1/GetNamedTypeAttributes-Response.c \
        asn1/GetNamedVariableListAttributes-Request.c \
        asn1/GetNamedVariableListAttributes-Response.c \
        asn1/GetNameList-Request.c \
        asn1/GetNameList-Response.c \
        asn1/GetProgramInvocationAttributes-Request.c \
        asn1/GetProgramInvocationAttributes-Response.c \
        asn1/GetReferenceRequestPdu.c \
        asn1/GetScatteredAccessAttributes-Request.c \
        asn1/GetScatteredAccessAttributes-Response.c \
        asn1/GetUnitControlAttributes-Request.c \
        asn1/GetUnitControlAttributes-Response.c \
        asn1/GetVariableAccessAttributes-Request.c \
        asn1/GetVariableAccessAttributes-Response.c \
        asn1/GlbErrors.c \
        asn1/GraphicString.c \
        asn1/GSEMngtPdu.c \
        asn1/GSEMngtRequests.c \
        asn1/GSEMngtResponsePdu.c \
        asn1/GSEMngtResponses.c \
        asn1/IA5String.c \
        asn1/Identifier.c \
        asn1/Identify-Request.c \
        asn1/Identify-Response.c \
        asn1/IEC61850-8-1SpecificProtocol.c \
        asn1/IECGoosePdu.c \
        asn1/InformationReport.c \
        asn1/InitializeJournal-Request.c \
        asn1/InitializeJournal-Response.c \
        asn1/Initiate-ErrorPDU.c \
        asn1/Initiate-RequestPDU.c \
        asn1/Initiate-ResponsePDU.c \
        asn1/InitiateDownloadSequence-Request.c \
        asn1/InitiateDownloadSequence-Response.c \
        asn1/InitiateUnitControl-Error.c \
        asn1/InitiateUnitControlLoad-Request.c \
        asn1/InitiateUnitControlLoad-Response.c \
        asn1/InitiateUploadSequence-Request.c \
        asn1/InitiateUploadSequence-Response.c \
        asn1/Input-Request.c \
        asn1/Input-Response.c \
        asn1/INTEGER.c \
        asn1/Integer16.c \
        asn1/Integer32.c \
        asn1/Integer8.c \
        asn1/Journal-Entry-instance.c \
        asn1/Journal-instance.c \
        asn1/Journal-Variable.c \
        asn1/JournalEntry.c \
        asn1/Kill-Request.c \
        asn1/Kill-Response.c \
        asn1/LoadData.c \
        asn1/LoadDomainContent-Request.c \
        asn1/LoadDomainContent-Response.c \
        asn1/LoadUnitControlFromFile-Error.c \
        asn1/LoadUnitControlFromFile-Request.c \
        asn1/LoadUnitControlFromFile-Response.c \
        asn1/LogicalStatus.c \
        asn1/MMS255String.c \
        asn1/MMSpdu.c \
        asn1/MMSString.c \
        asn1/Modifier.c \
        asn1/ModifierStep.c \
        asn1/Named-Type-instance.c \
        asn1/Named-Variable-instance.c \
        asn1/Named-Variable-List-instance.c \
        asn1/NativeEnumerated.c \
        asn1/NativeInteger.c \
        asn1/NULL.c \
        asn1/OBJECT_IDENTIFIER.c \
        asn1/ObjectClass.c \
        asn1/ObjectName.c \
        asn1/ObtainFile-Error.c \
        asn1/ObtainFile-Request.c \
        asn1/ObtainFile-Response.c \
        asn1/OCTET_STRING.c \
        asn1/OperationState.c \
        asn1/Operator-Station-instance.c \
        asn1/OperatorCommunicationParameters.c \
        asn1/Output-Request.c \
        asn1/Output-Response.c \
        asn1/ParameterSupportOptions.c \
        asn1/per_decoder.c \
        asn1/per_encoder.c \
        asn1/per_opentype.c \
        asn1/per_support.c \
        asn1/PhysicalStatus.c \
        asn1/Priority.c \
        asn1/Program-Invocation-instance.c \
        asn1/ProgramInvocationManagementParameters.c \
        asn1/ProgramInvocationState.c \
        asn1/Read-Request.c \
        asn1/Read-Response.c \
        asn1/ReadJournal-Request.c \
        asn1/ReadJournal-Response.c \
        asn1/ReconfigureProgramInvocation-Request.c \
        asn1/ReconfigureProgramInvocation-Response.c \
        asn1/RejectPDU.c \
        asn1/RelinquishControl-Request.c \
        asn1/RelinquishControl-Response.c \
        asn1/RemoveEventConditionListReference-Error.c \
        asn1/RemoveEventConditionListReference-Request.c \
        asn1/RemoveEventConditionListReference-Response.c \
        asn1/RemoveFromUnitControl-Request.c \
        asn1/RemoveFromUnitControl-Response.c \
        asn1/Rename-Request.c \
        asn1/Rename-Response.c \
        asn1/ReportAccessControlledObjects-Request.c \
        asn1/ReportAccessControlledObjects-Response.c \
        asn1/ReportEventActionStatus-Request.c \
        asn1/ReportEventActionStatus-Response.c \
        asn1/ReportEventConditionListStatus-Request.c \
        asn1/ReportEventConditionListStatus-Response.c \
        asn1/ReportEventConditionStatus-Request.c \
        asn1/ReportEventConditionStatus-Response.c \
        asn1/ReportEventEnrollmentStatus-Request.c \
        asn1/ReportEventEnrollmentStatus-Response.c \
        asn1/ReportJournalStatus-Request.c \
        asn1/ReportJournalStatus-Response.c \
        asn1/ReportPoolSemaphoreStatus-Request.c \
        asn1/ReportPoolSemaphoreStatus-Response.c \
        asn1/ReportSemaphoreEntryStatus-Request.c \
        asn1/ReportSemaphoreEntryStatus-Response.c \
        asn1/ReportSemaphoreStatus-Request.c \
        asn1/ReportSemaphoreStatus-Response.c \
        asn1/Request-Detail.c \
        asn1/RequestDomainDownload-Request.c \
        asn1/RequestDomainDownload-Response.c \
        asn1/RequestDomainUpload-Request.c \
        asn1/RequestDomainUpload-Response.c \
        asn1/RequestResults.c \
        asn1/Reset-Error.c \
        asn1/Reset-Request.c \
        asn1/Reset-Response.c \
        asn1/Response-Detail.c \
        asn1/Resume-Error.c \
        asn1/Resume-Request.c \
        asn1/Resume-Response.c \
        asn1/Running-Mode.c \
        asn1/ScatteredAccessDescription.c \
        asn1/SCI-Information.c \
        asn1/Select-Request.c \
        asn1/Select-Response.c \
        asn1/Semaphore-instance.c \
        asn1/SemaphoreEntry.c \
        asn1/SemaphoreManagementParameters.c \
        asn1/Service-and-Parameter-CBBs.c \
        asn1/ServiceError.c \
        asn1/ServiceSupportOptions.c \
        asn1/Severity.c \
        asn1/Start-Error.c \
        asn1/Start-Request.c \
        asn1/Start-Response.c \
        asn1/StartCount.c \
        asn1/StartUnitControl-Error.c \
        asn1/StartUnitControl-Request.c \
        asn1/StartUnitControl-Response.c \
        asn1/Status-Request.c \
        asn1/Status-Response.c \
        asn1/StatusResponse.c \
        asn1/Stop-Error.c \
        asn1/Stop-Request.c \
        asn1/Stop-Response.c \
        asn1/StopUnitControl-Error.c \
        asn1/StopUnitControl-Request.c \
        asn1/StopUnitControl-Response.c \
        asn1/StoreDomainContent-Request.c \
        asn1/StoreDomainContent-Response.c \
        asn1/StoreUnitControlToFile-Request.c \
        asn1/StoreUnitControlToFile-Response.c \
        asn1/TakeControl-Request.c \
        asn1/TakeControl-Response.c \
        asn1/TerminateDownloadSequence-Request.c \
        asn1/TerminateDownloadSequence-Response.c \
        asn1/TerminateUploadSequence-Request.c \
        asn1/TerminateUploadSequence-Response.c \
        asn1/TimeOfDay.c \
        asn1/Transitions.c \
        asn1/TriggerEvent-Request.c \
        asn1/TriggerEvent-Response.c \
        asn1/TypeDescription.c \
        asn1/TypeSpecification.c \
        asn1/ULState.c \
        asn1/Unconfirmed-Detail.c \
        asn1/Unconfirmed-PDU.c \
        asn1/UnconfirmedService.c \
        asn1/Unit-Control-instance.c \
        asn1/UnitControlLoadSegment-Request.c \
        asn1/UnitControlLoadSegment-Response.c \
        asn1/UnitControlUpload-Request.c \
        asn1/UnitControlUpload-Response.c \
        asn1/Unnamed-Variable-instance.c \
        asn1/Unsigned16.c \
        asn1/Unsigned32.c \
        asn1/Unsigned8.c \
        asn1/UnsolicitedStatus.c \
        asn1/UploadSegment-Request.c \
        asn1/UploadSegment-Response.c \
        asn1/UtcTime.c \
        asn1/UTF8String.c \
        asn1/Variable-List-Item-instance.c \
        asn1/VariableAccessParameters.c \
        asn1/VariableAccessSpecification.c \
        asn1/VariableSpecification.c \
        asn1/VisibleString.c \
        asn1/VMD-File.c \
        asn1/VMDReset-Request.c \
        asn1/VMDReset-Response.c \
        asn1/VMDState.c \
        asn1/VMDStop-Request.c \
        asn1/VMDStop-Response.c \
        asn1/VMDSupportParameters.c \
        asn1/Write-Request.c \
        asn1/Write-Response.c \
        asn1/WriteJournal-Request.c \
        asn1/WriteJournal-Response.c \
        asn1/xer_decoder.c \
        asn1/xer_encoder.c \
        asn1/xer_support.c \
    GooseMessage.cpp

HEADERS += libasn1.h\
        libasn1_global.h \
        asn1/Access-Control-List-instance.h \
        asn1/AccessCondition.h \
        asn1/AccessResult.h \
        asn1/AcknowledgeEventNotification-Request.h \
        asn1/AcknowledgeEventNotification-Response.h \
        asn1/AddEventConditionListReference-Error.h \
        asn1/AddEventConditionListReference-Request.h \
        asn1/AddEventConditionListReference-Response.h \
        asn1/AdditionalCBBOptions.h \
        asn1/AdditionalService-Error.h \
        asn1/AdditionalService-Request.h \
        asn1/AdditionalService-Response.h \
        asn1/AdditionalSupportOptions.h \
        asn1/Address.h \
        asn1/AddToUnitControl-Request.h \
        asn1/AddToUnitControl-Response.h \
        asn1/AE-invocation-identifier.h \
        asn1/AE-qualifier.h \
        asn1/AlarmAckRule.h \
        asn1/AlarmEnrollmentSummary.h \
        asn1/AlarmSummary.h \
        asn1/AlterEventConditionListMonitoring-Request.h \
        asn1/AlterEventConditionListMonitoring-Response.h \
        asn1/AlterEventConditionMonitoring-Request.h \
        asn1/AlterEventConditionMonitoring-Response.h \
        asn1/AlterEventEnrollment-Request.h \
        asn1/AlterEventEnrollment-Response.h \
        asn1/AlternateAccess.h \
        asn1/AlternateAccessSelection.h \
        asn1/AlterProgramInvocationAttributes-Request.h \
        asn1/AlterProgramInvocationAttributes-Response.h \
        asn1/AP-invocation-identifier.h \
        asn1/AP-title.h \
        asn1/ApplicationReference.h \
        asn1/asn_application.h \
        asn1/asn_codecs.h \
        asn1/asn_codecs_prim.h \
        asn1/asn_internal.h \
        asn1/asn_SEQUENCE_OF.h \
        asn1/asn_SET_OF.h \
        asn1/asn_system.h \
        asn1/AttachToEventCondition.h \
        asn1/AttachToSemaphore.h \
        asn1/Authentication-value.h \
        asn1/ber_decoder.h \
        asn1/ber_tlv_length.h \
        asn1/ber_tlv_tag.h \
        asn1/BIT_STRING.h \
        asn1/BOOLEAN.h \
        asn1/Cancel-ErrorPDU.h \
        asn1/Cancel-RequestPDU.h \
        asn1/Cancel-ResponsePDU.h \
        asn1/ChangeAccessControl-Error.h \
        asn1/ChangeAccessControl-Request.h \
        asn1/ChangeAccessControl-Response.h \
        asn1/Conclude-ErrorPDU.h \
        asn1/Conclude-RequestPDU.h \
        asn1/Conclude-ResponsePDU.h \
        asn1/Confirmed-ErrorPDU.h \
        asn1/Confirmed-RequestPDU.h \
        asn1/Confirmed-ResponsePDU.h \
        asn1/ConfirmedServiceRequest.h \
        asn1/ConfirmedServiceResponse.h \
        asn1/constr_CHOICE.h \
        asn1/constr_SEQUENCE.h \
        asn1/constr_SEQUENCE_OF.h \
        asn1/constr_SET_OF.h \
        asn1/constr_TYPE.h \
        asn1/constraints.h \
        asn1/Control-State.h \
        asn1/ControlElement.h \
        asn1/CreateJournal-Request.h \
        asn1/CreateJournal-Response.h \
        asn1/CreateProgramInvocation-Request.h \
        asn1/CreateProgramInvocation-Response.h \
        asn1/CreateUnitControl-Request.h \
        asn1/CreateUnitControl-Response.h \
        asn1/CS-AlterEventConditionMonitoring-Request.h \
        asn1/CS-AlterEventEnrollment-Request.h \
        asn1/CS-CreateProgramInvocation-Request.h \
        asn1/CS-DefineEventCondition-Request.h \
        asn1/CS-DefineEventEnrollment-Request.h \
        asn1/CS-EventNotification.h \
        asn1/CS-GetEventConditionAttributes-Response.h \
        asn1/CS-GetProgramInvocationAttributes-Response.h \
        asn1/CS-Resume-Request.h \
        asn1/CS-Start-Request.h \
        asn1/CS-Status-Response.h \
        asn1/Data-Exchange-instance.h \
        asn1/Data.h \
        asn1/DataAccessError.h \
        asn1/DataParameters.h \
        asn1/DefineAccessControlList-Request.h \
        asn1/DefineAccessControlList-Response.h \
        asn1/DefineEventAction-Request.h \
        asn1/DefineEventAction-Response.h \
        asn1/DefineEventCondition-Request.h \
        asn1/DefineEventCondition-Response.h \
        asn1/DefineEventConditionList-Error.h \
        asn1/DefineEventConditionList-Request.h \
        asn1/DefineEventConditionList-Response.h \
        asn1/DefineEventEnrollment-Error.h \
        asn1/DefineEventEnrollment-Request.h \
        asn1/DefineEventEnrollment-Response.h \
        asn1/DefineNamedType-Request.h \
        asn1/DefineNamedType-Response.h \
        asn1/DefineNamedVariable-Request.h \
        asn1/DefineNamedVariable-Response.h \
        asn1/DefineNamedVariableList-Request.h \
        asn1/DefineNamedVariableList-Response.h \
        asn1/DefineScatteredAccess-Request.h \
        asn1/DefineScatteredAccess-Response.h \
        asn1/DefineSemaphore-Request.h \
        asn1/DefineSemaphore-Response.h \
        asn1/DeleteAccessControlList-Request.h \
        asn1/DeleteAccessControlList-Response.h \
        asn1/DeleteDomain-Request.h \
        asn1/DeleteDomain-Response.h \
        asn1/DeleteEventAction-Request.h \
        asn1/DeleteEventAction-Response.h \
        asn1/DeleteEventCondition-Request.h \
        asn1/DeleteEventCondition-Response.h \
        asn1/DeleteEventConditionList-Request.h \
        asn1/DeleteEventConditionList-Response.h \
        asn1/DeleteEventEnrollment-Request.h \
        asn1/DeleteEventEnrollment-Response.h \
        asn1/DeleteJournal-Request.h \
        asn1/DeleteJournal-Response.h \
        asn1/DeleteNamedType-Error.h \
        asn1/DeleteNamedType-Request.h \
        asn1/DeleteNamedType-Response.h \
        asn1/DeleteNamedVariableList-Error.h \
        asn1/DeleteNamedVariableList-Request.h \
        asn1/DeleteNamedVariableList-Response.h \
        asn1/DeleteProgramInvocation-Request.h \
        asn1/DeleteProgramInvocation-Response.h \
        asn1/DeleteSemaphore-Request.h \
        asn1/DeleteSemaphore-Response.h \
        asn1/DeleteUnitControl-Error.h \
        asn1/DeleteUnitControl-Request.h \
        asn1/DeleteUnitControl-Response.h \
        asn1/DeleteVariableAccess-Error.h \
        asn1/DeleteVariableAccess-Request.h \
        asn1/DeleteVariableAccess-Response.h \
        asn1/der_encoder.h \
        asn1/DirectoryEntry.h \
        asn1/Domain-instance.h \
        asn1/DomainManagementParameters.h \
        asn1/DomainState.h \
        asn1/DownloadSegment-Request.h \
        asn1/DownloadSegment-Response.h \
        asn1/EC-Class.h \
        asn1/EC-State.h \
        asn1/EE-Class.h \
        asn1/EE-Duration.h \
        asn1/EE-State.h \
        asn1/EEAttributes.h \
        asn1/EN-Additional-Detail.h \
        asn1/EntryContent.h \
        asn1/ErrorParameters.h \
        asn1/ErrorReason.h \
        asn1/Event-Action-instance.h \
        asn1/Event-Condition-instance.h \
        asn1/Event-Condition-List-instance.h \
        asn1/Event-Enrollment-instance.h \
        asn1/EventConditionStatus.h \
        asn1/EventNotification.h \
        asn1/EventTime.h \
        asn1/ExchangeData-Request.h \
        asn1/ExchangeData-Response.h \
        asn1/ExtendedStatus.h \
        asn1/FileAttributes.h \
        asn1/FileClose-Request.h \
        asn1/FileClose-Response.h \
        asn1/FileDelete-Request.h \
        asn1/FileDelete-Response.h \
        asn1/FileDirectory-Request.h \
        asn1/FileDirectory-Response.h \
        asn1/FileManagementParameters.h \
        asn1/FileName.h \
        asn1/FileOpen-Request.h \
        asn1/FileOpen-Response.h \
        asn1/FileRead-Request.h \
        asn1/FileRead-Response.h \
        asn1/FileRename-Error.h \
        asn1/FileRename-Request.h \
        asn1/FileRename-Response.h \
        asn1/FloatingPoint.h \
        asn1/GeneralizedTime.h \
        asn1/GeneralManagementParameters.h \
        asn1/GetAccessControlListAttributes-Request.h \
        asn1/GetAccessControlListAttributes-Response.h \
        asn1/GetAlarmEnrollmentSummary-Request.h \
        asn1/GetAlarmEnrollmentSummary-Response.h \
        asn1/GetAlarmSummary-Request.h \
        asn1/GetAlarmSummary-Response.h \
        asn1/GetCapabilityList-Request.h \
        asn1/GetCapabilityList-Response.h \
        asn1/GetDataExchangeAttributes-Request.h \
        asn1/GetDataExchangeAttributes-Response.h \
        asn1/GetDomainAttributes-Request.h \
        asn1/GetDomainAttributes-Response.h \
        asn1/GetElementRequestPdu.h \
        asn1/GetEventActionAttributes-Request.h \
        asn1/GetEventActionAttributes-Response.h \
        asn1/GetEventConditionAttributes-Request.h \
        asn1/GetEventConditionAttributes-Response.h \
        asn1/GetEventConditionListAttributes-Request.h \
        asn1/GetEventConditionListAttributes-Response.h \
        asn1/GetEventEnrollmentAttributes-Request.h \
        asn1/GetEventEnrollmentAttributes-Response.h \
        asn1/GetNamedTypeAttributes-Request.h \
        asn1/GetNamedTypeAttributes-Response.h \
        asn1/GetNamedVariableListAttributes-Request.h \
        asn1/GetNamedVariableListAttributes-Response.h \
        asn1/GetNameList-Request.h \
        asn1/GetNameList-Response.h \
        asn1/GetProgramInvocationAttributes-Request.h \
        asn1/GetProgramInvocationAttributes-Response.h \
        asn1/GetReferenceRequestPdu.h \
        asn1/GetScatteredAccessAttributes-Request.h \
        asn1/GetScatteredAccessAttributes-Response.h \
        asn1/GetUnitControlAttributes-Request.h \
        asn1/GetUnitControlAttributes-Response.h \
        asn1/GetVariableAccessAttributes-Request.h \
        asn1/GetVariableAccessAttributes-Response.h \
        asn1/GlbErrors.h \
        asn1/GraphicString.h \
        asn1/GSEMngtPdu.h \
        asn1/GSEMngtRequests.h \
        asn1/GSEMngtResponsePdu.h \
        asn1/GSEMngtResponses.h \
        asn1/IA5String.h \
        asn1/Identifier.h \
        asn1/Identify-Request.h \
        asn1/Identify-Response.h \
        asn1/IEC61850-8-1SpecificProtocol.h \
        asn1/IECGoosePdu.h \
        asn1/InformationReport.h \
        asn1/InitializeJournal-Request.h \
        asn1/InitializeJournal-Response.h \
        asn1/Initiate-ErrorPDU.h \
        asn1/Initiate-RequestPDU.h \
        asn1/Initiate-ResponsePDU.h \
        asn1/InitiateDownloadSequence-Request.h \
        asn1/InitiateDownloadSequence-Response.h \
        asn1/InitiateUnitControl-Error.h \
        asn1/InitiateUnitControlLoad-Request.h \
        asn1/InitiateUnitControlLoad-Response.h \
        asn1/InitiateUploadSequence-Request.h \
        asn1/InitiateUploadSequence-Response.h \
        asn1/Input-Request.h \
        asn1/Input-Response.h \
        asn1/INTEGER.h \
        asn1/Integer16.h \
        asn1/Integer32.h \
        asn1/Integer8.h \
        asn1/Journal-Entry-instance.h \
        asn1/Journal-instance.h \
        asn1/Journal-Variable.h \
        asn1/JournalEntry.h \
        asn1/Kill-Request.h \
        asn1/Kill-Response.h \
        asn1/LoadData.h \
        asn1/LoadDomainContent-Request.h \
        asn1/LoadDomainContent-Response.h \
        asn1/LoadUnitControlFromFile-Error.h \
        asn1/LoadUnitControlFromFile-Request.h \
        asn1/LoadUnitControlFromFile-Response.h \
        asn1/LogicalStatus.h \
        asn1/MMS255String.h \
        asn1/MMSpdu.h \
        asn1/MMSString.h \
        asn1/Modifier.h \
        asn1/ModifierStep.h \
        asn1/Named-Type-instance.h \
        asn1/Named-Variable-instance.h \
        asn1/Named-Variable-List-instance.h \
        asn1/NativeEnumerated.h \
        asn1/NativeInteger.h \
        asn1/NULL.h \
        asn1/OBJECT_IDENTIFIER.h \
        asn1/ObjectClass.h \
        asn1/ObjectName.h \
        asn1/ObtainFile-Error.h \
        asn1/ObtainFile-Request.h \
        asn1/ObtainFile-Response.h \
        asn1/OCTET_STRING.h \
        asn1/OperationState.h \
        asn1/Operator-Station-instance.h \
        asn1/OperatorCommunicationParameters.h \
        asn1/Output-Request.h \
        asn1/Output-Response.h \
        asn1/ParameterSupportOptions.h \
        asn1/per_decoder.h \
        asn1/per_encoder.h \
        asn1/per_opentype.h \
        asn1/per_support.h \
        asn1/PhysicalStatus.h \
        asn1/Priority.h \
        asn1/Program-Invocation-instance.h \
        asn1/ProgramInvocationManagementParameters.h \
        asn1/ProgramInvocationState.h \
        asn1/Read-Request.h \
        asn1/Read-Response.h \
        asn1/ReadJournal-Request.h \
        asn1/ReadJournal-Response.h \
        asn1/ReconfigureProgramInvocation-Request.h \
        asn1/ReconfigureProgramInvocation-Response.h \
        asn1/RejectPDU.h \
        asn1/RelinquishControl-Request.h \
        asn1/RelinquishControl-Response.h \
        asn1/RemoveEventConditionListReference-Error.h \
        asn1/RemoveEventConditionListReference-Request.h \
        asn1/RemoveEventConditionListReference-Response.h \
        asn1/RemoveFromUnitControl-Request.h \
        asn1/RemoveFromUnitControl-Response.h \
        asn1/Rename-Request.h \
        asn1/Rename-Response.h \
        asn1/ReportAccessControlledObjects-Request.h \
        asn1/ReportAccessControlledObjects-Response.h \
        asn1/ReportEventActionStatus-Request.h \
        asn1/ReportEventActionStatus-Response.h \
        asn1/ReportEventConditionListStatus-Request.h \
        asn1/ReportEventConditionListStatus-Response.h \
        asn1/ReportEventConditionStatus-Request.h \
        asn1/ReportEventConditionStatus-Response.h \
        asn1/ReportEventEnrollmentStatus-Request.h \
        asn1/ReportEventEnrollmentStatus-Response.h \
        asn1/ReportJournalStatus-Request.h \
        asn1/ReportJournalStatus-Response.h \
        asn1/ReportPoolSemaphoreStatus-Request.h \
        asn1/ReportPoolSemaphoreStatus-Response.h \
        asn1/ReportSemaphoreEntryStatus-Request.h \
        asn1/ReportSemaphoreEntryStatus-Response.h \
        asn1/ReportSemaphoreStatus-Request.h \
        asn1/ReportSemaphoreStatus-Response.h \
        asn1/Request-Detail.h \
        asn1/RequestDomainDownload-Request.h \
        asn1/RequestDomainDownload-Response.h \
        asn1/RequestDomainUpload-Request.h \
        asn1/RequestDomainUpload-Response.h \
        asn1/RequestResults.h \
        asn1/Reset-Error.h \
        asn1/Reset-Request.h \
        asn1/Reset-Response.h \
        asn1/Response-Detail.h \
        asn1/Resume-Error.h \
        asn1/Resume-Request.h \
        asn1/Resume-Response.h \
        asn1/Running-Mode.h \
        asn1/ScatteredAccessDescription.h \
        asn1/SCI-Information.h \
        asn1/Select-Request.h \
        asn1/Select-Response.h \
        asn1/Semaphore-instance.h \
        asn1/SemaphoreEntry.h \
        asn1/SemaphoreManagementParameters.h \
        asn1/Service-and-Parameter-CBBs.h \
        asn1/ServiceError.h \
        asn1/ServiceSupportOptions.h \
        asn1/Severity.h \
        asn1/Start-Error.h \
        asn1/Start-Request.h \
        asn1/Start-Response.h \
        asn1/StartCount.h \
        asn1/StartUnitControl-Error.h \
        asn1/StartUnitControl-Request.h \
        asn1/StartUnitControl-Response.h \
        asn1/Status-Request.h \
        asn1/Status-Response.h \
        asn1/StatusResponse.h \
        asn1/Stop-Error.h \
        asn1/Stop-Request.h \
        asn1/Stop-Response.h \
        asn1/StopUnitControl-Error.h \
        asn1/StopUnitControl-Request.h \
        asn1/StopUnitControl-Response.h \
        asn1/StoreDomainContent-Request.h \
        asn1/StoreDomainContent-Response.h \
        asn1/StoreUnitControlToFile-Request.h \
        asn1/StoreUnitControlToFile-Response.h \
        asn1/TakeControl-Request.h \
        asn1/TakeControl-Response.h \
        asn1/TerminateDownloadSequence-Request.h \
        asn1/TerminateDownloadSequence-Response.h \
        asn1/TerminateUploadSequence-Request.h \
        asn1/TerminateUploadSequence-Response.h \
        asn1/TimeOfDay.h \
        asn1/Transitions.h \
        asn1/TriggerEvent-Request.h \
        asn1/TriggerEvent-Response.h \
        asn1/TypeDescription.h \
        asn1/TypeSpecification.h \
        asn1/ULState.h \
        asn1/Unconfirmed-Detail.h \
        asn1/Unconfirmed-PDU.h \
        asn1/UnconfirmedService.h \
        asn1/Unit-Control-instance.h \
        asn1/UnitControlLoadSegment-Request.h \
        asn1/UnitControlLoadSegment-Response.h \
        asn1/UnitControlUpload-Request.h \
        asn1/UnitControlUpload-Response.h \
        asn1/Unnamed-Variable-instance.h \
        asn1/Unsigned16.h \
        asn1/Unsigned32.h \
        asn1/Unsigned8.h \
        asn1/UnsolicitedStatus.h \
        asn1/UploadSegment-Request.h \
        asn1/UploadSegment-Response.h \
        asn1/UtcTime.h \
        asn1/UTF8String.h \
        asn1/Variable-List-Item-instance.h \
        asn1/VariableAccessParameters.h \
        asn1/VariableAccessSpecification.h \
        asn1/VariableSpecification.h \
        asn1/VisibleString.h \
        asn1/VMD-File.h \
        asn1/VMDReset-Request.h \
        asn1/VMDReset-Response.h \
        asn1/VMDState.h \
        asn1/VMDStop-Request.h \
        asn1/VMDStop-Response.h \
        asn1/VMDSupportParameters.h \
        asn1/Write-Request.h \
        asn1/Write-Response.h \
        asn1/WriteJournal-Request.h \
        asn1/WriteJournal-Response.h \
        asn1/xer_decoder.h \
        asn1/xer_encoder.h \
        asn1/xer_support.h \
    GooseMessage.h

OTHER_FILES += IEC61850.asn1

unix {
    target.path = /usr/lib
    INSTALLS += target
}
