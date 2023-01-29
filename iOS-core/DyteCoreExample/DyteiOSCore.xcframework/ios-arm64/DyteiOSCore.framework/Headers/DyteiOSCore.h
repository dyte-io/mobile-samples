#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class DOSCDyteMeetingInfo, DOSCDyteChat, DOSCDyteSelfParticipant, DOSCDyteMeta, DOSCDyteRoomParticipants, DOSCDytePlugins, DOSCDytePoll, DOSCDyteRecording, DOSCDyteWebinar, DOSCDyteMobileClient, DOSCUtils, DOSCKotlinEnumCompanion, DOSCKotlinEnum<E>, DOSCAudioDeviceTypeCompanion, DOSCAudioDeviceType, DOSCKotlinArray<T>, DOSCKotlinException, DOSCDyteActionResult, DOSCDyteActionResultActionNotPermitted, DOSCDyteActionResultSuccess, DOSCDyteAudioDeviceCompanion, DOSCDyteAudioDevice, DOSCDyteChatMessage, DOSCDyteMessageType, DOSCDyteMeetingInfoCompanion, DOSCParticipantFlags, DOSCDyteMeetingParticipant, WKWebView, DOSCKotlinNothing, DOSCPluginConfigResponse, DOSCDytePlugin, DOSCDytePollMessage, DOSCDytePollOption, DOSCDytePollVote, DOSCDyteRecordingState, DOSCGridInfo, DOSCDyteVideoDevice, DOSCParticipantPermissions, DOSCWaitListStatus, DOSCVideoDeviceType, DOSCDyteVideoDeviceCompanion, DOSCMeetingRoomState, DOSCProduceData, DOSCVideoDeviceTypeCompanion, DOSCLogStatus, DOSCLogSeverity, DOSCDyteLogCompanion, DOSCDyteLog, DOSCMeetingMetaDataCompanion, DOSCMeetingMetaData, DOSCPostDyteLogsCompanion, DOSCPostDyteLogs, DOSCControllerOptions, DOSCDyteEventType, DOSCDyteEventTypeOnAudioDevicesChanged, DOSCDyteEventTypeOnCameraClosed, DOSCDyteEventTypeOnCameraDisconnected, DOSCDyteEventTypeOnFirstFrameAvailable, DOSCDyteEventTypeOnHostKicked, DOSCDyteEventTypeOnMeetingRecordingStarted, DOSCDyteEventTypeOnMeetingRecordingStopped, DOSCDyteEventTypeOnMeetingRoomDisconnected, DOSCDyteEventTypeOnMeetingRoomInitCompleted, DOSCDyteEventTypeOnMeetingRoomInitStarted, DOSCDyteEventTypeOnMeetingRoomJoinStarted, DOSCDyteEventTypeOnMeetingRoomJoinedWithoutCameraPermission, DOSCDyteEventTypeOnMeetingRoomJoinedWithoutMicPermission, DOSCDyteEventTypeOnMeetingRoomLeave, DOSCDyteEventTypeOnMeetingRoomLeaveStarted, DOSCDyteEventTypeOnNoActiveSpeaker, DOSCDyteEventTypeOnPeerScreenShareUpdate, DOSCDyteEventTypeOnPeerUnpinned, DOSCPermission, DOSCKotlinx_serialization_jsonJsonElement, DOSCDyteEventTypeOnSelfAudioUpdate, DOSCDyteEventTypeOnSelfVideoUpdate, DOSCDyteEventTypeOnWebinarPresentRequest, DOSCDyteEventTypeOnWebinarStoppedPresenting, DOSCWebSocketChatMessagesModel, DOSCWebSocketChatMessage, DOSCConsumerAppData, DOSCWebSocketConsumerModel, DOSCParticipantInfo, UIView, DOSCWebSocketJoinRoomModel, DOSCWebSocketRoomStateModel, DOSCWebSocketGetPageModel, DOSCWebSocketConsumerClosedModel, DOSCWebSocketConsumerResumedModel, DOSCWebSocketPeerMuteModel, DOSCWebSocketMeetingPeerUser, DOSCWebSocketPeerLeftModel, DOSCWebSocketPeerPinnedModel, DOSCWebSocketSelectedPeersModel, DOSCWebSocketWaitlistPeerAccepted, DOSCWebSocketWaitlistPeerAdded, DOSCWebSocketWaitlistPeerClosed, DOSCWebSocketWaitlistPeerRejected, DOSCPermissionType, DOSCWebSocketPluginDisabled, DOSCWebSocketPluginEnabled, DOSCWebSocketPluginEvent, DOSCWebSocketPoll, DOSCOutboundMeetingEventType, DOSCRequestToPresentParticipant, DOSCRequestToPresentParticipantCompanion, DOSCInboundMeetingEvent, DOSCSocketOptions, DOSCSocketEvent<T>, DOSCSocket, DOSCKotlinUnit, DOSCSocketEventCompanion, DOSCSocketEventConnect, DOSCSocketEventConnecting, DOSCSocketEventDisconnect, DOSCSocketEventError, DOSCSocketEventMessage, DOSCSocketEventPing, DOSCSocketEventPong, DOSCSocketEventReconnect, DOSCSocketEventReconnectAttempt, DOSCSocketOptionsTransport, DOSCInboundMeetingEventType, DOSCBasePayloadModel, DOSCOutboundMeetingEvents, DOSCResponseModelCompanion, DOSCResponseModel, DOSCConsumerAppDataCompanion, DOSCCodec, DOSCHeaderExtension, DOSCEncodings, DOSCRtcp, DOSCConsumerRtpParametersCompanion, DOSCConsumerRtpParameters, DOSCDeviceCompanion, DOSCDevice, DOSCRtx, DOSCEncodingsCompanion, DOSCMeetingPeerFlagsCompanion, DOSCMeetingPeerFlags, DOSCMeetingPeerMetadataCompanion, DOSCMeetingPeerMetadata, DOSCRtcpCompanion, DOSCRtxCompanion, DOSCWebSocketActiveSpeakerModelCompanion, DOSCWebSocketActiveSpeakerModel, DOSCWebSocketChatMessageCompanion, DOSCWebSocketChatMessagesModelCompanion, DOSCWebSocketConnectTransportModelCompanion, DOSCWebSocketConnectTransportModel, DOSCWebSocketConsumerClosedModelCompanion, DOSCWebSocketConsumerModelCompanion, DOSCWebSocketConsumerResumedModelCompanion, DOSCWebSocketEmptyModelCompanion, DOSCWebSocketEmptyModel, DOSCWebSocketGetPageModelCompanion, DOSCWebSocketMeetingPeerUserCompanion, DOSCWebSocketPeerLeftModelCompanion, DOSCWebSocketPeerMuteModelCompanion, DOSCWebSocketPeerPinnedModelCompanion, DOSCWebSocketPluginDisabledCompanion, DOSCWebSocketPluginEnabledCompanion, DOSCWebSocketPollOption, DOSCWebSocketPollCompanion, DOSCWebSocketPollModelCompanion, DOSCWebSocketPollModel, DOSCWebSocketPollVote, DOSCWebSocketPollOptionCompanion, DOSCWebSocketPollVoteCompanion, DOSCWebSocketPollsModelCompanion, DOSCWebSocketPollsModel, DOSCWebSocketProducerClosedModelCompanion, DOSCWebSocketProducerClosedModel, DOSCWebSocketProducerConnectModelCompanion, DOSCWebSocketProducerConnectModel, DOSCWebSocketSelectedPeersModelCompanion, DOSCWebSocketWaitlistPeerAcceptedCompanion, DOSCWebSocketWaitlistPeerAddedCompanion, DOSCWebSocketWaitlistPeerClosedCompanion, DOSCWebSocketWaitlistPeerRejectedCompanion, DOSCWebSocketWebinarPresentRequestAcceptedCompanion, DOSCWebSocketWebinarPresentRequestAccepted, DOSCWebSocketWebinarRequestToJoinPeerAddedCompanion, DOSCWebSocketWebinarRequestToJoinPeerAdded, DOSCWebSocketWebinarStagePeerCompanion, DOSCWebSocketWebinarStagePeer, DOSCCodecRtcpFeedback, DOSCCodecParameters, DOSCCodecCompanion, DOSCCodecParametersCompanion, DOSCCodecRtcpFeedbackCompanion, DOSCCreateWebRTCTransportPayloadRequestModelCompanion, DOSCCreateWebRTCTransportPayloadRequestModel, DOSCFingerprint, DOSCDtlsParametersCompanion, DOSCDtlsParameters, DOSCFingerprintCompanion, DOSCHeaderExtensionCompanion, DOSCIceCandidateCompanion, DOSCIceCandidate, DOSCIceParametersCompanion, DOSCIceParameters, DOSCRouterCapabilitiesModel, DOSCJoinRoomPayloadRequestModelCompanion, DOSCJoinRoomPayloadRequestModel, DOSCRoomStateConfig, DOSCRoomStatePlugin, DOSCRoomStateCompanion, DOSCRoomState, DOSCRoomStateAccessCompanion, DOSCRoomStateAccess, DOSCRoomStateConfigCompanion, DOSCRoomStatePluginCompanion, DOSCRouterCapabilitiesModelCompanion, DOSCWebRtcCreateTransportModelCompanion, DOSCWebRtcCreateTransportModel, DOSCWebSocketJoinRoomModelCompanion, DOSCWebSocketRoomStateModelCompanion, RTCMTLVideoView, RTCMediaStreamTrack, DOSCPluginAuthResponse, DOSCRecordingInfo, DOSCKtor_client_coreHttpClient, DOSCIceServersWrapper, DOSCPluginResponse, DOSCMultiplePluginResponse, DOSCMeetingSessionInfo, DOSCUserPresetDataWrapper, DOSCChatPrivatePermissionsCompanion, DOSCChatPrivatePermissions, DOSCChatPublicPermissionsCompanion, DOSCChatPublicPermissions, DOSCCreateMeetingRequestCompanion, DOSCCreateMeetingRequest, DOSCCreateMeetingResponseCompanion, DOSCCreateMeetingResponse, DOSCCreateMeetingResponseWrapperCompanion, DOSCCreateMeetingResponseWrapper, DOSCCreateParticipantRequestCompanion, DOSCCreateParticipantRequest, DOSCCreateParticipantResponseCompanion, DOSCCreateParticipantResponse, DOSCCreateParticipantResponseWrapperCompanion, DOSCCreateParticipantResponseWrapper, DOSCFeaturesOrganizationModelWrapper, DOSCFeaturesDataCompanion, DOSCFeaturesData, DOSCFeaturesOrganizationModelCompanion, DOSCFeaturesOrganizationModel, DOSCFeaturesOrganizationModelWrapperCompanion, DOSCGraphQlRequestVariables, DOSCGraphQlRequestCompanion, DOSCGraphQlRequest, DOSCGraphQlRequestVariablesCompanion, DOSCIceServerDataCompanion, DOSCIceServerData, DOSCIceServersWrapperCompanion, DOSCVideoConfig, DOSCMediaConfigCompanion, DOSCMediaConfig, DOSCMediaPresetCompanion, DOSCMediaPreset, DOSCMeetingSessionDataCompanion, DOSCMeetingSessionData, DOSCMeetingSessionDataWrapperV1, DOSCMeetingSessionDataResponseV1Companion, DOSCMeetingSessionDataResponseV1, DOSCMeetingSessionDataWrapperCompanion, DOSCMeetingSessionDataWrapper, DOSCMeetingSessionDataWrapperV1Companion, DOSCMultiplePluginResponsePlugins, DOSCMultiplePluginResponseCompanion, DOSCPluginDataResponse, DOSCMultiplePluginResponsePluginsCompanion, DOSCPublicChatPreset, DOSCPrivateChatPreset, DOSCParticipantChatPresetCompanion, DOSCParticipantChatPreset, DOSCParticipantDataCompanion, DOSCParticipantData, DOSCParticipantPreset, DOSCParticipantDataWrapperCompanion, DOSCParticipantDataWrapper, DOSCParticipantMediaPresetCompanion, DOSCParticipantMediaPreset, DOSCParticipantPluginPresetCompanion, DOSCParticipantPluginPreset, DOSCParticipantPollPresetCompanion, DOSCParticipantPollPreset, DOSCParticipantPresetPermission, DOSCParticipantPresetConfig, DOSCParticipantPresetCompanion, DOSCVideoStreamConfig, DOSCParticipantPresetConfigCompanion, DOSCParticipantPresetPermissionCompanion, DOSCPluginAuthDataResponseCompanion, DOSCPluginAuthDataResponse, DOSCPluginAuthResponseCompanion, DOSCPluginAuthorizationModelCompanion, DOSCPluginAuthorizationModel, DOSCPluginFiles, DOSCPluginView, DOSCPluginConfigResponseCompanion, DOSCPluginDataResponseCompanion, DOSCPluginFilesCompanion, DOSCPluginResponseCompanion, DOSCPluginViewCompanion, DOSCPresignedUrlDataCompanion, DOSCPresignedUrlData, DOSCPresignedUrlRequestCompanion, DOSCPresignedUrlRequest, DOSCPresignedUrlResponseCompanion, DOSCPresignedUrlResponse, DOSCPrivateChatPresetCompanion, DOSCPublicChatPresetCompanion, DOSCRecordingDataCompanion, DOSCRecordingData, DOSCRecordingDataWrapperCompanion, DOSCRecordingDataWrapper, DOSCRecordingResponseWrapperCompanion, DOSCRecordingResponseWrapper, DOSCRecordingResponseWrapperV2Companion, DOSCRecordingResponseWrapperV2, DOSCStartRecordingModelCompanion, DOSCStartRecordingModel, DOSCStopRecordingModelCompanion, DOSCStopRecordingModel, DOSCStopRecordingModelV2Companion, DOSCStopRecordingModelV2, DOSCUserDataWrapperCompanion, DOSCUserDataWrapper, DOSCUserDataWrapperV1Companion, DOSCUserDataWrapperV1, DOSCUserPresetAloneHereThemeCompanion, DOSCUserPresetAloneHereTheme, DOSCUserPresetChatPermissionPropsCompanion, DOSCUserPresetChatPermissionProps, DOSCUserPresetColorsThemeCompanion, DOSCUserPresetColorsTheme, DOSCUserPresetControlBarThemeElements, DOSCUserPresetControlBarThemeCompanion, DOSCUserPresetControlBarTheme, DOSCUserPresetControlBarThemeElementsCompanion, DOSCUserPresetModel, DOSCUserPresetDataCompanion, DOSCUserPresetData, DOSCUserPresetDataWrapperCompanion, DOSCUserPresetMultiTheme, DOSCUserPresetSingleTheme, DOSCUserPresetGridThemeCompanion, DOSCUserPresetGridTheme, DOSCUserPresetHeaderThemeElements, DOSCUserPresetHeaderThemeCompanion, DOSCUserPresetHeaderTheme, DOSCUserPresetHeaderThemeElementsCompanion, DOSCUserPresetPermissionsModel, DOSCUserPresetThemeModel, DOSCUserPresetModelCompanion, DOSCUserPresetMultiThemeCompanion, DOSCWaitingRoomType, DOSCUserPresetPluginPermissions, DOSCUserPresetPollsPermissions, DOSCUserPresetProducePermissions, DOSCUserPresetPermissionsModelCompanion, DOSCUserPresetPluginConfigCompanion, DOSCUserPresetPluginConfig, DOSCUserPresetPluginPermissionsCompanion, DOSCUserPresetPollsPermissionsCompanion, DOSCUserPresetVideoPermissions, DOSCUserPresetScreenSharePermissions, DOSCUserPresetProducePermissionsCompanion, DOSCUserPresetRequestModelCompanion, DOSCUserPresetRequestModel, DOSCUserPresetScreenSharePermissionsCompanion, DOSCUserPresetSetupScreenThemeCompanion, DOSCUserPresetSetupScreenTheme, DOSCUserPresetSingleThemeCompanion, DOSCUserPresetWaitingRoomTheme, DOSCUserPresetThemeModelCompanion, DOSCUserPresetVideoPermissionsCompanion, DOSCUserPresetWaitingRoomThemeCompanion, DOSCVideoConfigCompanion, DOSCVideoStreamConfigCompanion, DOSCWaitingRoomTypeCompanion, DOSCChatPermissionsCompanion, DOSCChatPermissions, DOSCGridInfo_, DOSCHostPermissionsCompanion, DOSCHostPermissions, DOSCVideoPermissions, DOSCMediaPermissionsCompanion, DOSCMediaPermissions, DOSCPresetInfo, DOSCParticipantInfoCompanion, DOSCPluginPermissions, DOSCPollPermissions, DOSCParticipantPermissionsCompanion, DOSCPluginPermissionsCompanion, DOSCPollPermissionsCompanion, DOSCWaitingRoomType_, DOSCPresetInfoCompanion, DOSCVideoPermissionsCompanion, DOSCKotlinThrowable, DOSCKotlinPair<__covariant A, __covariant B>, DOSCKotlinByteArray, DOSCKotlinByteIterator, NSData, DOSCKotlinRuntimeException, DOSCKotlinx_serialization_jsonJsonElementCompanion, DOSCKotlinIllegalStateException, DOSCKtor_client_coreHttpClientEngineConfig, DOSCKtor_client_coreHttpClientConfig<T>, DOSCKtor_eventsEvents, DOSCKtor_client_coreHttpReceivePipeline, DOSCKtor_client_coreHttpRequestPipeline, DOSCKtor_client_coreHttpResponsePipeline, DOSCKtor_client_coreHttpSendPipeline, DOSCKotlinx_serialization_coreSerializersModule, DOSCKotlinx_serialization_coreSerialKind, DOSCKtor_client_coreHttpRequestData, DOSCKtor_client_coreHttpResponseData, DOSCKotlinx_coroutines_coreCoroutineDispatcher, DOSCKtor_client_coreProxyConfig, DOSCKtor_utilsAttributeKey<T>, DOSCKtor_eventsEventDefinition<T>, DOSCKtor_utilsPipelinePhase, DOSCKtor_utilsPipeline<TSubject, TContext>, DOSCKtor_client_coreHttpReceivePipelinePhases, DOSCKtor_client_coreHttpResponse, DOSCKtor_client_coreHttpRequestPipelinePhases, DOSCKtor_client_coreHttpRequestBuilder, DOSCKtor_client_coreHttpResponsePipelinePhases, DOSCKtor_client_coreHttpResponseContainer, DOSCKtor_client_coreHttpClientCall, DOSCKtor_client_coreHttpSendPipelinePhases, DOSCKtor_httpUrl, DOSCKtor_httpHttpMethod, DOSCKtor_httpOutgoingContent, DOSCKtor_httpHttpStatusCode, DOSCKtor_utilsGMTDate, DOSCKtor_httpHttpProtocolVersion, DOSCKotlinAbstractCoroutineContextElement, DOSCKotlinx_coroutines_coreCoroutineDispatcherKey, DOSCKtor_httpHeadersBuilder, DOSCKtor_client_coreHttpRequestBuilderCompanion, DOSCKtor_httpURLBuilder, DOSCKtor_utilsTypeInfo, DOSCKtor_client_coreHttpClientCallCompanion, DOSCKtor_httpUrlCompanion, DOSCKtor_httpURLProtocol, DOSCKtor_httpHttpMethodCompanion, DOSCKtor_httpContentType, DOSCKotlinCancellationException, DOSCKtor_httpHttpStatusCodeCompanion, DOSCKtor_utilsGMTDateCompanion, DOSCKtor_utilsWeekDay, DOSCKtor_utilsMonth, DOSCKtor_httpHttpProtocolVersionCompanion, DOSCKotlinAbstractCoroutineContextKey<B, E>, DOSCKtor_ioMemory, DOSCKtor_ioChunkBuffer, DOSCKtor_ioBuffer, DOSCKtor_ioByteReadPacket, DOSCKtor_utilsStringValuesBuilderImpl, DOSCKtor_httpURLBuilderCompanion, DOSCKtor_httpURLProtocolCompanion, DOSCKtor_httpHeaderValueParam, DOSCKtor_httpHeaderValueWithParametersCompanion, DOSCKtor_httpHeaderValueWithParameters, DOSCKtor_httpContentTypeCompanion, DOSCKtor_utilsWeekDayCompanion, DOSCKtor_utilsMonthCompanion, DOSCKtor_ioMemoryCompanion, DOSCKtor_ioBufferCompanion, DOSCKtor_ioChunkBufferCompanion, DOSCKtor_ioInputCompanion, DOSCKtor_ioInput, DOSCKtor_ioByteReadPacketCompanion, DOSCKotlinKTypeProjection, DOSCKotlinx_coroutines_coreAtomicDesc, DOSCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, DOSCKotlinKVariance, DOSCKotlinKTypeProjectionCompanion, DOSCKotlinx_coroutines_coreAtomicOp<__contravariant T>, DOSCKotlinx_coroutines_coreOpDescriptor, DOSCKotlinx_coroutines_coreLockFreeLinkedListNode, DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol DOSCIDytePlatformUtilsProvider, DOSCDyteCameraEventsListener, DOSCDyteMeetingRoomEventsListener, DOSCDyteParticipantEventsListener, DOSCDytePluginEventsListener, DOSCDyteSelfEventsListener, DOSCIDytePlatformUtils, DOSCKotlinComparable, DOSCIControllerContainer, DOSCDyteParticipantUpdateListener, DOSCKotlinx_serialization_coreKSerializer, DOSCIApiClient, DOSCIChatController, DOSCIConnectionController, DOSCIEventController, DOSCIHostController, DOSCILoggerController, DOSCIMediaSoupController, DOSCIMetaController, DOSCIParticipantController, DOSCIPermissionController, DOSCIPluginsController, DOSCIPollController, DOSCIPresetController, DOSCIRecordingController, DOSCIRoomNodeController, DOSCISelfController, DOSCISocketController, DOSCISocketMessageResponseParser, DOSCIWebinarController, DOSCDyteMicrophoneEventsListener, DOSCDytePermissionEventsListener, DOSCSocketBuilder, DOSCMapper, DOSCIDyteLoggerUtils, DOSCIDyteMediaSoupUtils, DOSCIDyteWebView, DOSCIDyteMediaUtils, DOSCIDytePeerConnectionUtils, DOSCIDyteVideoUtils, DOSCIDyteWebViewIDyteWebViewListener, DOSCKotlinIterator, DOSCKotlinx_serialization_coreEncoder, DOSCKotlinx_serialization_coreSerialDescriptor, DOSCKotlinx_serialization_coreSerializationStrategy, DOSCKotlinx_serialization_coreDecoder, DOSCKotlinx_serialization_coreDeserializationStrategy, DOSCKotlinCoroutineContext, DOSCKotlinx_coroutines_coreCoroutineScope, DOSCKtor_ioCloseable, DOSCKtor_client_coreHttpClientEngine, DOSCKtor_client_coreHttpClientEngineCapability, DOSCKtor_utilsAttributes, DOSCKotlinx_serialization_coreCompositeEncoder, DOSCKotlinAnnotation, DOSCKotlinx_serialization_coreCompositeDecoder, DOSCKotlinCoroutineContextElement, DOSCKotlinCoroutineContextKey, DOSCKtor_client_coreHttpClientPlugin, DOSCKotlinx_coroutines_coreDisposableHandle, DOSCKotlinSuspendFunction2, DOSCKotlinx_serialization_coreSerializersModuleCollector, DOSCKotlinKClass, DOSCKtor_httpHeaders, DOSCKotlinx_coroutines_coreJob, DOSCKotlinContinuation, DOSCKotlinContinuationInterceptor, DOSCKotlinx_coroutines_coreRunnable, DOSCKotlinFunction, DOSCKtor_httpHttpMessage, DOSCKtor_ioByteReadChannel, DOSCKtor_httpHttpMessageBuilder, DOSCKtor_client_coreHttpRequest, DOSCKotlinKDeclarationContainer, DOSCKotlinKAnnotatedElement, DOSCKotlinKClassifier, DOSCKtor_httpParameters, DOSCKotlinMapEntry, DOSCKtor_utilsStringValues, DOSCKotlinx_coroutines_coreChildHandle, DOSCKotlinx_coroutines_coreChildJob, DOSCKotlinSequence, DOSCKotlinx_coroutines_coreSelectClause0, DOSCKtor_ioReadSession, DOSCKotlinSuspendFunction1, DOSCKotlinAppendable, DOSCKtor_utilsStringValuesBuilder, DOSCKtor_httpParametersBuilder, DOSCKotlinKType, DOSCKotlinx_coroutines_coreParentJob, DOSCKotlinx_coroutines_coreSelectInstance, DOSCKotlinSuspendFunction0, DOSCKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface DOSCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface DOSCBase (DOSCBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface DOSCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface DOSCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorDOSCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface DOSCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface DOSCByte : DOSCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface DOSCUByte : DOSCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface DOSCShort : DOSCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface DOSCUShort : DOSCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface DOSCInt : DOSCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface DOSCUInt : DOSCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface DOSCLong : DOSCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface DOSCULong : DOSCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface DOSCFloat : DOSCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface DOSCDouble : DOSCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface DOSCBoolean : DOSCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("DyteMobileClient")))
@interface DOSCDyteMobileClient : DOSCBase
- (instancetype)initWithDytePlatformUtilsProvider:(id<DOSCIDytePlatformUtilsProvider>)dytePlatformUtilsProvider __attribute__((swift_name("init(dytePlatformUtilsProvider:)"))) __attribute__((objc_designated_initializer));
- (void)addCameraEventsListenerCameraEventsListener:(id<DOSCDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("addCameraEventsListener(cameraEventsListener:)")));
- (void)addMeetingRoomEventsListenerMeetingRoomEventsListener:(id<DOSCDyteMeetingRoomEventsListener>)meetingRoomEventsListener __attribute__((swift_name("addMeetingRoomEventsListener(meetingRoomEventsListener:)")));
- (void)addParticipantEventsListenerParticipantEventsListener:(id<DOSCDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("addParticipantEventsListener(participantEventsListener:)")));
- (void)addPluginEventsListenerPluginEventsListener:(id<DOSCDytePluginEventsListener>)pluginEventsListener __attribute__((swift_name("addPluginEventsListener(pluginEventsListener:)")));
- (void)addSelfEventsListenerSelfEventsListener:(id<DOSCDyteSelfEventsListener>)selfEventsListener __attribute__((swift_name("addSelfEventsListener(selfEventsListener:)")));
- (void)doInitDyteMeetingInfo:(DOSCDyteMeetingInfo *)dyteMeetingInfo __attribute__((swift_name("doInit(dyteMeetingInfo:)")));
- (void)joinRoom __attribute__((swift_name("joinRoom()")));
- (void)leaveRoom __attribute__((swift_name("leaveRoom()")));
- (void)removeCameraEventsListenerCameraEventsListener:(id<DOSCDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("removeCameraEventsListener(cameraEventsListener:)")));
- (void)removeMeetingRoomEventsListenerMeetingRoomEventsListener:(id<DOSCDyteMeetingRoomEventsListener>)meetingRoomEventsListener __attribute__((swift_name("removeMeetingRoomEventsListener(meetingRoomEventsListener:)")));
- (void)removeParticipantEventsListenerParticipantEventsListener:(id<DOSCDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("removeParticipantEventsListener(participantEventsListener:)")));
- (void)removePluginEventsListenerPluginEventsListener:(id<DOSCDytePluginEventsListener>)pluginEventsListener __attribute__((swift_name("removePluginEventsListener(pluginEventsListener:)")));
- (void)removeSelfEventsListenerSelfEventsListener:(id<DOSCDyteSelfEventsListener>)selfEventsListener __attribute__((swift_name("removeSelfEventsListener(selfEventsListener:)")));
@property (readonly) DOSCDyteChat *chat __attribute__((swift_name("chat")));
@property (readonly) DOSCDyteSelfParticipant *localUser __attribute__((swift_name("localUser")));
@property (readonly) DOSCDyteMeta *meta __attribute__((swift_name("meta")));
@property (readonly) DOSCDyteRoomParticipants *participants __attribute__((swift_name("participants")));
@property (readonly) DOSCDytePlugins *plugins __attribute__((swift_name("plugins")));
@property (readonly) DOSCDytePoll *polls __attribute__((swift_name("polls")));
@property (readonly) DOSCDyteRecording *recording __attribute__((swift_name("recording")));
@property (readonly) DOSCDyteWebinar *webinar __attribute__((swift_name("webinar")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteiOSClientBuilder")))
@interface DOSCDyteiOSClientBuilder : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DOSCDyteMobileClient *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface DOSCUtils : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUtils *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, NSString *> *)getDeviceInfoPlatformUtils:(id<DOSCIDytePlatformUtils>)platformUtils __attribute__((swift_name("getDeviceInfo(platformUtils:)")));
- (NSString *)getInitialsFromNameName:(NSString *)name __attribute__((swift_name("getInitialsFromName(name:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol DOSCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface DOSCKotlinEnum<E> : DOSCBase <DOSCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioDeviceType")))
@interface DOSCAudioDeviceType : DOSCKotlinEnum<DOSCAudioDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCAudioDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) DOSCAudioDeviceType *wired __attribute__((swift_name("wired")));
@property (class, readonly) DOSCAudioDeviceType *speaker __attribute__((swift_name("speaker")));
@property (class, readonly) DOSCAudioDeviceType *bluetooth __attribute__((swift_name("bluetooth")));
@property (class, readonly) DOSCAudioDeviceType *earPiece __attribute__((swift_name("earPiece")));
@property (class, readonly) DOSCAudioDeviceType *unknown __attribute__((swift_name("unknown")));
+ (DOSCKotlinArray<DOSCAudioDeviceType *> *)values __attribute__((swift_name("values()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioDeviceType.Companion")))
@interface DOSCAudioDeviceTypeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCAudioDeviceTypeCompanion *shared __attribute__((swift_name("shared")));
- (DOSCAudioDeviceType *)fromMapMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("fromMap(map:)")));
@end;

