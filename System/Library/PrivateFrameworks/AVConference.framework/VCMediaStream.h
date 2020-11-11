/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/VCMediaStreamProtocol.h>
#import <libobjc.A.dylib/RTCPReportProvider.h>
#import <libobjc.A.dylib/VCSecurityEventHandler.h>
#import <libobjc.A.dylib/VCMediaStreamTransportDelegate.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>

@protocol OS_dispatch_queue, VCMediaStreamDelegate, VCMomentsCollectorDelegate, OS_dispatch_source;
@class NSObject, VCDatagramChannelIDS, NSString, VCWeakObjectHolder, NSMutableArray, VCMasterKeyIndex, VCCallInfoBlob, VCTransportSession, NSError, AVCRateControlFeedbackController, AVCBasebandCongestionDetector, VCMediaStreamTransport, NSArray, VCMediaStreamConfig;

@interface VCMediaStream : VCObject <VCMediaStreamProtocol, RTCPReportProvider, VCSecurityEventHandler, VCMediaStreamTransportDelegate, VCConnectionChangedHandler> {

	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	opaque_pthread_mutex_t _streamLock;
	int _state;
	VCDatagramChannelIDS* _datagramChannel;
	NSString* _idsDestination;
	id<VCMediaStreamDelegate> _delegate;
	id<VCMomentsCollectorDelegate> _momentsCollectorDelegate;
	NSString* _callID;
	BOOL _isSRTPInitialized;
	BOOL _useRandomTS;
	BOOL _isReportingAgentOwner;
	double _rtpTimeoutEnabledTime;
	double _rtcpTimeoutEnabledTime;
	double _decryptionTimeoutEnabledTime;
	NSObject*<OS_dispatch_source> _rtcpSendHeartbeat;
	NSObject*<OS_dispatch_source> _timeoutHeartbeat;
	double _lastRTPTimeoutReportTime;
	double _lastRTCPTimeoutReportTime;
	double _lastDecryptionTimeoutReportTime;
	double _decryptionErrorStartTime;
	unsigned _localSSRC;
	unsigned _transportSessionID;
	int _clientPID;
	VCWeakObjectHolder* _notificationDelegate;
	VCWeakObjectHolder* _rtcpReportProvider;
	int _operatingMode;
	VCMediaStreamTransportSetupInfo* _transportSetupInfo;
	NSMutableArray* _transportArray;
	/*function pointer*/void* _vcMediaCallback;
	tagVCMediaQueueRef _mediaQueue;
	VCMasterKeyIndex* _lastReceivedMKI;
	VCCallInfoBlob* _remoteEndpointInfo;
	VCTransportSession* _transportSession;
	NSError* _cachedError;
	/*function pointer*/void* _notificationHandler;
	/*function pointer*/void* _packetEventHandler;
	tagVCNWConnectionMonitorRef _nwMonitor;
	long long _streamToken;
	void* _mediaControlInfoGenerator;
	unsigned _mediaControlInfoGeneratorType;
	AVCRateControlFeedbackController* _feedbackController;
	BOOL _mediaControlInfoCallbacksRegistered;
	AVCBasebandCongestionDetector* _basebandCongestionDetector;

}

@property (nonatomic,readonly) long long streamToken;                                                     //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) int state;                                                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<VCMediaStreamDelegate> delegate; 
@property (assign,nonatomic) id<VCMomentsCollectorDelegate> momentsCollectorDelegate;                     //@synthesize momentsCollectorDelegate=_momentsCollectorDelegate - In the implementation block
@property (nonatomic,readonly) unsigned localSSRC;                                                        //@synthesize localSSRC=_localSSRC - In the implementation block
@property (assign,nonatomic) id<VCMediaStreamNotification> notificationDelegate; 
@property (assign,nonatomic) id<RTCPReportProvider> rtcpReportProvider; 
@property (nonatomic,readonly) double rtcpHeartbeatLeeway; 
@property (nonatomic,readonly) double lastReceivedRTPPacketTime; 
@property (nonatomic,readonly) double lastReceivedRTCPPacketTime; 
@property (nonatomic,retain) AVCBasebandCongestionDetector * basebandCongestionDetector;                  //@synthesize basebandCongestionDetector=_basebandCongestionDetector - In the implementation block
@property (assign,nonatomic) int operatingMode;                                                           //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;                                               //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (nonatomic,readonly) VCMediaStreamTransport * defaultTransport; 
@property (nonatomic,readonly) NSArray * transportArray;                                                  //@synthesize transportArray=_transportArray - In the implementation block
@property (nonatomic,readonly) VCMediaStreamConfig * defaultStreamConfig; 
@property (nonatomic,readonly) BOOL isSendingMedia; 
@property (nonatomic,retain,readonly) AVCRateControlFeedbackController * feedbackController;              //@synthesize feedbackController=_feedbackController - In the implementation block
@property (nonatomic,readonly) void* mediaControlInfoGenerator;                                           //@synthesize mediaControlInfoGenerator=_mediaControlInfoGenerator - In the implementation block
@property (nonatomic,readonly) unsigned mediaControlInfoGeneratorType;                                    //@synthesize mediaControlInfoGeneratorType=_mediaControlInfoGeneratorType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id<VCMediaStreamDelegate>)delegate;
-(void)setDelegate:(id<VCMediaStreamDelegate>)arg1 ;
-(int)state;
-(void)start;
-(void)stop;
-(void)setPause:(BOOL)arg1 ;
-(long long)streamToken;
-(AVCRateControlFeedbackController *)feedbackController;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(AVCBasebandCongestionDetector *)basebandCongestionDetector;
-(void)setBasebandCongestionDetector:(AVCBasebandCongestionDetector *)arg1 ;
-(id)supportedPayloads;
-(void)destroyNWMonitorInternal;
-(void)createNWMonitor;
-(void)destroyNWMonitor;
-(VCMediaStreamConfig *)defaultStreamConfig;
-(VCMediaStreamTransport *)defaultTransport;
-(id)createTransportWithStreamConfig:(id)arg1 ssrc:(unsigned)arg2 ;
-(double)lastReceivedRTPPacketTime;
-(double)lastReceivedRTCPPacketTime;
-(void)onCallIDChanged;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)onStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onPauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onResumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onSendRTCPPacket;
-(void)onRTPTimeout;
-(void)onRTCPTimeout;
-(double)rtcpHeartbeatLeeway;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(char*)streamStateToString:(int)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 localSSRC:(unsigned)arg2 ;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3 ;
-(void*)mediaControlInfoGenerator;
-(tagVCMediaQueueRef)mediaQueue;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(BOOL)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2 ;
-(void)setStreamDirection:(long long)arg1 ;
-(tagHANDLE*)createRTPHandleWithStreamConfig:(id)arg1 payloadType:(int)arg2 localSSRC:(unsigned)arg3 ;
-(BOOL)isRTPTimeoutEnabled;
-(BOOL)isRTCPTimeoutEnabled;
-(void)registerMediaControlInfoGeneratorWithConfigs:(id)arg1 ;
-(void)unregisterMediaControlInfoGenerator;
-(BOOL)isSendingMedia;
-(id<VCMomentsCollectorDelegate>)momentsCollectorDelegate;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)collectRxChannelMetrics:(SCD_Struct_VC79*)arg1 ;
-(void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2 ;
-(void)collectRxChannelMetrics:(SCD_Struct_VC79*)arg1 interval:(float)arg2 ;
-(void)collectTxChannelMetrics:(SCD_Struct_VC79*)arg1 ;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(void)setMomentsCollectorDelegate:(id<VCMomentsCollectorDelegate>)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(id)setupRTPForIDS;
-(void)checkForDecryptionTimeout;
-(void)setRtcpReportProvider:(id<RTCPReportProvider>)arg1 ;
-(unsigned)localSSRC;
-(void)setNotificationDelegate:(id<VCMediaStreamNotification>)arg1 ;
-(BOOL)handleEncryptionInfoChange:(id)arg1 ;
-(void)resetDecryptionTimeout;
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1 ;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1 ;
-(BOOL)initializeTransportSessionWithSocketDictionary:(id)arg1 error:(id*)arg2 ;
-(void)initializeTransportSetupInfoWithSocketDictionary:(id)arg1 ;
-(void)handleTransportSessionEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)handleStartDidSucceed:(BOOL)arg1 withError:(id)arg2 ;
-(BOOL)initializeTransportSetupInfoWithTransportSession:(id*)arg1 ;
-(void)initializeTransportSetupInfoWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2 ;
-(void)cleanupNWConnection:(id*)arg1 ;
-(BOOL)initializeTransportSessionWithNWConnectionID:(id)arg1 error:(id*)arg2 ;
-(BOOL)setupNWConnectionWithID:(id)arg1 ;
-(void)dupNWConnectionBackingSocket:(int*)arg1 ;
-(id)setupRTPWithNWConnectionID:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithIPInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)initializeTransportSessionWithIDSDestination:(id)arg1 error:(id*)arg2 ;
-(BOOL)initializeTransportSetupInfoWithIDSDestination:(id)arg1 error:(id*)arg2 ;
-(void)setupMediaStream;
-(id)getMediaStreamConfigForControlInfoGenerator:(id)arg1 ;
-(unsigned)mediaControlInfoGeneratorType;
-(void)createLocalMediaControlInfoGeneratorWithType:(unsigned)arg1 version:(unsigned char)arg2 ;
-(void)registerCallbacksForMediaControlInfoGenerator:(void*)arg1 forDirection:(long long)arg2 options:(unsigned)arg3 ;
-(void)decryptionStatusChanged:(BOOL)arg1 ;
-(BOOL)updateRemoteAddressWithConfig:(id)arg1 error:(id*)arg2 ;
-(BOOL)startMediaTransportsWithError:(id*)arg1 ;
-(void)startRTCPSendHeartbeat;
-(void)startTimeoutHeartbeat;
-(void)notifyDelegateStartDidSucceed:(BOOL)arg1 withError:(id)arg2 ;
-(void)stopInternal;
-(void)stopMediaTransports;
-(void)stopRTCPSendHeartbeat;
-(void)stopTimeoutHeartbeat;
-(id)setupRTPWithSocketDictionary:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id*)arg2 ;
-(long long)streamDirection;
-(BOOL)isDecryptionTimeoutEnabled;
-(BOOL)isRTCPSendEnabled;
-(void)processRTPTimeoutSettingChange;
-(void)processRTCPTimeoutSettingChange;
-(void)processDecryptionTimeoutSettingChange;
-(void)resetRTCPSendHeartbeatTimer:(unsigned long long)arg1 ;
-(void)rtcpSendHeartbeat;
-(void)setupCallbacksWithNWConnectionMonitor:(tagVCNWConnectionMonitorRef)arg1 ;
-(void)resetTimeoutHeartbeatTimer:(unsigned long long)arg1 ;
-(void)checkDecryptionTimeoutAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2 ;
-(void)checkRTPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2 ;
-(double)computeNextTimoutWithEnabledTime:(double)arg1 timeoutInterval:(double)arg2 lastReceivedPacketTime:(double)arg3 currentTime:(double)arg4 lastTimeoutReportTime:(double)arg5 ;
-(void)checkRTCPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2 ;
-(void)resetTimeoutHeartbeatWithRTPTimeout:(double)arg1 rtcpTimeout:(double)arg2 decryptionTimeout:(double)arg3 currentTime:(double)arg4 ;
-(void)timeoutHeartbeat;
-(id<VCMediaStreamNotification>)notificationDelegate;
-(void)setDecryptionTimeOutEnabled:(BOOL)arg1 ;
-(void)setDecryptionTimeOutInterval:(double)arg1 ;
-(void)vcMediaStreamTransport:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(id<RTCPReportProvider>)rtcpReportProvider;
-(int)handleMediaCallbackNotification:(int)arg1 inData:(void*)arg2 outData:(void*)arg3 ;
-(NSArray *)transportArray;
@end