__attribute__((swift_name("DyteActionResult")))
@interface DOSCDyteActionResult : DOSCBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteActionResult.ActionFailed")))
@interface DOSCDyteActionResultActionFailed : DOSCBase
- (instancetype)initWithMessage:(NSString *)message exception:(DOSCKotlinException *)exception __attribute__((swift_name("init(message:exception:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCKotlinException *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteActionResult.ActionNotPermitted")))
@interface DOSCDyteActionResultActionNotPermitted : DOSCDyteActionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)actionNotPermitted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteActionResultActionNotPermitted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteActionResult.Success")))
@interface DOSCDyteActionResultSuccess : DOSCDyteActionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteActionResultSuccess *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteAudioDevice")))
@interface DOSCDyteAudioDevice : DOSCBase
- (instancetype)initWithId:(NSString *)id type:(DOSCAudioDeviceType *)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCDyteAudioDeviceCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCAudioDeviceType *)component2 __attribute__((swift_name("component2()")));
- (DOSCDyteAudioDevice *)doCopyId:(NSString *)id type:(DOSCAudioDeviceType *)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) DOSCAudioDeviceType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteAudioDevice.Companion")))
@interface DOSCDyteAudioDeviceCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteAudioDeviceCompanion *shared __attribute__((swift_name("shared")));
- (DOSCDyteAudioDevice *)fromMapMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("fromMap(map:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteChat")))
@interface DOSCDyteChat : DOSCBase
- (instancetype)initWithControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (DOSCDyteActionResult *)sendFileMessageFilePath:(NSString *)filePath fileName:(NSString *)fileName __attribute__((swift_name("sendFileMessage(filePath:fileName:)")));
- (DOSCDyteActionResult *)sendImageMessageFilePath:(NSString *)filePath fileName:(NSString *)fileName __attribute__((swift_name("sendImageMessage(filePath:fileName:)")));
- (DOSCDyteActionResult *)sendTextMessageMessage:(NSString *)message __attribute__((swift_name("sendTextMessage(message:)")));
- (NSArray<NSDictionary<NSString *, id> *> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSMutableArray<DOSCDyteChatMessage *> *messages __attribute__((swift_name("messages")));
@end;

__attribute__((swift_name("DyteChatMessage")))
@interface DOSCDyteChatMessage : DOSCBase
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(DOSCDyteMessageType *)type time:(DOSCLong * _Nullable)time __attribute__((swift_name("init(userId:displayName:read:pluginId:type:time:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable pluginId __attribute__((swift_name("pluginId")));
@property (readonly) BOOL read __attribute__((swift_name("read")));
@property (readonly) DOSCLong * _Nullable time __attribute__((swift_name("time")));
@property (readonly) DOSCDyteMessageType *type __attribute__((swift_name("type")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteFileMessage")))
@interface DOSCDyteFileMessage : DOSCDyteChatMessage
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId name:(NSString *)name fileUri:(NSString * _Nullable)fileUri time:(int64_t)time __attribute__((swift_name("init(userId:displayName:read:pluginId:name:fileUri:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(DOSCDyteMessageType *)type time:(DOSCLong * _Nullable)time __attribute__((swift_name("init(userId:displayName:read:pluginId:type:time:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable fileUri __attribute__((swift_name("fileUri")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteImageMessage")))
@interface DOSCDyteImageMessage : DOSCDyteChatMessage
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId link:(NSString *)link fileUri:(NSString * _Nullable)fileUri fileName:(NSString * _Nullable)fileName time:(DOSCLong * _Nullable)time __attribute__((swift_name("init(userId:displayName:read:pluginId:link:fileUri:fileName:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(DOSCDyteMessageType *)type time:(DOSCLong * _Nullable)time __attribute__((swift_name("init(userId:displayName:read:pluginId:type:time:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString * _Nullable fileUri __attribute__((swift_name("fileUri")));
@property (readonly) NSString *link __attribute__((swift_name("link")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMeetingInfo")))
@interface DOSCDyteMeetingInfo : DOSCBase
- (instancetype)initWithRoomName:(NSString *)roomName authToken:(NSString *)authToken enableAudio:(BOOL)enableAudio enableVideo:(BOOL)enableVideo baseUrl:(NSString *)baseUrl __attribute__((swift_name("init(roomName:authToken:enableAudio:enableVideo:baseUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCDyteMeetingInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (DOSCDyteMeetingInfo *)doCopyRoomName:(NSString *)roomName authToken:(NSString *)authToken enableAudio:(BOOL)enableAudio enableVideo:(BOOL)enableVideo baseUrl:(NSString *)baseUrl __attribute__((swift_name("doCopy(roomName:authToken:enableAudio:enableVideo:baseUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) BOOL enableAudio __attribute__((swift_name("enableAudio")));
@property (readonly) BOOL enableVideo __attribute__((swift_name("enableVideo")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMeetingInfo.Companion")))
@interface DOSCDyteMeetingInfoCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteMeetingInfoCompanion *shared __attribute__((swift_name("shared")));
- (DOSCDyteMeetingInfo *)fromMapMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("fromMap(map:)")));
@end;

__attribute__((swift_name("DyteMeetingParticipant")))
@interface DOSCDyteMeetingParticipant : DOSCBase
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId name:(NSString *)name picture:(NSString * _Nullable)picture isHost:(BOOL)isHost clientSpecificId:(NSString * _Nullable)clientSpecificId flags:(DOSCParticipantFlags *)flags controllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(id:userId:name:picture:isHost:clientSpecificId:flags:controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (DOSCDyteActionResult *)acceptWaitListedRequest __attribute__((swift_name("acceptWaitListedRequest()")));
- (void)addParticipantUpdateListenerParticipantUpdateListener:(id<DOSCDyteParticipantUpdateListener>)participantUpdateListener __attribute__((swift_name("addParticipantUpdateListener(participantUpdateListener:)")));
- (DOSCDyteActionResult *)disableAudio __attribute__((swift_name("disableAudio()")));
- (DOSCDyteActionResult *)disableVideo __attribute__((swift_name("disableVideo()")));
- (id)getVideoView __attribute__((swift_name("getVideoView()")));
- (DOSCDyteActionResult *)kick __attribute__((swift_name("kick()")));
- (DOSCDyteActionResult *)pin __attribute__((swift_name("pin()")));
- (DOSCDyteActionResult *)rejectWaitListedRequest __attribute__((swift_name("rejectWaitListedRequest()")));
- (void)removeParticipantUpdateListenerParticipantUpdateListener:(id<DOSCDyteParticipantUpdateListener>)participantUpdateListener __attribute__((swift_name("removeParticipantUpdateListener(participantUpdateListener:)")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (DOSCDyteActionResult *)unpin __attribute__((swift_name("unpin()")));
@property (readonly) BOOL audioEnabled __attribute__((swift_name("audioEnabled")));
@property (readonly) NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) id<DOSCIControllerContainer> controllerContainer __attribute__((swift_name("controllerContainer")));
@property (readonly) DOSCParticipantFlags *flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property (readonly) BOOL isPinned __attribute__((swift_name("isPinned")));
@property (readonly) BOOL isScreenShareParticipant __attribute__((swift_name("isScreenShareParticipant")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) id _Nullable screenShareTrack __attribute__((swift_name("screenShareTrack")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) BOOL videoEnabled __attribute__((swift_name("videoEnabled")));
@property (readonly) id _Nullable videoTrack __attribute__((swift_name("videoTrack")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMessageType")))
@interface DOSCDyteMessageType : DOSCKotlinEnum<DOSCDyteMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCDyteMessageType *text __attribute__((swift_name("text")));
@property (class, readonly) DOSCDyteMessageType *image __attribute__((swift_name("image")));
@property (class, readonly) DOSCDyteMessageType *file __attribute__((swift_name("file")));
+ (DOSCKotlinArray<DOSCDyteMessageType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteMeta")))
@interface DOSCDyteMeta : DOSCBase
- (instancetype)initWithControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *meetingStartedTimestamp __attribute__((swift_name("meetingStartedTimestamp")));
@property (readonly) NSString *meetingTitle __attribute__((swift_name("meetingTitle")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString *roomType __attribute__((swift_name("roomType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteParticipant")))
@interface DOSCDyteParticipant : DOSCDyteMeetingParticipant
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId name:(NSString *)name picture:(NSString * _Nullable)picture isHost:(BOOL)isHost clientSpecificId:(NSString * _Nullable)clientSpecificId flags:(DOSCParticipantFlags *)flags controllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(id:userId:name:picture:isHost:clientSpecificId:flags:controllerContainer:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) DOSCParticipantFlags *flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePlugin")))
@interface DOSCDytePlugin : DOSCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name description:(NSString *)description picture:(NSString *)picture private:(BOOL)private_ staggered:(BOOL)staggered baseURL:(NSString *)baseURL controllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(id:name:description:picture:private:staggered:baseURL:controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (DOSCDyteActionResult *)activate __attribute__((swift_name("activate()")));
- (DOSCDyteActionResult *)deactivate __attribute__((swift_name("deactivate()")));
- (void)removePluginView __attribute__((swift_name("removePluginView()")));

/**
 @note This method converts instances of IllegalStateException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)setPluginViewView:(WKWebView *)view error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("setPluginView(view:)")));
- (void)uploadFileFile:(DOSCKotlinNothing *)file __attribute__((swift_name("uploadFile(file:)")));
@property (readonly) NSString *baseURL __attribute__((swift_name("baseURL")));
@property DOSCPluginConfigResponse * _Nullable config __attribute__((swift_name("config")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable enabledBy __attribute__((swift_name("enabledBy")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *picture __attribute__((swift_name("picture")));
@property (readonly, getter=private) BOOL private_ __attribute__((swift_name("private_")));
@property (readonly) BOOL staggered __attribute__((swift_name("staggered")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePlugins")))
@interface DOSCDytePlugins : DOSCBase
- (instancetype)initWithControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<DOSCDytePlugin *> *active __attribute__((swift_name("active")));
@property (readonly) NSArray<DOSCDytePlugin *> *all __attribute__((swift_name("all")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePoll")))
@interface DOSCDytePoll : DOSCBase
- (instancetype)initWithControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (DOSCDyteActionResult *)createQuestion:(NSString *)question options:(NSArray<NSString *> *)options anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes __attribute__((swift_name("create(question:options:anonymous:hideVotes:)")));
- (NSArray<NSDictionary<NSString *, id> *> *)toMap __attribute__((swift_name("toMap()")));
- (DOSCDyteActionResult *)votePollMessage:(DOSCDytePollMessage *)pollMessage pollOption:(DOSCDytePollOption *)pollOption __attribute__((swift_name("vote(pollMessage:pollOption:)")));
@property (readonly) NSArray<DOSCDytePollMessage *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePollMessage")))
@interface DOSCDytePollMessage : DOSCBase
- (instancetype)initWithId:(NSString *)id quesion:(NSString *)quesion anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy options:(NSArray<DOSCDytePollOption *> *)options __attribute__((swift_name("init(id:quesion:anonymous:hideVotes:createdBy:options:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSArray<DOSCDytePollOption *> *)component6 __attribute__((swift_name("component6()")));
- (DOSCDytePollMessage *)doCopyId:(NSString *)id quesion:(NSString *)quesion anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy options:(NSArray<DOSCDytePollOption *> *)options __attribute__((swift_name("doCopy(id:quesion:anonymous:hideVotes:createdBy:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL anonymous __attribute__((swift_name("anonymous")));
@property (readonly) NSString *createdBy __attribute__((swift_name("createdBy")));
@property (readonly) BOOL hideVotes __attribute__((swift_name("hideVotes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<DOSCDytePollOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *quesion __attribute__((swift_name("quesion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePollOption")))
@interface DOSCDytePollOption : DOSCBase
- (instancetype)initWithText:(NSString *)text votes:(NSArray<DOSCDytePollVote *> *)votes count:(id)count __attribute__((swift_name("init(text:votes:count:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCDytePollVote *> *)component2 __attribute__((swift_name("component2()")));
- (id)component3 __attribute__((swift_name("component3()")));
- (DOSCDytePollOption *)doCopyText:(NSString *)text votes:(NSArray<DOSCDytePollVote *> *)votes count:(id)count __attribute__((swift_name("doCopy(text:votes:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id count __attribute__((swift_name("count")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSArray<DOSCDytePollVote *> *votes __attribute__((swift_name("votes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DytePollVote")))
@interface DOSCDytePollVote : DOSCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCDytePollVote *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteRecording")))
@interface DOSCDyteRecording : DOSCBase
- (instancetype)initWithControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (DOSCDyteActionResult *)start __attribute__((swift_name("start()")));
- (DOSCDyteActionResult *)stop __attribute__((swift_name("stop()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) DOSCDyteRecordingState *recordingState __attribute__((swift_name("recordingState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteRoomParticipants")))
@interface DOSCDyteRoomParticipants : DOSCBase
- (instancetype)initWithWaitlisted:(NSArray<DOSCDyteMeetingParticipant *> *)waitlisted joined:(NSArray<DOSCDyteMeetingParticipant *> *)joined active:(NSArray<DOSCDyteMeetingParticipant *> *)active screenshares:(NSArray<DOSCDyteMeetingParticipant *> *)screenshares controllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(waitlisted:joined:active:screenshares:controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (void)acceptAllWaitingRequests __attribute__((swift_name("acceptAllWaitingRequests()")));
- (BOOL)canGoNextPage __attribute__((swift_name("canGoNextPage()"))) __attribute__((deprecated("use gridInfo")));
- (BOOL)canGoPreviousPage __attribute__((swift_name("canGoPreviousPage()"))) __attribute__((deprecated("use gridInfo")));
- (NSArray<DOSCDyteMeetingParticipant *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCDyteMeetingParticipant *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<DOSCDyteMeetingParticipant *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<DOSCDyteMeetingParticipant *> *)component4 __attribute__((swift_name("component4()")));
- (DOSCDyteRoomParticipants *)doCopyWaitlisted:(NSArray<DOSCDyteMeetingParticipant *> *)waitlisted joined:(NSArray<DOSCDyteMeetingParticipant *> *)joined active:(NSArray<DOSCDyteMeetingParticipant *> *)active screenshares:(NSArray<DOSCDyteMeetingParticipant *> *)screenshares controllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("doCopy(waitlisted:joined:active:screenshares:controllerContainer:)")));
- (DOSCDyteActionResult *)disableAllAudio __attribute__((swift_name("disableAllAudio()")));
- (DOSCDyteActionResult *)disableAllVideo __attribute__((swift_name("disableAllVideo()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int32_t)getCurrentPageNumber __attribute__((swift_name("getCurrentPageNumber()"))) __attribute__((deprecated("use gridInfo")));
- (int32_t)getPageCount __attribute__((swift_name("getPageCount()"))) __attribute__((deprecated("use gridInfo")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (DOSCDyteActionResult *)kickAll __attribute__((swift_name("kickAll()")));
- (void)setPagePageNumber:(int32_t)pageNumber __attribute__((swift_name("setPage(pageNumber:)")));
- (BOOL)shouldShowPaginator __attribute__((swift_name("shouldShowPaginator()"))) __attribute__((deprecated("use gridInfo")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCDyteMeetingParticipant *> *active __attribute__((swift_name("active")));
@property (readonly) DOSCGridInfo *gridInfo __attribute__((swift_name("gridInfo")));
@property (readonly) NSArray<DOSCDyteMeetingParticipant *> *joined __attribute__((swift_name("joined")));
@property (readonly) DOSCDyteMeetingParticipant * _Nullable pinned __attribute__((swift_name("pinned")));
@property (readonly) NSArray<DOSCDyteMeetingParticipant *> *screenshares __attribute__((swift_name("screenshares")));
@property (readonly) NSArray<DOSCDyteMeetingParticipant *> *waitlisted __attribute__((swift_name("waitlisted")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteSelfParticipant")))
@interface DOSCDyteSelfParticipant : DOSCDyteMeetingParticipant
- (instancetype)initWithId:(NSString *)id userId:(NSString *)userId name:(NSString *)name picture:(NSString * _Nullable)picture isHost:(BOOL)isHost clientSpecificId:(NSString * _Nullable)clientSpecificId flags:(DOSCParticipantFlags *)flags controllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(id:userId:name:picture:isHost:clientSpecificId:flags:controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canDoParticipantHostControls __attribute__((swift_name("canDoParticipantHostControls()")));
- (DOSCDyteActionResult *)disableAudio __attribute__((swift_name("disableAudio()")));
- (DOSCDyteActionResult *)disableVideo __attribute__((swift_name("disableVideo()")));
- (DOSCDyteActionResult *)enableAudio __attribute__((swift_name("enableAudio()")));
- (DOSCDyteActionResult *)enableVideo __attribute__((swift_name("enableVideo()")));
- (NSArray<DOSCDyteAudioDevice *> *)getAudioDevices __attribute__((swift_name("getAudioDevices()")));
- (DOSCDyteAudioDevice *)getSelectedAudioDevice __attribute__((swift_name("getSelectedAudioDevice()")));
- (DOSCDyteVideoDevice *)getSelectedVideoDevice __attribute__((swift_name("getSelectedVideoDevice()")));
- (NSArray<DOSCDyteVideoDevice *> *)getVideoDevices __attribute__((swift_name("getVideoDevices()")));
- (void)setAudioDeviceDyteAndroidDevice:(DOSCDyteAudioDevice *)dyteAndroidDevice __attribute__((swift_name("setAudioDevice(dyteAndroidDevice:)")));
- (void)setDisplayNameName:(NSString *)name __attribute__((swift_name("setDisplayName(name:)")));
- (void)setVideoDeviceDyteVideoDevice:(DOSCDyteVideoDevice *)dyteVideoDevice __attribute__((swift_name("setVideoDevice(dyteVideoDevice:)")));
- (void)switchCameraDyteVideoDevice:(DOSCDyteVideoDevice *)dyteVideoDevice __attribute__((swift_name("switchCamera(dyteVideoDevice:)")));
@property (readonly) NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) DOSCParticipantFlags *flags __attribute__((swift_name("flags")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isCameraPermissionGranted __attribute__((swift_name("isCameraPermissionGranted")));
@property (readonly) BOOL isHost __attribute__((swift_name("isHost")));
@property (readonly) BOOL isMicrophonePermissionGranted __attribute__((swift_name("isMicrophonePermissionGranted")));
@property NSString *name __attribute__((swift_name("name")));
@property (readonly) DOSCParticipantPermissions *permissions __attribute__((swift_name("permissions")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@property (readonly) DOSCWaitListStatus *waitListStatus __attribute__((swift_name("waitListStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteTextMessage")))
@interface DOSCDyteTextMessage : DOSCDyteChatMessage
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId message:(NSString *)message time:(DOSCLong * _Nullable)time __attribute__((swift_name("init(userId:displayName:read:pluginId:message:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUserId:(NSString *)userId displayName:(NSString *)displayName read:(BOOL)read pluginId:(NSString * _Nullable)pluginId type:(DOSCDyteMessageType *)type time:(DOSCLong * _Nullable)time __attribute__((swift_name("init(userId:displayName:read:pluginId:type:time:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteVideoDevice")))
@interface DOSCDyteVideoDevice : DOSCBase
- (instancetype)initWithId:(NSString *)id type:(DOSCVideoDeviceType *)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCDyteVideoDeviceCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCVideoDeviceType *)component2 __attribute__((swift_name("component2()")));
- (DOSCDyteVideoDevice *)doCopyId:(NSString *)id type:(DOSCVideoDeviceType *)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) DOSCVideoDeviceType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteVideoDevice.Companion")))
@interface DOSCDyteVideoDeviceCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteVideoDeviceCompanion *shared __attribute__((swift_name("shared")));
- (DOSCDyteVideoDevice *)fromMapMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("fromMap(map:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteWebinar")))
@interface DOSCDyteWebinar : DOSCBase
- (instancetype)initWithControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("init(controllerContainer:)"))) __attribute__((objc_designated_initializer));
- (void)acceptAllRequest __attribute__((swift_name("acceptAllRequest()")));
- (void)acceptRequestId:(NSString *)id __attribute__((swift_name("acceptRequest(id:)")));
- (void)acceptRequestToPresent __attribute__((swift_name("acceptRequestToPresent()")));
- (BOOL)isPresenting __attribute__((swift_name("isPresenting()")));
- (void)leaveStage __attribute__((swift_name("leaveStage()")));
- (void)rejectAllRequest __attribute__((swift_name("rejectAllRequest()")));
- (void)rejectRequestId:(NSString *)id __attribute__((swift_name("rejectRequest(id:)")));
- (void)rejectRequestToPresent __attribute__((swift_name("rejectRequestToPresent()")));
- (void)requestToJoin __attribute__((swift_name("requestToJoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingRoomState")))
@interface DOSCMeetingRoomState : DOSCKotlinEnum<DOSCMeetingRoomState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCMeetingRoomState *none __attribute__((swift_name("none")));
@property (class, readonly) DOSCMeetingRoomState *joining __attribute__((swift_name("joining")));
@property (class, readonly) DOSCMeetingRoomState *joined __attribute__((swift_name("joined")));
@property (class, readonly) DOSCMeetingRoomState *leaving __attribute__((swift_name("leaving")));
@property (class, readonly) DOSCMeetingRoomState *left __attribute__((swift_name("left")));
@property (class, readonly) DOSCMeetingRoomState *error __attribute__((swift_name("error")));
+ (DOSCKotlinArray<DOSCMeetingRoomState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantFlags")))
@interface DOSCParticipantFlags : DOSCBase
- (instancetype)initWithRecorder:(BOOL)recorder hiddenParticipant:(BOOL)hiddenParticipant __attribute__((swift_name("init(recorder:hiddenParticipant:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (DOSCParticipantFlags *)doCopyRecorder:(BOOL)recorder hiddenParticipant:(BOOL)hiddenParticipant __attribute__((swift_name("doCopy(recorder:hiddenParticipant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property (readonly) BOOL recorder __attribute__((swift_name("recorder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProduceData")))
@interface DOSCProduceData : DOSCBase
- (instancetype)initWithTransportId:(NSString * _Nullable)transportId kind:(NSString * _Nullable)kind rtpParameters:(NSString * _Nullable)rtpParameters appData:(NSString * _Nullable)appData __attribute__((swift_name("init(transportId:kind:rtpParameters:appData:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCProduceData *)doCopyTransportId:(NSString * _Nullable)transportId kind:(NSString * _Nullable)kind rtpParameters:(NSString * _Nullable)rtpParameters appData:(NSString * _Nullable)appData __attribute__((swift_name("doCopy(transportId:kind:rtpParameters:appData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable appData __attribute__((swift_name("appData")));
@property (readonly) NSString * _Nullable kind __attribute__((swift_name("kind")));
@property (readonly) NSString * _Nullable rtpParameters __attribute__((swift_name("rtpParameters")));
@property (readonly) NSString * _Nullable transportId __attribute__((swift_name("transportId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoDeviceType")))
@interface DOSCVideoDeviceType : DOSCKotlinEnum<DOSCVideoDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCVideoDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) DOSCVideoDeviceType *front __attribute__((swift_name("front")));
@property (class, readonly) DOSCVideoDeviceType *rear __attribute__((swift_name("rear")));
@property (class, readonly) DOSCVideoDeviceType *external __attribute__((swift_name("external")));
+ (DOSCKotlinArray<DOSCVideoDeviceType *> *)values __attribute__((swift_name("values()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoDeviceType.Companion")))
@interface DOSCVideoDeviceTypeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCVideoDeviceTypeCompanion *shared __attribute__((swift_name("shared")));
- (DOSCVideoDeviceType *)fromMapMap:(NSDictionary<NSString *, id> *)map __attribute__((swift_name("fromMap(map:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitListStatus")))
@interface DOSCWaitListStatus : DOSCKotlinEnum<DOSCWaitListStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCWaitListStatus *none __attribute__((swift_name("none")));
@property (class, readonly) DOSCWaitListStatus *waiting __attribute__((swift_name("waiting")));
@property (class, readonly) DOSCWaitListStatus *accepted __attribute__((swift_name("accepted")));
@property (class, readonly) DOSCWaitListStatus *rejected __attribute__((swift_name("rejected")));
+ (DOSCKotlinArray<DOSCWaitListStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteLog")))
@interface DOSCDyteLog : DOSCBase
- (instancetype)initWithId:(int32_t)id message:(NSString *)message loggedAt:(NSString *)loggedAt status:(DOSCLogStatus *)status logSeverity:(DOSCLogSeverity *)logSeverity __attribute__((swift_name("init(id:message:loggedAt:status:logSeverity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCDyteLogCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DOSCLogStatus *)component4 __attribute__((swift_name("component4()")));
- (DOSCLogSeverity *)component5 __attribute__((swift_name("component5()")));
- (DOSCDyteLog *)doCopyId:(int32_t)id message:(NSString *)message loggedAt:(NSString *)loggedAt status:(DOSCLogStatus *)status logSeverity:(DOSCLogSeverity *)logSeverity __attribute__((swift_name("doCopy(id:message:loggedAt:status:logSeverity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) DOSCLogSeverity *logSeverity __attribute__((swift_name("logSeverity")));
@property (readonly) NSString *loggedAt __attribute__((swift_name("loggedAt")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property DOSCLogStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteLog.Companion")))
@interface DOSCDyteLogCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteLogCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("ILoggerController")))
@protocol DOSCILoggerController
@required
- (void)pushAllNow __attribute__((swift_name("pushAllNow()")));
- (void)setOrgIdOrganizationId:(NSString *)organizationId __attribute__((swift_name("setOrgId(organizationId:)")));
- (void)traceErrorMessage:(NSString *)message __attribute__((swift_name("traceError(message:)")));
- (void)traceLogMessage:(NSString *)message __attribute__((swift_name("traceLog(message:)")));
- (void)traceWarningMessage:(NSString *)message __attribute__((swift_name("traceWarning(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogSeverity")))
@interface DOSCLogSeverity : DOSCKotlinEnum<DOSCLogSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCLogSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) DOSCLogSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) DOSCLogSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) DOSCLogSeverity *log __attribute__((swift_name("log")));
@property (class, readonly) DOSCLogSeverity *warn __attribute__((swift_name("warn")));
+ (DOSCKotlinArray<DOSCLogSeverity *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogStatus")))
@interface DOSCLogStatus : DOSCKotlinEnum<DOSCLogStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCLogStatus *none __attribute__((swift_name("none")));
@property (class, readonly) DOSCLogStatus *processign __attribute__((swift_name("processign")));
@property (class, readonly) DOSCLogStatus *pushed __attribute__((swift_name("pushed")));
+ (DOSCKotlinArray<DOSCLogStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingMetaData")))
@interface DOSCMeetingMetaData : DOSCBase
- (instancetype)initWithPeerId:(NSString *)peerId roomName:(NSString *)roomName organizationId:(NSString *)organizationId sdkVersion:(NSString *)sdkVersion isMobile:(BOOL)isMobile deviceInfo:(NSString *)deviceInfo __attribute__((swift_name("init(peerId:roomName:organizationId:sdkVersion:isMobile:deviceInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMeetingMetaDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (DOSCMeetingMetaData *)doCopyPeerId:(NSString *)peerId roomName:(NSString *)roomName organizationId:(NSString *)organizationId sdkVersion:(NSString *)sdkVersion isMobile:(BOOL)isMobile deviceInfo:(NSString *)deviceInfo __attribute__((swift_name("doCopy(peerId:roomName:organizationId:sdkVersion:isMobile:deviceInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deviceInfo __attribute__((swift_name("deviceInfo")));
@property (readonly) BOOL isMobile __attribute__((swift_name("isMobile")));
@property (readonly) NSString *organizationId __attribute__((swift_name("organizationId")));
@property (readonly) NSString *peerId __attribute__((swift_name("peerId")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString *sdkVersion __attribute__((swift_name("sdkVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingMetaData.Companion")))
@interface DOSCMeetingMetaDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMeetingMetaDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostDyteLogs")))
@interface DOSCPostDyteLogs : DOSCBase
- (instancetype)initWithMeetingMetadata:(DOSCMeetingMetaData *)meetingMetadata logs:(NSArray<DOSCDyteLog *> *)logs serviceName:(NSString *)serviceName __attribute__((swift_name("init(meetingMetadata:logs:serviceName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPostDyteLogsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCMeetingMetaData *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCDyteLog *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DOSCPostDyteLogs *)doCopyMeetingMetadata:(DOSCMeetingMetaData *)meetingMetadata logs:(NSArray<DOSCDyteLog *> *)logs serviceName:(NSString *)serviceName __attribute__((swift_name("doCopy(meetingMetadata:logs:serviceName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCDyteLog *> *logs __attribute__((swift_name("logs")));
@property (readonly) DOSCMeetingMetaData *meetingMetadata __attribute__((swift_name("meetingMetadata")));
@property (readonly) NSString *serviceName __attribute__((swift_name("serviceName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostDyteLogs.Companion")))
@interface DOSCPostDyteLogsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPostDyteLogsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllerOptions")))
@interface DOSCControllerOptions : DOSCBase
- (instancetype)initWithDyteMeetingInfo:(DOSCDyteMeetingInfo *)dyteMeetingInfo platformUtilsProvider:(id<DOSCIDytePlatformUtilsProvider>)platformUtilsProvider __attribute__((swift_name("init(dyteMeetingInfo:platformUtilsProvider:)"))) __attribute__((objc_designated_initializer));
- (DOSCDyteMeetingInfo *)component1 __attribute__((swift_name("component1()")));
- (id<DOSCIDytePlatformUtilsProvider>)component2 __attribute__((swift_name("component2()")));
- (DOSCControllerOptions *)doCopyDyteMeetingInfo:(DOSCDyteMeetingInfo *)dyteMeetingInfo platformUtilsProvider:(id<DOSCIDytePlatformUtilsProvider>)platformUtilsProvider __attribute__((swift_name("doCopy(dyteMeetingInfo:platformUtilsProvider:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCDyteMeetingInfo *dyteMeetingInfo __attribute__((swift_name("dyteMeetingInfo")));
@property (readonly) id<DOSCIDytePlatformUtilsProvider> platformUtilsProvider __attribute__((swift_name("platformUtilsProvider")));
@end;

__attribute__((swift_name("DyteEventType")))
@interface DOSCDyteEventType : DOSCBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnActiveParticipantsChanged")))
@interface DOSCDyteEventTypeOnActiveParticipantsChanged : DOSCDyteEventType
- (instancetype)initWithActiveParticipants:(NSArray<DOSCDyteMeetingParticipant *> *)activeParticipants __attribute__((swift_name("init(activeParticipants:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<DOSCDyteMeetingParticipant *> *activeParticipants __attribute__((swift_name("activeParticipants")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnActiveSpeakerChanged")))
@interface DOSCDyteEventTypeOnActiveSpeakerChanged : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnAudioDevicesChanged")))
@interface DOSCDyteEventTypeOnAudioDevicesChanged : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onAudioDevicesChanged __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnAudioDevicesChanged *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraClosed")))
@interface DOSCDyteEventTypeOnCameraClosed : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onCameraClosed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnCameraClosed *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraDisconnected")))
@interface DOSCDyteEventTypeOnCameraDisconnected : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onCameraDisconnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnCameraDisconnected *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraError")))
@interface DOSCDyteEventTypeOnCameraError : DOSCDyteEventType
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraFreezed")))
@interface DOSCDyteEventTypeOnCameraFreezed : DOSCDyteEventType
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnCameraOpening")))
@interface DOSCDyteEventTypeOnCameraOpening : DOSCDyteEventType
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnFirstFrameAvailable")))
@interface DOSCDyteEventTypeOnFirstFrameAvailable : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onFirstFrameAvailable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnFirstFrameAvailable *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnHostKicked")))
@interface DOSCDyteEventTypeOnHostKicked : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onHostKicked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnHostKicked *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingMessagesReceived")))
@interface DOSCDyteEventTypeOnMeetingMessagesReceived : DOSCDyteEventType
- (instancetype)initWithMessages:(NSArray<DOSCDyteChatMessage *> *)messages __attribute__((swift_name("init(messages:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<DOSCDyteChatMessage *> *messages __attribute__((swift_name("messages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingPollsReceived")))
@interface DOSCDyteEventTypeOnMeetingPollsReceived : DOSCDyteEventType
- (instancetype)initWithPolls:(NSArray<DOSCDytePollMessage *> *)polls __attribute__((swift_name("init(polls:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<DOSCDytePollMessage *> *polls __attribute__((swift_name("polls")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRecordingError")))
@interface DOSCDyteEventTypeOnMeetingRecordingError : DOSCDyteEventType
- (instancetype)initWithError:(DOSCKotlinException *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCKotlinException *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRecordingStarted")))
@interface DOSCDyteEventTypeOnMeetingRecordingStarted : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRecordingStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRecordingStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRecordingStateUpdate")))
@interface DOSCDyteEventTypeOnMeetingRecordingStateUpdate : DOSCDyteEventType
- (instancetype)initWithState:(DOSCDyteRecordingState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteRecordingState *state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRecordingStopped")))
@interface DOSCDyteEventTypeOnMeetingRecordingStopped : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRecordingStopped __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRecordingStopped *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomDisconnected")))
@interface DOSCDyteEventTypeOnMeetingRoomDisconnected : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomDisconnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomDisconnected *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomInitCompleted")))
@interface DOSCDyteEventTypeOnMeetingRoomInitCompleted : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomInitCompleted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomInitCompleted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomInitFailed")))
@interface DOSCDyteEventTypeOnMeetingRoomInitFailed : DOSCDyteEventType
- (instancetype)initWithException:(DOSCKotlinException *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCKotlinException *exception __attribute__((swift_name("exception")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomInitStarted")))
@interface DOSCDyteEventTypeOnMeetingRoomInitStarted : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomInitStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomInitStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomJoinFailed")))
@interface DOSCDyteEventTypeOnMeetingRoomJoinFailed : DOSCDyteEventType
- (instancetype)initWithException:(DOSCKotlinException *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCKotlinException *exception __attribute__((swift_name("exception")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomJoinStarted")))
@interface DOSCDyteEventTypeOnMeetingRoomJoinStarted : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomJoinStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomJoinStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomJoined")))
@interface DOSCDyteEventTypeOnMeetingRoomJoined : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomJoinedWithoutCameraPermission")))
@interface DOSCDyteEventTypeOnMeetingRoomJoinedWithoutCameraPermission : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomJoinedWithoutCameraPermission __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomJoinedWithoutCameraPermission *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomJoinedWithoutMicPermission")))
@interface DOSCDyteEventTypeOnMeetingRoomJoinedWithoutMicPermission : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomJoinedWithoutMicPermission __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomJoinedWithoutMicPermission *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomLeave")))
@interface DOSCDyteEventTypeOnMeetingRoomLeave : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomLeave __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomLeave *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingRoomLeaveStarted")))
@interface DOSCDyteEventTypeOnMeetingRoomLeaveStarted : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onMeetingRoomLeaveStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnMeetingRoomLeaveStarted *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMeetingStateChanged")))
@interface DOSCDyteEventTypeOnMeetingStateChanged : DOSCDyteEventType
- (instancetype)initWithState:(NSString *)state isReconnected:(BOOL)isReconnected __attribute__((swift_name("init(state:isReconnected:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isReconnected __attribute__((swift_name("isReconnected")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMicrophoneError")))
@interface DOSCDyteEventTypeOnMicrophoneError : DOSCDyteEventType
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMicrophoneInitError")))
@interface DOSCDyteEventTypeOnMicrophoneInitError : DOSCDyteEventType
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnMicrophoneStartError")))
@interface DOSCDyteEventTypeOnMicrophoneStartError : DOSCDyteEventType
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnNewMeetingMessageReceived")))
@interface DOSCDyteEventTypeOnNewMeetingMessageReceived : DOSCDyteEventType
- (instancetype)initWithMessage:(DOSCDyteChatMessage *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteChatMessage *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnNewMeetingPollReceived")))
@interface DOSCDyteEventTypeOnNewMeetingPollReceived : DOSCDyteEventType
- (instancetype)initWithPoll:(DOSCDytePollMessage *)poll __attribute__((swift_name("init(poll:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDytePollMessage *poll __attribute__((swift_name("poll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnNoActiveSpeaker")))
@interface DOSCDyteEventTypeOnNoActiveSpeaker : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onNoActiveSpeaker __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnNoActiveSpeaker *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerAudioUpdate")))
@interface DOSCDyteEventTypeOnPeerAudioUpdate : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerJoin")))
@interface DOSCDyteEventTypeOnPeerJoin : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerLeft")))
@interface DOSCDyteEventTypeOnPeerLeft : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerPageUpdate")))
@interface DOSCDyteEventTypeOnPeerPageUpdate : DOSCDyteEventType
- (instancetype)initWithGridInfo:(DOSCGridInfo *)gridInfo __attribute__((swift_name("init(gridInfo:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCGridInfo *gridInfo __attribute__((swift_name("gridInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerPinned")))
@interface DOSCDyteEventTypeOnPeerPinned : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerScreenShareUpdate")))
@interface DOSCDyteEventTypeOnPeerScreenShareUpdate : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onPeerScreenShareUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnPeerScreenShareUpdate *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerUnpinned")))
@interface DOSCDyteEventTypeOnPeerUnpinned : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onPeerUnpinned __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnPeerUnpinned *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerUpdate")))
@interface DOSCDyteEventTypeOnPeerUpdate : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPeerVideoUpdate")))
@interface DOSCDyteEventTypeOnPeerVideoUpdate : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPermissionsUpdated")))
@interface DOSCDyteEventTypeOnPermissionsUpdated : DOSCDyteEventType
- (instancetype)initWithPermissions:(NSArray<DOSCPermission *> *)permissions __attribute__((swift_name("init(permissions:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<DOSCPermission *> *permissions __attribute__((swift_name("permissions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPluginDisabled")))
@interface DOSCDyteEventTypeOnPluginDisabled : DOSCDyteEventType
- (instancetype)initWithPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("init(plugin:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDytePlugin *plugin __attribute__((swift_name("plugin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPluginEnabled")))
@interface DOSCDyteEventTypeOnPluginEnabled : DOSCDyteEventType
- (instancetype)initWithPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("init(plugin:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDytePlugin *plugin __attribute__((swift_name("plugin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPluginFileRequest")))
@interface DOSCDyteEventTypeOnPluginFileRequest : DOSCDyteEventType
- (instancetype)initWithPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("init(plugin:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDytePlugin *plugin __attribute__((swift_name("plugin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnPluginMessage")))
@interface DOSCDyteEventTypeOnPluginMessage : DOSCDyteEventType
- (instancetype)initWithMessage:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnProximityChanged")))
@interface DOSCDyteEventTypeOnProximityChanged : DOSCDyteEventType
- (instancetype)initWithIsNear:(BOOL)isNear __attribute__((swift_name("init(isNear:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isNear __attribute__((swift_name("isNear")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnSelfAudioUpdate")))
@interface DOSCDyteEventTypeOnSelfAudioUpdate : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onSelfAudioUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnSelfAudioUpdate *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnSelfVideoUpdate")))
@interface DOSCDyteEventTypeOnSelfVideoUpdate : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onSelfVideoUpdate __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnSelfVideoUpdate *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnSelfWaitListStatusUpdate")))
@interface DOSCDyteEventTypeOnSelfWaitListStatusUpdate : DOSCDyteEventType
- (instancetype)initWithStatus:(DOSCWaitListStatus *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCWaitListStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnWaitListPeerAccepted")))
@interface DOSCDyteEventTypeOnWaitListPeerAccepted : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnWaitListPeerClosed")))
@interface DOSCDyteEventTypeOnWaitListPeerClosed : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnWaitListPeerJoined")))
@interface DOSCDyteEventTypeOnWaitListPeerJoined : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnWaitListPeerRejected")))
@interface DOSCDyteEventTypeOnWaitListPeerRejected : DOSCDyteEventType
- (instancetype)initWithParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("init(participant:)"))) __attribute__((objc_designated_initializer));
@property (readonly) DOSCDyteMeetingParticipant *participant __attribute__((swift_name("participant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnWebinarPresentRequest")))
@interface DOSCDyteEventTypeOnWebinarPresentRequest : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onWebinarPresentRequest __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnWebinarPresentRequest *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteEventType.OnWebinarStoppedPresenting")))
@interface DOSCDyteEventTypeOnWebinarStoppedPresenting : DOSCDyteEventType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onWebinarStoppedPresenting __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDyteEventTypeOnWebinarStoppedPresenting *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteRecordingState")))
@interface DOSCDyteRecordingState : DOSCKotlinEnum<DOSCDyteRecordingState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCDyteRecordingState *idle __attribute__((swift_name("idle")));
@property (class, readonly) DOSCDyteRecordingState *starting __attribute__((swift_name("starting")));
@property (class, readonly) DOSCDyteRecordingState *recording __attribute__((swift_name("recording")));
@property (class, readonly) DOSCDyteRecordingState *stopping __attribute__((swift_name("stopping")));
+ (DOSCKotlinArray<DOSCDyteRecordingState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GridInfo")))
@interface DOSCGridInfo : DOSCBase
- (instancetype)initWithPageCount:(int32_t)pageCount currentPageNumber:(int32_t)currentPageNumber isNextPagePossible:(BOOL)isNextPagePossible isPreviousPagePossible:(BOOL)isPreviousPagePossible shouldShowPaginator:(BOOL)shouldShowPaginator maxVideoCountPerPage:(int32_t)maxVideoCountPerPage __attribute__((swift_name("init(pageCount:currentPageNumber:isNextPagePossible:isPreviousPagePossible:shouldShowPaginator:maxVideoCountPerPage:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (DOSCGridInfo *)doCopyPageCount:(int32_t)pageCount currentPageNumber:(int32_t)currentPageNumber isNextPagePossible:(BOOL)isNextPagePossible isPreviousPagePossible:(BOOL)isPreviousPagePossible shouldShowPaginator:(BOOL)shouldShowPaginator maxVideoCountPerPage:(int32_t)maxVideoCountPerPage __attribute__((swift_name("doCopy(pageCount:currentPageNumber:isNextPagePossible:isPreviousPagePossible:shouldShowPaginator:maxVideoCountPerPage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentPageNumber __attribute__((swift_name("currentPageNumber")));
@property (readonly) BOOL isNextPagePossible __attribute__((swift_name("isNextPagePossible")));
@property (readonly) BOOL isPreviousPagePossible __attribute__((swift_name("isPreviousPagePossible")));
@property (readonly) int32_t maxVideoCountPerPage __attribute__((swift_name("maxVideoCountPerPage")));
@property (readonly) int32_t pageCount __attribute__((swift_name("pageCount")));
@property (readonly) BOOL shouldShowPaginator __attribute__((swift_name("shouldShowPaginator")));
@end;

__attribute__((swift_name("IChatController")))
@protocol DOSCIChatController
@required
- (void)handleChatMessagesDyteChatMessages:(DOSCWebSocketChatMessagesModel *)dyteChatMessages __attribute__((swift_name("handleChatMessages(dyteChatMessages:)")));
- (void)handleNewChatMessageDyteChatMessage:(DOSCWebSocketChatMessage *)dyteChatMessage __attribute__((swift_name("handleNewChatMessage(dyteChatMessage:)")));
- (void)loadChatMessages __attribute__((swift_name("loadChatMessages()")));
- (DOSCDyteActionResult *)sendFileMessageFileName:(NSString *)fileName filePath:(NSString *)filePath __attribute__((swift_name("sendFileMessage(fileName:filePath:)")));
- (DOSCDyteActionResult *)sendMessageMessage:(NSString *)message __attribute__((swift_name("sendMessage(message:)")));
@property (readonly) DOSCDyteChat *dyteChat __attribute__((swift_name("dyteChat")));
@end;

__attribute__((swift_name("IConnectionController")))
@protocol DOSCIConnectionController
@required
- (void)onReceiveTransportStateChangedState:(NSString *)state __attribute__((swift_name("onReceiveTransportStateChanged(state:)")));
- (void)onSendTransportStateChangedState:(NSString *)state __attribute__((swift_name("onSendTransportStateChanged(state:)")));
- (void)onSocketStateChangedSocketState:(NSString *)socketState __attribute__((swift_name("onSocketStateChanged(socketState:)")));
@end;

__attribute__((swift_name("IControllerContainer")))
@protocol DOSCIControllerContainer
@required
@property (readonly) id<DOSCIApiClient> apiClient __attribute__((swift_name("apiClient")));
@property (readonly) id<DOSCIChatController> chatController __attribute__((swift_name("chatController")));
@property (readonly) id<DOSCIConnectionController> connectionController __attribute__((swift_name("connectionController")));
@property (readonly) DOSCControllerOptions *controllerOptions __attribute__((swift_name("controllerOptions")));
@property (readonly) id<DOSCIEventController> eventController __attribute__((swift_name("eventController")));
@property (readonly) id<DOSCIHostController> hostController __attribute__((swift_name("hostController")));
@property (readonly) id<DOSCILoggerController> loggerController __attribute__((swift_name("loggerController")));
@property (readonly) id<DOSCIMediaSoupController> mediaSoupController __attribute__((swift_name("mediaSoupController")));
@property (readonly) id<DOSCIMetaController> metaController __attribute__((swift_name("metaController")));
@property (readonly) id<DOSCIParticipantController> participantController __attribute__((swift_name("participantController")));
@property (readonly) id<DOSCIPermissionController> permissionController __attribute__((swift_name("permissionController")));
@property (readonly) id<DOSCIDytePlatformUtilsProvider> platformUtilsProvider __attribute__((swift_name("platformUtilsProvider")));
@property (readonly) id<DOSCIPluginsController> pluginsController __attribute__((swift_name("pluginsController")));
@property (readonly) id<DOSCIPollController> pollsController __attribute__((swift_name("pollsController")));
@property (readonly) id<DOSCIPresetController> presetController __attribute__((swift_name("presetController")));
@property (readonly) id<DOSCIRecordingController> recordingController __attribute__((swift_name("recordingController")));
@property (readonly) id<DOSCIRoomNodeController> roomNodeController __attribute__((swift_name("roomNodeController")));
@property (readonly) id<DOSCISelfController> selfController __attribute__((swift_name("selfController")));
@property (readonly) id<DOSCISocketController> socketController __attribute__((swift_name("socketController")));
@property (readonly) id<DOSCISocketMessageResponseParser> socketMessageResponseParser __attribute__((swift_name("socketMessageResponseParser")));
@property (readonly) id<DOSCIWebinarController> webinarController __attribute__((swift_name("webinarController")));
@end;

__attribute__((swift_name("IEventController")))
@protocol DOSCIEventController
@required
- (void)addCameraEventListenerCameraEventsListener:(id<DOSCDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("addCameraEventListener(cameraEventsListener:)")));
- (void)addMicrophoneEventListenerMicrophoneEventsListener:(id<DOSCDyteMicrophoneEventsListener>)microphoneEventsListener __attribute__((swift_name("addMicrophoneEventListener(microphoneEventsListener:)")));
- (void)addParticipantEventListenerParticipantEventsListener:(id<DOSCDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("addParticipantEventListener(participantEventsListener:)")));
- (void)addParticipantUpdateListenerDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant dyteParticipantUpdateListener:(id<DOSCDyteParticipantUpdateListener>)dyteParticipantUpdateListener __attribute__((swift_name("addParticipantUpdateListener(dyteMeetingParticipant:dyteParticipantUpdateListener:)")));
- (void)addPermissionEventListenerPermissionEventsListener:(id<DOSCDytePermissionEventsListener>)permissionEventsListener __attribute__((swift_name("addPermissionEventListener(permissionEventsListener:)")));
- (void)addPluginEventListenerPluginEventsListener:(id<DOSCDytePluginEventsListener>)pluginEventsListener __attribute__((swift_name("addPluginEventListener(pluginEventsListener:)")));
- (void)addRoomEventListenerRoomEventsListener:(id<DOSCDyteMeetingRoomEventsListener>)roomEventsListener __attribute__((swift_name("addRoomEventListener(roomEventsListener:)")));
- (void)addSelfEventListenerSelfEventListener:(id<DOSCDyteSelfEventsListener>)selfEventListener __attribute__((swift_name("addSelfEventListener(selfEventListener:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)removeCameraEventListenerCameraEventsListener:(id<DOSCDyteCameraEventsListener>)cameraEventsListener __attribute__((swift_name("removeCameraEventListener(cameraEventsListener:)")));
- (void)removeMicrophoneEventListenerMicrophoneEventsListener:(id<DOSCDyteMicrophoneEventsListener>)microphoneEventsListener __attribute__((swift_name("removeMicrophoneEventListener(microphoneEventsListener:)")));
- (void)removeParticipantEventListenerParticipantEventsListener:(id<DOSCDyteParticipantEventsListener>)participantEventsListener __attribute__((swift_name("removeParticipantEventListener(participantEventsListener:)")));
- (void)removeParticipantUpdateListenerDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant dyteParticipantUpdateListener:(id<DOSCDyteParticipantUpdateListener>)dyteParticipantUpdateListener __attribute__((swift_name("removeParticipantUpdateListener(dyteMeetingParticipant:dyteParticipantUpdateListener:)")));
- (void)removePermissionEventListenerPermissionEventsListener:(id<DOSCDytePermissionEventsListener>)permissionEventsListener __attribute__((swift_name("removePermissionEventListener(permissionEventsListener:)")));
- (void)removePluginEventListenerPluginEventsListener:(id<DOSCDytePluginEventsListener>)pluginEventsListener __attribute__((swift_name("removePluginEventListener(pluginEventsListener:)")));
- (void)removeRoomEventListenerRoomEventsListener:(id<DOSCDyteMeetingRoomEventsListener>)roomEventsListener __attribute__((swift_name("removeRoomEventListener(roomEventsListener:)")));
- (void)removeSelfEventListenerSelfEventListener:(id<DOSCDyteSelfEventsListener>)selfEventListener __attribute__((swift_name("removeSelfEventListener(selfEventListener:)")));
- (void)triggerEventEventType:(DOSCDyteEventType *)eventType __attribute__((swift_name("triggerEvent(eventType:)")));
@end;

__attribute__((swift_name("IHostController")))
@protocol DOSCIHostController
@required
- (DOSCDyteActionResult *)acceptAllWaitingRequests __attribute__((swift_name("acceptAllWaitingRequests()")));
- (DOSCDyteActionResult *)acceptWaitlistedRequestDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("acceptWaitlistedRequest(dyteMeetingParticipant:)")));
- (DOSCDyteActionResult *)kickId:(NSString *)id __attribute__((swift_name("kick(id:)")));
- (DOSCDyteActionResult *)kickAll __attribute__((swift_name("kickAll()")));
- (DOSCDyteActionResult *)muteAllAudioAllowUnmute:(BOOL)allowUnmute __attribute__((swift_name("muteAllAudio(allowUnmute:)")));
- (DOSCDyteActionResult *)muteAllVideo __attribute__((swift_name("muteAllVideo()")));
- (DOSCDyteActionResult *)muteAudioDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("muteAudio(dyteMeetingParticipant:)")));
- (DOSCDyteActionResult *)muteVideoDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("muteVideo(dyteMeetingParticipant:)")));
- (DOSCDyteActionResult *)pinParticipantDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("pinParticipant(dyteMeetingParticipant:)")));
- (DOSCDyteActionResult *)rejectWaitlistedRequestDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("rejectWaitlistedRequest(dyteMeetingParticipant:)")));
- (DOSCDyteActionResult *)unpinParticipant __attribute__((swift_name("unpinParticipant()")));
@end;

__attribute__((swift_name("IMediaSoupController")))
@protocol DOSCIMediaSoupController
@required
- (DOSCConsumerAppData * _Nullable)getAppDataFromConsumerIdConsumerId:(NSString *)consumerId __attribute__((swift_name("getAppDataFromConsumerId(consumerId:)")));
- (NSString *)getConsumerTypeConsumerId:(NSString *)consumerId __attribute__((swift_name("getConsumerType(consumerId:)")));
- (void)onNewConsumerWebSocketConsumerModel:(DOSCWebSocketConsumerModel *)webSocketConsumerModel __attribute__((swift_name("onNewConsumer(webSocketConsumerModel:)")));
- (NSString *)onProduceTransportId:(NSString *)transportId kind:(NSString *)kind rtpParameters:(NSString *)rtpParameters appData:(NSString * _Nullable)appData __attribute__((swift_name("onProduce(transportId:kind:rtpParameters:appData:)")));
- (void)onReceiveTransportConnectedTransportId:(NSString *)transportId dtlsParameters:(NSString *)dtlsParameters __attribute__((swift_name("onReceiveTransportConnected(transportId:dtlsParameters:)")));
- (void)onSendTransportConnectedTransportId:(NSString *)transportId dtlsParameters:(NSString *)dtlsParameters __attribute__((swift_name("onSendTransportConnected(transportId:dtlsParameters:)")));
- (void)produceVideo __attribute__((swift_name("produceVideo()")));
@property (readonly) DOSCProduceData *produceData __attribute__((swift_name("produceData")));
@property (readonly) NSString * _Nullable videoProduceId __attribute__((swift_name("videoProduceId")));
@end;

__attribute__((swift_name("IMetaController")))
@protocol DOSCIMetaController
@required
- (NSString *)getAuthToken __attribute__((swift_name("getAuthToken()")));
- (NSString *)getBaseUrl __attribute__((swift_name("getBaseUrl()")));
- (NSString *)getDisplayName __attribute__((swift_name("getDisplayName()")));
- (NSString *)getMeetingId __attribute__((swift_name("getMeetingId()")));
- (DOSCDyteMeetingInfo *)getMeetingInfo __attribute__((swift_name("getMeetingInfo()")));
- (NSString *)getMeetingStatedTimestamp __attribute__((swift_name("getMeetingStatedTimestamp()")));
- (NSString *)getMeetingTitle __attribute__((swift_name("getMeetingTitle()")));
- (NSString *)getOrgId __attribute__((swift_name("getOrgId()")));
- (NSString *)getPeerId __attribute__((swift_name("getPeerId()")));
- (NSString *)getRoomName __attribute__((swift_name("getRoomName()")));
- (NSString *)getRoomType __attribute__((swift_name("getRoomType()")));
- (BOOL)isGroupCall __attribute__((swift_name("isGroupCall()")));
- (BOOL)isV2AuthToken __attribute__((swift_name("isV2AuthToken()")));
- (BOOL)isWebinar __attribute__((swift_name("isWebinar()")));
- (void)setMeetingStartedTimestampTimestamp:(NSString *)timestamp __attribute__((swift_name("setMeetingStartedTimestamp(timestamp:)")));
- (void)setMeetingTitleTitle:(NSString *)title __attribute__((swift_name("setMeetingTitle(title:)")));
- (void)setParticipantInfoParticipantInfo:(DOSCParticipantInfo *)participantInfo __attribute__((swift_name("setParticipantInfo(participantInfo:)")));
@end;

__attribute__((swift_name("IParticipantController")))
@protocol DOSCIParticipantController
@required
- (int32_t)getCurrentPageNumber __attribute__((swift_name("getCurrentPageNumber()")));
- (UIView *)getVideoViewDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("getVideoView(dyteMeetingParticipant:)")));
- (void)handleRoomJoinedWebSocketJoinRoomModel:(DOSCWebSocketJoinRoomModel *)webSocketJoinRoomModel __attribute__((swift_name("handleRoomJoined(webSocketJoinRoomModel:)")));
- (void)handleRoomStateWebSocketRoomStateModel:(DOSCWebSocketRoomStateModel *)webSocketRoomStateModel __attribute__((swift_name("handleRoomState(webSocketRoomStateModel:)")));
- (void)onPageLoadedWebSocketGetPageModel:(DOSCWebSocketGetPageModel *)webSocketGetPageModel newPageNumber:(int32_t)newPageNumber __attribute__((swift_name("onPageLoaded(webSocketGetPageModel:newPageNumber:)")));
- (void)onParticipantStreamConnectedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantStreamConnected(participant:)")));
- (void)onParticipantVideoMutedWebSocketConsumerClosedModel:(DOSCWebSocketConsumerClosedModel *)webSocketConsumerClosedModel __attribute__((swift_name("onParticipantVideoMuted(webSocketConsumerClosedModel:)")));
- (void)onParticipantVideoUnmutedWebSocketConsumerClosedModel:(DOSCWebSocketConsumerResumedModel *)webSocketConsumerClosedModel __attribute__((swift_name("onParticipantVideoUnmuted(webSocketConsumerClosedModel:)")));
- (void)onPeerAudioMutedWebSocketPeerMuteModel:(DOSCWebSocketPeerMuteModel *)webSocketPeerMuteModel __attribute__((swift_name("onPeerAudioMuted(webSocketPeerMuteModel:)")));
- (void)onPeerAudioUnmutedWebSocketPeerMuteModel:(DOSCWebSocketPeerMuteModel *)webSocketPeerMuteModel __attribute__((swift_name("onPeerAudioUnmuted(webSocketPeerMuteModel:)")));
- (void)onPeerJoinedMeetingPeerUser:(DOSCWebSocketMeetingPeerUser *)meetingPeerUser __attribute__((swift_name("onPeerJoined(meetingPeerUser:)")));
- (void)onPeerLeftWebSocketPeerLeftModel:(DOSCWebSocketPeerLeftModel *)webSocketPeerLeftModel __attribute__((swift_name("onPeerLeft(webSocketPeerLeftModel:)")));
- (void)onPeerPinnedWebSocketPeerPinnedModel:(DOSCWebSocketPeerPinnedModel *)webSocketPeerPinnedModel __attribute__((swift_name("onPeerPinned(webSocketPeerPinnedModel:)")));
- (void)onPeerScreenShareStartedParticipant:(DOSCDyteMeetingParticipant *)participant screenshareTrack:(id)screenshareTrack __attribute__((swift_name("onPeerScreenShareStarted(participant:screenshareTrack:)")));
- (void)onPeerScreenSharedEndedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onPeerScreenSharedEnded(participant:)")));
- (void)onPeerUnpinned __attribute__((swift_name("onPeerUnpinned()")));
- (void)onSelectedPeersWebSocketSelectedPeersModel:(DOSCWebSocketSelectedPeersModel *)webSocketSelectedPeersModel __attribute__((swift_name("onSelectedPeers(webSocketSelectedPeersModel:)")));
- (void)onSelfJoined __attribute__((swift_name("onSelfJoined()")));
- (void)onWaitlistPeerAcceptedWebSocketWaitlistPeerAccepted:(DOSCWebSocketWaitlistPeerAccepted *)webSocketWaitlistPeerAccepted __attribute__((swift_name("onWaitlistPeerAccepted(webSocketWaitlistPeerAccepted:)")));
- (void)onWaitlistPeerAddedWebSocketWaitlistPeerAdded:(DOSCWebSocketWaitlistPeerAdded *)webSocketWaitlistPeerAdded __attribute__((swift_name("onWaitlistPeerAdded(webSocketWaitlistPeerAdded:)")));
- (void)onWaitlistPeerClosedWebSocketWaitlistPeerClosed:(DOSCWebSocketWaitlistPeerClosed *)webSocketWaitlistPeerClosed __attribute__((swift_name("onWaitlistPeerClosed(webSocketWaitlistPeerClosed:)")));
- (void)onWaitlistPeerRejectedDyteMeetingParticipant:(DOSCDyteMeetingParticipant *)dyteMeetingParticipant __attribute__((swift_name("onWaitlistPeerRejected(dyteMeetingParticipant:)")));
- (void)onWaitlistPeerRejectedWebSocketWaitlistPeerRejected:(DOSCWebSocketWaitlistPeerRejected *)webSocketWaitlistPeerRejected __attribute__((swift_name("onWaitlistPeerRejected(webSocketWaitlistPeerRejected:)")));
- (void)setPageNewPageNumber:(int32_t)newPageNumber __attribute__((swift_name("setPage(newPageNumber:)")));
@property (readonly) DOSCGridInfo *gridInfo __attribute__((swift_name("gridInfo")));
@property (readonly) DOSCDyteRoomParticipants *meetingRoomParticipants __attribute__((swift_name("meetingRoomParticipants")));
@property (readonly) DOSCDyteMeetingParticipant * _Nullable pinnedParticipant __attribute__((swift_name("pinnedParticipant")));
@end;

__attribute__((swift_name("IPermissionController")))
@protocol DOSCIPermissionController
@required
- (BOOL)arePermissionsGranted __attribute__((swift_name("arePermissionsGranted()")));
- (void)askPermissionsList:(NSArray<DOSCPermissionType *> *)list onPermissionGranted:(void (^)(void))onPermissionGranted onPermissionDenied:(void (^)(void))onPermissionDenied __attribute__((swift_name("askPermissions(list:onPermissionGranted:onPermissionDenied:)")));
- (BOOL)isPermissionGratedPermissionType:(DOSCPermissionType *)permissionType __attribute__((swift_name("isPermissionGrated(permissionType:)")));
- (void)processPermissionForSelf __attribute__((swift_name("processPermissionForSelf()")));
@property (readonly) NSArray<DOSCPermission *> *permissions __attribute__((swift_name("permissions")));
@end;

__attribute__((swift_name("IPluginsController")))
@protocol DOSCIPluginsController
@required
- (DOSCDyteActionResult *)activatePluginPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("activatePlugin(plugin:)")));
- (DOSCDyteActionResult *)deactivatePluginPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("deactivatePlugin(plugin:)")));
- (void)handleRoomStateRoomState:(DOSCWebSocketRoomStateModel *)roomState __attribute__((swift_name("handleRoomState(roomState:)")));
- (void)onDisablePluginPayload:(DOSCWebSocketPluginDisabled *)payload __attribute__((swift_name("onDisablePlugin(payload:)")));
- (void)onEnablePluginPayload:(DOSCWebSocketPluginEnabled *)payload __attribute__((swift_name("onEnablePlugin(payload:)")));
- (void)onPluginFileRequestPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("onPluginFileRequest(plugin:)")));
- (void)onPluginSocketEventType:(NSString *)type payload:(DOSCWebSocketPluginEvent *)payload __attribute__((swift_name("onPluginSocketEvent(type:payload:)")));
- (void)onPluginWebViewMessagePluginId:(NSString *)pluginId message:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)message __attribute__((swift_name("onPluginWebViewMessage(pluginId:message:)")));
@property (readonly) NSArray<DOSCDytePlugin *> *activePlugins __attribute__((swift_name("activePlugins")));
@property (readonly) NSArray<DOSCDytePlugin *> *allPlugins __attribute__((swift_name("allPlugins")));
@end;

__attribute__((swift_name("IPollController")))
@protocol DOSCIPollController
@required
- (DOSCDyteActionResult *)createQuestion:(NSString *)question options:(NSArray<NSString *> *)options anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes __attribute__((swift_name("create(question:options:anonymous:hideVotes:)")));
- (void)loadPolls __attribute__((swift_name("loadPolls()")));
- (void)onNewPollWebsocketPoll:(DOSCWebSocketPoll *)websocketPoll __attribute__((swift_name("onNewPoll(websocketPoll:)")));
- (DOSCDyteActionResult *)voteDytePollMessage:(DOSCDytePollMessage *)dytePollMessage dytePollOption:(DOSCDytePollOption *)dytePollOption __attribute__((swift_name("vote(dytePollMessage:dytePollOption:)")));
@property (readonly) NSArray<DOSCDytePollMessage *> *polls __attribute__((swift_name("polls")));
@end;

__attribute__((swift_name("IPresetController")))
@protocol DOSCIPresetController
@required
- (BOOL)canCreatePoll __attribute__((swift_name("canCreatePoll()")));
- (BOOL)canDoParticipantHostControls __attribute__((swift_name("canDoParticipantHostControls()")));
- (BOOL)canPublishAudio __attribute__((swift_name("canPublishAudio()")));
- (BOOL)canPublishVideo __attribute__((swift_name("canPublishVideo()")));
- (BOOL)canRecord __attribute__((swift_name("canRecord()")));
- (BOOL)canSendChatFile __attribute__((swift_name("canSendChatFile()")));
- (BOOL)canSendChatText __attribute__((swift_name("canSendChatText()")));
- (BOOL)canStartPlugins __attribute__((swift_name("canStartPlugins()")));
- (BOOL)canViewPoll __attribute__((swift_name("canViewPoll()")));
- (BOOL)canVoteOnPoll __attribute__((swift_name("canVoteOnPoll()")));
- (BOOL)closePlugins __attribute__((swift_name("closePlugins()")));
- (int32_t)getMaxVideoCount __attribute__((swift_name("getMaxVideoCount()")));
@property (readonly) DOSCParticipantPermissions *permissions __attribute__((swift_name("permissions")));
@end;

__attribute__((swift_name("IRecordingController")))
@protocol DOSCIRecordingController
@required
- (void)fetchRecordingData __attribute__((swift_name("fetchRecordingData()")));
- (DOSCDyteRecordingState *)getState __attribute__((swift_name("getState()")));
- (void)onRecordingPeerJoined __attribute__((swift_name("onRecordingPeerJoined()")));
- (void)onRecordingPeerLeft __attribute__((swift_name("onRecordingPeerLeft()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)startWithCompletionHandler:(void (^)(DOSCDyteActionResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("start(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(DOSCDyteActionResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@end;

__attribute__((swift_name("IRoomNodeController")))
@protocol DOSCIRoomNodeController
@required
- (void)connectProducerTransport __attribute__((swift_name("connectProducerTransport()")));
- (void)joinRoom __attribute__((swift_name("joinRoom()")));
@end;

__attribute__((swift_name("ISelfController")))
@protocol DOSCISelfController
@required
- (DOSCDyteActionResult *)disableAudio __attribute__((swift_name("disableAudio()")));
- (DOSCDyteActionResult *)disableVideo __attribute__((swift_name("disableVideo()")));
- (DOSCDyteActionResult *)enableAudio __attribute__((swift_name("enableAudio()")));
- (DOSCDyteActionResult *)enableVideo __attribute__((swift_name("enableVideo()")));
- (NSArray<DOSCDyteAudioDevice *> *)getAudioDevices __attribute__((swift_name("getAudioDevices()")));
- (DOSCDyteAudioDevice *)getSelectedAudioDevice __attribute__((swift_name("getSelectedAudioDevice()")));
- (DOSCDyteVideoDevice *)getSelectedVideoDevice __attribute__((swift_name("getSelectedVideoDevice()")));
- (DOSCDyteSelfParticipant *)getSelf __attribute__((swift_name("getSelf()")));
- (NSArray<DOSCDyteVideoDevice *> *)getVideoDevices __attribute__((swift_name("getVideoDevices()")));
- (void)onAudioDevicesChanged __attribute__((swift_name("onAudioDevicesChanged()")));
- (void)onAudioDisabled __attribute__((swift_name("onAudioDisabled()")));
- (void)onAudioEnabled __attribute__((swift_name("onAudioEnabled()")));
- (void)onEnteredInRoom __attribute__((swift_name("onEnteredInRoom()")));
- (void)onVideoDevicesChanged __attribute__((swift_name("onVideoDevicesChanged()")));
- (void)onVideoDisabled __attribute__((swift_name("onVideoDisabled()")));
- (void)onVideoEnabledVideoProducerId:(NSString *)videoProducerId __attribute__((swift_name("onVideoEnabled(videoProducerId:)")));
- (void)setDeviceDyteAndroidDevice:(DOSCDyteAudioDevice *)dyteAndroidDevice __attribute__((swift_name("setDevice(dyteAndroidDevice:)")));
- (void)setDeviceDye:(DOSCDyteVideoDevice *)dye __attribute__((swift_name("setDevice(dye:)")));
@end;

__attribute__((swift_name("ISocketController")))
@protocol DOSCISocketController
@required
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (NSString *)sendMessageSyncOutboundMeetingEventType:(DOSCOutboundMeetingEventType *)outboundMeetingEventType payload:(DOSCKotlinx_serialization_jsonJsonElement * _Nullable)payload __attribute__((swift_name("sendMessageSync(outboundMeetingEventType:payload:)")));
- (NSString *)sendMessageSyncGenericPayload:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("sendMessageSyncGeneric(payload:)")));
@end;

__attribute__((swift_name("IWebinarController")))
@protocol DOSCIWebinarController
@required
- (void)acceptAllRequest __attribute__((swift_name("acceptAllRequest()")));
- (void)acceptRequestId:(NSString *)id __attribute__((swift_name("acceptRequest(id:)")));
- (void)acceptRequestToPresent __attribute__((swift_name("acceptRequestToPresent()")));
- (BOOL)isPresenting __attribute__((swift_name("isPresenting()")));
- (void)joinStage __attribute__((swift_name("joinStage()")));
- (void)leaveStage __attribute__((swift_name("leaveStage()")));
- (void)onPeerAddedToStagePeerId:(NSString *)peerId __attribute__((swift_name("onPeerAddedToStage(peerId:)")));
- (void)onPeerRejectedToStagePeerId:(NSString *)peerId __attribute__((swift_name("onPeerRejectedToStage(peerId:)")));
- (void)onRequestToPresentPeerAddedRequestToPresentParticipant:(DOSCRequestToPresentParticipant *)requestToPresentParticipant __attribute__((swift_name("onRequestToPresentPeerAdded(requestToPresentParticipant:)")));
- (void)onRequestedToPresentRequestType:(NSString *)requestType __attribute__((swift_name("onRequestedToPresent(requestType:)")));
- (void)onStoppedPresenting __attribute__((swift_name("onStoppedPresenting()")));
- (void)rejectAllRequest __attribute__((swift_name("rejectAllRequest()")));
- (void)rejectRequestId:(NSString *)id __attribute__((swift_name("rejectRequest(id:)")));
- (void)rejectRequestToPresent __attribute__((swift_name("rejectRequestToPresent()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Permission")))
@interface DOSCPermission : DOSCBase
- (instancetype)initWithType:(DOSCPermissionType *)type isGranted:(BOOL)isGranted __attribute__((swift_name("init(type:isGranted:)"))) __attribute__((objc_designated_initializer));
- (DOSCPermissionType *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (DOSCPermission *)doCopyType:(DOSCPermissionType *)type isGranted:(BOOL)isGranted __attribute__((swift_name("doCopy(type:isGranted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL isGranted __attribute__((swift_name("isGranted")));
@property (readonly) DOSCPermissionType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionType")))
@interface DOSCPermissionType : DOSCKotlinEnum<DOSCPermissionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCPermissionType *camera __attribute__((swift_name("camera")));
@property (class, readonly) DOSCPermissionType *microphone __attribute__((swift_name("microphone")));
@property (class, readonly) DOSCPermissionType *storage __attribute__((swift_name("storage")));
+ (DOSCKotlinArray<DOSCPermissionType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestToPresentParticipant")))
@interface DOSCRequestToPresentParticipant : DOSCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name requestToJoinType:(NSString *)requestToJoinType __attribute__((swift_name("init(id:name:requestToJoinType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRequestToPresentParticipantCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DOSCRequestToPresentParticipant *)doCopyId:(NSString *)id name:(NSString *)name requestToJoinType:(NSString *)requestToJoinType __attribute__((swift_name("doCopy(id:name:requestToJoinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *requestToJoinType __attribute__((swift_name("requestToJoinType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestToPresentParticipant.Companion")))
@interface DOSCRequestToPresentParticipantCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRequestToPresentParticipantCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("ISocketMessageResponseParser")))
@protocol DOSCISocketMessageResponseParser
@required
- (DOSCInboundMeetingEvent *)parseResponseResponse:(NSString *)response __attribute__((swift_name("parseResponse(response:)")));
@end;

__attribute__((swift_name("Mapper")))
@protocol DOSCMapper
@required
- (id _Nullable)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Socket")))
@interface DOSCSocket : DOSCBase
- (instancetype)initWithEndpoint:(NSString *)endpoint config:(DOSCSocketOptions * _Nullable)config build:(void (^)(id<DOSCSocketBuilder>))build __attribute__((swift_name("init(endpoint:config:build:)"))) __attribute__((objc_designated_initializer));
- (void)connect __attribute__((swift_name("connect()")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
- (void)emitEvent:(NSString *)event data:(NSString *)data __attribute__((swift_name("emit(event:data:)")));
- (void)emitEvent:(NSString *)event data_:(NSArray<DOSCKotlinx_serialization_jsonJsonElement *> *)data __attribute__((swift_name("emit(event:data_:)")));
- (void)emitEvent:(NSString *)event data__:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)data __attribute__((swift_name("emit(event:data__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitAckEvent:(NSString *)event data:(NSString *)data completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("emitAck(event:data:completionHandler:)")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
@end;

__attribute__((swift_name("SocketAckCallback")))
@protocol DOSCSocketAckCallback
@required
- (void)callResponse:(NSString * _Nullable)response __attribute__((swift_name("call(response:)")));
@end;

__attribute__((swift_name("SocketBuilder")))
@protocol DOSCSocketBuilder
@required
- (void)onSocketEvent:(DOSCSocketEvent<id> *)socketEvent action:(void (^)(DOSCSocket *, id _Nullable))action __attribute__((swift_name("on(socketEvent:action:)")));
- (void)onEvent:(NSString *)event action:(void (^)(DOSCSocket *, NSString *, DOSCKotlinUnit *(^)(void)))action __attribute__((swift_name("on(event:action:)")));
@end;

__attribute__((swift_name("SocketEvent")))
@interface DOSCSocketEvent<T> : DOSCBase <DOSCMapper>
@property (class, readonly, getter=companion) DOSCSocketEventCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventCompanion")))
@interface DOSCSocketEventCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *EVENT_CONNECT __attribute__((swift_name("EVENT_CONNECT")));
@property (readonly) NSString *EVENT_CONNECTING __attribute__((swift_name("EVENT_CONNECTING")));
@property (readonly) NSString *EVENT_CONNECT_ERROR __attribute__((swift_name("EVENT_CONNECT_ERROR")));
@property (readonly) NSString *EVENT_DISCONNECT __attribute__((swift_name("EVENT_DISCONNECT")));
@property (readonly) NSString *EVENT_ERROR __attribute__((swift_name("EVENT_ERROR")));
@property (readonly) NSString *EVENT_MESSAGE __attribute__((swift_name("EVENT_MESSAGE")));
@property (readonly) NSString *EVENT_PING __attribute__((swift_name("EVENT_PING")));
@property (readonly) NSString *EVENT_PONG __attribute__((swift_name("EVENT_PONG")));
@property (readonly) NSString *EVENT_RECONNECT __attribute__((swift_name("EVENT_RECONNECT")));
@property (readonly) NSString *EVENT_RECONNECT_ATTEMPT __attribute__((swift_name("EVENT_RECONNECT_ATTEMPT")));
@property (readonly) NSString *EVENT_RECONNECT_ERROR __attribute__((swift_name("EVENT_RECONNECT_ERROR")));
@property (readonly) NSString *EVENT_RECONNECT_FAILED __attribute__((swift_name("EVENT_RECONNECT_FAILED")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventConnect")))
@interface DOSCSocketEventConnect : DOSCSocketEvent<DOSCKotlinUnit *> <DOSCMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventConnect *shared __attribute__((swift_name("shared")));
- (DOSCKotlinUnit *)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventConnecting")))
@interface DOSCSocketEventConnecting : DOSCSocketEvent<DOSCKotlinUnit *> <DOSCMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connecting __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventConnecting *shared __attribute__((swift_name("shared")));
- (DOSCKotlinUnit *)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventDisconnect")))
@interface DOSCSocketEventDisconnect : DOSCSocketEvent<DOSCKotlinUnit *> <DOSCMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disconnect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventDisconnect *shared __attribute__((swift_name("shared")));
- (DOSCKotlinUnit *)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventError")))
@interface DOSCSocketEventError : DOSCSocketEvent<id>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)error __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventError *shared __attribute__((swift_name("shared")));
- (id)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventMessage")))
@interface DOSCSocketEventMessage : DOSCSocketEvent<id>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)message __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventMessage *shared __attribute__((swift_name("shared")));
- (id)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventPing")))
@interface DOSCSocketEventPing : DOSCSocketEvent<DOSCKotlinUnit *> <DOSCMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ping __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventPing *shared __attribute__((swift_name("shared")));
- (DOSCKotlinUnit *)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventPong")))
@interface DOSCSocketEventPong : DOSCSocketEvent<DOSCKotlinUnit *> <DOSCMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pong __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventPong *shared __attribute__((swift_name("shared")));
- (DOSCKotlinUnit *)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventReconnect")))
@interface DOSCSocketEventReconnect : DOSCSocketEvent<DOSCKotlinUnit *> <DOSCMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reconnect __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventReconnect *shared __attribute__((swift_name("shared")));
- (DOSCKotlinUnit *)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventReconnectAttempt")))
@interface DOSCSocketEventReconnectAttempt : DOSCSocketEvent<DOSCInt *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reconnectAttempt __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCSocketEventReconnectAttempt *shared __attribute__((swift_name("shared")));
- (DOSCInt *)mapperArray:(DOSCKotlinArray<id> *)array __attribute__((swift_name("mapper(array:)")));
@property (readonly) NSArray<NSString *> *socketIoEvents __attribute__((swift_name("socketIoEvents")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketMessageResponseParser")))
@interface DOSCSocketMessageResponseParser : DOSCBase <DOSCISocketMessageResponseParser>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DOSCInboundMeetingEvent *)parseResponseResponse:(NSString *)response __attribute__((swift_name("parseResponse(response:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketOptions")))
@interface DOSCSocketOptions : DOSCBase
- (instancetype)initWithQueryParams:(NSDictionary<NSString *, NSString *> * _Nullable)queryParams transport:(DOSCSocketOptionsTransport *)transport __attribute__((swift_name("init(queryParams:transport:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCSocketOptionsTransport *)component2 __attribute__((swift_name("component2()")));
- (DOSCSocketOptions *)doCopyQueryParams:(NSDictionary<NSString *, NSString *> * _Nullable)queryParams transport:(DOSCSocketOptionsTransport *)transport __attribute__((swift_name("doCopy(queryParams:transport:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable queryParams __attribute__((swift_name("queryParams")));
@property (readonly) DOSCSocketOptionsTransport *transport __attribute__((swift_name("transport")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketOptions.Transport")))
@interface DOSCSocketOptionsTransport : DOSCKotlinEnum<DOSCSocketOptionsTransport *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCSocketOptionsTransport *websocket __attribute__((swift_name("websocket")));
@property (class, readonly) DOSCSocketOptionsTransport *polling __attribute__((swift_name("polling")));
@property (class, readonly) DOSCSocketOptionsTransport *default_ __attribute__((swift_name("default_")));
+ (DOSCKotlinArray<DOSCSocketOptionsTransport *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InboundMeetingEventType")))
@interface DOSCInboundMeetingEventType : DOSCKotlinEnum<DOSCInboundMeetingEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketRoomState __attribute__((swift_name("webSocketRoomState")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketRouterCapability __attribute__((swift_name("webSocketRouterCapability")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketCreateTransport __attribute__((swift_name("webSocketCreateTransport")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketJoinRoom __attribute__((swift_name("webSocketJoinRoom")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerJoined __attribute__((swift_name("webSocketPeerJoined")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerLeft __attribute__((swift_name("webSocketPeerLeft")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketActiveSpeaker __attribute__((swift_name("webSocketActiveSpeaker")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketNoActiveSpeaker __attribute__((swift_name("webSocketNoActiveSpeaker")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerPinned __attribute__((swift_name("webSocketPeerPinned")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketRecordingStarted __attribute__((swift_name("webSocketRecordingStarted")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketRecordingStopped __attribute__((swift_name("webSocketRecordingStopped")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketWaitlistPeerAdded __attribute__((swift_name("webSocketWaitlistPeerAdded")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketWaitlistPeerAccepted __attribute__((swift_name("webSocketWaitlistPeerAccepted")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketWaitlistPeerRejected __attribute__((swift_name("webSocketWaitlistPeerRejected")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketWaitlistPeerClosed __attribute__((swift_name("webSocketWaitlistPeerClosed")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketSelectedPeers __attribute__((swift_name("webSocketSelectedPeers")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketNewConsumer __attribute__((swift_name("webSocketNewConsumer")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketResumeConsumer __attribute__((swift_name("webSocketResumeConsumer")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketCloseConsumer __attribute__((swift_name("webSocketCloseConsumer")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPauseConsumer __attribute__((swift_name("webSocketPauseConsumer")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketConnectTransport __attribute__((swift_name("webSocketConnectTransport")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketProducerConnect __attribute__((swift_name("webSocketProducerConnect")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketProducerClosed __attribute__((swift_name("webSocketProducerClosed")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerMuted __attribute__((swift_name("webSocketPeerMuted")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerUnmuted __attribute__((swift_name("webSocketPeerUnmuted")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketMuteAllVideo __attribute__((swift_name("webSocketMuteAllVideo")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketMuteAllAudio __attribute__((swift_name("webSocketMuteAllAudio")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketDisableVideo __attribute__((swift_name("webSocketDisableVideo")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketDisableAudio __attribute__((swift_name("webSocketDisableAudio")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketOnChatMessages __attribute__((swift_name("webSocketOnChatMessages")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketOnChatMessage __attribute__((swift_name("webSocketOnChatMessage")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketOnPoll __attribute__((swift_name("webSocketOnPoll")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketOnPolls __attribute__((swift_name("webSocketOnPolls")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketGetPage __attribute__((swift_name("webSocketGetPage")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketKicked __attribute__((swift_name("webSocketKicked")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketStartedPresenting __attribute__((swift_name("webSocketStartedPresenting")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketStoppedPresenting __attribute__((swift_name("webSocketStoppedPresenting")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerStartedPresenting __attribute__((swift_name("webSocketPeerStartedPresenting")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerStoppedPresenting __attribute__((swift_name("webSocketPeerStoppedPresenting")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerAddedToStage __attribute__((swift_name("webSocketPeerAddedToStage")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerRejectedToJoinStage __attribute__((swift_name("webSocketPeerRejectedToJoinStage")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPeerRemovedFromStage __attribute__((swift_name("webSocketPeerRemovedFromStage")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketRequestToJoinStagePeerAdded __attribute__((swift_name("webSocketRequestToJoinStagePeerAdded")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketRequestToJoinStageAccepted __attribute__((swift_name("webSocketRequestToJoinStageAccepted")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPluginEnabled __attribute__((swift_name("webSocketPluginEnabled")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPluginDisabled __attribute__((swift_name("webSocketPluginDisabled")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPluginEvent __attribute__((swift_name("webSocketPluginEvent")));
@property (class, readonly) DOSCInboundMeetingEventType *webSocketPluginData __attribute__((swift_name("webSocketPluginData")));
+ (DOSCKotlinArray<DOSCInboundMeetingEventType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutboundMeetingEventType")))
@interface DOSCOutboundMeetingEventType : DOSCKotlinEnum<DOSCOutboundMeetingEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCOutboundMeetingEventType *getRoomState __attribute__((swift_name("getRoomState")));
@property (class, readonly) DOSCOutboundMeetingEventType *getRouterRtpCapabilities __attribute__((swift_name("getRouterRtpCapabilities")));
@property (class, readonly) DOSCOutboundMeetingEventType *createWebRtcTransport __attribute__((swift_name("createWebRtcTransport")));
@property (class, readonly) DOSCOutboundMeetingEventType *joinRoom __attribute__((swift_name("joinRoom")));
@property (class, readonly) DOSCOutboundMeetingEventType *connectWebRtcTransport __attribute__((swift_name("connectWebRtcTransport")));
@property (class, readonly) DOSCOutboundMeetingEventType *produce __attribute__((swift_name("produce")));
@property (class, readonly) DOSCOutboundMeetingEventType *muteVideo __attribute__((swift_name("muteVideo")));
@property (class, readonly) DOSCOutboundMeetingEventType *muteSelfAudio __attribute__((swift_name("muteSelfAudio")));
@property (class, readonly) DOSCOutboundMeetingEventType *unMuteSelfAudio __attribute__((swift_name("unMuteSelfAudio")));
@property (class, readonly) DOSCOutboundMeetingEventType *getChatMessages __attribute__((swift_name("getChatMessages")));
@property (class, readonly) DOSCOutboundMeetingEventType *sendChatMessage __attribute__((swift_name("sendChatMessage")));
@property (class, readonly) DOSCOutboundMeetingEventType *votePoll __attribute__((swift_name("votePoll")));
@property (class, readonly) DOSCOutboundMeetingEventType *getPolls __attribute__((swift_name("getPolls")));
@property (class, readonly) DOSCOutboundMeetingEventType *theNewPoll __attribute__((swift_name("theNewPoll")));
@property (class, readonly) DOSCOutboundMeetingEventType *getPage __attribute__((swift_name("getPage")));
@property (class, readonly) DOSCOutboundMeetingEventType *muteAllVideo __attribute__((swift_name("muteAllVideo")));
@property (class, readonly) DOSCOutboundMeetingEventType *muteAllAudio __attribute__((swift_name("muteAllAudio")));
@property (class, readonly) DOSCOutboundMeetingEventType *kickAll __attribute__((swift_name("kickAll")));
@property (class, readonly) DOSCOutboundMeetingEventType *mutePeerAudio __attribute__((swift_name("mutePeerAudio")));
@property (class, readonly) DOSCOutboundMeetingEventType *mutePeerVideo __attribute__((swift_name("mutePeerVideo")));
@property (class, readonly) DOSCOutboundMeetingEventType *kickPeer __attribute__((swift_name("kickPeer")));
@property (class, readonly) DOSCOutboundMeetingEventType *addRoomPlugin __attribute__((swift_name("addRoomPlugin")));
@property (class, readonly) DOSCOutboundMeetingEventType *removeRoomPlugin __attribute__((swift_name("removeRoomPlugin")));
@property (class, readonly) DOSCOutboundMeetingEventType *pinParticipant __attribute__((swift_name("pinParticipant")));
@property (class, readonly) DOSCOutboundMeetingEventType *startPresenting __attribute__((swift_name("startPresenting")));
@property (class, readonly) DOSCOutboundMeetingEventType *stopPresenting __attribute__((swift_name("stopPresenting")));
@property (class, readonly) DOSCOutboundMeetingEventType *acceptPresentingRequest __attribute__((swift_name("acceptPresentingRequest")));
@property (class, readonly) DOSCOutboundMeetingEventType *rejectPresentingRequest __attribute__((swift_name("rejectPresentingRequest")));
@property (class, readonly) DOSCOutboundMeetingEventType *removePeerFromStage __attribute__((swift_name("removePeerFromStage")));
@property (class, readonly) DOSCOutboundMeetingEventType *requestToJoinStage __attribute__((swift_name("requestToJoinStage")));
@property (class, readonly) DOSCOutboundMeetingEventType *acceptWaitlistRequest __attribute__((swift_name("acceptWaitlistRequest")));
@property (class, readonly) DOSCOutboundMeetingEventType *rejectWaitlistRequest __attribute__((swift_name("rejectWaitlistRequest")));
+ (DOSCKotlinArray<DOSCOutboundMeetingEventType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("BasePayloadModel")))
@interface DOSCBasePayloadModel : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InboundMeetingEvent")))
@interface DOSCInboundMeetingEvent : DOSCBase
- (instancetype)initWithEventType:(DOSCInboundMeetingEventType *)eventType payload:(DOSCBasePayloadModel *)payload __attribute__((swift_name("init(eventType:payload:)"))) __attribute__((objc_designated_initializer));
- (DOSCInboundMeetingEventType *)component1 __attribute__((swift_name("component1()")));
- (DOSCBasePayloadModel *)component2 __attribute__((swift_name("component2()")));
- (DOSCInboundMeetingEvent *)doCopyEventType:(DOSCInboundMeetingEventType *)eventType payload:(DOSCBasePayloadModel *)payload __attribute__((swift_name("doCopy(eventType:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCInboundMeetingEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) DOSCBasePayloadModel *payload __attribute__((swift_name("payload")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutboundMeetingEvents")))
@interface DOSCOutboundMeetingEvents : DOSCKotlinEnum<DOSCOutboundMeetingEvents *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCOutboundMeetingEvents *sendMessage __attribute__((swift_name("sendMessage")));
+ (DOSCKotlinArray<DOSCOutboundMeetingEvents *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseModel")))
@interface DOSCResponseModel : DOSCBase
- (instancetype)initWithType:(NSString *)type payload:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("init(type:payload:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCResponseModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)component2 __attribute__((swift_name("component2()")));
- (DOSCResponseModel *)doCopyType:(NSString *)type payload:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("doCopy(type:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *payload __attribute__((swift_name("payload")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseModel.Companion")))
@interface DOSCResponseModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCResponseModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerAppData")))
@interface DOSCConsumerAppData : DOSCBase
- (instancetype)initWithScreenShare:(DOSCBoolean * _Nullable)screenShare peerId:(NSString *)peerId __attribute__((swift_name("init(screenShare:peerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCConsumerAppDataCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCConsumerAppData *)doCopyScreenShare:(DOSCBoolean * _Nullable)screenShare peerId:(NSString *)peerId __attribute__((swift_name("doCopy(screenShare:peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *peerId __attribute__((swift_name("peerId")));
@property (readonly) DOSCBoolean * _Nullable screenShare __attribute__((swift_name("screenShare")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerAppData.Companion")))
@interface DOSCConsumerAppDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCConsumerAppDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerRtpParameters")))
@interface DOSCConsumerRtpParameters : DOSCBase
- (instancetype)initWithCodecs:(NSArray<DOSCCodec *> * _Nullable)codecs headerExtensions:(NSArray<DOSCHeaderExtension *> * _Nullable)headerExtensions encodings:(NSArray<DOSCEncodings *> * _Nullable)encodings rtcp:(DOSCRtcp * _Nullable)rtcp mid:(NSString * _Nullable)mid __attribute__((swift_name("init(codecs:headerExtensions:encodings:rtcp:mid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCConsumerRtpParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<DOSCCodec *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCHeaderExtension *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<DOSCEncodings *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCRtcp * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCConsumerRtpParameters *)doCopyCodecs:(NSArray<DOSCCodec *> * _Nullable)codecs headerExtensions:(NSArray<DOSCHeaderExtension *> * _Nullable)headerExtensions encodings:(NSArray<DOSCEncodings *> * _Nullable)encodings rtcp:(DOSCRtcp * _Nullable)rtcp mid:(NSString * _Nullable)mid __attribute__((swift_name("doCopy(codecs:headerExtensions:encodings:rtcp:mid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCCodec *> * _Nullable codecs __attribute__((swift_name("codecs")));
@property (readonly) NSArray<DOSCEncodings *> * _Nullable encodings __attribute__((swift_name("encodings")));
@property (readonly) NSArray<DOSCHeaderExtension *> * _Nullable headerExtensions __attribute__((swift_name("headerExtensions")));
@property (readonly) NSString * _Nullable mid __attribute__((swift_name("mid")));
@property (readonly) DOSCRtcp * _Nullable rtcp __attribute__((swift_name("rtcp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumerRtpParameters.Companion")))
@interface DOSCConsumerRtpParametersCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCConsumerRtpParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface DOSCDevice : DOSCBase
- (instancetype)initWithIsMobile:(BOOL)isMobile sdkName:(NSString * _Nullable)sdkName browserName:(NSString * _Nullable)browserName osName:(NSString * _Nullable)osName browserVersion:(NSString * _Nullable)browserVersion osVersionName:(NSString * _Nullable)osVersionName engineName:(NSString * _Nullable)engineName __attribute__((swift_name("init(isMobile:sdkName:browserName:osName:browserVersion:osVersionName:engineName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCDeviceCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCDevice *)doCopyIsMobile:(BOOL)isMobile sdkName:(NSString * _Nullable)sdkName browserName:(NSString * _Nullable)browserName osName:(NSString * _Nullable)osName browserVersion:(NSString * _Nullable)browserVersion osVersionName:(NSString * _Nullable)osVersionName engineName:(NSString * _Nullable)engineName __attribute__((swift_name("doCopy(isMobile:sdkName:browserName:osName:browserVersion:osVersionName:engineName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable browserName __attribute__((swift_name("browserName")));
@property NSString * _Nullable browserVersion __attribute__((swift_name("browserVersion")));
@property NSString * _Nullable engineName __attribute__((swift_name("engineName")));
@property BOOL isMobile __attribute__((swift_name("isMobile")));
@property NSString * _Nullable osName __attribute__((swift_name("osName")));
@property NSString * _Nullable osVersionName __attribute__((swift_name("osVersionName")));
@property NSString * _Nullable sdkName __attribute__((swift_name("sdkName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device.Companion")))
@interface DOSCDeviceCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDeviceCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Encodings")))
@interface DOSCEncodings : DOSCBase
- (instancetype)initWithSsrc:(DOSCInt * _Nullable)ssrc rtx:(DOSCRtx * _Nullable)rtx scalabilityMode:(NSString * _Nullable)scalabilityMode __attribute__((swift_name("init(ssrc:rtx:scalabilityMode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCEncodingsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCRtx * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCEncodings *)doCopySsrc:(DOSCInt * _Nullable)ssrc rtx:(DOSCRtx * _Nullable)rtx scalabilityMode:(NSString * _Nullable)scalabilityMode __attribute__((swift_name("doCopy(ssrc:rtx:scalabilityMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCRtx * _Nullable rtx __attribute__((swift_name("rtx")));
@property (readonly) NSString * _Nullable scalabilityMode __attribute__((swift_name("scalabilityMode")));
@property (readonly) DOSCInt * _Nullable ssrc __attribute__((swift_name("ssrc")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Encodings.Companion")))
@interface DOSCEncodingsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCEncodingsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerFlags")))
@interface DOSCMeetingPeerFlags : DOSCBase
- (instancetype)initWithHiddenParticipant:(DOSCBoolean * _Nullable)hiddenParticipant recordere:(DOSCBoolean * _Nullable)recordere __attribute__((swift_name("init(hiddenParticipant:recordere:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMeetingPeerFlagsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCMeetingPeerFlags *)doCopyHiddenParticipant:(DOSCBoolean * _Nullable)hiddenParticipant recordere:(DOSCBoolean * _Nullable)recordere __attribute__((swift_name("doCopy(hiddenParticipant:recordere:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property DOSCBoolean * _Nullable recordere __attribute__((swift_name("recordere")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerFlags.Companion")))
@interface DOSCMeetingPeerFlagsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMeetingPeerFlagsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerMetadata")))
@interface DOSCMeetingPeerMetadata : DOSCBase
- (instancetype)initWithViewType:(NSString * _Nullable)viewType __attribute__((swift_name("init(viewType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMeetingPeerMetadataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCMeetingPeerMetadata *)doCopyViewType:(NSString * _Nullable)viewType __attribute__((swift_name("doCopy(viewType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable viewType __attribute__((swift_name("viewType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingPeerMetadata.Companion")))
@interface DOSCMeetingPeerMetadataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMeetingPeerMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtcp")))
@interface DOSCRtcp : DOSCBase
- (instancetype)initWithCname:(NSString * _Nullable)cname reducedSize:(DOSCBoolean * _Nullable)reducedSize mux:(DOSCBoolean * _Nullable)mux __attribute__((swift_name("init(cname:reducedSize:mux:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRtcpCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCRtcp *)doCopyCname:(NSString * _Nullable)cname reducedSize:(DOSCBoolean * _Nullable)reducedSize mux:(DOSCBoolean * _Nullable)mux __attribute__((swift_name("doCopy(cname:reducedSize:mux:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cname __attribute__((swift_name("cname")));
@property (readonly) DOSCBoolean * _Nullable mux __attribute__((swift_name("mux")));
@property (readonly) DOSCBoolean * _Nullable reducedSize __attribute__((swift_name("reducedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtcp.Companion")))
@interface DOSCRtcpCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRtcpCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtx")))
@interface DOSCRtx : DOSCBase
- (instancetype)initWithSsrc:(DOSCInt * _Nullable)ssrc __attribute__((swift_name("init(ssrc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRtxCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) DOSCInt * _Nullable ssrc __attribute__((swift_name("ssrc")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rtx.Companion")))
@interface DOSCRtxCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRtxCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketActiveSpeakerModel")))
@interface DOSCWebSocketActiveSpeakerModel : DOSCBasePayloadModel
- (instancetype)initWithPeerId:(NSString *)peerId volume:(int32_t)volume __attribute__((swift_name("init(peerId:volume:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketActiveSpeakerModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DOSCWebSocketActiveSpeakerModel *)doCopyPeerId:(NSString *)peerId volume:(int32_t)volume __attribute__((swift_name("doCopy(peerId:volume:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *peerId __attribute__((swift_name("peerId")));
@property (readonly) int32_t volume __attribute__((swift_name("volume")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketActiveSpeakerModel.Companion")))
@interface DOSCWebSocketActiveSpeakerModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketActiveSpeakerModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessage")))
@interface DOSCWebSocketChatMessage : DOSCBasePayloadModel
- (instancetype)initWithMessage:(NSString * _Nullable)message userId:(NSString *)userId displayName:(NSString *)displayName type:(int32_t)type link:(NSString * _Nullable)link time:(DOSCLong * _Nullable)time __attribute__((swift_name("init(message:userId:displayName:type:link:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketChatMessageCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCLong * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCWebSocketChatMessage *)doCopyMessage:(NSString * _Nullable)message userId:(NSString *)userId displayName:(NSString *)displayName type:(int32_t)type link:(NSString * _Nullable)link time:(DOSCLong * _Nullable)time __attribute__((swift_name("doCopy(message:userId:displayName:type:link:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable link __attribute__((swift_name("link")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) DOSCLong * _Nullable time __attribute__((swift_name("time")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessage.Companion")))
@interface DOSCWebSocketChatMessageCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketChatMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessagesModel")))
@interface DOSCWebSocketChatMessagesModel : DOSCBasePayloadModel
- (instancetype)initWithMessages:(NSArray<DOSCWebSocketChatMessage *> * _Nullable)messages __attribute__((swift_name("init(messages:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketChatMessagesModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<DOSCWebSocketChatMessage *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketChatMessagesModel *)doCopyMessages:(NSArray<DOSCWebSocketChatMessage *> * _Nullable)messages __attribute__((swift_name("doCopy(messages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCWebSocketChatMessage *> * _Nullable messages __attribute__((swift_name("messages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketChatMessagesModel.Companion")))
@interface DOSCWebSocketChatMessagesModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketChatMessagesModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConnectTransportModel")))
@interface DOSCWebSocketConnectTransportModel : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id producing:(DOSCBoolean * _Nullable)producing __attribute__((swift_name("init(id:producing:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketConnectTransportModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCWebSocketConnectTransportModel *)doCopyId:(NSString * _Nullable)id producing:(DOSCBoolean * _Nullable)producing __attribute__((swift_name("doCopy(id:producing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) DOSCBoolean * _Nullable producing __attribute__((swift_name("producing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConnectTransportModel.Companion")))
@interface DOSCWebSocketConnectTransportModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketConnectTransportModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerClosedModel")))
@interface DOSCWebSocketConsumerClosedModel : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketConsumerClosedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketConsumerClosedModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerClosedModel.Companion")))
@interface DOSCWebSocketConsumerClosedModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketConsumerClosedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerModel")))
@interface DOSCWebSocketConsumerModel : DOSCBasePayloadModel
- (instancetype)initWithPeerId:(NSString * _Nullable)peerId producerId:(NSString * _Nullable)producerId id:(NSString * _Nullable)id kind:(NSString * _Nullable)kind rtpParameters:(DOSCConsumerRtpParameters * _Nullable)rtpParameters type:(NSString * _Nullable)type appData:(DOSCConsumerAppData * _Nullable)appData remotelyPaused:(DOSCBoolean * _Nullable)remotelyPaused producerPaused:(DOSCBoolean * _Nullable)producerPaused __attribute__((swift_name("init(peerId:producerId:id:kind:rtpParameters:type:appData:remotelyPaused:producerPaused:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketConsumerModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCConsumerRtpParameters * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCConsumerAppData * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DOSCBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DOSCWebSocketConsumerModel *)doCopyPeerId:(NSString * _Nullable)peerId producerId:(NSString * _Nullable)producerId id:(NSString * _Nullable)id kind:(NSString * _Nullable)kind rtpParameters:(DOSCConsumerRtpParameters * _Nullable)rtpParameters type:(NSString * _Nullable)type appData:(DOSCConsumerAppData * _Nullable)appData remotelyPaused:(DOSCBoolean * _Nullable)remotelyPaused producerPaused:(DOSCBoolean * _Nullable)producerPaused __attribute__((swift_name("doCopy(peerId:producerId:id:kind:rtpParameters:type:appData:remotelyPaused:producerPaused:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCConsumerAppData * _Nullable appData __attribute__((swift_name("appData")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable kind __attribute__((swift_name("kind")));
@property NSString * _Nullable peerId __attribute__((swift_name("peerId")));
@property NSString * _Nullable producerId __attribute__((swift_name("producerId")));
@property (readonly) DOSCBoolean * _Nullable producerPaused __attribute__((swift_name("producerPaused")));
@property (readonly) DOSCBoolean * _Nullable remotelyPaused __attribute__((swift_name("remotelyPaused")));
@property DOSCConsumerRtpParameters * _Nullable rtpParameters __attribute__((swift_name("rtpParameters")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerModel.Companion")))
@interface DOSCWebSocketConsumerModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketConsumerModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerResumedModel")))
@interface DOSCWebSocketConsumerResumedModel : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketConsumerResumedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketConsumerResumedModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketConsumerResumedModel.Companion")))
@interface DOSCWebSocketConsumerResumedModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketConsumerResumedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketEmptyModel")))
@interface DOSCWebSocketEmptyModel : DOSCBasePayloadModel
- (instancetype)initWithAny:(NSString * _Nullable)any __attribute__((swift_name("init(any:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketEmptyModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketEmptyModel *)doCopyAny:(NSString * _Nullable)any __attribute__((swift_name("doCopy(any:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable any __attribute__((swift_name("any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketEmptyModel.Companion")))
@interface DOSCWebSocketEmptyModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketEmptyModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketGetPageModel")))
@interface DOSCWebSocketGetPageModel : DOSCBasePayloadModel
- (instancetype)initWithPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("init(peerIds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketGetPageModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketGetPageModel *)doCopyPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("doCopy(peerIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable peerIds __attribute__((swift_name("peerIds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketGetPageModel.Companion")))
@interface DOSCWebSocketGetPageModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketGetPageModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketMeetingPeerUser")))
@interface DOSCWebSocketMeetingPeerUser : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name device:(DOSCDevice * _Nullable)device picture:(NSString * _Nullable)picture isHost:(DOSCBoolean * _Nullable)isHost webinarHiddenParticipant:(DOSCBoolean * _Nullable)webinarHiddenParticipant flags:(DOSCMeetingPeerFlags * _Nullable)flags clientSpecificId:(NSString * _Nullable)clientSpecificId audioMuted:(DOSCBoolean * _Nullable)audioMuted hiddenParticipant:(DOSCBoolean * _Nullable)hiddenParticipant __attribute__((swift_name("init(id:userId:name:device:picture:isHost:webinarHiddenParticipant:flags:clientSpecificId:audioMuted:hiddenParticipant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketMeetingPeerUserCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component10 __attribute__((swift_name("component10()")));
- (DOSCBoolean * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCDevice * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCMeetingPeerFlags * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DOSCWebSocketMeetingPeerUser *)doCopyId:(NSString * _Nullable)id userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name device:(DOSCDevice * _Nullable)device picture:(NSString * _Nullable)picture isHost:(DOSCBoolean * _Nullable)isHost webinarHiddenParticipant:(DOSCBoolean * _Nullable)webinarHiddenParticipant flags:(DOSCMeetingPeerFlags * _Nullable)flags clientSpecificId:(NSString * _Nullable)clientSpecificId audioMuted:(DOSCBoolean * _Nullable)audioMuted hiddenParticipant:(DOSCBoolean * _Nullable)hiddenParticipant __attribute__((swift_name("doCopy(id:userId:name:device:picture:isHost:webinarHiddenParticipant:flags:clientSpecificId:audioMuted:hiddenParticipant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable audioMuted __attribute__((swift_name("audioMuted")));
@property NSString * _Nullable clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property DOSCDevice * _Nullable device __attribute__((swift_name("device")));
@property DOSCMeetingPeerFlags * _Nullable flags __attribute__((swift_name("flags")));
@property DOSCBoolean * _Nullable hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property DOSCBoolean * _Nullable isHost __attribute__((swift_name("isHost")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable picture __attribute__((swift_name("picture")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property DOSCBoolean * _Nullable webinarHiddenParticipant __attribute__((swift_name("webinarHiddenParticipant")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketMeetingPeerUser.Companion")))
@interface DOSCWebSocketMeetingPeerUserCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketMeetingPeerUserCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerLeftModel")))
@interface DOSCWebSocketPeerLeftModel : DOSCBasePayloadModel
- (instancetype)initWithPeerId:(NSString *)peerId __attribute__((swift_name("init(peerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketPeerLeftModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketPeerLeftModel *)doCopyPeerId:(NSString *)peerId __attribute__((swift_name("doCopy(peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *peerId __attribute__((swift_name("peerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerLeftModel.Companion")))
@interface DOSCWebSocketPeerLeftModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPeerLeftModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerMuteModel")))
@interface DOSCWebSocketPeerMuteModel : DOSCBasePayloadModel
- (instancetype)initWithPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("init(peerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketPeerMuteModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketPeerMuteModel *)doCopyPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("doCopy(peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable peerId __attribute__((swift_name("peerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerMuteModel.Companion")))
@interface DOSCWebSocketPeerMuteModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPeerMuteModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerPinnedModel")))
@interface DOSCWebSocketPeerPinnedModel : DOSCBasePayloadModel
- (instancetype)initWithPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("init(peerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketPeerPinnedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketPeerPinnedModel *)doCopyPeerId:(NSString * _Nullable)peerId __attribute__((swift_name("doCopy(peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable peerId __attribute__((swift_name("peerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPeerPinnedModel.Companion")))
@interface DOSCWebSocketPeerPinnedModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPeerPinnedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPluginDisabled")))
@interface DOSCWebSocketPluginDisabled : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketPluginDisabledCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketPluginDisabled *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPluginDisabled.Companion")))
@interface DOSCWebSocketPluginDisabledCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPluginDisabledCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPluginEnabled")))
@interface DOSCWebSocketPluginEnabled : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id enabledBy:(NSString * _Nullable)enabledBy __attribute__((swift_name("init(id:enabledBy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketPluginEnabledCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCWebSocketPluginEnabled *)doCopyId:(NSString * _Nullable)id enabledBy:(NSString * _Nullable)enabledBy __attribute__((swift_name("doCopy(id:enabledBy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable enabledBy __attribute__((swift_name("enabledBy")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPluginEnabled.Companion")))
@interface DOSCWebSocketPluginEnabledCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPluginEnabledCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPluginEvent")))
@interface DOSCWebSocketPluginEvent : DOSCBasePayloadModel
- (instancetype)initWithPayload:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketPluginEvent *)doCopyPayload:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("doCopy(payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *payload __attribute__((swift_name("payload")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPoll")))
@interface DOSCWebSocketPoll : DOSCBase
- (instancetype)initWithId:(NSString *)id options:(NSArray<DOSCWebSocketPollOption *> *)options question:(NSString *)question anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy __attribute__((swift_name("init(id:options:question:anonymous:hideVotes:createdBy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCWebSocketPollCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCWebSocketPollOption *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (DOSCWebSocketPoll *)doCopyId:(NSString *)id options:(NSArray<DOSCWebSocketPollOption *> *)options question:(NSString *)question anonymous:(BOOL)anonymous hideVotes:(BOOL)hideVotes createdBy:(NSString *)createdBy __attribute__((swift_name("doCopy(id:options:question:anonymous:hideVotes:createdBy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL anonymous __attribute__((swift_name("anonymous")));
@property (readonly) NSString *createdBy __attribute__((swift_name("createdBy")));
@property (readonly) BOOL hideVotes __attribute__((swift_name("hideVotes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<DOSCWebSocketPollOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *question __attribute__((swift_name("question")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPoll.Companion")))
@interface DOSCWebSocketPollCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPollCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollModel")))
@interface DOSCWebSocketPollModel : DOSCBasePayloadModel
- (instancetype)initWithPoll:(DOSCWebSocketPoll *)poll __attribute__((swift_name("init(poll:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketPollModelCompanion *companion __attribute__((swift_name("companion")));
- (DOSCWebSocketPoll *)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketPollModel *)doCopyPoll:(DOSCWebSocketPoll *)poll __attribute__((swift_name("doCopy(poll:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCWebSocketPoll *poll __attribute__((swift_name("poll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollModel.Companion")))
@interface DOSCWebSocketPollModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPollModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollOption")))
@interface DOSCWebSocketPollOption : DOSCBase
- (instancetype)initWithText:(NSString *)text votes:(NSArray<DOSCWebSocketPollVote *> *)votes count:(int32_t)count __attribute__((swift_name("init(text:votes:count:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCWebSocketPollOptionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCWebSocketPollVote *> *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DOSCWebSocketPollOption *)doCopyText:(NSString *)text votes:(NSArray<DOSCWebSocketPollVote *> *)votes count:(int32_t)count __attribute__((swift_name("doCopy(text:votes:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSArray<DOSCWebSocketPollVote *> *votes __attribute__((swift_name("votes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollOption.Companion")))
@interface DOSCWebSocketPollOptionCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPollOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollVote")))
@interface DOSCWebSocketPollVote : DOSCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCWebSocketPollVoteCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCWebSocketPollVote *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollVote.Companion")))
@interface DOSCWebSocketPollVoteCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPollVoteCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollsModel")))
@interface DOSCWebSocketPollsModel : DOSCBasePayloadModel
- (instancetype)initWithPolls:(NSDictionary<NSString *, DOSCWebSocketPoll *> * _Nullable)polls __attribute__((swift_name("init(polls:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketPollsModelCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, DOSCWebSocketPoll *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketPollsModel *)doCopyPolls:(NSDictionary<NSString *, DOSCWebSocketPoll *> * _Nullable)polls __attribute__((swift_name("doCopy(polls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, DOSCWebSocketPoll *> * _Nullable polls __attribute__((swift_name("polls")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketPollsModel.Companion")))
@interface DOSCWebSocketPollsModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketPollsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerClosedModel")))
@interface DOSCWebSocketProducerClosedModel : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketProducerClosedModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketProducerClosedModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerClosedModel.Companion")))
@interface DOSCWebSocketProducerClosedModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketProducerClosedModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerConnectModel")))
@interface DOSCWebSocketProducerConnectModel : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketProducerConnectModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketProducerConnectModel *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketProducerConnectModel.Companion")))
@interface DOSCWebSocketProducerConnectModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketProducerConnectModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketSelectedPeersModel")))
@interface DOSCWebSocketSelectedPeersModel : DOSCBasePayloadModel
- (instancetype)initWithPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("init(peerIds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketSelectedPeersModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketSelectedPeersModel *)doCopyPeerIds:(NSArray<NSString *> * _Nullable)peerIds __attribute__((swift_name("doCopy(peerIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable peerIds __attribute__((swift_name("peerIds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketSelectedPeersModel.Companion")))
@interface DOSCWebSocketSelectedPeersModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketSelectedPeersModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAccepted")))
@interface DOSCWebSocketWaitlistPeerAccepted : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketWaitlistPeerAcceptedCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCWebSocketWaitlistPeerAccepted *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAccepted.Companion")))
@interface DOSCWebSocketWaitlistPeerAcceptedCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketWaitlistPeerAcceptedCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAdded")))
@interface DOSCWebSocketWaitlistPeerAdded : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketWaitlistPeerAddedCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCWebSocketWaitlistPeerAdded *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerAdded.Companion")))
@interface DOSCWebSocketWaitlistPeerAddedCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketWaitlistPeerAddedCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerClosed")))
@interface DOSCWebSocketWaitlistPeerClosed : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketWaitlistPeerClosedCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketWaitlistPeerClosed *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerClosed.Companion")))
@interface DOSCWebSocketWaitlistPeerClosedCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketWaitlistPeerClosedCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerRejected")))
@interface DOSCWebSocketWaitlistPeerRejected : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketWaitlistPeerRejectedCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCWebSocketWaitlistPeerRejected *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWaitlistPeerRejected.Companion")))
@interface DOSCWebSocketWaitlistPeerRejectedCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketWaitlistPeerRejectedCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWebinarPresentRequestAccepted")))
@interface DOSCWebSocketWebinarPresentRequestAccepted : DOSCBasePayloadModel
- (instancetype)initWithRequestToJoinType:(NSString *)requestToJoinType __attribute__((swift_name("init(requestToJoinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketWebinarPresentRequestAcceptedCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketWebinarPresentRequestAccepted *)doCopyRequestToJoinType:(NSString *)requestToJoinType __attribute__((swift_name("doCopy(requestToJoinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *requestToJoinType __attribute__((swift_name("requestToJoinType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWebinarPresentRequestAccepted.Companion")))
@interface DOSCWebSocketWebinarPresentRequestAcceptedCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketWebinarPresentRequestAcceptedCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWebinarRequestToJoinPeerAdded")))
@interface DOSCWebSocketWebinarRequestToJoinPeerAdded : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString *)id name:(NSString *)name requestToJoinType:(NSString *)requestToJoinType __attribute__((swift_name("init(id:name:requestToJoinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketWebinarRequestToJoinPeerAddedCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DOSCWebSocketWebinarRequestToJoinPeerAdded *)doCopyId:(NSString *)id name:(NSString *)name requestToJoinType:(NSString *)requestToJoinType __attribute__((swift_name("doCopy(id:name:requestToJoinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *requestToJoinType __attribute__((swift_name("requestToJoinType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWebinarRequestToJoinPeerAdded.Companion")))
@interface DOSCWebSocketWebinarRequestToJoinPeerAddedCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketWebinarRequestToJoinPeerAddedCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWebinarStagePeer")))
@interface DOSCWebSocketWebinarStagePeer : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketWebinarStagePeerCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketWebinarStagePeer *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketWebinarStagePeer.Companion")))
@interface DOSCWebSocketWebinarStagePeerCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketWebinarStagePeerCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Codec")))
@interface DOSCCodec : DOSCBase
- (instancetype)initWithKind:(NSString * _Nullable)kind mimeType:(NSString * _Nullable)mimeType payloadType:(DOSCInt * _Nullable)payloadType clockRate:(DOSCInt * _Nullable)clockRate channels:(DOSCInt * _Nullable)channels rtcpFeedback:(NSArray<DOSCCodecRtcpFeedback *> * _Nullable)rtcpFeedback parameters:(DOSCCodecParameters * _Nullable)parameters preferredPayloadType:(DOSCInt * _Nullable)preferredPayloadType __attribute__((swift_name("init(kind:mimeType:payloadType:clockRate:channels:rtcpFeedback:parameters:preferredPayloadType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCodecCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<DOSCCodecRtcpFeedback *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCCodecParameters * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DOSCCodec *)doCopyKind:(NSString * _Nullable)kind mimeType:(NSString * _Nullable)mimeType payloadType:(DOSCInt * _Nullable)payloadType clockRate:(DOSCInt * _Nullable)clockRate channels:(DOSCInt * _Nullable)channels rtcpFeedback:(NSArray<DOSCCodecRtcpFeedback *> * _Nullable)rtcpFeedback parameters:(DOSCCodecParameters * _Nullable)parameters preferredPayloadType:(DOSCInt * _Nullable)preferredPayloadType __attribute__((swift_name("doCopy(kind:mimeType:payloadType:clockRate:channels:rtcpFeedback:parameters:preferredPayloadType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCInt * _Nullable channels __attribute__((swift_name("channels")));
@property DOSCInt * _Nullable clockRate __attribute__((swift_name("clockRate")));
@property NSString * _Nullable kind __attribute__((swift_name("kind")));
@property NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@property DOSCCodecParameters * _Nullable parameters __attribute__((swift_name("parameters")));
@property DOSCInt * _Nullable payloadType __attribute__((swift_name("payloadType")));
@property DOSCInt * _Nullable preferredPayloadType __attribute__((swift_name("preferredPayloadType")));
@property NSArray<DOSCCodecRtcpFeedback *> * _Nullable rtcpFeedback __attribute__((swift_name("rtcpFeedback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Codec.Companion")))
@interface DOSCCodecCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCodecCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecParameters")))
@interface DOSCCodecParameters : DOSCBase
- (instancetype)initWithXGoogleStartBitrate:(DOSCInt * _Nullable)xGoogleStartBitrate apt:(DOSCInt * _Nullable)apt profileId:(DOSCInt * _Nullable)profileId packetizationMode:(DOSCInt * _Nullable)packetizationMode levelAsymmetryAllowed:(DOSCInt * _Nullable)levelAsymmetryAllowed profileLevelId:(NSString * _Nullable)profileLevelId __attribute__((swift_name("init(xGoogleStartBitrate:apt:profileId:packetizationMode:levelAsymmetryAllowed:profileLevelId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCodecParametersCompanion *companion __attribute__((swift_name("companion")));
- (DOSCInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCCodecParameters *)doCopyXGoogleStartBitrate:(DOSCInt * _Nullable)xGoogleStartBitrate apt:(DOSCInt * _Nullable)apt profileId:(DOSCInt * _Nullable)profileId packetizationMode:(DOSCInt * _Nullable)packetizationMode levelAsymmetryAllowed:(DOSCInt * _Nullable)levelAsymmetryAllowed profileLevelId:(NSString * _Nullable)profileLevelId __attribute__((swift_name("doCopy(xGoogleStartBitrate:apt:profileId:packetizationMode:levelAsymmetryAllowed:profileLevelId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCInt * _Nullable apt __attribute__((swift_name("apt")));
@property DOSCInt * _Nullable levelAsymmetryAllowed __attribute__((swift_name("levelAsymmetryAllowed")));
@property DOSCInt * _Nullable packetizationMode __attribute__((swift_name("packetizationMode")));
@property DOSCInt * _Nullable profileId __attribute__((swift_name("profileId")));
@property NSString * _Nullable profileLevelId __attribute__((swift_name("profileLevelId")));
@property DOSCInt * _Nullable xGoogleStartBitrate __attribute__((swift_name("xGoogleStartBitrate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecParameters.Companion")))
@interface DOSCCodecParametersCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCodecParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecRtcpFeedback")))
@interface DOSCCodecRtcpFeedback : DOSCBase
- (instancetype)initWithType:(NSString * _Nullable)type parameter:(NSString * _Nullable)parameter __attribute__((swift_name("init(type:parameter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCodecRtcpFeedbackCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCCodecRtcpFeedback *)doCopyType:(NSString * _Nullable)type parameter:(NSString * _Nullable)parameter __attribute__((swift_name("doCopy(type:parameter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable parameter __attribute__((swift_name("parameter")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodecRtcpFeedback.Companion")))
@interface DOSCCodecRtcpFeedbackCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCodecRtcpFeedbackCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateWebRTCTransportPayloadRequestModel")))
@interface DOSCCreateWebRTCTransportPayloadRequestModel : DOSCBase
- (instancetype)initWithForceTcp:(BOOL)forceTcp producing:(BOOL)producing consuming:(BOOL)consuming __attribute__((swift_name("init(forceTcp:producing:consuming:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCreateWebRTCTransportPayloadRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DOSCCreateWebRTCTransportPayloadRequestModel *)doCopyForceTcp:(BOOL)forceTcp producing:(BOOL)producing consuming:(BOOL)consuming __attribute__((swift_name("doCopy(forceTcp:producing:consuming:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL consuming __attribute__((swift_name("consuming")));
@property (readonly) BOOL forceTcp __attribute__((swift_name("forceTcp")));
@property (readonly) BOOL producing __attribute__((swift_name("producing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateWebRTCTransportPayloadRequestModel.Companion")))
@interface DOSCCreateWebRTCTransportPayloadRequestModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCreateWebRTCTransportPayloadRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DtlsParameters")))
@interface DOSCDtlsParameters : DOSCBase
- (instancetype)initWithFingerprints:(NSArray<DOSCFingerprint *> * _Nullable)fingerprints role:(NSString * _Nullable)role __attribute__((swift_name("init(fingerprints:role:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCDtlsParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<DOSCFingerprint *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCDtlsParameters *)doCopyFingerprints:(NSArray<DOSCFingerprint *> * _Nullable)fingerprints role:(NSString * _Nullable)role __attribute__((swift_name("doCopy(fingerprints:role:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<DOSCFingerprint *> * _Nullable fingerprints __attribute__((swift_name("fingerprints")));
@property NSString * _Nullable role __attribute__((swift_name("role")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DtlsParameters.Companion")))
@interface DOSCDtlsParametersCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCDtlsParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fingerprint")))
@interface DOSCFingerprint : DOSCBase
- (instancetype)initWithAlgorithm:(NSString * _Nullable)algorithm value:(NSString * _Nullable)value __attribute__((swift_name("init(algorithm:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCFingerprintCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCFingerprint *)doCopyAlgorithm:(NSString * _Nullable)algorithm value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(algorithm:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable algorithm __attribute__((swift_name("algorithm")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fingerprint.Companion")))
@interface DOSCFingerprintCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCFingerprintCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeaderExtension")))
@interface DOSCHeaderExtension : DOSCBase
- (instancetype)initWithKind:(NSString * _Nullable)kind uri:(NSString * _Nullable)uri preferredId:(DOSCInt * _Nullable)preferredId id:(DOSCInt * _Nullable)id preferredEncrypt:(DOSCBoolean * _Nullable)preferredEncrypt encrypt:(DOSCBoolean * _Nullable)encrypt direction:(NSString * _Nullable)direction __attribute__((swift_name("init(kind:uri:preferredId:id:preferredEncrypt:encrypt:direction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCHeaderExtensionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCHeaderExtension *)doCopyKind:(NSString * _Nullable)kind uri:(NSString * _Nullable)uri preferredId:(DOSCInt * _Nullable)preferredId id:(DOSCInt * _Nullable)id preferredEncrypt:(DOSCBoolean * _Nullable)preferredEncrypt encrypt:(DOSCBoolean * _Nullable)encrypt direction:(NSString * _Nullable)direction __attribute__((swift_name("doCopy(kind:uri:preferredId:id:preferredEncrypt:encrypt:direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable direction __attribute__((swift_name("direction")));
@property DOSCBoolean * _Nullable encrypt __attribute__((swift_name("encrypt")));
@property DOSCInt * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable kind __attribute__((swift_name("kind")));
@property DOSCBoolean * _Nullable preferredEncrypt __attribute__((swift_name("preferredEncrypt")));
@property DOSCInt * _Nullable preferredId __attribute__((swift_name("preferredId")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeaderExtension.Companion")))
@interface DOSCHeaderExtensionCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCHeaderExtensionCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceCandidate")))
@interface DOSCIceCandidate : DOSCBase
- (instancetype)initWithFoundation:(NSString * _Nullable)foundation ip:(NSString * _Nullable)ip port:(DOSCInt * _Nullable)port priority:(DOSCInt * _Nullable)priority protocol:(NSString * _Nullable)protocol type:(NSString * _Nullable)type tcpType:(NSString * _Nullable)tcpType __attribute__((swift_name("init(foundation:ip:port:priority:protocol:type:tcpType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCIceCandidateCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCIceCandidate *)doCopyFoundation:(NSString * _Nullable)foundation ip:(NSString * _Nullable)ip port:(DOSCInt * _Nullable)port priority:(DOSCInt * _Nullable)priority protocol:(NSString * _Nullable)protocol type:(NSString * _Nullable)type tcpType:(NSString * _Nullable)tcpType __attribute__((swift_name("doCopy(foundation:ip:port:priority:protocol:type:tcpType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable foundation __attribute__((swift_name("foundation")));
@property NSString * _Nullable ip __attribute__((swift_name("ip")));
@property DOSCInt * _Nullable port __attribute__((swift_name("port")));
@property DOSCInt * _Nullable priority __attribute__((swift_name("priority")));
@property NSString * _Nullable protocol __attribute__((swift_name("protocol")));
@property NSString * _Nullable tcpType __attribute__((swift_name("tcpType")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceCandidate.Companion")))
@interface DOSCIceCandidateCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCIceCandidateCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceParameters")))
@interface DOSCIceParameters : DOSCBase
- (instancetype)initWithIceLite:(DOSCBoolean * _Nullable)iceLite password:(NSString * _Nullable)password usernameFragment:(NSString * _Nullable)usernameFragment __attribute__((swift_name("init(iceLite:password:usernameFragment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCIceParametersCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCIceParameters *)doCopyIceLite:(DOSCBoolean * _Nullable)iceLite password:(NSString * _Nullable)password usernameFragment:(NSString * _Nullable)usernameFragment __attribute__((swift_name("doCopy(iceLite:password:usernameFragment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable iceLite __attribute__((swift_name("iceLite")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable usernameFragment __attribute__((swift_name("usernameFragment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceParameters.Companion")))
@interface DOSCIceParametersCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCIceParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JoinRoomPayloadRequestModel")))
@interface DOSCJoinRoomPayloadRequestModel : DOSCBase
- (instancetype)initWithDevice:(DOSCDevice * _Nullable)device displayName:(NSString * _Nullable)displayName rtpCapabilities:(DOSCRouterCapabilitiesModel * _Nullable)rtpCapabilities isLegacy:(BOOL)isLegacy audioMuted:(BOOL)audioMuted __attribute__((swift_name("init(device:displayName:rtpCapabilities:isLegacy:audioMuted:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCJoinRoomPayloadRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (DOSCDevice * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCRouterCapabilitiesModel * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (DOSCJoinRoomPayloadRequestModel *)doCopyDevice:(DOSCDevice * _Nullable)device displayName:(NSString * _Nullable)displayName rtpCapabilities:(DOSCRouterCapabilitiesModel * _Nullable)rtpCapabilities isLegacy:(BOOL)isLegacy audioMuted:(BOOL)audioMuted __attribute__((swift_name("doCopy(device:displayName:rtpCapabilities:isLegacy:audioMuted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL audioMuted __attribute__((swift_name("audioMuted")));
@property DOSCDevice * _Nullable device __attribute__((swift_name("device")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property BOOL isLegacy __attribute__((swift_name("isLegacy")));
@property DOSCRouterCapabilitiesModel * _Nullable rtpCapabilities __attribute__((swift_name("rtpCapabilities")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JoinRoomPayloadRequestModel.Companion")))
@interface DOSCJoinRoomPayloadRequestModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCJoinRoomPayloadRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomState")))
@interface DOSCRoomState : DOSCBase
- (instancetype)initWithDisplayTitle:(NSString * _Nullable)displayTitle peers:(NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)peers lockedMode:(DOSCBoolean * _Nullable)lockedMode roomUUID:(NSString * _Nullable)roomUUID config:(DOSCRoomStateConfig * _Nullable)config plugins:(NSArray<DOSCRoomStatePlugin *> * _Nullable)plugins roomName:(NSString * _Nullable)roomName __attribute__((swift_name("init(displayTitle:peers:lockedMode:roomUUID:config:plugins:roomName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRoomStateCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCRoomStateConfig * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<DOSCRoomStatePlugin *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCRoomState *)doCopyDisplayTitle:(NSString * _Nullable)displayTitle peers:(NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)peers lockedMode:(DOSCBoolean * _Nullable)lockedMode roomUUID:(NSString * _Nullable)roomUUID config:(DOSCRoomStateConfig * _Nullable)config plugins:(NSArray<DOSCRoomStatePlugin *> * _Nullable)plugins roomName:(NSString * _Nullable)roomName __attribute__((swift_name("doCopy(displayTitle:peers:lockedMode:roomUUID:config:plugins:roomName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCRoomStateConfig * _Nullable config __attribute__((swift_name("config")));
@property (readonly) NSString * _Nullable displayTitle __attribute__((swift_name("displayTitle")));
@property (readonly) DOSCBoolean * _Nullable lockedMode __attribute__((swift_name("lockedMode")));
@property (readonly) NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable peers __attribute__((swift_name("peers")));
@property (readonly) NSArray<DOSCRoomStatePlugin *> * _Nullable plugins __attribute__((swift_name("plugins")));
@property (readonly) NSString * _Nullable roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString * _Nullable roomUUID __attribute__((swift_name("roomUUID")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomState.Companion")))
@interface DOSCRoomStateCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRoomStateCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateAccess")))
@interface DOSCRoomStateAccess : DOSCBase
- (instancetype)initWithMic:(NSString * _Nullable)mic webcam:(NSString * _Nullable)webcam screenShare:(NSString * _Nullable)screenShare plugins:(NSString * _Nullable)plugins __attribute__((swift_name("init(mic:webcam:screenShare:plugins:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRoomStateAccessCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCRoomStateAccess *)doCopyMic:(NSString * _Nullable)mic webcam:(NSString * _Nullable)webcam screenShare:(NSString * _Nullable)screenShare plugins:(NSString * _Nullable)plugins __attribute__((swift_name("doCopy(mic:webcam:screenShare:plugins:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable mic __attribute__((swift_name("mic")));
@property (readonly) NSString * _Nullable plugins __attribute__((swift_name("plugins")));
@property (readonly) NSString * _Nullable screenShare __attribute__((swift_name("screenShare")));
@property (readonly) NSString * _Nullable webcam __attribute__((swift_name("webcam")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateAccess.Companion")))
@interface DOSCRoomStateAccessCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRoomStateAccessCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateConfig")))
@interface DOSCRoomStateConfig : DOSCBase
- (instancetype)initWithJoinRestrictions:(NSArray<NSString *> * _Nullable)joinRestrictions access:(DOSCRoomStateAccess * _Nullable)access __attribute__((swift_name("init(joinRestrictions:access:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRoomStateConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCRoomStateAccess * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCRoomStateConfig *)doCopyJoinRestrictions:(NSArray<NSString *> * _Nullable)joinRestrictions access:(DOSCRoomStateAccess * _Nullable)access __attribute__((swift_name("doCopy(joinRestrictions:access:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCRoomStateAccess * _Nullable access __attribute__((swift_name("access")));
@property (readonly) NSArray<NSString *> * _Nullable joinRestrictions __attribute__((swift_name("joinRestrictions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStateConfig.Companion")))
@interface DOSCRoomStateConfigCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRoomStateConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStatePlugin")))
@interface DOSCRoomStatePlugin : DOSCBase
- (instancetype)initWithId:(NSString *)id staggered:(BOOL)staggered enabledBy:(NSString *)enabledBy stores:(NSArray<NSString *> *)stores aclAccessRemovedUsers:(NSArray<NSString *> *)aclAccessRemovedUsers aclAccessGrantedUsers:(NSArray<NSString *> *)aclAccessGrantedUsers aclType:(NSString *)aclType __attribute__((swift_name("init(id:staggered:enabledBy:stores:aclAccessRemovedUsers:aclAccessGrantedUsers:aclType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRoomStatePluginCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (DOSCRoomStatePlugin *)doCopyId:(NSString *)id staggered:(BOOL)staggered enabledBy:(NSString *)enabledBy stores:(NSArray<NSString *> *)stores aclAccessRemovedUsers:(NSArray<NSString *> *)aclAccessRemovedUsers aclAccessGrantedUsers:(NSArray<NSString *> *)aclAccessGrantedUsers aclType:(NSString *)aclType __attribute__((swift_name("doCopy(id:staggered:enabledBy:stores:aclAccessRemovedUsers:aclAccessGrantedUsers:aclType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *aclAccessGrantedUsers __attribute__((swift_name("aclAccessGrantedUsers")));
@property (readonly) NSArray<NSString *> *aclAccessRemovedUsers __attribute__((swift_name("aclAccessRemovedUsers")));
@property (readonly) NSString *aclType __attribute__((swift_name("aclType")));
@property (readonly) NSString *enabledBy __attribute__((swift_name("enabledBy")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL staggered __attribute__((swift_name("staggered")));
@property (readonly) NSArray<NSString *> *stores __attribute__((swift_name("stores")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomStatePlugin.Companion")))
@interface DOSCRoomStatePluginCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRoomStatePluginCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterCapabilitiesModel")))
@interface DOSCRouterCapabilitiesModel : DOSCBasePayloadModel
- (instancetype)initWithCodecs:(NSArray<DOSCCodec *> * _Nullable)codecs headerExtensions:(NSArray<DOSCHeaderExtension *> * _Nullable)headerExtensions __attribute__((swift_name("init(codecs:headerExtensions:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCRouterCapabilitiesModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<DOSCCodec *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCHeaderExtension *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCRouterCapabilitiesModel *)doCopyCodecs:(NSArray<DOSCCodec *> * _Nullable)codecs headerExtensions:(NSArray<DOSCHeaderExtension *> * _Nullable)headerExtensions __attribute__((swift_name("doCopy(codecs:headerExtensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCCodec *> * _Nullable codecs __attribute__((swift_name("codecs")));
@property (readonly) NSArray<DOSCHeaderExtension *> * _Nullable headerExtensions __attribute__((swift_name("headerExtensions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouterCapabilitiesModel.Companion")))
@interface DOSCRouterCapabilitiesModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRouterCapabilitiesModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebRtcCreateTransportModel")))
@interface DOSCWebRtcCreateTransportModel : DOSCBasePayloadModel
- (instancetype)initWithId:(NSString * _Nullable)id iceParameters:(DOSCIceParameters * _Nullable)iceParameters iceCandidates:(NSArray<DOSCIceCandidate *> * _Nullable)iceCandidates dtlsParameters:(DOSCDtlsParameters * _Nullable)dtlsParameters producing:(DOSCBoolean * _Nullable)producing __attribute__((swift_name("init(id:iceParameters:iceCandidates:dtlsParameters:producing:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebRtcCreateTransportModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCIceParameters * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<DOSCIceCandidate *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCDtlsParameters * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCWebRtcCreateTransportModel *)doCopyId:(NSString * _Nullable)id iceParameters:(DOSCIceParameters * _Nullable)iceParameters iceCandidates:(NSArray<DOSCIceCandidate *> * _Nullable)iceCandidates dtlsParameters:(DOSCDtlsParameters * _Nullable)dtlsParameters producing:(DOSCBoolean * _Nullable)producing __attribute__((swift_name("doCopy(id:iceParameters:iceCandidates:dtlsParameters:producing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCDtlsParameters * _Nullable dtlsParameters __attribute__((swift_name("dtlsParameters")));
@property NSArray<DOSCIceCandidate *> * _Nullable iceCandidates __attribute__((swift_name("iceCandidates")));
@property DOSCIceParameters * _Nullable iceParameters __attribute__((swift_name("iceParameters")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property DOSCBoolean * _Nullable producing __attribute__((swift_name("producing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebRtcCreateTransportModel.Companion")))
@interface DOSCWebRtcCreateTransportModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebRtcCreateTransportModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketJoinRoomModel")))
@interface DOSCWebSocketJoinRoomModel : DOSCBasePayloadModel
- (instancetype)initWithWaitlisted:(DOSCBoolean * _Nullable)waitlisted peers:(NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)peers waitlistedPeers:(NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)waitlistedPeers startedAt:(NSString * _Nullable)startedAt pinnedPeerId:(NSString * _Nullable)pinnedPeerId __attribute__((swift_name("init(waitlisted:peers:waitlistedPeers:startedAt:pinnedPeerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketJoinRoomModelCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCWebSocketJoinRoomModel *)doCopyWaitlisted:(DOSCBoolean * _Nullable)waitlisted peers:(NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)peers waitlistedPeers:(NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable)waitlistedPeers startedAt:(NSString * _Nullable)startedAt pinnedPeerId:(NSString * _Nullable)pinnedPeerId __attribute__((swift_name("doCopy(waitlisted:peers:waitlistedPeers:startedAt:pinnedPeerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable peers __attribute__((swift_name("peers")));
@property (readonly) NSString * _Nullable pinnedPeerId __attribute__((swift_name("pinnedPeerId")));
@property (readonly) NSString * _Nullable startedAt __attribute__((swift_name("startedAt")));
@property (readonly) DOSCBoolean * _Nullable waitlisted __attribute__((swift_name("waitlisted")));
@property (readonly) NSArray<DOSCWebSocketMeetingPeerUser *> * _Nullable waitlistedPeers __attribute__((swift_name("waitlistedPeers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketJoinRoomModel.Companion")))
@interface DOSCWebSocketJoinRoomModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketJoinRoomModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketRoomStateModel")))
@interface DOSCWebSocketRoomStateModel : DOSCBasePayloadModel
- (instancetype)initWithRoomState:(DOSCRoomState * _Nullable)roomState __attribute__((swift_name("init(roomState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWebSocketRoomStateModelCompanion *companion __attribute__((swift_name("companion")));
- (DOSCRoomState * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCWebSocketRoomStateModel *)doCopyRoomState:(DOSCRoomState * _Nullable)roomState __attribute__((swift_name("doCopy(roomState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCRoomState * _Nullable roomState __attribute__((swift_name("roomState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketRoomStateModel.Companion")))
@interface DOSCWebSocketRoomStateModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWebSocketRoomStateModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteVideoUtils")))
@interface DOSCDyteVideoUtils : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addTrack:(id _Nullable)track view:(UIView *)view __attribute__((swift_name("add(track:view:)")));
- (UIView *)getViewForParticipant:(DOSCDyteMeetingParticipant *)participant isScreenShare:(BOOL)isScreenShare __attribute__((swift_name("getViewFor(participant:isScreenShare:)")));
- (void)removeTrack:(id _Nullable)track view:(UIView *)view __attribute__((swift_name("remove(track:view:)")));
- (void)setVideoEnabledView:(UIView *)view enabled:(id _Nullable)enabled __attribute__((swift_name("setVideoEnabled(view:enabled:)")));
@property RTCMTLVideoView *webcamView __attribute__((swift_name("webcamView")));
@end;

__attribute__((swift_name("VideoRenderer")))
@protocol DOSCVideoRenderer
@required
- (void)renderTrack:(RTCMediaStreamTrack *)track __attribute__((swift_name("render(track:)")));
@end;

__attribute__((swift_name("IApiClient")))
@protocol DOSCIApiClient
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)authorizePluginPluginId:(NSString *)pluginId completionHandler:(void (^)(DOSCPluginAuthResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authorizePlugin(pluginId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getActiveRecordingWithCompletionHandler:(void (^)(DOSCRecordingInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getActiveRecording(completionHandler:)")));
- (DOSCKtor_client_coreHttpClient *)getClient __attribute__((swift_name("getClient()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getICEServersWithCompletionHandler:(void (^)(DOSCIceServersWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getICEServers(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getParticipantInfoWithCompletionHandler:(void (^)(DOSCParticipantInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getParticipantInfo(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPluginConfigPluginBaseUrl:(NSString *)pluginBaseUrl completionHandler:(void (^)(DOSCPluginConfigResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPluginConfig(pluginBaseUrl:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPluginDetailsPluginId:(NSString *)pluginId completionHandler:(void (^)(DOSCPluginResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPluginDetails(pluginId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPluginsWithCompletionHandler:(void (^)(DOSCMultiplePluginResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlugins(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomNodeDataWithCompletionHandler:(void (^)(DOSCMeetingSessionInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRoomNodeData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPresetWithCompletionHandler:(void (^)(DOSCUserPresetDataWrapper * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPreset(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)startRecordingWithCompletionHandler:(void (^)(DOSCRecordingInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startRecording(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopRecordingRecordingInfo:(DOSCRecordingInfo *)recordingInfo completionHandler:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stopRecording(recordingInfo:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadLogsLogs:(DOSCPostDyteLogs *)logs completionHandler:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadLogs(logs:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPrivatePermissions")))
@interface DOSCChatPrivatePermissions : DOSCBase
- (instancetype)initWithCanSend:(DOSCBoolean * _Nullable)canSend canReceive:(DOSCBoolean * _Nullable)canReceive text:(DOSCBoolean * _Nullable)text files:(DOSCBoolean * _Nullable)files __attribute__((swift_name("init(canSend:canReceive:text:files:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCChatPrivatePermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCChatPrivatePermissions *)doCopyCanSend:(DOSCBoolean * _Nullable)canSend canReceive:(DOSCBoolean * _Nullable)canReceive text:(DOSCBoolean * _Nullable)text files:(DOSCBoolean * _Nullable)files __attribute__((swift_name("doCopy(canSend:canReceive:text:files:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable canReceive __attribute__((swift_name("canReceive")));
@property (readonly) DOSCBoolean * _Nullable canSend __attribute__((swift_name("canSend")));
@property (readonly) DOSCBoolean * _Nullable files __attribute__((swift_name("files")));
@property (readonly) DOSCBoolean * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPrivatePermissions.Companion")))
@interface DOSCChatPrivatePermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCChatPrivatePermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPublicPermissions")))
@interface DOSCChatPublicPermissions : DOSCBase
- (instancetype)initWithCanSend:(DOSCBoolean * _Nullable)canSend text:(DOSCBoolean * _Nullable)text files:(DOSCBoolean * _Nullable)files __attribute__((swift_name("init(canSend:text:files:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCChatPublicPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCChatPublicPermissions *)doCopyCanSend:(DOSCBoolean * _Nullable)canSend text:(DOSCBoolean * _Nullable)text files:(DOSCBoolean * _Nullable)files __attribute__((swift_name("doCopy(canSend:text:files:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable canSend __attribute__((swift_name("canSend")));
@property (readonly) DOSCBoolean * _Nullable files __attribute__((swift_name("files")));
@property (readonly) DOSCBoolean * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPublicPermissions.Companion")))
@interface DOSCChatPublicPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCChatPublicPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingRequest")))
@interface DOSCCreateMeetingRequest : DOSCBase
- (instancetype)initWithTitle:(NSString *)title preferred_region:(NSString *)preferred_region __attribute__((swift_name("init(title:preferred_region:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCreateMeetingRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCCreateMeetingRequest *)doCopyTitle:(NSString *)title preferred_region:(NSString *)preferred_region __attribute__((swift_name("doCopy(title:preferred_region:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *preferred_region __attribute__((swift_name("preferred_region")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingRequest.Companion")))
@interface DOSCCreateMeetingRequestCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCreateMeetingRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponse")))
@interface DOSCCreateMeetingResponse : DOSCBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt waitingRoom:(BOOL)waitingRoom __attribute__((swift_name("init(id:title:createdAt:updatedAt:waitingRoom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCreateMeetingResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (DOSCCreateMeetingResponse *)doCopyId:(NSString *)id title:(NSString *)title createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt waitingRoom:(BOOL)waitingRoom __attribute__((swift_name("doCopy(id:title:createdAt:updatedAt:waitingRoom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) BOOL waitingRoom __attribute__((swift_name("waitingRoom")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponse.Companion")))
@interface DOSCCreateMeetingResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCreateMeetingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponseWrapper")))
@interface DOSCCreateMeetingResponseWrapper : DOSCBase
- (instancetype)initWithSuccess:(BOOL)success data:(DOSCCreateMeetingResponse *)data __attribute__((swift_name("init(success:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCreateMeetingResponseWrapperCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (DOSCCreateMeetingResponse *)component2 __attribute__((swift_name("component2()")));
- (DOSCCreateMeetingResponseWrapper *)doCopySuccess:(BOOL)success data:(DOSCCreateMeetingResponse *)data __attribute__((swift_name("doCopy(success:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCCreateMeetingResponse *data __attribute__((swift_name("data")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingResponseWrapper.Companion")))
@interface DOSCCreateMeetingResponseWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCreateMeetingResponseWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantRequest")))
@interface DOSCCreateParticipantRequest : DOSCBase
- (instancetype)initWithClient_specific_id:(NSString *)client_specific_id name:(NSString * _Nullable)name preset_name:(NSString * _Nullable)preset_name picture:(NSString * _Nullable)picture __attribute__((swift_name("init(client_specific_id:name:preset_name:picture:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCreateParticipantRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCCreateParticipantRequest *)doCopyClient_specific_id:(NSString *)client_specific_id name:(NSString * _Nullable)name preset_name:(NSString * _Nullable)preset_name picture:(NSString * _Nullable)picture __attribute__((swift_name("doCopy(client_specific_id:name:preset_name:picture:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *client_specific_id __attribute__((swift_name("client_specific_id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) NSString * _Nullable preset_name __attribute__((swift_name("preset_name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantRequest.Companion")))
@interface DOSCCreateParticipantRequestCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCreateParticipantRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantResponse")))
@interface DOSCCreateParticipantResponse : DOSCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name clientSpecificId:(NSString *)clientSpecificId presetId:(NSString *)presetId createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt token:(NSString *)token __attribute__((swift_name("init(id:name:clientSpecificId:presetId:createdAt:updatedAt:token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCreateParticipantResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (DOSCCreateParticipantResponse *)doCopyId:(NSString *)id name:(NSString *)name clientSpecificId:(NSString *)clientSpecificId presetId:(NSString *)presetId createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt token:(NSString *)token __attribute__((swift_name("doCopy(id:name:clientSpecificId:presetId:createdAt:updatedAt:token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *presetId __attribute__((swift_name("presetId")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantResponse.Companion")))
@interface DOSCCreateParticipantResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCreateParticipantResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantResponseWrapper")))
@interface DOSCCreateParticipantResponseWrapper : DOSCBase
- (instancetype)initWithSuccess:(BOOL)success data:(DOSCCreateParticipantResponse *)data __attribute__((swift_name("init(success:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCCreateParticipantResponseWrapperCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (DOSCCreateParticipantResponse *)component2 __attribute__((swift_name("component2()")));
- (DOSCCreateParticipantResponseWrapper *)doCopySuccess:(BOOL)success data:(DOSCCreateParticipantResponse *)data __attribute__((swift_name("doCopy(success:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCCreateParticipantResponse *data __attribute__((swift_name("data")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateParticipantResponseWrapper.Companion")))
@interface DOSCCreateParticipantResponseWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCCreateParticipantResponseWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesData")))
@interface DOSCFeaturesData : DOSCBase
- (instancetype)initWithLogrocket:(DOSCFeaturesOrganizationModelWrapper * _Nullable)logrocket newCallstatsOrganization:(NSArray<DOSCFeaturesOrganizationModelWrapper *> * _Nullable)newCallstatsOrganization __attribute__((swift_name("init(logrocket:newCallstatsOrganization:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCFeaturesDataCompanion *companion __attribute__((swift_name("companion")));
- (DOSCFeaturesOrganizationModelWrapper * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<DOSCFeaturesOrganizationModelWrapper *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCFeaturesData *)doCopyLogrocket:(DOSCFeaturesOrganizationModelWrapper * _Nullable)logrocket newCallstatsOrganization:(NSArray<DOSCFeaturesOrganizationModelWrapper *> * _Nullable)newCallstatsOrganization __attribute__((swift_name("doCopy(logrocket:newCallstatsOrganization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCFeaturesOrganizationModelWrapper * _Nullable logrocket __attribute__((swift_name("logrocket")));
@property (readonly, getter=doNewCallstatsOrganization) NSArray<DOSCFeaturesOrganizationModelWrapper *> * _Nullable newCallstatsOrganization __attribute__((swift_name("newCallstatsOrganization")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesData.Companion")))
@interface DOSCFeaturesDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCFeaturesDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModel")))
@interface DOSCFeaturesOrganizationModel : DOSCBase
- (instancetype)initWithOrganization:(NSArray<NSString *> * _Nullable)organization __attribute__((swift_name("init(organization:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCFeaturesOrganizationModelCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCFeaturesOrganizationModel *)doCopyOrganization:(NSArray<NSString *> * _Nullable)organization __attribute__((swift_name("doCopy(organization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable organization __attribute__((swift_name("organization")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModel.Companion")))
@interface DOSCFeaturesOrganizationModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCFeaturesOrganizationModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModelWrapper")))
@interface DOSCFeaturesOrganizationModelWrapper : DOSCBase
- (instancetype)initWithWrapper:(DOSCFeaturesOrganizationModel * _Nullable)wrapper config:(NSString * _Nullable)config __attribute__((swift_name("init(wrapper:config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCFeaturesOrganizationModelWrapperCompanion *companion __attribute__((swift_name("companion")));
- (DOSCFeaturesOrganizationModel * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCFeaturesOrganizationModelWrapper *)doCopyWrapper:(DOSCFeaturesOrganizationModel * _Nullable)wrapper config:(NSString * _Nullable)config __attribute__((swift_name("doCopy(wrapper:config:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable config __attribute__((swift_name("config")));
@property (readonly) DOSCFeaturesOrganizationModel * _Nullable wrapper __attribute__((swift_name("wrapper")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeaturesOrganizationModelWrapper.Companion")))
@interface DOSCFeaturesOrganizationModelWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCFeaturesOrganizationModelWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequest")))
@interface DOSCGraphQlRequest : DOSCBase
- (instancetype)initWithQuery:(NSString *)query variables:(DOSCGraphQlRequestVariables *)variables __attribute__((swift_name("init(query:variables:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCGraphQlRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCGraphQlRequestVariables *)component2 __attribute__((swift_name("component2()")));
- (DOSCGraphQlRequest *)doCopyQuery:(NSString *)query variables:(DOSCGraphQlRequestVariables *)variables __attribute__((swift_name("doCopy(query:variables:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *query __attribute__((swift_name("query")));
@property (readonly) DOSCGraphQlRequestVariables *variables __attribute__((swift_name("variables")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequest.Companion")))
@interface DOSCGraphQlRequestCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCGraphQlRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequestVariables")))
@interface DOSCGraphQlRequestVariables : DOSCBase
- (instancetype)initWithRoomName:(NSString *)roomName password:(NSString *)password __attribute__((swift_name("init(roomName:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCGraphQlRequestVariablesCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCGraphQlRequestVariables *)doCopyRoomName:(NSString *)roomName password:(NSString *)password __attribute__((swift_name("doCopy(roomName:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQlRequestVariables.Companion")))
@interface DOSCGraphQlRequestVariablesCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCGraphQlRequestVariablesCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServerData")))
@interface DOSCIceServerData : DOSCBase
- (instancetype)initWithUrl:(NSString *)url username:(NSString * _Nullable)username credential:(NSString * _Nullable)credential credentialType:(NSString * _Nullable)credentialType __attribute__((swift_name("init(url:username:credential:credentialType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCIceServerDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCIceServerData *)doCopyUrl:(NSString *)url username:(NSString * _Nullable)username credential:(NSString * _Nullable)credential credentialType:(NSString * _Nullable)credentialType __attribute__((swift_name("doCopy(url:username:credential:credentialType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable credential __attribute__((swift_name("credential")));
@property (readonly) NSString * _Nullable credentialType __attribute__((swift_name("credentialType")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServerData.Companion")))
@interface DOSCIceServerDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCIceServerDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServersWrapper")))
@interface DOSCIceServersWrapper : DOSCBase
- (instancetype)initWithIceServers:(NSArray<DOSCIceServerData *> *)iceServers __attribute__((swift_name("init(iceServers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCIceServersWrapperCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<DOSCIceServerData *> *)component1 __attribute__((swift_name("component1()")));
- (DOSCIceServersWrapper *)doCopyIceServers:(NSArray<DOSCIceServerData *> *)iceServers __attribute__((swift_name("doCopy(iceServers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCIceServerData *> *iceServers __attribute__((swift_name("iceServers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IceServersWrapper.Companion")))
@interface DOSCIceServersWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCIceServersWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaConfig")))
@interface DOSCMediaConfig : DOSCBase
- (instancetype)initWithVideo:(DOSCVideoConfig *)video screenshare:(DOSCVideoConfig *)screenshare __attribute__((swift_name("init(video:screenshare:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMediaConfigCompanion *companion __attribute__((swift_name("companion")));
- (DOSCVideoConfig *)component1 __attribute__((swift_name("component1()")));
- (DOSCVideoConfig *)component2 __attribute__((swift_name("component2()")));
- (DOSCMediaConfig *)doCopyVideo:(DOSCVideoConfig *)video screenshare:(DOSCVideoConfig *)screenshare __attribute__((swift_name("doCopy(video:screenshare:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCVideoConfig *screenshare __attribute__((swift_name("screenshare")));
@property (readonly) DOSCVideoConfig *video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaConfig.Companion")))
@interface DOSCMediaConfigCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMediaConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaPreset")))
@interface DOSCMediaPreset : DOSCBase
- (instancetype)initWithCanProduce:(NSString *)canProduce __attribute__((swift_name("init(canProduce:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMediaPresetCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCMediaPreset *)doCopyCanProduce:(NSString *)canProduce __attribute__((swift_name("doCopy(canProduce:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *canProduce __attribute__((swift_name("canProduce")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaPreset.Companion")))
@interface DOSCMediaPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMediaPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionData")))
@interface DOSCMeetingSessionData : DOSCBase
- (instancetype)initWithTitle:(NSString * _Nullable)title roomNodeLink:(NSString * _Nullable)roomNodeLink __attribute__((swift_name("init(title:roomNodeLink:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMeetingSessionDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCMeetingSessionData *)doCopyTitle:(NSString * _Nullable)title roomNodeLink:(NSString * _Nullable)roomNodeLink __attribute__((swift_name("doCopy(title:roomNodeLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable roomNodeLink __attribute__((swift_name("roomNodeLink")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionData.Companion")))
@interface DOSCMeetingSessionDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMeetingSessionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataResponseV1")))
@interface DOSCMeetingSessionDataResponseV1 : DOSCBase
- (instancetype)initWithData:(DOSCMeetingSessionDataWrapperV1 *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMeetingSessionDataResponseV1Companion *companion __attribute__((swift_name("companion")));
- (DOSCMeetingSessionDataWrapperV1 *)component1 __attribute__((swift_name("component1()")));
- (DOSCMeetingSessionDataResponseV1 *)doCopyData:(DOSCMeetingSessionDataWrapperV1 *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCMeetingSessionDataWrapperV1 *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataResponseV1.Companion")))
@interface DOSCMeetingSessionDataResponseV1Companion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMeetingSessionDataResponseV1Companion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataWrapper")))
@interface DOSCMeetingSessionDataWrapper : DOSCBase
- (instancetype)initWithSuccess:(BOOL)success data:(DOSCMeetingSessionData *)data __attribute__((swift_name("init(success:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMeetingSessionDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (DOSCMeetingSessionData *)component2 __attribute__((swift_name("component2()")));
- (DOSCMeetingSessionDataWrapper *)doCopySuccess:(BOOL)success data:(DOSCMeetingSessionData *)data __attribute__((swift_name("doCopy(success:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCMeetingSessionData *data __attribute__((swift_name("data")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataWrapper.Companion")))
@interface DOSCMeetingSessionDataWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMeetingSessionDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataWrapperV1")))
@interface DOSCMeetingSessionDataWrapperV1 : DOSCBase
- (instancetype)initWithSession:(DOSCMeetingSessionData *)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMeetingSessionDataWrapperV1Companion *companion __attribute__((swift_name("companion")));
- (DOSCMeetingSessionData *)component1 __attribute__((swift_name("component1()")));
- (DOSCMeetingSessionDataWrapperV1 *)doCopySession:(DOSCMeetingSessionData *)session __attribute__((swift_name("doCopy(session:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCMeetingSessionData *session __attribute__((swift_name("session")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionDataWrapperV1.Companion")))
@interface DOSCMeetingSessionDataWrapperV1Companion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMeetingSessionDataWrapperV1Companion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiplePluginResponse")))
@interface DOSCMultiplePluginResponse : DOSCBase
- (instancetype)initWithData:(DOSCMultiplePluginResponsePlugins *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMultiplePluginResponseCompanion *companion __attribute__((swift_name("companion")));
- (DOSCMultiplePluginResponsePlugins *)component1 __attribute__((swift_name("component1()")));
- (DOSCMultiplePluginResponse *)doCopyData:(DOSCMultiplePluginResponsePlugins *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCMultiplePluginResponsePlugins *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiplePluginResponse.Companion")))
@interface DOSCMultiplePluginResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMultiplePluginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiplePluginResponsePlugins")))
@interface DOSCMultiplePluginResponsePlugins : DOSCBase
- (instancetype)initWithPlugins:(NSArray<DOSCPluginDataResponse *> *)plugins __attribute__((swift_name("init(plugins:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMultiplePluginResponsePluginsCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<DOSCPluginDataResponse *> *)component1 __attribute__((swift_name("component1()")));
- (DOSCMultiplePluginResponsePlugins *)doCopyPlugins:(NSArray<DOSCPluginDataResponse *> *)plugins __attribute__((swift_name("doCopy(plugins:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DOSCPluginDataResponse *> *plugins __attribute__((swift_name("plugins")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiplePluginResponsePlugins.Companion")))
@interface DOSCMultiplePluginResponsePluginsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMultiplePluginResponsePluginsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantChatPreset")))
@interface DOSCParticipantChatPreset : DOSCBase
- (instancetype)initWithPublic:(DOSCPublicChatPreset *)public_ private:(DOSCPrivateChatPreset *)private_ __attribute__((swift_name("init(public:private:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantChatPresetCompanion *companion __attribute__((swift_name("companion")));
- (DOSCPublicChatPreset *)component1 __attribute__((swift_name("component1()")));
- (DOSCPrivateChatPreset *)component2 __attribute__((swift_name("component2()")));
- (DOSCParticipantChatPreset *)doCopyPublic:(DOSCPublicChatPreset *)public_ private:(DOSCPrivateChatPreset *)private_ __attribute__((swift_name("doCopy(public:private:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=private) DOSCPrivateChatPreset *private_ __attribute__((swift_name("private_")));
@property (readonly, getter=public) DOSCPublicChatPreset *public_ __attribute__((swift_name("public_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantChatPreset.Companion")))
@interface DOSCParticipantChatPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantChatPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantData")))
@interface DOSCParticipantData : DOSCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name clientSpecificId:(NSString *)clientSpecificId organizationId:(NSString *)organizationId __attribute__((swift_name("init(id:name:clientSpecificId:organizationId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DOSCParticipantData *)doCopyId:(NSString *)id name:(NSString *)name clientSpecificId:(NSString *)clientSpecificId organizationId:(NSString *)organizationId __attribute__((swift_name("doCopy(id:name:clientSpecificId:organizationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *organizationId __attribute__((swift_name("organizationId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantData.Companion")))
@interface DOSCParticipantDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantDataWrapper")))
@interface DOSCParticipantDataWrapper : DOSCBase
- (instancetype)initWithParticipant:(DOSCParticipantData *)participant preset:(DOSCParticipantPreset *)preset __attribute__((swift_name("init(participant:preset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (DOSCParticipantData *)component1 __attribute__((swift_name("component1()")));
- (DOSCParticipantPreset *)component2 __attribute__((swift_name("component2()")));
- (DOSCParticipantDataWrapper *)doCopyParticipant:(DOSCParticipantData *)participant preset:(DOSCParticipantPreset *)preset __attribute__((swift_name("doCopy(participant:preset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCParticipantData *participant __attribute__((swift_name("participant")));
@property (readonly) DOSCParticipantPreset *preset __attribute__((swift_name("preset")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantDataWrapper.Companion")))
@interface DOSCParticipantDataWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantMediaPreset")))
@interface DOSCParticipantMediaPreset : DOSCBase
- (instancetype)initWithVideo:(DOSCMediaPreset *)video audio:(DOSCMediaPreset *)audio screenshare:(DOSCMediaPreset *)screenshare __attribute__((swift_name("init(video:audio:screenshare:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantMediaPresetCompanion *companion __attribute__((swift_name("companion")));
- (DOSCMediaPreset *)component1 __attribute__((swift_name("component1()")));
- (DOSCMediaPreset *)component2 __attribute__((swift_name("component2()")));
- (DOSCMediaPreset *)component3 __attribute__((swift_name("component3()")));
- (DOSCParticipantMediaPreset *)doCopyVideo:(DOSCMediaPreset *)video audio:(DOSCMediaPreset *)audio screenshare:(DOSCMediaPreset *)screenshare __attribute__((swift_name("doCopy(video:audio:screenshare:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCMediaPreset *audio __attribute__((swift_name("audio")));
@property (readonly) DOSCMediaPreset *screenshare __attribute__((swift_name("screenshare")));
@property (readonly) DOSCMediaPreset *video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantMediaPreset.Companion")))
@interface DOSCParticipantMediaPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantMediaPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPluginPreset")))
@interface DOSCParticipantPluginPreset : DOSCBase
- (instancetype)initWithCanClose:(BOOL)canClose canStart:(BOOL)canStart __attribute__((swift_name("init(canClose:canStart:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantPluginPresetCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (DOSCParticipantPluginPreset *)doCopyCanClose:(BOOL)canClose canStart:(BOOL)canStart __attribute__((swift_name("doCopy(canClose:canStart:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canClose __attribute__((swift_name("canClose")));
@property (readonly) BOOL canStart __attribute__((swift_name("canStart")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPluginPreset.Companion")))
@interface DOSCParticipantPluginPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantPluginPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPollPreset")))
@interface DOSCParticipantPollPreset : DOSCBase
- (instancetype)initWithCanCreate:(BOOL)canCreate canVote:(BOOL)canVote canView:(BOOL)canView __attribute__((swift_name("init(canCreate:canVote:canView:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantPollPresetCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DOSCParticipantPollPreset *)doCopyCanCreate:(BOOL)canCreate canVote:(BOOL)canVote canView:(BOOL)canView __attribute__((swift_name("doCopy(canCreate:canVote:canView:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canCreate __attribute__((swift_name("canCreate")));
@property (readonly) BOOL canView __attribute__((swift_name("canView")));
@property (readonly) BOOL canVote __attribute__((swift_name("canVote")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPollPreset.Companion")))
@interface DOSCParticipantPollPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantPollPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPreset")))
@interface DOSCParticipantPreset : DOSCBase
- (instancetype)initWithId:(NSString *)id createdAt:(NSString *)createdAt updateAt:(NSString *)updateAt name:(NSString *)name permissions:(DOSCParticipantPresetPermission *)permissions config:(DOSCParticipantPresetConfig *)config __attribute__((swift_name("init(id:createdAt:updateAt:name:permissions:config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantPresetCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DOSCParticipantPresetPermission *)component5 __attribute__((swift_name("component5()")));
- (DOSCParticipantPresetConfig *)component6 __attribute__((swift_name("component6()")));
- (DOSCParticipantPreset *)doCopyId:(NSString *)id createdAt:(NSString *)createdAt updateAt:(NSString *)updateAt name:(NSString *)name permissions:(DOSCParticipantPresetPermission *)permissions config:(DOSCParticipantPresetConfig *)config __attribute__((swift_name("doCopy(id:createdAt:updateAt:name:permissions:config:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCParticipantPresetConfig *config __attribute__((swift_name("config")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) DOSCParticipantPresetPermission *permissions __attribute__((swift_name("permissions")));
@property (readonly) NSString *updateAt __attribute__((swift_name("updateAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPreset.Companion")))
@interface DOSCParticipantPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPresetConfig")))
@interface DOSCParticipantPresetConfig : DOSCBase
- (instancetype)initWithViewType:(NSString *)viewType media:(DOSCMediaConfig *)media streamsConfig:(DOSCVideoStreamConfig *)streamsConfig maxScreenShareCount:(int32_t)maxScreenShareCount __attribute__((swift_name("init(viewType:media:streamsConfig:maxScreenShareCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantPresetConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCMediaConfig *)component2 __attribute__((swift_name("component2()")));
- (DOSCVideoStreamConfig *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DOSCParticipantPresetConfig *)doCopyViewType:(NSString *)viewType media:(DOSCMediaConfig *)media streamsConfig:(DOSCVideoStreamConfig *)streamsConfig maxScreenShareCount:(int32_t)maxScreenShareCount __attribute__((swift_name("doCopy(viewType:media:streamsConfig:maxScreenShareCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t maxScreenShareCount __attribute__((swift_name("maxScreenShareCount")));
@property (readonly) DOSCMediaConfig *media __attribute__((swift_name("media")));
@property (readonly) DOSCVideoStreamConfig *streamsConfig __attribute__((swift_name("streamsConfig")));
@property (readonly) NSString *viewType __attribute__((swift_name("viewType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPresetConfig.Companion")))
@interface DOSCParticipantPresetConfigCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantPresetConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPresetPermission")))
@interface DOSCParticipantPresetPermission : DOSCBase
- (instancetype)initWithAcceptWaitingRequests:(BOOL)acceptWaitingRequests disableParticipantAudio:(BOOL)disableParticipantAudio disableParticipantScreenSharing:(BOOL)disableParticipantScreenSharing disableParticipantVideo:(BOOL)disableParticipantVideo kickParticipant:(BOOL)kickParticipant pinParticipant:(BOOL)pinParticipant canRecord:(BOOL)canRecord waitingRoomType:(NSString *)waitingRoomType plugins:(DOSCParticipantPluginPreset *)plugins polls:(DOSCParticipantPollPreset *)polls media:(DOSCParticipantMediaPreset *)media chat:(DOSCParticipantChatPreset *)chat hiddenParticipant:(BOOL)hiddenParticipant showParticipantList:(BOOL)showParticipantList __attribute__((swift_name("init(acceptWaitingRequests:disableParticipantAudio:disableParticipantScreenSharing:disableParticipantVideo:kickParticipant:pinParticipant:canRecord:waitingRoomType:plugins:polls:media:chat:hiddenParticipant:showParticipantList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantPresetPermissionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (DOSCParticipantPollPreset *)component10 __attribute__((swift_name("component10()")));
- (DOSCParticipantMediaPreset *)component11 __attribute__((swift_name("component11()")));
- (DOSCParticipantChatPreset *)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (BOOL)component14 __attribute__((swift_name("component14()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (DOSCParticipantPluginPreset *)component9 __attribute__((swift_name("component9()")));
- (DOSCParticipantPresetPermission *)doCopyAcceptWaitingRequests:(BOOL)acceptWaitingRequests disableParticipantAudio:(BOOL)disableParticipantAudio disableParticipantScreenSharing:(BOOL)disableParticipantScreenSharing disableParticipantVideo:(BOOL)disableParticipantVideo kickParticipant:(BOOL)kickParticipant pinParticipant:(BOOL)pinParticipant canRecord:(BOOL)canRecord waitingRoomType:(NSString *)waitingRoomType plugins:(DOSCParticipantPluginPreset *)plugins polls:(DOSCParticipantPollPreset *)polls media:(DOSCParticipantMediaPreset *)media chat:(DOSCParticipantChatPreset *)chat hiddenParticipant:(BOOL)hiddenParticipant showParticipantList:(BOOL)showParticipantList __attribute__((swift_name("doCopy(acceptWaitingRequests:disableParticipantAudio:disableParticipantScreenSharing:disableParticipantVideo:kickParticipant:pinParticipant:canRecord:waitingRoomType:plugins:polls:media:chat:hiddenParticipant:showParticipantList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL acceptWaitingRequests __attribute__((swift_name("acceptWaitingRequests")));
@property (readonly) BOOL canRecord __attribute__((swift_name("canRecord")));
@property (readonly) DOSCParticipantChatPreset *chat __attribute__((swift_name("chat")));
@property (readonly) BOOL disableParticipantAudio __attribute__((swift_name("disableParticipantAudio")));
@property (readonly) BOOL disableParticipantScreenSharing __attribute__((swift_name("disableParticipantScreenSharing")));
@property (readonly) BOOL disableParticipantVideo __attribute__((swift_name("disableParticipantVideo")));
@property (readonly) BOOL hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property (readonly) BOOL kickParticipant __attribute__((swift_name("kickParticipant")));
@property (readonly) DOSCParticipantMediaPreset *media __attribute__((swift_name("media")));
@property (readonly) BOOL pinParticipant __attribute__((swift_name("pinParticipant")));
@property (readonly) DOSCParticipantPluginPreset *plugins __attribute__((swift_name("plugins")));
@property (readonly) DOSCParticipantPollPreset *polls __attribute__((swift_name("polls")));
@property (readonly) BOOL showParticipantList __attribute__((swift_name("showParticipantList")));
@property (readonly) NSString *waitingRoomType __attribute__((swift_name("waitingRoomType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPresetPermission.Companion")))
@interface DOSCParticipantPresetPermissionCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantPresetPermissionCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginAuthDataResponse")))
@interface DOSCPluginAuthDataResponse : DOSCBase
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginAuthDataResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCPluginAuthDataResponse *)doCopyToken:(NSString *)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginAuthDataResponse.Companion")))
@interface DOSCPluginAuthDataResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginAuthDataResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginAuthResponse")))
@interface DOSCPluginAuthResponse : DOSCBase
- (instancetype)initWithData:(DOSCPluginAuthDataResponse *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginAuthResponseCompanion *companion __attribute__((swift_name("companion")));
- (DOSCPluginAuthDataResponse *)component1 __attribute__((swift_name("component1()")));
- (DOSCPluginAuthResponse *)doCopyData:(DOSCPluginAuthDataResponse *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCPluginAuthDataResponse *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginAuthResponse.Companion")))
@interface DOSCPluginAuthResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginAuthResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginAuthorizationModel")))
@interface DOSCPluginAuthorizationModel : DOSCBase
- (instancetype)initWithRoomName:(NSString *)roomName peerId:(NSString *)peerId __attribute__((swift_name("init(roomName:peerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginAuthorizationModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCPluginAuthorizationModel *)doCopyRoomName:(NSString *)roomName peerId:(NSString *)peerId __attribute__((swift_name("doCopy(roomName:peerId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *peerId __attribute__((swift_name("peerId")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginAuthorizationModel.Companion")))
@interface DOSCPluginAuthorizationModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginAuthorizationModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginConfigResponse")))
@interface DOSCPluginConfigResponse : DOSCBase
- (instancetype)initWithName:(NSString *)name pluginId:(NSString *)pluginId version:(NSString *)version description:(NSString *)description author:(NSString * _Nullable)author repository:(NSString * _Nullable)repository tags:(DOSCKotlinArray<NSString *> *)tags picture:(NSString *)picture url:(NSString * _Nullable)url files:(DOSCPluginFiles *)files views:(NSDictionary<NSString *, DOSCPluginView *> *)views contentScript:(NSString * _Nullable)contentScript __attribute__((swift_name("init(name:pluginId:version:description:author:repository:tags:picture:url:files:views:contentScript:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginConfigResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCPluginFiles *)component10 __attribute__((swift_name("component10()")));
- (NSDictionary<NSString *, DOSCPluginView *> *)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCKotlinArray<NSString *> *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DOSCPluginConfigResponse *)doCopyName:(NSString *)name pluginId:(NSString *)pluginId version:(NSString *)version description:(NSString *)description author:(NSString * _Nullable)author repository:(NSString * _Nullable)repository tags:(DOSCKotlinArray<NSString *> *)tags picture:(NSString *)picture url:(NSString * _Nullable)url files:(DOSCPluginFiles *)files views:(NSDictionary<NSString *, DOSCPluginView *> *)views contentScript:(NSString * _Nullable)contentScript __attribute__((swift_name("doCopy(name:pluginId:version:description:author:repository:tags:picture:url:files:views:contentScript:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable author __attribute__((swift_name("author")));
@property (readonly) NSString * _Nullable contentScript __attribute__((swift_name("contentScript")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) DOSCPluginFiles *files __attribute__((swift_name("files")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *picture __attribute__((swift_name("picture")));
@property (readonly) NSString *pluginId __attribute__((swift_name("pluginId")));
@property (readonly) NSString * _Nullable repository __attribute__((swift_name("repository")));
@property (readonly) DOSCKotlinArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@property (readonly) NSDictionary<NSString *, DOSCPluginView *> *views __attribute__((swift_name("views")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginConfigResponse.Companion")))
@interface DOSCPluginConfigResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginConfigResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginDataResponse")))
@interface DOSCPluginDataResponse : DOSCBase
- (instancetype)initWithBaseURL:(NSString *)baseURL createdAt:(NSString *)createdAt description:(NSString *)description id:(NSString *)id name:(NSString *)name organizationId:(NSString *)organizationId picture:(NSString *)picture private:(BOOL)private_ published:(BOOL)published staggered:(BOOL)staggered tags:(NSArray<NSString *> *)tags type:(NSString *)type updatedAt:(NSString *)updatedAt __attribute__((swift_name("init(baseURL:createdAt:description:id:name:organizationId:picture:private:published:staggered:tags:type:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginDataResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (NSArray<NSString *> *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (DOSCPluginDataResponse *)doCopyBaseURL:(NSString *)baseURL createdAt:(NSString *)createdAt description:(NSString *)description id:(NSString *)id name:(NSString *)name organizationId:(NSString *)organizationId picture:(NSString *)picture private:(BOOL)private_ published:(BOOL)published staggered:(BOOL)staggered tags:(NSArray<NSString *> *)tags type:(NSString *)type updatedAt:(NSString *)updatedAt __attribute__((swift_name("doCopy(baseURL:createdAt:description:id:name:organizationId:picture:private:published:staggered:tags:type:updatedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *baseURL __attribute__((swift_name("baseURL")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *organizationId __attribute__((swift_name("organizationId")));
@property (readonly) NSString *picture __attribute__((swift_name("picture")));
@property (readonly, getter=private) BOOL private_ __attribute__((swift_name("private_")));
@property (readonly) BOOL published __attribute__((swift_name("published")));
@property (readonly) BOOL staggered __attribute__((swift_name("staggered")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginDataResponse.Companion")))
@interface DOSCPluginDataResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginDataResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginFiles")))
@interface DOSCPluginFiles : DOSCBase
- (instancetype)initWithInclude:(DOSCKotlinArray<NSString *> *)include exclude:(DOSCKotlinArray<NSString *> * _Nullable)exclude __attribute__((swift_name("init(include:exclude:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginFilesCompanion *companion __attribute__((swift_name("companion")));
- (DOSCKotlinArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (DOSCKotlinArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCPluginFiles *)doCopyInclude:(DOSCKotlinArray<NSString *> *)include exclude:(DOSCKotlinArray<NSString *> * _Nullable)exclude __attribute__((swift_name("doCopy(include:exclude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCKotlinArray<NSString *> * _Nullable exclude __attribute__((swift_name("exclude")));
@property (readonly) DOSCKotlinArray<NSString *> *include __attribute__((swift_name("include")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginFiles.Companion")))
@interface DOSCPluginFilesCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginFilesCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginResponse")))
@interface DOSCPluginResponse : DOSCBase
- (instancetype)initWithData:(DOSCPluginDataResponse *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginResponseCompanion *companion __attribute__((swift_name("companion")));
- (DOSCPluginDataResponse *)component1 __attribute__((swift_name("component1()")));
- (DOSCPluginResponse *)doCopyData:(DOSCPluginDataResponse *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCPluginDataResponse *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginResponse.Companion")))
@interface DOSCPluginResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginView")))
@interface DOSCPluginView : DOSCBase
- (instancetype)initWithUrl:(NSString *)url suggestedPosition:(NSString *)suggestedPosition __attribute__((swift_name("init(url:suggestedPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginViewCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCPluginView *)doCopyUrl:(NSString *)url suggestedPosition:(NSString *)suggestedPosition __attribute__((swift_name("doCopy(url:suggestedPosition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *suggestedPosition __attribute__((swift_name("suggestedPosition")));
@property NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginView.Companion")))
@interface DOSCPluginViewCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginViewCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlData")))
@interface DOSCPresignedUrlData : DOSCBase
- (instancetype)initWithPutLocation:(NSString *)putLocation getLocation:(NSString *)getLocation __attribute__((swift_name("init(putLocation:getLocation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPresignedUrlDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCPresignedUrlData *)doCopyPutLocation:(NSString *)putLocation getLocation:(NSString *)getLocation __attribute__((swift_name("doCopy(putLocation:getLocation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *getLocation __attribute__((swift_name("getLocation")));
@property (readonly) NSString *putLocation __attribute__((swift_name("putLocation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlData.Companion")))
@interface DOSCPresignedUrlDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPresignedUrlDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlRequest")))
@interface DOSCPresignedUrlRequest : DOSCBase
- (instancetype)initWithRoomName:(NSString *)roomName filename:(NSString * _Nullable)filename __attribute__((swift_name("init(roomName:filename:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPresignedUrlRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCPresignedUrlRequest *)doCopyRoomName:(NSString *)roomName filename:(NSString * _Nullable)filename __attribute__((swift_name("doCopy(roomName:filename:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable filename __attribute__((swift_name("filename")));
@property (readonly) NSString *roomName __attribute__((swift_name("roomName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlRequest.Companion")))
@interface DOSCPresignedUrlRequestCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPresignedUrlRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlResponse")))
@interface DOSCPresignedUrlResponse : DOSCBase
- (instancetype)initWithData:(DOSCPresignedUrlData *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPresignedUrlResponseCompanion *companion __attribute__((swift_name("companion")));
- (DOSCPresignedUrlData *)component1 __attribute__((swift_name("component1()")));
- (DOSCPresignedUrlResponse *)doCopyData:(DOSCPresignedUrlData *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCPresignedUrlData *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresignedUrlResponse.Companion")))
@interface DOSCPresignedUrlResponseCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPresignedUrlResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrivateChatPreset")))
@interface DOSCPrivateChatPreset : DOSCBase
- (instancetype)initWithCanSend:(BOOL)canSend canReceive:(BOOL)canReceive text:(BOOL)text files:(BOOL)files __attribute__((swift_name("init(canSend:canReceive:text:files:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPrivateChatPresetCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (DOSCPrivateChatPreset *)doCopyCanSend:(BOOL)canSend canReceive:(BOOL)canReceive text:(BOOL)text files:(BOOL)files __attribute__((swift_name("doCopy(canSend:canReceive:text:files:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canReceive __attribute__((swift_name("canReceive")));
@property (readonly) BOOL canSend __attribute__((swift_name("canSend")));
@property (readonly) BOOL files __attribute__((swift_name("files")));
@property (readonly) BOOL text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrivateChatPreset.Companion")))
@interface DOSCPrivateChatPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPrivateChatPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicChatPreset")))
@interface DOSCPublicChatPreset : DOSCBase
- (instancetype)initWithCanSend:(BOOL)canSend text:(BOOL)text files:(BOOL)files __attribute__((swift_name("init(canSend:text:files:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPublicChatPresetCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DOSCPublicChatPreset *)doCopyCanSend:(BOOL)canSend text:(BOOL)text files:(BOOL)files __attribute__((swift_name("doCopy(canSend:text:files:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canSend __attribute__((swift_name("canSend")));
@property (readonly) BOOL files __attribute__((swift_name("files")));
@property (readonly) BOOL text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicChatPreset.Companion")))
@interface DOSCPublicChatPresetCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPublicChatPresetCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingData")))
@interface DOSCRecordingData : DOSCBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRecordingDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCRecordingData *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingData.Companion")))
@interface DOSCRecordingDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRecordingDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingDataWrapper")))
@interface DOSCRecordingDataWrapper : DOSCBase
- (instancetype)initWithRecording:(DOSCRecordingData *)recording __attribute__((swift_name("init(recording:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRecordingDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (DOSCRecordingData *)component1 __attribute__((swift_name("component1()")));
- (DOSCRecordingDataWrapper *)doCopyRecording:(DOSCRecordingData *)recording __attribute__((swift_name("doCopy(recording:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCRecordingData *recording __attribute__((swift_name("recording")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingDataWrapper.Companion")))
@interface DOSCRecordingDataWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRecordingDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingResponseWrapper")))
@interface DOSCRecordingResponseWrapper : DOSCBase
- (instancetype)initWithData:(DOSCRecordingDataWrapper *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRecordingResponseWrapperCompanion *companion __attribute__((swift_name("companion")));
- (DOSCRecordingDataWrapper *)component1 __attribute__((swift_name("component1()")));
- (DOSCRecordingResponseWrapper *)doCopyData:(DOSCRecordingDataWrapper *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCRecordingDataWrapper *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingResponseWrapper.Companion")))
@interface DOSCRecordingResponseWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRecordingResponseWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingResponseWrapperV2")))
@interface DOSCRecordingResponseWrapperV2 : DOSCBase
- (instancetype)initWithData:(DOSCRecordingData *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCRecordingResponseWrapperV2Companion *companion __attribute__((swift_name("companion")));
- (DOSCRecordingData *)component1 __attribute__((swift_name("component1()")));
- (DOSCRecordingResponseWrapperV2 *)doCopyData:(DOSCRecordingData *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCRecordingData *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingResponseWrapperV2.Companion")))
@interface DOSCRecordingResponseWrapperV2Companion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCRecordingResponseWrapperV2Companion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartRecordingModel")))
@interface DOSCStartRecordingModel : DOSCBase
- (instancetype)initWithMeetingId:(NSString *)meetingId __attribute__((swift_name("init(meetingId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCStartRecordingModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCStartRecordingModel *)doCopyMeetingId:(NSString *)meetingId __attribute__((swift_name("doCopy(meetingId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *meetingId __attribute__((swift_name("meetingId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartRecordingModel.Companion")))
@interface DOSCStartRecordingModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCStartRecordingModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopRecordingModel")))
@interface DOSCStopRecordingModel : DOSCBase
- (instancetype)initWithRecordingAction:(NSString *)recordingAction __attribute__((swift_name("init(recordingAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCStopRecordingModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCStopRecordingModel *)doCopyRecordingAction:(NSString *)recordingAction __attribute__((swift_name("doCopy(recordingAction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *recordingAction __attribute__((swift_name("recordingAction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopRecordingModel.Companion")))
@interface DOSCStopRecordingModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCStopRecordingModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopRecordingModelV2")))
@interface DOSCStopRecordingModelV2 : DOSCBase
- (instancetype)initWithAction:(NSString *)action __attribute__((swift_name("init(action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCStopRecordingModelV2Companion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCStopRecordingModelV2 *)doCopyAction:(NSString *)action __attribute__((swift_name("doCopy(action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopRecordingModelV2.Companion")))
@interface DOSCStopRecordingModelV2Companion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCStopRecordingModelV2Companion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataWrapper")))
@interface DOSCUserDataWrapper : DOSCBase
- (instancetype)initWithSuccess:(BOOL)success data:(DOSCParticipantDataWrapper *)data __attribute__((swift_name("init(success:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (DOSCParticipantDataWrapper *)component2 __attribute__((swift_name("component2()")));
- (DOSCUserDataWrapper *)doCopySuccess:(BOOL)success data:(DOSCParticipantDataWrapper *)data __attribute__((swift_name("doCopy(success:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCParticipantDataWrapper *data __attribute__((swift_name("data")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataWrapper.Companion")))
@interface DOSCUserDataWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataWrapperV1")))
@interface DOSCUserDataWrapperV1 : DOSCBase
- (instancetype)initWithUser:(DOSCParticipantData *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserDataWrapperV1Companion *companion __attribute__((swift_name("companion")));
- (DOSCParticipantData *)component1 __attribute__((swift_name("component1()")));
- (DOSCUserDataWrapperV1 *)doCopyUser:(DOSCParticipantData *)user __attribute__((swift_name("doCopy(user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCParticipantData *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataWrapperV1.Companion")))
@interface DOSCUserDataWrapperV1Companion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserDataWrapperV1Companion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetAloneHereTheme")))
@interface DOSCUserPresetAloneHereTheme : DOSCBase
- (instancetype)initWithIsEnabled:(DOSCBoolean * _Nullable)isEnabled __attribute__((swift_name("init(isEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetAloneHereThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetAloneHereTheme *)doCopyIsEnabled:(DOSCBoolean * _Nullable)isEnabled __attribute__((swift_name("doCopy(isEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetAloneHereTheme.Companion")))
@interface DOSCUserPresetAloneHereThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetAloneHereThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetChatPermissionProps")))
@interface DOSCUserPresetChatPermissionProps : DOSCBase
- (instancetype)initWithChatPublicProps:(DOSCChatPublicPermissions * _Nullable)chatPublicProps chatPrivateProps:(DOSCChatPrivatePermissions * _Nullable)chatPrivateProps __attribute__((swift_name("init(chatPublicProps:chatPrivateProps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetChatPermissionPropsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCChatPublicPermissions * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCChatPrivatePermissions * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetChatPermissionProps *)doCopyChatPublicProps:(DOSCChatPublicPermissions * _Nullable)chatPublicProps chatPrivateProps:(DOSCChatPrivatePermissions * _Nullable)chatPrivateProps __attribute__((swift_name("doCopy(chatPublicProps:chatPrivateProps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCChatPrivatePermissions * _Nullable chatPrivateProps __attribute__((swift_name("chatPrivateProps")));
@property (readonly) DOSCChatPublicPermissions * _Nullable chatPublicProps __attribute__((swift_name("chatPublicProps")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetChatPermissionProps.Companion")))
@interface DOSCUserPresetChatPermissionPropsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetChatPermissionPropsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetColorsTheme")))
@interface DOSCUserPresetColorsTheme : DOSCBase
- (instancetype)initWithPrimary:(NSString * _Nullable)primary secondary:(NSString * _Nullable)secondary text:(NSString * _Nullable)text background:(NSString * _Nullable)background textPrimary:(NSString * _Nullable)textPrimary videoBackground:(NSString * _Nullable)videoBackground __attribute__((swift_name("init(primary:secondary:text:background:textPrimary:videoBackground:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetColorsThemeCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCUserPresetColorsTheme *)doCopyPrimary:(NSString * _Nullable)primary secondary:(NSString * _Nullable)secondary text:(NSString * _Nullable)text background:(NSString * _Nullable)background textPrimary:(NSString * _Nullable)textPrimary videoBackground:(NSString * _Nullable)videoBackground __attribute__((swift_name("doCopy(primary:secondary:text:background:textPrimary:videoBackground:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable background __attribute__((swift_name("background")));
@property NSString * _Nullable primary __attribute__((swift_name("primary")));
@property NSString * _Nullable secondary __attribute__((swift_name("secondary")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable textPrimary __attribute__((swift_name("textPrimary")));
@property NSString * _Nullable videoBackground __attribute__((swift_name("videoBackground")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetColorsTheme.Companion")))
@interface DOSCUserPresetColorsThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetColorsThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarTheme")))
@interface DOSCUserPresetControlBarTheme : DOSCBase
- (instancetype)initWithIsEnabled:(DOSCBoolean * _Nullable)isEnabled elements:(DOSCUserPresetControlBarThemeElements * _Nullable)elements __attribute__((swift_name("init(isEnabled:elements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetControlBarThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetControlBarThemeElements * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetControlBarTheme *)doCopyIsEnabled:(DOSCBoolean * _Nullable)isEnabled elements:(DOSCUserPresetControlBarThemeElements * _Nullable)elements __attribute__((swift_name("doCopy(isEnabled:elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCUserPresetControlBarThemeElements * _Nullable elements __attribute__((swift_name("elements")));
@property DOSCBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarTheme.Companion")))
@interface DOSCUserPresetControlBarThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetControlBarThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarThemeElements")))
@interface DOSCUserPresetControlBarThemeElements : DOSCBase
- (instancetype)initWithPlugins:(DOSCBoolean * _Nullable)plugins screenshare:(DOSCBoolean * _Nullable)screenshare invite:(DOSCBoolean * _Nullable)invite participants:(DOSCBoolean * _Nullable)participants chat:(DOSCBoolean * _Nullable)chat reactions:(DOSCBoolean * _Nullable)reactions polls:(DOSCBoolean * _Nullable)polls fullscreen:(DOSCBoolean * _Nullable)fullscreen layout:(DOSCBoolean * _Nullable)layout __attribute__((swift_name("init(plugins:screenshare:invite:participants:chat:reactions:polls:fullscreen:layout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetControlBarThemeElementsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DOSCBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DOSCUserPresetControlBarThemeElements *)doCopyPlugins:(DOSCBoolean * _Nullable)plugins screenshare:(DOSCBoolean * _Nullable)screenshare invite:(DOSCBoolean * _Nullable)invite participants:(DOSCBoolean * _Nullable)participants chat:(DOSCBoolean * _Nullable)chat reactions:(DOSCBoolean * _Nullable)reactions polls:(DOSCBoolean * _Nullable)polls fullscreen:(DOSCBoolean * _Nullable)fullscreen layout:(DOSCBoolean * _Nullable)layout __attribute__((swift_name("doCopy(plugins:screenshare:invite:participants:chat:reactions:polls:fullscreen:layout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable chat __attribute__((swift_name("chat")));
@property DOSCBoolean * _Nullable fullscreen __attribute__((swift_name("fullscreen")));
@property DOSCBoolean * _Nullable invite __attribute__((swift_name("invite")));
@property DOSCBoolean * _Nullable layout __attribute__((swift_name("layout")));
@property DOSCBoolean * _Nullable participants __attribute__((swift_name("participants")));
@property DOSCBoolean * _Nullable plugins __attribute__((swift_name("plugins")));
@property DOSCBoolean * _Nullable polls __attribute__((swift_name("polls")));
@property DOSCBoolean * _Nullable reactions __attribute__((swift_name("reactions")));
@property DOSCBoolean * _Nullable screenshare __attribute__((swift_name("screenshare")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetControlBarThemeElements.Companion")))
@interface DOSCUserPresetControlBarThemeElementsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetControlBarThemeElementsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetData")))
@interface DOSCUserPresetData : DOSCBase
- (instancetype)initWithPreset:(DOSCUserPresetModel * _Nullable)preset __attribute__((swift_name("init(preset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetDataCompanion *companion __attribute__((swift_name("companion")));
- (DOSCUserPresetModel * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetData *)doCopyPreset:(DOSCUserPresetModel * _Nullable)preset __attribute__((swift_name("doCopy(preset:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCUserPresetModel * _Nullable preset __attribute__((swift_name("preset")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetData.Companion")))
@interface DOSCUserPresetDataCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetDataCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetDataWrapper")))
@interface DOSCUserPresetDataWrapper : DOSCBase
- (instancetype)initWithSuccess:(DOSCBoolean * _Nullable)success message:(NSString * _Nullable)message data:(DOSCUserPresetData * _Nullable)data __attribute__((swift_name("init(success:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetDataWrapperCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetData * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetDataWrapper *)doCopySuccess:(DOSCBoolean * _Nullable)success message:(NSString * _Nullable)message data:(DOSCUserPresetData * _Nullable)data __attribute__((swift_name("doCopy(success:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCUserPresetData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) DOSCBoolean * _Nullable success __attribute__((swift_name("success")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetDataWrapper.Companion")))
@interface DOSCUserPresetDataWrapperCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetDataWrapperCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetGridTheme")))
@interface DOSCUserPresetGridTheme : DOSCBase
- (instancetype)initWithMulti:(DOSCUserPresetMultiTheme * _Nullable)multi single:(DOSCUserPresetSingleTheme * _Nullable)single defaultView:(NSString * _Nullable)defaultView __attribute__((swift_name("init(multi:single:defaultView:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetGridThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCUserPresetMultiTheme * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetSingleTheme * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetGridTheme *)doCopyMulti:(DOSCUserPresetMultiTheme * _Nullable)multi single:(DOSCUserPresetSingleTheme * _Nullable)single defaultView:(NSString * _Nullable)defaultView __attribute__((swift_name("doCopy(multi:single:defaultView:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable defaultView __attribute__((swift_name("defaultView")));
@property DOSCUserPresetMultiTheme * _Nullable multi __attribute__((swift_name("multi")));
@property DOSCUserPresetSingleTheme * _Nullable single __attribute__((swift_name("single")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetGridTheme.Companion")))
@interface DOSCUserPresetGridThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetGridThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderTheme")))
@interface DOSCUserPresetHeaderTheme : DOSCBase
- (instancetype)initWithIsEnabled:(DOSCBoolean * _Nullable)isEnabled elements:(DOSCUserPresetHeaderThemeElements * _Nullable)elements __attribute__((swift_name("init(isEnabled:elements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetHeaderThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetHeaderThemeElements * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetHeaderTheme *)doCopyIsEnabled:(DOSCBoolean * _Nullable)isEnabled elements:(DOSCUserPresetHeaderThemeElements * _Nullable)elements __attribute__((swift_name("doCopy(isEnabled:elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCUserPresetHeaderThemeElements * _Nullable elements __attribute__((swift_name("elements")));
@property DOSCBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderTheme.Companion")))
@interface DOSCUserPresetHeaderThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetHeaderThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderThemeElements")))
@interface DOSCUserPresetHeaderThemeElements : DOSCBase
- (instancetype)initWithLogo:(NSString * _Nullable)logo timer:(DOSCBoolean * _Nullable)timer title:(DOSCBoolean * _Nullable)title participantCount:(DOSCBoolean * _Nullable)participantCount changeLayout:(DOSCBoolean * _Nullable)changeLayout __attribute__((swift_name("init(logo:timer:title:participantCount:changeLayout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetHeaderThemeElementsCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCUserPresetHeaderThemeElements *)doCopyLogo:(NSString * _Nullable)logo timer:(DOSCBoolean * _Nullable)timer title:(DOSCBoolean * _Nullable)title participantCount:(DOSCBoolean * _Nullable)participantCount changeLayout:(DOSCBoolean * _Nullable)changeLayout __attribute__((swift_name("doCopy(logo:timer:title:participantCount:changeLayout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable changeLayout __attribute__((swift_name("changeLayout")));
@property NSString * _Nullable logo __attribute__((swift_name("logo")));
@property DOSCBoolean * _Nullable participantCount __attribute__((swift_name("participantCount")));
@property DOSCBoolean * _Nullable timer __attribute__((swift_name("timer")));
@property DOSCBoolean * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetHeaderThemeElements.Companion")))
@interface DOSCUserPresetHeaderThemeElementsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetHeaderThemeElementsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetModel")))
@interface DOSCUserPresetModel : DOSCBase
- (instancetype)initWithPermissions:(DOSCUserPresetPermissionsModel * _Nullable)permissions theme:(DOSCUserPresetThemeModel * _Nullable)theme version:(NSString * _Nullable)version presetName:(NSString * _Nullable)presetName __attribute__((swift_name("init(permissions:theme:version:presetName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetModelCompanion *companion __attribute__((swift_name("companion")));
- (DOSCUserPresetPermissionsModel * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetThemeModel * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCUserPresetModel *)doCopyPermissions:(DOSCUserPresetPermissionsModel * _Nullable)permissions theme:(DOSCUserPresetThemeModel * _Nullable)theme version:(NSString * _Nullable)version presetName:(NSString * _Nullable)presetName __attribute__((swift_name("doCopy(permissions:theme:version:presetName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCUserPresetPermissionsModel * _Nullable permissions __attribute__((swift_name("permissions")));
@property (readonly) NSString * _Nullable presetName __attribute__((swift_name("presetName")));
@property (readonly) DOSCUserPresetThemeModel * _Nullable theme __attribute__((swift_name("theme")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetModel.Companion")))
@interface DOSCUserPresetModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetMultiTheme")))
@interface DOSCUserPresetMultiTheme : DOSCBase
- (instancetype)initWithMaxVideoCount:(DOSCInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("init(maxVideoCount:videoFit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetMultiThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetMultiTheme *)doCopyMaxVideoCount:(DOSCInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("doCopy(maxVideoCount:videoFit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCInt * _Nullable maxVideoCount __attribute__((swift_name("maxVideoCount")));
@property NSString * _Nullable videoFit __attribute__((swift_name("videoFit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetMultiTheme.Companion")))
@interface DOSCUserPresetMultiThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetMultiThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPermissionsModel")))
@interface DOSCUserPresetPermissionsModel : DOSCBase
- (instancetype)initWithViewType:(NSString * _Nullable)viewType acceptWaitingRequests:(DOSCBoolean * _Nullable)acceptWaitingRequests requestProduce:(DOSCBoolean * _Nullable)requestProduce canAllowParticipantScreensharing:(DOSCBoolean * _Nullable)canAllowParticipantScreensharing canDisableParticipantAudio:(DOSCBoolean * _Nullable)canDisableParticipantAudio canDisableParticipantVideo:(DOSCBoolean * _Nullable)canDisableParticipantVideo requestKickParticipant:(DOSCBoolean * _Nullable)requestKickParticipant kickParticipant:(DOSCBoolean * _Nullable)kickParticipant pinParticipant:(DOSCBoolean * _Nullable)pinParticipant canRecord:(DOSCBoolean * _Nullable)canRecord waitingRoomType:(DOSCWaitingRoomType *)waitingRoomType plugins:(DOSCUserPresetPluginPermissions * _Nullable)plugins polls:(DOSCUserPresetPollsPermissions * _Nullable)polls produce:(DOSCUserPresetProducePermissions * _Nullable)produce chat:(DOSCUserPresetChatPermissionProps * _Nullable)chat reactions:(DOSCBoolean * _Nullable)reactions hiddenParticipant:(DOSCBoolean * _Nullable)hiddenParticipant showParticipantList:(DOSCBoolean * _Nullable)showParticipantList canChangeParticipantRole:(DOSCBoolean * _Nullable)canChangeParticipantRole canChangeTheme:(DOSCBoolean * _Nullable)canChangeTheme canPresent:(DOSCBoolean * _Nullable)canPresent acceptPresentRequests:(DOSCBoolean * _Nullable)acceptPresentRequests canEditDisplayName:(DOSCBoolean * _Nullable)canEditDisplayName isRecorder:(DOSCBoolean * _Nullable)isRecorder __attribute__((swift_name("init(viewType:acceptWaitingRequests:requestProduce:canAllowParticipantScreensharing:canDisableParticipantAudio:canDisableParticipantVideo:requestKickParticipant:kickParticipant:pinParticipant:canRecord:waitingRoomType:plugins:polls:produce:chat:reactions:hiddenParticipant:showParticipantList:canChangeParticipantRole:canChangeTheme:canPresent:acceptPresentRequests:canEditDisplayName:isRecorder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetPermissionsModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component10 __attribute__((swift_name("component10()")));
- (DOSCWaitingRoomType *)component11 __attribute__((swift_name("component11()")));
- (DOSCUserPresetPluginPermissions * _Nullable)component12 __attribute__((swift_name("component12()")));
- (DOSCUserPresetPollsPermissions * _Nullable)component13 __attribute__((swift_name("component13()")));
- (DOSCUserPresetProducePermissions * _Nullable)component14 __attribute__((swift_name("component14()")));
- (DOSCUserPresetChatPermissionProps * _Nullable)component15 __attribute__((swift_name("component15()")));
- (DOSCBoolean * _Nullable)component16 __attribute__((swift_name("component16()")));
- (DOSCBoolean * _Nullable)component17 __attribute__((swift_name("component17()")));
- (DOSCBoolean * _Nullable)component18 __attribute__((swift_name("component18()")));
- (DOSCBoolean * _Nullable)component19 __attribute__((swift_name("component19()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component20 __attribute__((swift_name("component20()")));
- (DOSCBoolean * _Nullable)component21 __attribute__((swift_name("component21()")));
- (DOSCBoolean * _Nullable)component22 __attribute__((swift_name("component22()")));
- (DOSCBoolean * _Nullable)component23 __attribute__((swift_name("component23()")));
- (DOSCBoolean * _Nullable)component24 __attribute__((swift_name("component24()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DOSCBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DOSCUserPresetPermissionsModel *)doCopyViewType:(NSString * _Nullable)viewType acceptWaitingRequests:(DOSCBoolean * _Nullable)acceptWaitingRequests requestProduce:(DOSCBoolean * _Nullable)requestProduce canAllowParticipantScreensharing:(DOSCBoolean * _Nullable)canAllowParticipantScreensharing canDisableParticipantAudio:(DOSCBoolean * _Nullable)canDisableParticipantAudio canDisableParticipantVideo:(DOSCBoolean * _Nullable)canDisableParticipantVideo requestKickParticipant:(DOSCBoolean * _Nullable)requestKickParticipant kickParticipant:(DOSCBoolean * _Nullable)kickParticipant pinParticipant:(DOSCBoolean * _Nullable)pinParticipant canRecord:(DOSCBoolean * _Nullable)canRecord waitingRoomType:(DOSCWaitingRoomType *)waitingRoomType plugins:(DOSCUserPresetPluginPermissions * _Nullable)plugins polls:(DOSCUserPresetPollsPermissions * _Nullable)polls produce:(DOSCUserPresetProducePermissions * _Nullable)produce chat:(DOSCUserPresetChatPermissionProps * _Nullable)chat reactions:(DOSCBoolean * _Nullable)reactions hiddenParticipant:(DOSCBoolean * _Nullable)hiddenParticipant showParticipantList:(DOSCBoolean * _Nullable)showParticipantList canChangeParticipantRole:(DOSCBoolean * _Nullable)canChangeParticipantRole canChangeTheme:(DOSCBoolean * _Nullable)canChangeTheme canPresent:(DOSCBoolean * _Nullable)canPresent acceptPresentRequests:(DOSCBoolean * _Nullable)acceptPresentRequests canEditDisplayName:(DOSCBoolean * _Nullable)canEditDisplayName isRecorder:(DOSCBoolean * _Nullable)isRecorder __attribute__((swift_name("doCopy(viewType:acceptWaitingRequests:requestProduce:canAllowParticipantScreensharing:canDisableParticipantAudio:canDisableParticipantVideo:requestKickParticipant:kickParticipant:pinParticipant:canRecord:waitingRoomType:plugins:polls:produce:chat:reactions:hiddenParticipant:showParticipantList:canChangeParticipantRole:canChangeTheme:canPresent:acceptPresentRequests:canEditDisplayName:isRecorder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable acceptPresentRequests __attribute__((swift_name("acceptPresentRequests")));
@property (readonly) DOSCBoolean * _Nullable acceptWaitingRequests __attribute__((swift_name("acceptWaitingRequests")));
@property (readonly) DOSCBoolean * _Nullable canAllowParticipantScreensharing __attribute__((swift_name("canAllowParticipantScreensharing")));
@property (readonly) DOSCBoolean * _Nullable canChangeParticipantRole __attribute__((swift_name("canChangeParticipantRole")));
@property (readonly) DOSCBoolean * _Nullable canChangeTheme __attribute__((swift_name("canChangeTheme")));
@property (readonly) DOSCBoolean * _Nullable canDisableParticipantAudio __attribute__((swift_name("canDisableParticipantAudio")));
@property (readonly) DOSCBoolean * _Nullable canDisableParticipantVideo __attribute__((swift_name("canDisableParticipantVideo")));
@property (readonly) DOSCBoolean * _Nullable canEditDisplayName __attribute__((swift_name("canEditDisplayName")));
@property (readonly) DOSCBoolean * _Nullable canPresent __attribute__((swift_name("canPresent")));
@property (readonly) DOSCBoolean * _Nullable canRecord __attribute__((swift_name("canRecord")));
@property (readonly) DOSCUserPresetChatPermissionProps * _Nullable chat __attribute__((swift_name("chat")));
@property (readonly) DOSCBoolean * _Nullable hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property (readonly) DOSCBoolean * _Nullable isRecorder __attribute__((swift_name("isRecorder")));
@property (readonly) DOSCBoolean * _Nullable kickParticipant __attribute__((swift_name("kickParticipant")));
@property (readonly) DOSCBoolean * _Nullable pinParticipant __attribute__((swift_name("pinParticipant")));
@property (readonly) DOSCUserPresetPluginPermissions * _Nullable plugins __attribute__((swift_name("plugins")));
@property (readonly) DOSCUserPresetPollsPermissions * _Nullable polls __attribute__((swift_name("polls")));
@property (readonly) DOSCUserPresetProducePermissions * _Nullable produce __attribute__((swift_name("produce")));
@property (readonly) DOSCBoolean * _Nullable reactions __attribute__((swift_name("reactions")));
@property (readonly) DOSCBoolean * _Nullable requestKickParticipant __attribute__((swift_name("requestKickParticipant")));
@property (readonly) DOSCBoolean * _Nullable requestProduce __attribute__((swift_name("requestProduce")));
@property (readonly) DOSCBoolean * _Nullable showParticipantList __attribute__((swift_name("showParticipantList")));
@property (readonly) NSString * _Nullable viewType __attribute__((swift_name("viewType")));
@property (readonly) DOSCWaitingRoomType *waitingRoomType __attribute__((swift_name("waitingRoomType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPermissionsModel.Companion")))
@interface DOSCUserPresetPermissionsModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetPermissionsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginConfig")))
@interface DOSCUserPresetPluginConfig : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) DOSCUserPresetPluginConfigCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginConfig.Companion")))
@interface DOSCUserPresetPluginConfigCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetPluginConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginPermissions")))
@interface DOSCUserPresetPluginPermissions : DOSCBase
- (instancetype)initWithCanClose:(DOSCBoolean * _Nullable)canClose canStart:(DOSCBoolean * _Nullable)canStart canEditAcl:(DOSCBoolean * _Nullable)canEditAcl config:(DOSCUserPresetPluginConfig * _Nullable)config __attribute__((swift_name("init(canClose:canStart:canEditAcl:config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetPluginPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetPluginConfig * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCUserPresetPluginPermissions *)doCopyCanClose:(DOSCBoolean * _Nullable)canClose canStart:(DOSCBoolean * _Nullable)canStart canEditAcl:(DOSCBoolean * _Nullable)canEditAcl config:(DOSCUserPresetPluginConfig * _Nullable)config __attribute__((swift_name("doCopy(canClose:canStart:canEditAcl:config:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable canClose __attribute__((swift_name("canClose")));
@property (readonly) DOSCBoolean * _Nullable canEditAcl __attribute__((swift_name("canEditAcl")));
@property (readonly) DOSCBoolean * _Nullable canStart __attribute__((swift_name("canStart")));
@property (readonly) DOSCUserPresetPluginConfig * _Nullable config __attribute__((swift_name("config")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPluginPermissions.Companion")))
@interface DOSCUserPresetPluginPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetPluginPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPollsPermissions")))
@interface DOSCUserPresetPollsPermissions : DOSCBase
- (instancetype)initWithCanCreate:(DOSCBoolean * _Nullable)canCreate canVote:(DOSCBoolean * _Nullable)canVote canView:(DOSCBoolean * _Nullable)canView __attribute__((swift_name("init(canCreate:canVote:canView:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetPollsPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetPollsPermissions *)doCopyCanCreate:(DOSCBoolean * _Nullable)canCreate canVote:(DOSCBoolean * _Nullable)canVote canView:(DOSCBoolean * _Nullable)canView __attribute__((swift_name("doCopy(canCreate:canVote:canView:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable canCreate __attribute__((swift_name("canCreate")));
@property (readonly) DOSCBoolean * _Nullable canView __attribute__((swift_name("canView")));
@property (readonly) DOSCBoolean * _Nullable canVote __attribute__((swift_name("canVote")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetPollsPermissions.Companion")))
@interface DOSCUserPresetPollsPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetPollsPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetProducePermissions")))
@interface DOSCUserPresetProducePermissions : DOSCBase
- (instancetype)initWithVideo:(DOSCUserPresetVideoPermissions * _Nullable)video audio:(DOSCBoolean * _Nullable)audio screenshare:(DOSCUserPresetScreenSharePermissions * _Nullable)screenshare __attribute__((swift_name("init(video:audio:screenshare:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetProducePermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCUserPresetVideoPermissions * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetScreenSharePermissions * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetProducePermissions *)doCopyVideo:(DOSCUserPresetVideoPermissions * _Nullable)video audio:(DOSCBoolean * _Nullable)audio screenshare:(DOSCUserPresetScreenSharePermissions * _Nullable)screenshare __attribute__((swift_name("doCopy(video:audio:screenshare:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable audio __attribute__((swift_name("audio")));
@property (readonly) DOSCUserPresetScreenSharePermissions * _Nullable screenshare __attribute__((swift_name("screenshare")));
@property (readonly) DOSCUserPresetVideoPermissions * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetProducePermissions.Companion")))
@interface DOSCUserPresetProducePermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetProducePermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetRequestModel")))
@interface DOSCUserPresetRequestModel : DOSCBase
- (instancetype)initWithAuthToken:(NSString * _Nullable)authToken clientType:(NSString * _Nullable)clientType roomName:(NSString * _Nullable)roomName version:(NSString * _Nullable)version __attribute__((swift_name("init(authToken:clientType:roomName:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetRequestModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCUserPresetRequestModel *)doCopyAuthToken:(NSString * _Nullable)authToken clientType:(NSString * _Nullable)clientType roomName:(NSString * _Nullable)roomName version:(NSString * _Nullable)version __attribute__((swift_name("doCopy(authToken:clientType:roomName:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString * _Nullable clientType __attribute__((swift_name("clientType")));
@property (readonly) NSString * _Nullable roomName __attribute__((swift_name("roomName")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetRequestModel.Companion")))
@interface DOSCUserPresetRequestModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetRequestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetScreenSharePermissions")))
@interface DOSCUserPresetScreenSharePermissions : DOSCBase
- (instancetype)initWithAllow:(DOSCBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(DOSCInt * _Nullable)frameRate __attribute__((swift_name("init(allow:quality:frameRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetScreenSharePermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetScreenSharePermissions *)doCopyAllow:(DOSCBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(DOSCInt * _Nullable)frameRate __attribute__((swift_name("doCopy(allow:quality:frameRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable allow __attribute__((swift_name("allow")));
@property (readonly) DOSCInt * _Nullable frameRate __attribute__((swift_name("frameRate")));
@property (readonly) NSString * _Nullable quality __attribute__((swift_name("quality")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetScreenSharePermissions.Companion")))
@interface DOSCUserPresetScreenSharePermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetScreenSharePermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSetupScreenTheme")))
@interface DOSCUserPresetSetupScreenTheme : DOSCBase
- (instancetype)initWithIsEnabled:(DOSCBoolean * _Nullable)isEnabled __attribute__((swift_name("init(isEnabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetSetupScreenThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetSetupScreenTheme *)doCopyIsEnabled:(DOSCBoolean * _Nullable)isEnabled __attribute__((swift_name("doCopy(isEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSetupScreenTheme.Companion")))
@interface DOSCUserPresetSetupScreenThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetSetupScreenThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSingleTheme")))
@interface DOSCUserPresetSingleTheme : DOSCBase
- (instancetype)initWithMaxVideoCount:(DOSCInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("init(maxVideoCount:videoFit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetSingleThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetSingleTheme *)doCopyMaxVideoCount:(DOSCInt * _Nullable)maxVideoCount videoFit:(NSString * _Nullable)videoFit __attribute__((swift_name("doCopy(maxVideoCount:videoFit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCInt * _Nullable maxVideoCount __attribute__((swift_name("maxVideoCount")));
@property NSString * _Nullable videoFit __attribute__((swift_name("videoFit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetSingleTheme.Companion")))
@interface DOSCUserPresetSingleThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetSingleThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetThemeModel")))
@interface DOSCUserPresetThemeModel : DOSCBase
- (instancetype)initWithSetupScreen:(DOSCUserPresetSetupScreenTheme * _Nullable)setupScreen aloneHere:(DOSCUserPresetAloneHereTheme * _Nullable)aloneHere waitingRoom:(DOSCUserPresetWaitingRoomTheme * _Nullable)waitingRoom controlBar:(DOSCUserPresetControlBarTheme * _Nullable)controlBar header:(DOSCUserPresetHeaderTheme * _Nullable)header pipMode:(DOSCBoolean * _Nullable)pipMode autoTune:(DOSCBoolean * _Nullable)autoTune grid:(DOSCUserPresetGridTheme * _Nullable)grid colors:(DOSCUserPresetColorsTheme * _Nullable)colors __attribute__((swift_name("init(setupScreen:aloneHere:waitingRoom:controlBar:header:pipMode:autoTune:grid:colors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetThemeModelCompanion *companion __attribute__((swift_name("companion")));
- (DOSCUserPresetSetupScreenTheme * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCUserPresetAloneHereTheme * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetWaitingRoomTheme * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetControlBarTheme * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DOSCUserPresetHeaderTheme * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DOSCBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DOSCBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DOSCUserPresetGridTheme * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DOSCUserPresetColorsTheme * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DOSCUserPresetThemeModel *)doCopySetupScreen:(DOSCUserPresetSetupScreenTheme * _Nullable)setupScreen aloneHere:(DOSCUserPresetAloneHereTheme * _Nullable)aloneHere waitingRoom:(DOSCUserPresetWaitingRoomTheme * _Nullable)waitingRoom controlBar:(DOSCUserPresetControlBarTheme * _Nullable)controlBar header:(DOSCUserPresetHeaderTheme * _Nullable)header pipMode:(DOSCBoolean * _Nullable)pipMode autoTune:(DOSCBoolean * _Nullable)autoTune grid:(DOSCUserPresetGridTheme * _Nullable)grid colors:(DOSCUserPresetColorsTheme * _Nullable)colors __attribute__((swift_name("doCopy(setupScreen:aloneHere:waitingRoom:controlBar:header:pipMode:autoTune:grid:colors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCUserPresetAloneHereTheme * _Nullable aloneHere __attribute__((swift_name("aloneHere")));
@property DOSCBoolean * _Nullable autoTune __attribute__((swift_name("autoTune")));
@property DOSCUserPresetColorsTheme * _Nullable colors __attribute__((swift_name("colors")));
@property DOSCUserPresetControlBarTheme * _Nullable controlBar __attribute__((swift_name("controlBar")));
@property DOSCUserPresetGridTheme * _Nullable grid __attribute__((swift_name("grid")));
@property DOSCUserPresetHeaderTheme * _Nullable header __attribute__((swift_name("header")));
@property DOSCBoolean * _Nullable pipMode __attribute__((swift_name("pipMode")));
@property DOSCUserPresetSetupScreenTheme * _Nullable setupScreen __attribute__((swift_name("setupScreen")));
@property DOSCUserPresetWaitingRoomTheme * _Nullable waitingRoom __attribute__((swift_name("waitingRoom")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetThemeModel.Companion")))
@interface DOSCUserPresetThemeModelCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetThemeModelCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetVideoPermissions")))
@interface DOSCUserPresetVideoPermissions : DOSCBase
- (instancetype)initWithAllow:(DOSCBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(DOSCInt * _Nullable)frameRate __attribute__((swift_name("init(allow:quality:frameRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetVideoPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCUserPresetVideoPermissions *)doCopyAllow:(DOSCBoolean * _Nullable)allow quality:(NSString * _Nullable)quality frameRate:(DOSCInt * _Nullable)frameRate __attribute__((swift_name("doCopy(allow:quality:frameRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCBoolean * _Nullable allow __attribute__((swift_name("allow")));
@property (readonly) DOSCInt * _Nullable frameRate __attribute__((swift_name("frameRate")));
@property (readonly) NSString * _Nullable quality __attribute__((swift_name("quality")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetVideoPermissions.Companion")))
@interface DOSCUserPresetVideoPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetVideoPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetWaitingRoomTheme")))
@interface DOSCUserPresetWaitingRoomTheme : DOSCBase
- (instancetype)initWithIsEnabled:(DOSCBoolean * _Nullable)isEnabled enablePreview:(DOSCBoolean * _Nullable)enablePreview __attribute__((swift_name("init(isEnabled:enablePreview:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCUserPresetWaitingRoomThemeCompanion *companion __attribute__((swift_name("companion")));
- (DOSCBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DOSCBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCUserPresetWaitingRoomTheme *)doCopyIsEnabled:(DOSCBoolean * _Nullable)isEnabled enablePreview:(DOSCBoolean * _Nullable)enablePreview __attribute__((swift_name("doCopy(isEnabled:enablePreview:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DOSCBoolean * _Nullable enablePreview __attribute__((swift_name("enablePreview")));
@property DOSCBoolean * _Nullable isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresetWaitingRoomTheme.Companion")))
@interface DOSCUserPresetWaitingRoomThemeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCUserPresetWaitingRoomThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoConfig")))
@interface DOSCVideoConfig : DOSCBase
- (instancetype)initWithQuality:(NSString *)quality frameRate:(int32_t)frameRate __attribute__((swift_name("init(quality:frameRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCVideoConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DOSCVideoConfig *)doCopyQuality:(NSString *)quality frameRate:(int32_t)frameRate __attribute__((swift_name("doCopy(quality:frameRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t frameRate __attribute__((swift_name("frameRate")));
@property (readonly) NSString *quality __attribute__((swift_name("quality")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoConfig.Companion")))
@interface DOSCVideoConfigCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCVideoConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoStreamConfig")))
@interface DOSCVideoStreamConfig : DOSCBase
- (instancetype)initWithMobile:(int32_t)mobile desktop:(int32_t)desktop __attribute__((swift_name("init(mobile:desktop:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCVideoStreamConfigCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DOSCVideoStreamConfig *)doCopyMobile:(int32_t)mobile desktop:(int32_t)desktop __attribute__((swift_name("doCopy(mobile:desktop:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t desktop __attribute__((swift_name("desktop")));
@property (readonly) int32_t mobile __attribute__((swift_name("mobile")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoStreamConfig.Companion")))
@interface DOSCVideoStreamConfigCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCVideoStreamConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRoomType")))
@interface DOSCWaitingRoomType : DOSCKotlinEnum<DOSCWaitingRoomType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCWaitingRoomTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) DOSCWaitingRoomType *skip __attribute__((swift_name("skip")));
@property (class, readonly) DOSCWaitingRoomType *onAccept __attribute__((swift_name("onAccept")));
@property (class, readonly) DOSCWaitingRoomType *skipOnAccept __attribute__((swift_name("skipOnAccept")));
@property (class, readonly) DOSCWaitingRoomType *skipOnPrivilegedUserEntry __attribute__((swift_name("skipOnPrivilegedUserEntry")));
+ (DOSCKotlinArray<DOSCWaitingRoomType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRoomType.Companion")))
@interface DOSCWaitingRoomTypeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCWaitingRoomTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPermissions")))
@interface DOSCChatPermissions : DOSCBase
- (instancetype)initWithCanSend:(BOOL)canSend text:(BOOL)text canSendFiles:(BOOL)canSendFiles __attribute__((swift_name("init(canSend:text:canSendFiles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCChatPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DOSCChatPermissions *)doCopyCanSend:(BOOL)canSend text:(BOOL)text canSendFiles:(BOOL)canSendFiles __attribute__((swift_name("doCopy(canSend:text:canSendFiles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canSend __attribute__((swift_name("canSend")));
@property (readonly) BOOL canSendFiles __attribute__((swift_name("canSendFiles")));
@property (readonly) BOOL text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPermissions.Companion")))
@interface DOSCChatPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCChatPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (DOSCChatPermissions *)getChatPermissionsFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getChatPermissionsFromV1(userPresetData:)")));
- (DOSCChatPermissions *)getChatPermissionsFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getChatPermissionsFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GridInfo_")))
@interface DOSCGridInfo_ : DOSCBase
- (instancetype)initWithMaxParticipantsPerPage:(int32_t)maxParticipantsPerPage __attribute__((swift_name("init(maxParticipantsPerPage:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (DOSCGridInfo_ *)doCopyMaxParticipantsPerPage:(int32_t)maxParticipantsPerPage __attribute__((swift_name("doCopy(maxParticipantsPerPage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t maxParticipantsPerPage __attribute__((swift_name("maxParticipantsPerPage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HostPermissions")))
@interface DOSCHostPermissions : DOSCBase
- (instancetype)initWithCanPresent:(BOOL)canPresent canAcceptPresentRequests:(BOOL)canAcceptPresentRequests acceptWaitingRequests:(BOOL)acceptWaitingRequests canDisableParticipantAudio:(BOOL)canDisableParticipantAudio canDisableParticipantVideo:(BOOL)canDisableParticipantVideo canKickParticipant:(BOOL)canKickParticipant canPinParticipant:(BOOL)canPinParticipant canStartRecording:(BOOL)canStartRecording __attribute__((swift_name("init(canPresent:canAcceptPresentRequests:acceptWaitingRequests:canDisableParticipantAudio:canDisableParticipantVideo:canKickParticipant:canPinParticipant:canStartRecording:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCHostPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (DOSCHostPermissions *)doCopyCanPresent:(BOOL)canPresent canAcceptPresentRequests:(BOOL)canAcceptPresentRequests acceptWaitingRequests:(BOOL)acceptWaitingRequests canDisableParticipantAudio:(BOOL)canDisableParticipantAudio canDisableParticipantVideo:(BOOL)canDisableParticipantVideo canKickParticipant:(BOOL)canKickParticipant canPinParticipant:(BOOL)canPinParticipant canStartRecording:(BOOL)canStartRecording __attribute__((swift_name("doCopy(canPresent:canAcceptPresentRequests:acceptWaitingRequests:canDisableParticipantAudio:canDisableParticipantVideo:canKickParticipant:canPinParticipant:canStartRecording:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL acceptWaitingRequests __attribute__((swift_name("acceptWaitingRequests")));
@property (readonly) BOOL canAcceptPresentRequests __attribute__((swift_name("canAcceptPresentRequests")));
@property (readonly) BOOL canDisableParticipantAudio __attribute__((swift_name("canDisableParticipantAudio")));
@property (readonly) BOOL canDisableParticipantVideo __attribute__((swift_name("canDisableParticipantVideo")));
@property (readonly) BOOL canKickParticipant __attribute__((swift_name("canKickParticipant")));
@property (readonly) BOOL canPinParticipant __attribute__((swift_name("canPinParticipant")));
@property (readonly) BOOL canPresent __attribute__((swift_name("canPresent")));
@property (readonly) BOOL canStartRecording __attribute__((swift_name("canStartRecording")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HostPermissions.Companion")))
@interface DOSCHostPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCHostPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (DOSCHostPermissions *)getHostPermissionsFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getHostPermissionsFromV1(userPresetData:)")));
- (DOSCHostPermissions *)getHostPermissionsFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getHostPermissionsFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaPermissions")))
@interface DOSCMediaPermissions : DOSCBase
- (instancetype)initWithVideo:(DOSCVideoPermissions *)video canPublishAudio:(BOOL)canPublishAudio __attribute__((swift_name("init(video:canPublishAudio:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCMediaPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (DOSCVideoPermissions *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (DOSCMediaPermissions *)doCopyVideo:(DOSCVideoPermissions *)video canPublishAudio:(BOOL)canPublishAudio __attribute__((swift_name("doCopy(video:canPublishAudio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canPublishAudio __attribute__((swift_name("canPublishAudio")));
@property (readonly) DOSCVideoPermissions *video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaPermissions.Companion")))
@interface DOSCMediaPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCMediaPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (DOSCMediaPermissions *)getMediaPermissionsFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getMediaPermissionsFromV1(userPresetData:)")));
- (DOSCMediaPermissions *)getMediaPermissionsFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getMediaPermissionsFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingSessionInfo")))
@interface DOSCMeetingSessionInfo : DOSCBase
- (instancetype)initWithTitle:(NSString *)title roomNodeLink:(NSString *)roomNodeLink __attribute__((swift_name("init(title:roomNodeLink:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCMeetingSessionInfo *)doCopyTitle:(NSString *)title roomNodeLink:(NSString *)roomNodeLink __attribute__((swift_name("doCopy(title:roomNodeLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *roomNodeLink __attribute__((swift_name("roomNodeLink")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantInfo")))
@interface DOSCParticipantInfo : DOSCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture loggedIn:(BOOL)loggedIn clientSpecificId:(NSString *)clientSpecificId organizationId:(NSString *)organizationId scope:(NSString * _Nullable)scope hiddenParticipant:(BOOL)hiddenParticipant isRecorder:(BOOL)isRecorder presetInfo:(DOSCPresetInfo *)presetInfo __attribute__((swift_name("init(id:name:email:picture:loggedIn:clientSpecificId:organizationId:scope:hiddenParticipant:isRecorder:presetInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (DOSCPresetInfo *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (DOSCParticipantInfo *)doCopyId:(NSString *)id name:(NSString *)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture loggedIn:(BOOL)loggedIn clientSpecificId:(NSString *)clientSpecificId organizationId:(NSString *)organizationId scope:(NSString * _Nullable)scope hiddenParticipant:(BOOL)hiddenParticipant isRecorder:(BOOL)isRecorder presetInfo:(DOSCPresetInfo *)presetInfo __attribute__((swift_name("doCopy(id:name:email:picture:loggedIn:clientSpecificId:organizationId:scope:hiddenParticipant:isRecorder:presetInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientSpecificId __attribute__((swift_name("clientSpecificId")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) BOOL hiddenParticipant __attribute__((swift_name("hiddenParticipant")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRecorder __attribute__((swift_name("isRecorder")));
@property (readonly) BOOL loggedIn __attribute__((swift_name("loggedIn")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *organizationId __attribute__((swift_name("organizationId")));
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@property (readonly) DOSCPresetInfo *presetInfo __attribute__((swift_name("presetInfo")));
@property (readonly) NSString * _Nullable scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantInfo.Companion")))
@interface DOSCParticipantInfoCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantInfoCompanion *shared __attribute__((swift_name("shared")));
- (DOSCParticipantInfo *)getParticipantInfoFromV1UserData:(DOSCUserDataWrapperV1 *)userData userPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getParticipantInfoFromV1(userData:userPresetData:)")));
- (DOSCParticipantInfo *)getParticipantInfoFromV2UserData:(DOSCUserDataWrapper *)userData __attribute__((swift_name("getParticipantInfoFromV2(userData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPermissions")))
@interface DOSCParticipantPermissions : DOSCBase
- (instancetype)initWithCanEditDisplayName:(BOOL)canEditDisplayName showParticipantList:(BOOL)showParticipantList hostPermissions:(DOSCHostPermissions *)hostPermissions pluginPermissions:(DOSCPluginPermissions *)pluginPermissions pollPermissions:(DOSCPollPermissions *)pollPermissions mediaPermissions:(DOSCMediaPermissions *)mediaPermissions chatPermission:(DOSCChatPermissions *)chatPermission __attribute__((swift_name("init(canEditDisplayName:showParticipantList:hostPermissions:pluginPermissions:pollPermissions:mediaPermissions:chatPermission:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCParticipantPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (DOSCHostPermissions *)component3 __attribute__((swift_name("component3()")));
- (DOSCPluginPermissions *)component4 __attribute__((swift_name("component4()")));
- (DOSCPollPermissions *)component5 __attribute__((swift_name("component5()")));
- (DOSCMediaPermissions *)component6 __attribute__((swift_name("component6()")));
- (DOSCChatPermissions *)component7 __attribute__((swift_name("component7()")));
- (DOSCParticipantPermissions *)doCopyCanEditDisplayName:(BOOL)canEditDisplayName showParticipantList:(BOOL)showParticipantList hostPermissions:(DOSCHostPermissions *)hostPermissions pluginPermissions:(DOSCPluginPermissions *)pluginPermissions pollPermissions:(DOSCPollPermissions *)pollPermissions mediaPermissions:(DOSCMediaPermissions *)mediaPermissions chatPermission:(DOSCChatPermissions *)chatPermission __attribute__((swift_name("doCopy(canEditDisplayName:showParticipantList:hostPermissions:pluginPermissions:pollPermissions:mediaPermissions:chatPermission:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canEditDisplayName __attribute__((swift_name("canEditDisplayName")));
@property (readonly) DOSCChatPermissions *chatPermission __attribute__((swift_name("chatPermission")));
@property (readonly) DOSCHostPermissions *hostPermissions __attribute__((swift_name("hostPermissions")));
@property (readonly) DOSCMediaPermissions *mediaPermissions __attribute__((swift_name("mediaPermissions")));
@property (readonly) DOSCPluginPermissions *pluginPermissions __attribute__((swift_name("pluginPermissions")));
@property (readonly) DOSCPollPermissions *pollPermissions __attribute__((swift_name("pollPermissions")));
@property (readonly) BOOL showParticipantList __attribute__((swift_name("showParticipantList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticipantPermissions.Companion")))
@interface DOSCParticipantPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCParticipantPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (DOSCParticipantPermissions *)getParticipantPermissionsFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getParticipantPermissionsFromV1(userPresetData:)")));
- (DOSCParticipantPermissions *)getParticipantPermissionsFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getParticipantPermissionsFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginPermissions")))
@interface DOSCPluginPermissions : DOSCBase
- (instancetype)initWithCanClose:(BOOL)canClose canStart:(BOOL)canStart canEditAcl:(BOOL)canEditAcl __attribute__((swift_name("init(canClose:canStart:canEditAcl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPluginPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DOSCPluginPermissions *)doCopyCanClose:(BOOL)canClose canStart:(BOOL)canStart canEditAcl:(BOOL)canEditAcl __attribute__((swift_name("doCopy(canClose:canStart:canEditAcl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canClose __attribute__((swift_name("canClose")));
@property (readonly) BOOL canEditAcl __attribute__((swift_name("canEditAcl")));
@property (readonly) BOOL canStart __attribute__((swift_name("canStart")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginPermissions.Companion")))
@interface DOSCPluginPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPluginPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (DOSCPluginPermissions *)getPluginPermissionsFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getPluginPermissionsFromV1(userPresetData:)")));
- (DOSCPluginPermissions *)getPluginPermissionsFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getPluginPermissionsFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PollPermissions")))
@interface DOSCPollPermissions : DOSCBase
- (instancetype)initWithCanCreate:(BOOL)canCreate canVote:(BOOL)canVote canView:(BOOL)canView __attribute__((swift_name("init(canCreate:canVote:canView:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPollPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DOSCPollPermissions *)doCopyCanCreate:(BOOL)canCreate canVote:(BOOL)canVote canView:(BOOL)canView __attribute__((swift_name("doCopy(canCreate:canVote:canView:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canCreate __attribute__((swift_name("canCreate")));
@property (readonly) BOOL canView __attribute__((swift_name("canView")));
@property (readonly) BOOL canVote __attribute__((swift_name("canVote")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PollPermissions.Companion")))
@interface DOSCPollPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPollPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (DOSCPollPermissions *)getPollPermissionsFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getPollPermissionsFromV1(userPresetData:)")));
- (DOSCPollPermissions *)getPollPermissionsFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getPollPermissionsFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresetInfo")))
@interface DOSCPresetInfo : DOSCBase
- (instancetype)initWithViewType:(NSString *)viewType name:(NSString *)name waitingRoomType:(DOSCWaitingRoomType_ *)waitingRoomType gridInfo:(DOSCGridInfo_ *)gridInfo permissions:(DOSCParticipantPermissions *)permissions __attribute__((swift_name("init(viewType:name:waitingRoomType:gridInfo:permissions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCPresetInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCWaitingRoomType_ *)component3 __attribute__((swift_name("component3()")));
- (DOSCGridInfo_ *)component4 __attribute__((swift_name("component4()")));
- (DOSCParticipantPermissions *)component5 __attribute__((swift_name("component5()")));
- (DOSCPresetInfo *)doCopyViewType:(NSString *)viewType name:(NSString *)name waitingRoomType:(DOSCWaitingRoomType_ *)waitingRoomType gridInfo:(DOSCGridInfo_ *)gridInfo permissions:(DOSCParticipantPermissions *)permissions __attribute__((swift_name("doCopy(viewType:name:waitingRoomType:gridInfo:permissions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCGridInfo_ *gridInfo __attribute__((swift_name("gridInfo")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) DOSCParticipantPermissions *permissions __attribute__((swift_name("permissions")));
@property (readonly) NSString *viewType __attribute__((swift_name("viewType")));
@property (readonly) DOSCWaitingRoomType_ *waitingRoomType __attribute__((swift_name("waitingRoomType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresetInfo.Companion")))
@interface DOSCPresetInfoCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCPresetInfoCompanion *shared __attribute__((swift_name("shared")));
- (DOSCPresetInfo *)getPresetInfoFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getPresetInfoFromV1(userPresetData:)")));
- (DOSCPresetInfo *)getPresetInfoFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getPresetInfoFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordingInfo")))
@interface DOSCRecordingInfo : DOSCBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCRecordingInfo *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPermissions")))
@interface DOSCVideoPermissions : DOSCBase
- (instancetype)initWithCanPublish:(BOOL)canPublish quality:(NSString *)quality frameRate:(int32_t)frameRate __attribute__((swift_name("init(canPublish:quality:frameRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCVideoPermissionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DOSCVideoPermissions *)doCopyCanPublish:(BOOL)canPublish quality:(NSString *)quality frameRate:(int32_t)frameRate __attribute__((swift_name("doCopy(canPublish:quality:frameRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL canPublish __attribute__((swift_name("canPublish")));
@property (readonly) int32_t frameRate __attribute__((swift_name("frameRate")));
@property (readonly) NSString *quality __attribute__((swift_name("quality")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPermissions.Companion")))
@interface DOSCVideoPermissionsCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCVideoPermissionsCompanion *shared __attribute__((swift_name("shared")));
- (DOSCVideoPermissions *)getVideoPermissionsFromV1UserPresetData:(DOSCUserPresetDataWrapper *)userPresetData __attribute__((swift_name("getVideoPermissionsFromV1(userPresetData:)")));
- (DOSCVideoPermissions *)getVideoPermissionsFromV2ParticipantPreset:(DOSCParticipantPreset *)participantPreset __attribute__((swift_name("getVideoPermissionsFromV2(participantPreset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRoomType_")))
@interface DOSCWaitingRoomType_ : DOSCKotlinEnum<DOSCWaitingRoomType_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCWaitingRoomType_ *skip __attribute__((swift_name("skip")));
@property (class, readonly) DOSCWaitingRoomType_ *onAccept __attribute__((swift_name("onAccept")));
@property (class, readonly) DOSCWaitingRoomType_ *skipOnAccept __attribute__((swift_name("skipOnAccept")));
@property (class, readonly) DOSCWaitingRoomType_ *skipOnPrivilegedUserEntry __attribute__((swift_name("skipOnPrivilegedUserEntry")));
+ (DOSCKotlinArray<DOSCWaitingRoomType_ *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("InCallManagerEventCallbacks")))
@protocol DOSCInCallManagerEventCallbacks
@required
- (void)onEventEventName:(NSString * _Nullable)eventName args:(id _Nullable)args __attribute__((swift_name("onEvent(eventName:args:)")));
@end;

__attribute__((swift_name("DyteCameraEventsListener")))
@protocol DOSCDyteCameraEventsListener
@required
- (void)onCameraClosed __attribute__((swift_name("onCameraClosed()")));
- (void)onCameraDisconnected __attribute__((swift_name("onCameraDisconnected()")));
- (void)onCameraErrorError:(NSString * _Nullable)error __attribute__((swift_name("onCameraError(error:)")));
- (void)onCameraFreezedMessage:(NSString * _Nullable)message __attribute__((swift_name("onCameraFreezed(message:)")));
- (void)onCameraOpeningMessage:(NSString * _Nullable)message __attribute__((swift_name("onCameraOpening(message:)")));
- (void)onFirstFrameAvailable __attribute__((swift_name("onFirstFrameAvailable()")));
@end;

__attribute__((swift_name("DyteMeetingRoomEventsListener")))
@protocol DOSCDyteMeetingRoomEventsListener
@required
- (void)onChatUpdatesNewMessage:(BOOL)newMessage message:(DOSCDyteChatMessage * _Nullable)message messages:(NSArray<DOSCDyteChatMessage *> *)messages __attribute__((swift_name("onChatUpdates(newMessage:message:messages:)")));
- (void)onHostKicked __attribute__((swift_name("onHostKicked()")));
- (void)onMeetingInitCompleted __attribute__((swift_name("onMeetingInitCompleted()")));
- (void)onMeetingInitFailedException:(DOSCKotlinException *)exception __attribute__((swift_name("onMeetingInitFailed(exception:)")));
- (void)onMeetingInitStarted __attribute__((swift_name("onMeetingInitStarted()")));
- (void)onMeetingRecordingEnded __attribute__((swift_name("onMeetingRecordingEnded()")));
- (void)onMeetingRecordingStarted __attribute__((swift_name("onMeetingRecordingStarted()")));
- (void)onMeetingRecordingStateUpdatedState:(DOSCDyteRecordingState *)state __attribute__((swift_name("onMeetingRecordingStateUpdated(state:)")));
- (void)onMeetingRecordingStopErrorE:(DOSCKotlinException *)e __attribute__((swift_name("onMeetingRecordingStopError(e:)")));
- (void)onPollUpdatesNewPoll:(BOOL)newPoll pollMessages:(NSArray<DOSCDytePollMessage *> *)pollMessages updatedPollMessage:(DOSCDytePollMessage * _Nullable)updatedPollMessage __attribute__((swift_name("onPollUpdates(newPoll:pollMessages:updatedPollMessage:)")));
- (void)onWaitingRoomEntered __attribute__((swift_name("onWaitingRoomEntered()")));
- (void)onWaitingRoomEntryAccepted __attribute__((swift_name("onWaitingRoomEntryAccepted()")));
- (void)onWaitingRoomEntryRejected __attribute__((swift_name("onWaitingRoomEntryRejected()")));
@end;

__attribute__((swift_name("DyteMicrophoneEventsListener")))
@protocol DOSCDyteMicrophoneEventsListener
@required
- (void)onAudioTrackErrorErrorMessage:(NSString *)errorMessage __attribute__((swift_name("onAudioTrackError(errorMessage:)")));
- (void)onAudioTrackInitErrorErrorMessage:(NSString *)errorMessage __attribute__((swift_name("onAudioTrackInitError(errorMessage:)")));
- (void)onAudioTrackStartErrorErrorMessage:(NSString *)errorMessage __attribute__((swift_name("onAudioTrackStartError(errorMessage:)")));
@end;

__attribute__((swift_name("DyteParticipantEventsListener")))
@protocol DOSCDyteParticipantEventsListener
@required
- (void)onActiveParticipantsChangedActive:(NSArray<DOSCDyteMeetingParticipant *> *)active __attribute__((swift_name("onActiveParticipantsChanged(active:)")));
- (void)onActiveSpeakerChangedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onActiveSpeakerChanged(participant:)")));
- (void)onAudioUpdateAudioEnabled:(BOOL)audioEnabled participant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onAudioUpdate(audioEnabled:participant:)")));
- (void)onGridUpdatedGridInfo:(DOSCGridInfo *)gridInfo __attribute__((swift_name("onGridUpdated(gridInfo:)")));
- (void)onNoActiveSpeaker __attribute__((swift_name("onNoActiveSpeaker()")));
- (void)onParticipantJoinParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantJoin(participant:)")));
- (void)onParticipantLeaveParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantLeave(participant:)")));
- (void)onParticipantPinnedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onParticipantPinned(participant:)")));
- (void)onParticipantUnpinned __attribute__((swift_name("onParticipantUnpinned()")));
- (void)onScreenSharesUpdated __attribute__((swift_name("onScreenSharesUpdated()")));
- (void)onUpdateParticipants:(DOSCDyteRoomParticipants *)participants __attribute__((swift_name("onUpdate(participants:)")));
- (void)onVideoUpdateVideoEnabled:(BOOL)videoEnabled participant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onVideoUpdate(videoEnabled:participant:)")));
- (void)onWaitListParticipantAcceptedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onWaitListParticipantAccepted(participant:)")));
- (void)onWaitListParticipantClosedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onWaitListParticipantClosed(participant:)")));
- (void)onWaitListParticipantJoinedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onWaitListParticipantJoined(participant:)")));
- (void)onWaitListParticipantRejectedParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onWaitListParticipantRejected(participant:)")));
@end;

__attribute__((swift_name("DyteParticipantUpdateListener")))
@protocol DOSCDyteParticipantUpdateListener
@required
- (void)onAudioUpdateParticipant:(DOSCDyteMeetingParticipant *)participant isEnabled:(BOOL)isEnabled __attribute__((swift_name("onAudioUpdate(participant:isEnabled:)")));
- (void)onUpdateParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onUpdate(participant:)")));
- (void)onVideoUpdateParticipant:(DOSCDyteMeetingParticipant *)participant isEnabled:(BOOL)isEnabled __attribute__((swift_name("onVideoUpdate(participant:isEnabled:)")));
@end;

__attribute__((swift_name("DytePermissionEventsListener")))
@protocol DOSCDytePermissionEventsListener
@required
- (void)onPermissionsUpdatedPermissions:(NSArray<DOSCPermission *> *)permissions __attribute__((swift_name("onPermissionsUpdated(permissions:)")));
@end;

__attribute__((swift_name("DytePluginEventsListener")))
@protocol DOSCDytePluginEventsListener
@required
- (void)onPluginActivatedPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("onPluginActivated(plugin:)")));
- (void)onPluginDeactivatedPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("onPluginDeactivated(plugin:)")));
- (void)onPluginFileRequestPlugin:(DOSCDytePlugin *)plugin __attribute__((swift_name("onPluginFileRequest(plugin:)")));
- (void)onPluginMessageMessage:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)message __attribute__((swift_name("onPluginMessage(message:)")));
@end;

__attribute__((swift_name("DyteSelfEventsListener")))
@protocol DOSCDyteSelfEventsListener
@required
- (void)onAudioDevicesUpdated __attribute__((swift_name("onAudioDevicesUpdated()")));
- (void)onAudioUpdateAudioEnabled:(BOOL)audioEnabled __attribute__((swift_name("onAudioUpdate(audioEnabled:)")));
- (void)onMeetingRoomDisconnected __attribute__((swift_name("onMeetingRoomDisconnected()")));
- (void)onMeetingRoomJoinFailedException:(DOSCKotlinException *)exception __attribute__((swift_name("onMeetingRoomJoinFailed(exception:)")));
- (void)onMeetingRoomJoinStarted __attribute__((swift_name("onMeetingRoomJoinStarted()")));
- (void)onMeetingRoomJoined __attribute__((swift_name("onMeetingRoomJoined()")));
- (void)onMeetingRoomJoinedWithoutCameraPermission __attribute__((swift_name("onMeetingRoomJoinedWithoutCameraPermission()")));
- (void)onMeetingRoomJoinedWithoutMicPermission __attribute__((swift_name("onMeetingRoomJoinedWithoutMicPermission()")));
- (void)onMeetingRoomLeaveStarted __attribute__((swift_name("onMeetingRoomLeaveStarted()")));
- (void)onMeetingRoomLeft __attribute__((swift_name("onMeetingRoomLeft()")));
- (void)onProximityChangedIsNear:(BOOL)isNear __attribute__((swift_name("onProximityChanged(isNear:)")));
- (void)onStoppedPresenting __attribute__((swift_name("onStoppedPresenting()")));
- (void)onUpdateParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("onUpdate(participant:)")));
- (void)onVideoUpdateVideoEnabled:(BOOL)videoEnabled __attribute__((swift_name("onVideoUpdate(videoEnabled:)")));
- (void)onWaitListStatusUpdateWaitListStatus:(DOSCWaitListStatus *)waitListStatus __attribute__((swift_name("onWaitListStatusUpdate(waitListStatus:)")));
- (void)onWebinarPresentRequestReceived __attribute__((swift_name("onWebinarPresentRequestReceived()")));
@end;

__attribute__((swift_name("IDyteLoggerUtils")))
@protocol DOSCIDyteLoggerUtils
@required
- (void)enableLoggerEnable:(BOOL)enable __attribute__((swift_name("enableLogger(enable:)")));
- (BOOL)isLoggerEnabled __attribute__((swift_name("isLoggerEnabled()")));
- (void)logDTag:(id)tag message:(NSString *)message __attribute__((swift_name("logD(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message __attribute__((swift_name("logE(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message throwable:(DOSCKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:message:throwable:)")));
- (void)logETag:(id)tag throwable:(DOSCKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:throwable:)")));
- (void)logITag:(id)tag message:(NSString *)message __attribute__((swift_name("logI(tag:message:)")));
- (void)logWTag:(id)tag message:(NSString *)message __attribute__((swift_name("logW(tag:message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSLogger")))
@interface DOSCDyteIOSLogger : DOSCBase <DOSCIDyteLoggerUtils>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)enableLoggerEnable:(BOOL)enable __attribute__((swift_name("enableLogger(enable:)")));
- (BOOL)isLoggerEnabled __attribute__((swift_name("isLoggerEnabled()")));
- (void)logDTag:(id)tag message:(NSString *)message __attribute__((swift_name("logD(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message __attribute__((swift_name("logE(tag:message:)")));
- (void)logETag:(id)tag message:(NSString *)message throwable:(DOSCKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:message:throwable:)")));
- (void)logETag:(id)tag throwable:(DOSCKotlinThrowable *)throwable __attribute__((swift_name("logE(tag:throwable:)")));
- (void)logITag:(id)tag message:(NSString *)message __attribute__((swift_name("logI(tag:message:)")));
- (void)logWTag:(id)tag message:(NSString *)message __attribute__((swift_name("logW(tag:message:)")));
@property (getter=isLoggerEnabled_) BOOL isLoggerEnabled __attribute__((swift_name("isLoggerEnabled")));
@end;

__attribute__((swift_name("IDyteMediaSoupUtils")))
@protocol DOSCIDyteMediaSoupUtils
@required
- (void)connectTransportId:(NSString *)id producing:(BOOL)producing onDone:(void (^)(void))onDone __attribute__((swift_name("connectTransport(id:producing:onDone:)")));
- (void)createWebRtcTransportProdModel:(DOSCWebRtcCreateTransportModel *)model iceServers:(NSArray<DOSCIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportProd(model:iceServers:)")));
- (void)createWebRtcTransportRecvModel:(DOSCWebRtcCreateTransportModel *)model iceServers:(NSArray<DOSCIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportRecv(model:iceServers:)")));
- (DOSCKotlinPair<id, id> *)getSelfTrack __attribute__((swift_name("getSelfTrack()")));
- (void)handleCloseConsumerWebSocketConsumerModel:(DOSCWebSocketConsumerClosedModel *)webSocketConsumerModel __attribute__((swift_name("handleCloseConsumer(webSocketConsumerModel:)")));
- (void)handleNewConsumerWebSocketConsumerModel:(DOSCWebSocketConsumerModel *)webSocketConsumerModel onDone:(void (^)(void))onDone __attribute__((swift_name("handleNewConsumer(webSocketConsumerModel:onDone:)")));
- (void)doInitControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("doInit(controllerContainer:)")));
- (void)leaveCall __attribute__((swift_name("leaveCall()")));
- (void)loadRouterRtpCapabilitiesRouterRtpCapabilitiesString:(NSString *)routerRtpCapabilitiesString __attribute__((swift_name("loadRouterRtpCapabilities(routerRtpCapabilitiesString:)")));
- (BOOL)muteSelfAudio __attribute__((swift_name("muteSelfAudio()")));
- (BOOL)muteSelfVideo __attribute__((swift_name("muteSelfVideo()")));
- (void)onCameraStreamKilled __attribute__((swift_name("onCameraStreamKilled()")));
- (void)resumeConsumerId:(NSString *)id __attribute__((swift_name("resumeConsumer(id:)")));
- (void)switchCamera __attribute__((swift_name("switchCamera()")));
- (BOOL)unmuteSelfAudio __attribute__((swift_name("unmuteSelfAudio()")));
- (BOOL)unmuteSelfVideo __attribute__((swift_name("unmuteSelfVideo()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSMediaSoup")))
@interface DOSCDyteIOSMediaSoup : DOSCBase <DOSCIDyteMediaSoupUtils>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)connectTransportId:(NSString *)id producing:(BOOL)producing onDone:(void (^)(void))onDone __attribute__((swift_name("connectTransport(id:producing:onDone:)")));
- (void)createWebRtcTransportProdModel:(DOSCWebRtcCreateTransportModel *)model iceServers:(NSArray<DOSCIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportProd(model:iceServers:)")));
- (void)createWebRtcTransportRecvModel:(DOSCWebRtcCreateTransportModel *)model iceServers:(NSArray<DOSCIceServerData *> *)iceServers __attribute__((swift_name("createWebRtcTransportRecv(model:iceServers:)")));
- (DOSCKotlinPair<id, id> *)getSelfTrack __attribute__((swift_name("getSelfTrack()")));
- (void)handleCloseConsumerWebSocketConsumerModel:(DOSCWebSocketConsumerClosedModel *)webSocketConsumerModel __attribute__((swift_name("handleCloseConsumer(webSocketConsumerModel:)")));
- (void)handleNewConsumerWebSocketConsumerModel:(DOSCWebSocketConsumerModel *)webSocketConsumerModel onDone:(void (^)(void))onDone __attribute__((swift_name("handleNewConsumer(webSocketConsumerModel:onDone:)")));
- (void)doInitControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("doInit(controllerContainer:)")));
- (void)leaveCall __attribute__((swift_name("leaveCall()")));
- (void)loadRouterRtpCapabilitiesRouterRtpCapabilitiesString:(NSString *)routerRtpCapabilitiesString __attribute__((swift_name("loadRouterRtpCapabilities(routerRtpCapabilitiesString:)")));
- (BOOL)muteSelfAudio __attribute__((swift_name("muteSelfAudio()")));
- (BOOL)muteSelfVideo __attribute__((swift_name("muteSelfVideo()")));
- (void)onCameraStreamKilled __attribute__((swift_name("onCameraStreamKilled()")));
- (void)resumeConsumerId:(NSString *)id __attribute__((swift_name("resumeConsumer(id:)")));
- (void)switchCamera __attribute__((swift_name("switchCamera()")));
- (BOOL)unmuteSelfAudio __attribute__((swift_name("unmuteSelfAudio()")));
- (BOOL)unmuteSelfVideo __attribute__((swift_name("unmuteSelfVideo()")));
@end;

__attribute__((swift_name("IDytePlatformUtils")))
@protocol DOSCIDytePlatformUtils
@required
- (void)askPermissionsOnPermissionGranted:(void (^)(DOSCPermissionType *))onPermissionGranted onPermissionsDenied:(void (^)(DOSCPermissionType *))onPermissionsDenied __attribute__((swift_name("askPermissions(onPermissionGranted:onPermissionsDenied:)")));
- (NSString * _Nullable)decodeAuthTokenAuthToken:(NSString *)authToken __attribute__((swift_name("decodeAuthToken(authToken:)")));
- (id)getActivity __attribute__((swift_name("getActivity()")));
- (id)getAndroidApplicationContext __attribute__((swift_name("getAndroidApplicationContext()")));
- (int64_t)getCurrentTime __attribute__((swift_name("getCurrentTime()")));
- (NSString *)getDeviceInfo __attribute__((swift_name("getDeviceInfo()")));
- (NSString *)getDiffStartTime:(NSString *)startTime endTime:(NSString *)endTime __attribute__((swift_name("getDiff(startTime:endTime:)")));
- (DOSCKotlinByteArray *)getFileContentFilePath:(NSString *)filePath __attribute__((swift_name("getFileContent(filePath:)")));
- (NSString *)getOsName __attribute__((swift_name("getOsName()")));
- (NSString *)getOsVersion __attribute__((swift_name("getOsVersion()")));
- (NSString *)getUrlEncodedStringStringToEncode:(NSString *)stringToEncode __attribute__((swift_name("getUrlEncodedString(stringToEncode:)")));
- (NSString *)getUtcTimeNow __attribute__((swift_name("getUtcTimeNow()")));
- (NSString *)getUuid __attribute__((swift_name("getUuid()")));
- (void)listenForCrashes __attribute__((swift_name("listenForCrashes()")));
- (void)printThreadDesc:(NSString * _Nullable)desc __attribute__((swift_name("printThread(desc:)")));
- (void)runOnIoThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnIoThread(block:)")));
- (void)runOnMainThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnMainThread(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSPlatform")))
@interface DOSCDyteIOSPlatform : DOSCBase <DOSCIDytePlatformUtils>
- (instancetype)initWithUtilsProvider:(id<DOSCIDytePlatformUtilsProvider>)utilsProvider __attribute__((swift_name("init(utilsProvider:)"))) __attribute__((objc_designated_initializer));
- (void)askPermissionsOnPermissionGranted:(void (^)(DOSCPermissionType *))onPermissionGranted onPermissionsDenied:(void (^)(DOSCPermissionType *))onPermissionsDenied __attribute__((swift_name("askPermissions(onPermissionGranted:onPermissionsDenied:)")));
- (NSString * _Nullable)decodeAuthTokenAuthToken:(NSString *)authToken __attribute__((swift_name("decodeAuthToken(authToken:)")));
- (id)getActivity __attribute__((swift_name("getActivity()")));
- (id)getAndroidApplicationContext __attribute__((swift_name("getAndroidApplicationContext()")));
- (int64_t)getCurrentTime __attribute__((swift_name("getCurrentTime()")));
- (NSString *)getDeviceInfo __attribute__((swift_name("getDeviceInfo()")));
- (NSString *)getDiffStartTime:(NSString *)startTime endTime:(NSString *)endTime __attribute__((swift_name("getDiff(startTime:endTime:)")));
- (DOSCKotlinByteArray *)getFileContentFilePath:(NSString *)filePath __attribute__((swift_name("getFileContent(filePath:)")));
- (NSString *)getOsName __attribute__((swift_name("getOsName()")));
- (NSString *)getOsVersion __attribute__((swift_name("getOsVersion()")));
- (NSString *)getUrlEncodedStringStringToEncode:(NSString *)stringToEncode __attribute__((swift_name("getUrlEncodedString(stringToEncode:)")));
- (NSString *)getUtcTimeNow __attribute__((swift_name("getUtcTimeNow()")));
- (NSString *)getUuid __attribute__((swift_name("getUuid()")));
- (void)listenForCrashes __attribute__((swift_name("listenForCrashes()")));
- (void)printThreadDesc:(NSString * _Nullable)desc __attribute__((swift_name("printThread(desc:)")));
- (void)runOnIoThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnIoThread(block:)")));
- (void)runOnMainThreadBlock:(void (^)(void))block __attribute__((swift_name("runOnMainThread(block:)")));
@end;

__attribute__((swift_name("IDytePlatformUtilsProvider")))
@protocol DOSCIDytePlatformUtilsProvider
@required
- (id<DOSCIDyteWebView>)createWebView __attribute__((swift_name("createWebView()")));
- (id<DOSCIControllerContainer>)getControllerContainer __attribute__((swift_name("getControllerContainer()")));
- (id<DOSCIDyteLoggerUtils>)getLogger __attribute__((swift_name("getLogger()")));
- (id<DOSCIDyteMediaSoupUtils>)getMediaSoupUtils __attribute__((swift_name("getMediaSoupUtils()")));
- (id<DOSCIDyteMediaUtils>)getMediaUtils __attribute__((swift_name("getMediaUtils()")));
- (id<DOSCIDytePeerConnectionUtils>)getPeerConnectionUtils __attribute__((swift_name("getPeerConnectionUtils()")));
- (id<DOSCIDytePlatformUtils>)getPlatformUtils __attribute__((swift_name("getPlatformUtils()")));
- (id<DOSCIDyteVideoUtils>)getVideoUtils __attribute__((swift_name("getVideoUtils()")));
- (void)doInitControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("doInit(controllerContainer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSPlatformProvider")))
@interface DOSCDyteIOSPlatformProvider : DOSCBase <DOSCIDytePlatformUtilsProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<DOSCIDyteWebView>)createWebView __attribute__((swift_name("createWebView()")));
- (id<DOSCIControllerContainer>)getControllerContainer __attribute__((swift_name("getControllerContainer()")));
- (id<DOSCIDyteLoggerUtils>)getLogger __attribute__((swift_name("getLogger()")));
- (id<DOSCIDyteMediaSoupUtils>)getMediaSoupUtils __attribute__((swift_name("getMediaSoupUtils()")));
- (id<DOSCIDyteMediaUtils>)getMediaUtils __attribute__((swift_name("getMediaUtils()")));
- (id<DOSCIDytePeerConnectionUtils>)getPeerConnectionUtils __attribute__((swift_name("getPeerConnectionUtils()")));
- (id<DOSCIDytePlatformUtils>)getPlatformUtils __attribute__((swift_name("getPlatformUtils()")));
- (id<DOSCIDyteVideoUtils>)getVideoUtils __attribute__((swift_name("getVideoUtils()")));
- (void)doInitControllerContainer:(id<DOSCIControllerContainer>)controllerContainer __attribute__((swift_name("doInit(controllerContainer:)")));
@end;

__attribute__((swift_name("IDyteVideoUtils")))
@protocol DOSCIDyteVideoUtils
@required
- (void)destroyViewParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("destroyView(participant:)")));
- (UIView *)getVideoViewParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("getVideoView(participant:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSVideoUtils")))
@interface DOSCDyteIOSVideoUtils : DOSCBase <DOSCIDyteVideoUtils>
- (instancetype)initWithUtilsProvider:(id<DOSCIDytePlatformUtilsProvider>)utilsProvider __attribute__((swift_name("init(utilsProvider:)"))) __attribute__((objc_designated_initializer));
- (void)destroyViewParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("destroyView(participant:)")));
- (UIView *)getVideoViewParticipant:(DOSCDyteMeetingParticipant *)participant __attribute__((swift_name("getVideoView(participant:)")));
@end;

__attribute__((swift_name("IDyteWebView")))
@protocol DOSCIDyteWebView
@required
- (void)bindWebViewWebView:(WKWebView *)webView __attribute__((swift_name("bindWebView(webView:)")));
- (void)removeListener __attribute__((swift_name("removeListener()")));
- (void)setListenerListener:(id<DOSCIDyteWebViewIDyteWebViewListener>)listener __attribute__((swift_name("setListener(listener:)")));
- (void)setURLUrl:(NSString *)url __attribute__((swift_name("setURL(url:)")));
- (void)submitEventPayload:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("submitEvent(payload:)")));
- (void)unbindWebView __attribute__((swift_name("unbindWebView()")));
- (void)uploadFileDytePluginFile:(DOSCKotlinNothing *)dytePluginFile __attribute__((swift_name("uploadFile(dytePluginFile:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteIOSWebView")))
@interface DOSCDyteIOSWebView : DOSCBase <DOSCIDyteWebView>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)bindWebViewWebView:(WKWebView *)webView __attribute__((swift_name("bindWebView(webView:)")));
- (void)removeListener __attribute__((swift_name("removeListener()")));
- (void)setListenerListener:(id<DOSCIDyteWebViewIDyteWebViewListener>)listener __attribute__((swift_name("setListener(listener:)")));
- (void)setURLUrl:(NSString *)url __attribute__((swift_name("setURL(url:)")));
- (void)submitEventPayload:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)payload __attribute__((swift_name("submitEvent(payload:)")));
- (void)unbindWebView __attribute__((swift_name("unbindWebView()")));
- (void)uploadFileDytePluginFile:(DOSCKotlinNothing *)dytePluginFile __attribute__((swift_name("uploadFile(dytePluginFile:)")));
@end;

__attribute__((swift_name("IDyteMediaUtils")))
@protocol DOSCIDyteMediaUtils
@required
- (NSArray<DOSCDyteAudioDevice *> *)getAudioDevices __attribute__((swift_name("getAudioDevices()")));
- (DOSCDyteAudioDevice *)getSelectedAudioDevice __attribute__((swift_name("getSelectedAudioDevice()")));
- (DOSCDyteVideoDevice *)getSelectedVideoDevice __attribute__((swift_name("getSelectedVideoDevice()")));
- (NSArray<DOSCDyteVideoDevice *> *)getVideoDevices __attribute__((swift_name("getVideoDevices()")));
- (void)doInit __attribute__((swift_name("doInit()")));
- (void)setAudioDeviceDevice:(DOSCDyteAudioDevice *)device __attribute__((swift_name("setAudioDevice(device:)")));
- (void)setVideoDeviceDevice:(DOSCDyteVideoDevice *)device __attribute__((swift_name("setVideoDevice(device:)")));
@end;

__attribute__((swift_name("IDytePeerConnectionUtils")))
@protocol DOSCIDytePeerConnectionUtils
@required
- (id)createAudioTrackId:(NSString *)id __attribute__((swift_name("createAudioTrack(id:)")));
- (id _Nullable)createVideoTrackId:(NSString *)id __attribute__((swift_name("createVideoTrack(id:)")));
- (id)createVideoViewId:(NSString *)id __attribute__((swift_name("createVideoView(id:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (id)getEglContext __attribute__((swift_name("getEglContext()")));
- (void)onCameraClosed __attribute__((swift_name("onCameraClosed()")));
- (void)releaseEglContext __attribute__((swift_name("releaseEglContext()")));
- (void)resumeVideo __attribute__((swift_name("resumeVideo()")));
- (void)stopVideo __attribute__((swift_name("stopVideo()")));
- (void)switchCamera __attribute__((swift_name("switchCamera()")));
@end;

__attribute__((swift_name("IDyteWebViewIDyteWebViewListener")))
@protocol DOSCIDyteWebViewIDyteWebViewListener
@required
- (void)onFileRequest __attribute__((swift_name("onFileRequest()")));
- (void)onWebViewMessageMessage:(NSDictionary<NSString *, DOSCKotlinx_serialization_jsonJsonElement *> *)message __attribute__((swift_name("onWebViewMessage(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface DOSCKotlinByteArray : DOSCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(DOSCByte *(^)(DOSCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (DOSCKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface DOSCKotlinByteArray (Extensions)
- (NSData *)toData __attribute__((swift_name("toData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataByteArrayKt")))
@interface DOSCNSDataByteArrayKt : DOSCBase
+ (DOSCKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyteChatMessageKt")))
@interface DOSCDyteChatMessageKt : DOSCBase
+ (NSDictionary<NSString *, id> *)encodeDyteChatMessageMessage:(DOSCDyteChatMessage *)message __attribute__((swift_name("encodeDyteChatMessage(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketEventKt")))
@interface DOSCSocketEventKt : DOSCBase
@property (class, readonly) NSString *EVENT_CONNECT __attribute__((swift_name("EVENT_CONNECT")));
@property (class, readonly) NSString *EVENT_CONNECTING __attribute__((swift_name("EVENT_CONNECTING")));
@property (class, readonly) NSString *EVENT_CONNECT_ERROR __attribute__((swift_name("EVENT_CONNECT_ERROR")));
@property (class, readonly) NSString *EVENT_DISCONNECT __attribute__((swift_name("EVENT_DISCONNECT")));
@property (class, readonly) NSString *EVENT_ERROR __attribute__((swift_name("EVENT_ERROR")));
@property (class, readonly) NSString *EVENT_MESSAGE __attribute__((swift_name("EVENT_MESSAGE")));
@property (class, readonly) NSString *EVENT_PING __attribute__((swift_name("EVENT_PING")));
@property (class, readonly) NSString *EVENT_PONG __attribute__((swift_name("EVENT_PONG")));
@property (class, readonly) NSString *EVENT_RECONNECT __attribute__((swift_name("EVENT_RECONNECT")));
@property (class, readonly) NSString *EVENT_RECONNECT_ATTEMPT __attribute__((swift_name("EVENT_RECONNECT_ATTEMPT")));
@property (class, readonly) NSString *EVENT_RECONNECT_ERROR __attribute__((swift_name("EVENT_RECONNECT_ERROR")));
@property (class, readonly) NSString *EVENT_RECONNECT_FAILED __attribute__((swift_name("EVENT_RECONNECT_FAILED")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface DOSCKotlinEnumCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface DOSCKotlinArray<T> : DOSCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(DOSCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<DOSCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface DOSCKotlinThrowable : DOSCBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (DOSCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface DOSCKotlinException : DOSCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface DOSCKotlinRuntimeException : DOSCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface DOSCKotlinIllegalStateException : DOSCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface DOSCKotlinNothing : DOSCBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol DOSCKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<DOSCKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DOSCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol DOSCKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<DOSCKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<DOSCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol DOSCKotlinx_serialization_coreKSerializer <DOSCKotlinx_serialization_coreSerializationStrategy, DOSCKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface DOSCKotlinx_serialization_jsonJsonElement : DOSCBase
@property (class, readonly, getter=companion) DOSCKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface DOSCKotlinCancellationException : DOSCKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface DOSCKotlinUnit : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol DOSCKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<DOSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol DOSCKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface DOSCKtor_client_coreHttpClient : DOSCBase <DOSCKotlinx_coroutines_coreCoroutineScope, DOSCKtor_ioCloseable>
- (instancetype)initWithEngine:(id<DOSCKtor_client_coreHttpClientEngine>)engine userConfig:(DOSCKtor_client_coreHttpClientConfig<DOSCKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (DOSCKtor_client_coreHttpClient *)configBlock:(void (^)(DOSCKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<DOSCKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DOSCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<DOSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<DOSCKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) DOSCKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) DOSCKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) DOSCKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) DOSCKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) DOSCKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) DOSCKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface DOSCKotlinPair<__covariant A, __covariant B> : DOSCBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol DOSCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface DOSCKotlinByteIterator : DOSCBase <DOSCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DOSCByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol DOSCKotlinx_serialization_coreEncoder
@required
- (id<DOSCKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<DOSCKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<DOSCKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<DOSCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<DOSCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) DOSCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol DOSCKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<DOSCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<DOSCKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<DOSCKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) DOSCKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol DOSCKotlinx_serialization_coreDecoder
@required
- (id<DOSCKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<DOSCKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (DOSCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<DOSCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<DOSCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) DOSCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface DOSCKotlinx_serialization_jsonJsonElementCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol DOSCKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<DOSCKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<DOSCKotlinCoroutineContextElement> _Nullable)getKey:(id<DOSCKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<DOSCKotlinCoroutineContext>)minusKeyKey:(id<DOSCKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<DOSCKotlinCoroutineContext>)plusContext:(id<DOSCKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol DOSCKtor_client_coreHttpClientEngine <DOSCKotlinx_coroutines_coreCoroutineScope, DOSCKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(DOSCKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(DOSCKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(DOSCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) DOSCKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) DOSCKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<DOSCKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface DOSCKtor_client_coreHttpClientEngineConfig : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property DOSCKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface DOSCKtor_client_coreHttpClientConfig<T> : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DOSCKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(DOSCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<DOSCKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(DOSCKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(DOSCKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol DOSCKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol DOSCKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(DOSCKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(DOSCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(DOSCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(DOSCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(DOSCKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(DOSCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(DOSCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(DOSCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<DOSCKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface DOSCKtor_eventsEvents : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(DOSCKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<DOSCKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(DOSCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(DOSCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface DOSCKtor_utilsPipeline<TSubject, TContext> : DOSCBase
- (instancetype)initWithPhase:(DOSCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DOSCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(DOSCKotlinArray<DOSCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(DOSCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(DOSCKtor_utilsPipelinePhase *)reference phase:(DOSCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(DOSCKtor_utilsPipelinePhase *)reference phase:(DOSCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(DOSCKtor_utilsPipelinePhase *)phase block:(id<DOSCKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<DOSCKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(DOSCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(DOSCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(DOSCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(DOSCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<DOSCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<DOSCKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface DOSCKtor_client_coreHttpReceivePipeline : DOSCKtor_utilsPipeline<DOSCKtor_client_coreHttpResponse *, DOSCKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DOSCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DOSCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DOSCKotlinArray<DOSCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface DOSCKtor_client_coreHttpRequestPipeline : DOSCKtor_utilsPipeline<id, DOSCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DOSCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DOSCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DOSCKotlinArray<DOSCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface DOSCKtor_client_coreHttpResponsePipeline : DOSCKtor_utilsPipeline<DOSCKtor_client_coreHttpResponseContainer *, DOSCKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DOSCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DOSCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DOSCKotlinArray<DOSCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface DOSCKtor_client_coreHttpSendPipeline : DOSCKtor_utilsPipeline<id, DOSCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(DOSCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<DOSCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(DOSCKotlinArray<DOSCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol DOSCKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<DOSCKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DOSCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DOSCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) DOSCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface DOSCKotlinx_serialization_coreSerializersModule : DOSCBase
- (void)dumpToCollector:(id<DOSCKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<DOSCKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<DOSCKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<DOSCKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<DOSCKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DOSCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<DOSCKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DOSCKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol DOSCKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface DOSCKotlinx_serialization_coreSerialKind : DOSCBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol DOSCKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<DOSCKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DOSCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DOSCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<DOSCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) DOSCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol DOSCKotlinCoroutineContextElement <DOSCKotlinCoroutineContext>
@required
@property (readonly) id<DOSCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol DOSCKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface DOSCKtor_client_coreHttpRequestData : DOSCBase
- (instancetype)initWithUrl:(DOSCKtor_httpUrl *)url method:(DOSCKtor_httpHttpMethod *)method headers:(id<DOSCKtor_httpHeaders>)headers body:(DOSCKtor_httpOutgoingContent *)body executionContext:(id<DOSCKotlinx_coroutines_coreJob>)executionContext attributes:(id<DOSCKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<DOSCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DOSCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) DOSCKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<DOSCKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<DOSCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) DOSCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) DOSCKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface DOSCKtor_client_coreHttpResponseData : DOSCBase
- (instancetype)initWithStatusCode:(DOSCKtor_httpHttpStatusCode *)statusCode requestTime:(DOSCKtor_utilsGMTDate *)requestTime headers:(id<DOSCKtor_httpHeaders>)headers version:(DOSCKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<DOSCKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<DOSCKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<DOSCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) DOSCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) DOSCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) DOSCKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) DOSCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface DOSCKotlinAbstractCoroutineContextElement : DOSCBase <DOSCKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<DOSCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<DOSCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol DOSCKotlinContinuationInterceptor <DOSCKotlinCoroutineContextElement>
@required
- (id<DOSCKotlinContinuation>)interceptContinuationContinuation:(id<DOSCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<DOSCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface DOSCKotlinx_coroutines_coreCoroutineDispatcher : DOSCKotlinAbstractCoroutineContextElement <DOSCKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<DOSCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<DOSCKotlinCoroutineContext>)context block:(id<DOSCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<DOSCKotlinCoroutineContext>)context block:(id<DOSCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<DOSCKotlinContinuation>)interceptContinuationContinuation:(id<DOSCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<DOSCKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (DOSCKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (DOSCKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(DOSCKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<DOSCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface DOSCKtor_client_coreProxyConfig : DOSCBase
- (instancetype)initWithUrl:(DOSCKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol DOSCKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(DOSCKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) DOSCKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface DOSCKtor_utilsAttributeKey<T> : DOSCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface DOSCKtor_eventsEventDefinition<T> : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol DOSCKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface DOSCKtor_utilsPipelinePhase : DOSCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol DOSCKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol DOSCKotlinSuspendFunction2 <DOSCKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface DOSCKtor_client_coreHttpReceivePipelinePhases : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) DOSCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol DOSCKtor_httpHttpMessage
@required
@property (readonly) id<DOSCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface DOSCKtor_client_coreHttpResponse : DOSCBase <DOSCKtor_httpHttpMessage, DOSCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<DOSCKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) DOSCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) DOSCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) DOSCKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) DOSCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface DOSCKtor_client_coreHttpRequestPipelinePhases : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) DOSCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol DOSCKtor_httpHttpMessageBuilder
@required
@property (readonly) DOSCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface DOSCKtor_client_coreHttpRequestBuilder : DOSCBase <DOSCKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) DOSCKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (DOSCKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<DOSCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<DOSCKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<DOSCKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (DOSCKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(DOSCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (DOSCKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(DOSCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(DOSCKtor_httpURLBuilder *, DOSCKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<DOSCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property DOSCKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<DOSCKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) DOSCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property DOSCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) DOSCKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface DOSCKtor_client_coreHttpResponsePipelinePhases : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) DOSCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface DOSCKtor_client_coreHttpResponseContainer : DOSCBase
- (instancetype)initWithExpectedType:(DOSCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (DOSCKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (DOSCKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(DOSCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface DOSCKtor_client_coreHttpClientCall : DOSCBase <DOSCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(DOSCKtor_client_coreHttpClient *)client requestData:(DOSCKtor_client_coreHttpRequestData *)requestData responseData:(DOSCKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(DOSCKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(DOSCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(DOSCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<DOSCKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<DOSCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) DOSCKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<DOSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<DOSCKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property DOSCKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface DOSCKtor_client_coreHttpSendPipelinePhases : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) DOSCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) DOSCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol DOSCKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<DOSCKotlinKClass>)kClass provider:(id<DOSCKotlinx_serialization_coreKSerializer> (^)(NSArray<id<DOSCKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<DOSCKotlinKClass>)kClass serializer:(id<DOSCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<DOSCKotlinKClass>)baseClass actualClass:(id<DOSCKotlinKClass>)actualClass actualSerializer:(id<DOSCKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<DOSCKotlinKClass>)baseClass defaultDeserializerProvider:(id<DOSCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<DOSCKotlinKClass>)baseClass defaultDeserializerProvider:(id<DOSCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<DOSCKotlinKClass>)baseClass defaultSerializerProvider:(id<DOSCKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol DOSCKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol DOSCKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol DOSCKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol DOSCKotlinKClass <DOSCKotlinKDeclarationContainer, DOSCKotlinKAnnotatedElement, DOSCKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface DOSCKtor_httpUrl : DOSCBase
@property (class, readonly, getter=companion) DOSCKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<DOSCKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) DOSCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface DOSCKtor_httpHttpMethod : DOSCBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DOSCKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol DOSCKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<DOSCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol DOSCKtor_httpHeaders <DOSCKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface DOSCKtor_httpOutgoingContent : DOSCBase
- (id _Nullable)getPropertyKey:(DOSCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(DOSCKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<DOSCKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) DOSCLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) DOSCKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<DOSCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) DOSCKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol DOSCKotlinx_coroutines_coreJob <DOSCKotlinCoroutineContextElement>
@required
- (id<DOSCKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<DOSCKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(DOSCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (DOSCKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<DOSCKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(DOSCKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<DOSCKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(DOSCKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<DOSCKotlinx_coroutines_coreJob>)plusOther_:(id<DOSCKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<DOSCKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<DOSCKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface DOSCKtor_httpHttpStatusCode : DOSCBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DOSCKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (DOSCKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface DOSCKtor_utilsGMTDate : DOSCBase <DOSCKotlinComparable>
@property (class, readonly, getter=companion) DOSCKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(DOSCKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DOSCKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (DOSCKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (DOSCKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(DOSCKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(DOSCKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) DOSCKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) DOSCKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface DOSCKtor_httpHttpProtocolVersion : DOSCBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DOSCKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol DOSCKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<DOSCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface DOSCKotlinAbstractCoroutineContextKey<B, E> : DOSCBase <DOSCKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<DOSCKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<DOSCKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface DOSCKotlinx_coroutines_coreCoroutineDispatcherKey : DOSCKotlinAbstractCoroutineContextKey<id<DOSCKotlinContinuationInterceptor>, DOSCKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<DOSCKotlinCoroutineContextKey>)baseKey safeCast:(id<DOSCKotlinCoroutineContextElement> _Nullable (^)(id<DOSCKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol DOSCKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol DOSCKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(DOSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(DOSCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(DOSCKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(DOSCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(DOSCKtor_ioChunkBuffer *)dst completionHandler:(void (^)(DOSCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(DOSCKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(DOSCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(DOSCKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(DOSCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(DOSCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(DOSCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(DOSCByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(DOSCDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(DOSCFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(DOSCKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(DOSCKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(DOSCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(DOSCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(DOSCKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(DOSCKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<DOSCKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(DOSCShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<DOSCKotlinSuspendFunction1>)consumer completionHandler:(void (^)(DOSCKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<DOSCKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(DOSCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) DOSCKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol DOSCKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<DOSCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<DOSCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<DOSCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<DOSCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface DOSCKtor_utilsStringValuesBuilderImpl : DOSCBase <DOSCKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<DOSCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<DOSCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<DOSCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<DOSCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) DOSCMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface DOSCKtor_httpHeadersBuilder : DOSCKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<DOSCKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface DOSCKtor_client_coreHttpRequestBuilderCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface DOSCKtor_httpURLBuilder : DOSCBase
- (instancetype)initWithProtocol:(DOSCKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<DOSCKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (DOSCKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<DOSCKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<DOSCKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property DOSCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface DOSCKtor_utilsTypeInfo : DOSCBase
- (instancetype)initWithType:(id<DOSCKotlinKClass>)type reifiedType:(id<DOSCKotlinKType>)reifiedType kotlinType:(id<DOSCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<DOSCKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<DOSCKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<DOSCKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (DOSCKtor_utilsTypeInfo *)doCopyType:(id<DOSCKotlinKClass>)type reifiedType:(id<DOSCKotlinKType>)reifiedType kotlinType:(id<DOSCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DOSCKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<DOSCKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<DOSCKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface DOSCKtor_client_coreHttpClientCallCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol DOSCKtor_client_coreHttpRequest <DOSCKtor_httpHttpMessage, DOSCKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<DOSCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) DOSCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) DOSCKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) DOSCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) DOSCKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface DOSCKtor_httpUrlCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol DOSCKtor_httpParameters <DOSCKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface DOSCKtor_httpURLProtocol : DOSCBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DOSCKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface DOSCKtor_httpHttpMethodCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<DOSCKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) DOSCKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) DOSCKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) DOSCKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) DOSCKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) DOSCKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) DOSCKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) DOSCKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol DOSCKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface DOSCKtor_httpHeaderValueWithParameters : DOSCBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<DOSCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<DOSCKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface DOSCKtor_httpContentType : DOSCKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<DOSCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<DOSCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(DOSCKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (DOSCKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (DOSCKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol DOSCKotlinx_coroutines_coreChildHandle <DOSCKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(DOSCKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<DOSCKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol DOSCKotlinx_coroutines_coreChildJob <DOSCKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<DOSCKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol DOSCKotlinSequence
@required
- (id<DOSCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol DOSCKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<DOSCKotlinx_coroutines_coreSelectInstance>)select block:(id<DOSCKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface DOSCKtor_httpHttpStatusCodeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) DOSCKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) DOSCKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) DOSCKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) DOSCKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) DOSCKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) DOSCKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) DOSCKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) DOSCKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) DOSCKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) DOSCKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) DOSCKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) DOSCKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) DOSCKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) DOSCKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) DOSCKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) DOSCKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) DOSCKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) DOSCKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) DOSCKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) DOSCKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) DOSCKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) DOSCKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) DOSCKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) DOSCKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) DOSCKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) DOSCKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) DOSCKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) DOSCKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) DOSCKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) DOSCKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) DOSCKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) DOSCKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) DOSCKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) DOSCKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) DOSCKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) DOSCKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) DOSCKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) DOSCKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) DOSCKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) DOSCKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) DOSCKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) DOSCKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) DOSCKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<DOSCKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface DOSCKtor_utilsGMTDateCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface DOSCKtor_utilsWeekDay : DOSCKotlinEnum<DOSCKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) DOSCKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) DOSCKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) DOSCKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) DOSCKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) DOSCKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) DOSCKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) DOSCKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (DOSCKotlinArray<DOSCKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface DOSCKtor_utilsMonth : DOSCKotlinEnum<DOSCKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) DOSCKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) DOSCKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) DOSCKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) DOSCKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) DOSCKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) DOSCKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) DOSCKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) DOSCKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) DOSCKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) DOSCKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) DOSCKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) DOSCKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (DOSCKotlinArray<DOSCKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface DOSCKtor_httpHttpProtocolVersionCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (DOSCKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) DOSCKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) DOSCKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) DOSCKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) DOSCKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) DOSCKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface DOSCKtor_ioMemory : DOSCBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(DOSCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(DOSCKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (DOSCKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (DOSCKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface DOSCKtor_ioBuffer : DOSCBase
- (instancetype)initWithMemory:(DOSCKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (DOSCKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(DOSCKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) DOSCKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface DOSCKtor_ioChunkBuffer : DOSCKtor_ioBuffer
- (instancetype)initWithMemory:(DOSCKtor_ioMemory *)memory origin:(DOSCKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<DOSCKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(DOSCKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (DOSCKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (DOSCKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<DOSCKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) DOSCKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) DOSCKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface DOSCKtor_ioInput : DOSCBase <DOSCKtor_ioCloseable>
- (instancetype)initWithHead:(DOSCKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<DOSCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (DOSCKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(DOSCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(DOSCKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(DOSCKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<DOSCKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<DOSCKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<DOSCKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface DOSCKtor_ioByteReadPacket : DOSCKtor_ioInput
- (instancetype)initWithHead:(DOSCKtor_ioChunkBuffer *)head pool:(id<DOSCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(DOSCKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<DOSCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) DOSCKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (DOSCKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (DOSCKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(DOSCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol DOSCKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (DOSCKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol DOSCKotlinSuspendFunction1 <DOSCKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol DOSCKotlinAppendable
@required
- (id<DOSCKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<DOSCKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<DOSCKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface DOSCKtor_httpURLBuilderCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol DOSCKtor_httpParametersBuilder <DOSCKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol DOSCKotlinKType
@required
@property (readonly) NSArray<DOSCKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<DOSCKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface DOSCKtor_httpURLProtocolCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) DOSCKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) DOSCKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) DOSCKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) DOSCKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) DOSCKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, DOSCKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface DOSCKtor_httpHeaderValueParam : DOSCBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DOSCKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface DOSCKtor_httpHeaderValueWithParametersCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<DOSCKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface DOSCKtor_httpContentTypeCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) DOSCKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol DOSCKotlinx_coroutines_coreParentJob <DOSCKotlinx_coroutines_coreJob>
@required
- (DOSCKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol DOSCKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<DOSCKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(DOSCKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(DOSCKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<DOSCKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol DOSCKotlinSuspendFunction0 <DOSCKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface DOSCKtor_utilsWeekDayCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (DOSCKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface DOSCKtor_utilsMonthCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (DOSCKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface DOSCKtor_ioMemoryCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface DOSCKtor_ioBufferCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol DOSCKtor_ioObjectPool <DOSCKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface DOSCKtor_ioChunkBufferCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<DOSCKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<DOSCKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface DOSCKtor_ioInputCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface DOSCKtor_ioByteReadPacketCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) DOSCKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface DOSCKotlinKTypeProjection : DOSCBase
- (instancetype)initWithVariance:(DOSCKotlinKVariance * _Nullable)variance type:(id<DOSCKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) DOSCKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (DOSCKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<DOSCKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (DOSCKotlinKTypeProjection *)doCopyVariance:(DOSCKotlinKVariance * _Nullable)variance type:(id<DOSCKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<DOSCKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) DOSCKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface DOSCKotlinx_coroutines_coreAtomicDesc : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(DOSCKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(DOSCKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property DOSCKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface DOSCKotlinx_coroutines_coreOpDescriptor : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(DOSCKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface DOSCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : DOSCKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) DOSCKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface DOSCKotlinKVariance : DOSCKotlinEnum<DOSCKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DOSCKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) DOSCKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) DOSCKotlinKVariance *out __attribute__((swift_name("out")));
+ (DOSCKotlinArray<DOSCKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface DOSCKotlinKTypeProjectionCompanion : DOSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) DOSCKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (DOSCKotlinKTypeProjection *)contravariantType:(id<DOSCKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (DOSCKotlinKTypeProjection *)covariantType:(id<DOSCKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (DOSCKotlinKTypeProjection *)invariantType:(id<DOSCKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) DOSCKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface DOSCKotlinx_coroutines_coreAtomicOp<__contravariant T> : DOSCKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) DOSCKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface DOSCKotlinx_coroutines_coreLockFreeLinkedListNode : DOSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(DOSCBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(DOSCBoolean *(^)(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(DOSCBoolean *(^)(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(DOSCBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(DOSCBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : DOSCKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(DOSCKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(DOSCKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(DOSCKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(DOSCKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : DOSCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(DOSCKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) DOSCKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
