/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEIKEv2TransportDelegate.h>
#import <libobjc.A.dylib/NEIPSecSASessionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, NEIKEv2ConfigurationDelegate, NEIKEv2PacketDelegate;
@class NSObject, NEIKEv2ConfigurationMessage, NEIKEv2ChildSAConfiguration, NEIPSecSASession, NSMutableDictionary, NSMutableArray, NEIKEv2IKESA, NEIKEv2RTT, NEIKEv2Packet, NEIKEv2IKESAConfiguration, NSString, NEIKEv2ChildSA;

@interface NEIKEv2Session : NSObject <NEIKEv2TransportDelegate, NEIPSecSASessionDelegate> {

	BOOL _isListening;
	BOOL _ownsDatabaseSession;
	BOOL _ownsIPSecInterface;
	BOOL _isAborted;
	BOOL _isInvalidated;
	BOOL _isExpectingConfigBlock;
	BOOL _hasContactedConfigurationDelegate;
	BOOL _hasOutboundRequestInFlight;
	unsigned short _initiatorFragmentCount;
	unsigned short _responderFragmentCount;
	int _lastRequestMessageID;
	int _lastReceivedMessageID;
	int _previousMOBIKEMessageID;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _state;
	NEIKEv2ConfigurationMessage* _assignedConfiguration;
	/*function pointer*/void* _clientCallback;
	void* _clientCallbackInfo;
	/*^block*/id _stateUpdateBlock;
	/*^block*/id _childStateUpdateBlock;
	/*^block*/id _configurationUpdateBlock;
	/*^block*/id _trafficSelectorUpdateBlock;
	/*^block*/id _additionalAddressesUpdateBlock;
	/*^block*/id _shortDPDEventBlock;
	/*^block*/id _redirectEventBlock;
	/*^block*/id _privateNotifyStatusEvent;
	/*^block*/id _ikeSocketHandler;
	NEIKEv2ChildSAConfiguration* _listenChildSAUserConfig;
	NEIPSecSASession* _databaseSession;
	NSMutableDictionary* _databaseLarvalSAs;
	NSMutableDictionary* _databaseSAs;
	/*^block*/id _lastRequestReplyHandler;
	/*^block*/id _waitingRequestHandler;
	NSMutableDictionary* _sentRequests;
	NSMutableDictionary* _sentReplies;
	NSMutableDictionary* _receivedRequests;
	NSMutableDictionary* _receivedReplies;
	NSMutableDictionary* _receivedInitiatorFragments;
	NSMutableDictionary* _receivedResponderFragments;
	NSObject*<OS_dispatch_source> _ikeLifetimeTimer;
	NSObject*<OS_dispatch_source> _dpdTimer;
	NSMutableArray* _childSAs;
	NSObject*<OS_dispatch_source> _sendTimer;
	NSObject*<OS_dispatch_source> _receiveTimer;
	unsigned long long _uniqueIndex;
	NSMutableArray* _pendingRequestContexts;
	NEVirtualInterface_sRef _ipsecInterface;
	NEIKEv2IKESA* _ikeSA;
	id<NEIKEv2ConfigurationDelegate> _configurationDelegate;
	id<NEIKEv2PacketDelegate> _packetDelegate;
	NEIKEv2RTT* _rttState;
	NSObject*<OS_dispatch_queue> _queue;
	NEIKEv2Packet* _previousMOBIKERequest;
	NEIKEv2IKESAConfiguration* _ikeConfig;

}

@property (assign) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (copy) id ikeSocketHandler;                                                   //@synthesize ikeSocketHandler=_ikeSocketHandler - In the implementation block
@property (assign) BOOL isListening;                                                    //@synthesize isListening=_isListening - In the implementation block
@property (retain) NEIKEv2ChildSAConfiguration * listenChildSAUserConfig;               //@synthesize listenChildSAUserConfig=_listenChildSAUserConfig - In the implementation block
@property (retain) NEIPSecSASession * databaseSession;                                  //@synthesize databaseSession=_databaseSession - In the implementation block
@property (assign,nonatomic) BOOL ownsDatabaseSession;                                  //@synthesize ownsDatabaseSession=_ownsDatabaseSession - In the implementation block
@property (retain) NSMutableDictionary * databaseLarvalSAs;                             //@synthesize databaseLarvalSAs=_databaseLarvalSAs - In the implementation block
@property (retain) NSMutableDictionary * databaseSAs;                                   //@synthesize databaseSAs=_databaseSAs - In the implementation block
@property (assign) BOOL ownsIPSecInterface;                                             //@synthesize ownsIPSecInterface=_ownsIPSecInterface - In the implementation block
@property (assign) int lastRequestMessageID;                                            //@synthesize lastRequestMessageID=_lastRequestMessageID - In the implementation block
@property (copy) id lastRequestReplyHandler;                                            //@synthesize lastRequestReplyHandler=_lastRequestReplyHandler - In the implementation block
@property (copy) id waitingRequestHandler;                                              //@synthesize waitingRequestHandler=_waitingRequestHandler - In the implementation block
@property (retain) NSMutableDictionary * sentRequests;                                  //@synthesize sentRequests=_sentRequests - In the implementation block
@property (retain) NSMutableDictionary * sentReplies;                                   //@synthesize sentReplies=_sentReplies - In the implementation block
@property (retain) NSMutableDictionary * receivedRequests;                              //@synthesize receivedRequests=_receivedRequests - In the implementation block
@property (retain) NSMutableDictionary * receivedReplies;                               //@synthesize receivedReplies=_receivedReplies - In the implementation block
@property (retain) NSMutableDictionary * receivedInitiatorFragments;                    //@synthesize receivedInitiatorFragments=_receivedInitiatorFragments - In the implementation block
@property (retain) NSMutableDictionary * receivedResponderFragments;                    //@synthesize receivedResponderFragments=_receivedResponderFragments - In the implementation block
@property (assign) unsigned short initiatorFragmentCount;                               //@synthesize initiatorFragmentCount=_initiatorFragmentCount - In the implementation block
@property (assign) unsigned short responderFragmentCount;                               //@synthesize responderFragmentCount=_responderFragmentCount - In the implementation block
@property (assign) int lastReceivedMessageID;                                           //@synthesize lastReceivedMessageID=_lastReceivedMessageID - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> ikeLifetimeTimer;                      //@synthesize ikeLifetimeTimer=_ikeLifetimeTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> dpdTimer;                              //@synthesize dpdTimer=_dpdTimer - In the implementation block
@property (retain) NSMutableArray * childSAs;                                           //@synthesize childSAs=_childSAs - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> sendTimer;                             //@synthesize sendTimer=_sendTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> receiveTimer;                //@synthesize receiveTimer=_receiveTimer - In the implementation block
@property (retain) NEIKEv2ConfigurationMessage * assignedConfiguration;                 //@synthesize assignedConfiguration=_assignedConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long uniqueIndex;                            //@synthesize uniqueIndex=_uniqueIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingRequestContexts;                   //@synthesize pendingRequestContexts=_pendingRequestContexts - In the implementation block
@property (assign) NEVirtualInterface_sRef ipsecInterface;                              //@synthesize ipsecInterface=_ipsecInterface - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) unsigned interfaceIndex; 
@property (readonly) BOOL hasInterface; 
@property (retain) NEIKEv2IKESA * ikeSA;                                                //@synthesize ikeSA=_ikeSA - In the implementation block
@property (readonly) NEIKEv2ChildSA * firstChildSA; 
@property (__weak) id<NEIKEv2ConfigurationDelegate> configurationDelegate;              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (__weak) id<NEIKEv2PacketDelegate> packetDelegate;                            //@synthesize packetDelegate=_packetDelegate - In the implementation block
@property (retain) NEIKEv2RTT * rttState;                                               //@synthesize rttState=_rttState - In the implementation block
@property (assign) BOOL isAborted;                                                      //@synthesize isAborted=_isAborted - In the implementation block
@property (assign) BOOL isInvalidated;                                                  //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (assign,nonatomic) BOOL isExpectingConfigBlock;                               //@synthesize isExpectingConfigBlock=_isExpectingConfigBlock - In the implementation block
@property (assign,nonatomic) BOOL hasContactedConfigurationDelegate;                    //@synthesize hasContactedConfigurationDelegate=_hasContactedConfigurationDelegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign) int previousMOBIKEMessageID;                                         //@synthesize previousMOBIKEMessageID=_previousMOBIKEMessageID - In the implementation block
@property (retain) NEIKEv2Packet * previousMOBIKERequest;                               //@synthesize previousMOBIKERequest=_previousMOBIKERequest - In the implementation block
@property (nonatomic,retain) NEIKEv2IKESAConfiguration * ikeConfig;                     //@synthesize ikeConfig=_ikeConfig - In the implementation block
@property (assign,nonatomic) BOOL hasOutboundRequestInFlight;                           //@synthesize hasOutboundRequestInFlight=_hasOutboundRequestInFlight - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> clientQueue;                            //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign) /*function pointer*/void* clientCallback;                            //@synthesize clientCallback=_clientCallback - In the implementation block
@property (assign) void* clientCallbackInfo;                                            //@synthesize clientCallbackInfo=_clientCallbackInfo - In the implementation block
@property (copy) id stateUpdateBlock;                                                   //@synthesize stateUpdateBlock=_stateUpdateBlock - In the implementation block
@property (copy) id childStateUpdateBlock;                                              //@synthesize childStateUpdateBlock=_childStateUpdateBlock - In the implementation block
@property (copy) id configurationUpdateBlock;                                           //@synthesize configurationUpdateBlock=_configurationUpdateBlock - In the implementation block
@property (copy) id trafficSelectorUpdateBlock;                                         //@synthesize trafficSelectorUpdateBlock=_trafficSelectorUpdateBlock - In the implementation block
@property (copy) id additionalAddressesUpdateBlock;                                     //@synthesize additionalAddressesUpdateBlock=_additionalAddressesUpdateBlock - In the implementation block
@property (copy) id shortDPDEventBlock;                                                 //@synthesize shortDPDEventBlock=_shortDPDEventBlock - In the implementation block
@property (copy) id redirectEventBlock;                                                 //@synthesize redirectEventBlock=_redirectEventBlock - In the implementation block
@property (copy) id privateNotifyStatusEvent;                                           //@synthesize privateNotifyStatusEvent=_privateNotifyStatusEvent - In the implementation block
@property (readonly) BOOL peerAuthenticated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)getNewChildSAID;
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)interfaceName;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isInvalidated;
-(unsigned)addChild:(id)arg1 ;
-(void)disconnect;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)updateConfiguration:(id)arg1 ;
-(void)connect;
-(BOOL)hasInterface;
-(unsigned)interfaceIndex;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)abort;
-(id<NEIKEv2ConfigurationDelegate>)configurationDelegate;
-(void)setConfigurationDelegate:(id<NEIKEv2ConfigurationDelegate>)arg1 ;
-(void)removeChild:(unsigned)arg1 ;
-(void)reportError:(int)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIkeSA:(NEIKEv2IKESA *)arg1 ;
-(NEIKEv2IKESA *)ikeSA;
-(void)reportPrivateNotifies:(id)arg1 ;
-(void)reportServerAdditionalAddresses:(id)arg1 ;
-(int)sendRequest:(id)arg1 retry:(BOOL)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)reportState;
-(void)resetAll;
-(int)sendRequest:(id)arg1 retry:(BOOL)arg2 sendCompletionHandler:(/*^block*/id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)sendReply:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)hasOutboundRequestInFlight;
-(void)initiateMOBIKE:(id)arg1 ;
-(int)sendRequest:(id)arg1 retryIntervalInMilliseconds:(unsigned long long)arg2 maxRetries:(unsigned)arg3 timeoutError:(id)arg4 resend:(BOOL)arg5 sendMessageID:(int)arg6 sendCompletionHandler:(/*^block*/id)arg7 replyHandler:(/*^block*/id)arg8 ;
-(BOOL)isAborted;
-(void)reportShortDPD;
-(void)reportPrivateNotifiesInPacket:(id)arg1 ;
-(void)resetMessages;
-(void)reportServerRedirect:(id)arg1 ;
-(void)handleEAPIKESA:(id)arg1 childSA:(id)arg2 authPacket:(id)arg3 handler:(/*^block*/id)arg4 ;
-(NEIKEv2ChildSA *)firstChildSA;
-(BOOL)generateSPIForChild:(id)arg1 proposals:(id)arg2 ;
-(void)reportAdditionalAddressesInPacket:(id)arg1 ;
-(void)initiateDelete:(id)arg1 ;
-(void)finishConfigurationEstablishment;
-(void)reportConfiguration;
-(BOOL)installChildSA:(id)arg1 ;
-(id<NEIKEv2PacketDelegate>)packetDelegate;
-(BOOL)migrateAllChildSAs;
-(void)reportTrafficSelectorsForChildSA:(id)arg1 ;
-(void)retryDHForIKESA:(id)arg1 validated:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)retryCookieForIKESA:(id)arg1 validated:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)isExpectingConfigBlock;
-(void)setHasContactedConfigurationDelegate:(BOOL)arg1 ;
-(void)setIsExpectingConfigBlock:(BOOL)arg1 ;
-(NEVirtualInterface_sRef)ipsecInterface;
-(void)setIpsecInterface:(NEVirtualInterface_sRef)arg1 ;
-(void)addFirstChild:(id)arg1 ;
-(id)setupReceivedChildCopyError;
-(void)setupReceivedChildWithHandler:(/*^block*/id)arg1 ;
-(void)resetChild:(id)arg1 ;
-(void)initiateDeleteChildSPI:(id)arg1 remoteSPI:(id)arg2 deleteCompletionCallback:(/*^block*/id)arg3 ;
-(id)copyChildWithID:(unsigned)arg1 ;
-(id)copySAsToDeleteAndInstallRekeyedChildSA:(id)arg1 ;
-(void)uninstallOldRekeyedChildSAs:(id)arg1 ;
-(void)setIKESA:(id)arg1 ;
-(int)previousMOBIKEMessageID;
-(NEIKEv2Packet *)previousMOBIKERequest;
-(void)setSentMOBIKERequest:(id)arg1 messageID:(int)arg2 ;
-(void)resendPreviousMOBIKEInnerWithRetries:(unsigned)arg1 retryInterval:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(NEIKEv2RTT *)rttState;
-(void)initiateMOBIKEInner:(id)arg1 ;
-(BOOL)innerReceiveDeleteIKESA:(id)arg1 ;
-(id)copyChildWithSPI:(id)arg1 ;
-(BOOL)receiveDeleteChildSPI:(id)arg1 remoteSPI:(id)arg2 packet:(id)arg3 ;
-(id)copyChildWithRekeyedSPI:(id)arg1 ;
-(void)initiateInformational:(id)arg1 ;
-(void)receiveInformational:(id)arg1 ;
-(void)initiateConnect;
-(void)receiveConnection:(id)arg1 ;
-(void)initiateNewChildSA:(id)arg1 ;
-(void)receiveNewChildSA:(id)arg1 packet:(id)arg2 ;
-(void)initiateRekeyChildSA:(id)arg1 ;
-(void)receiveRekeyChildSA:(id)arg1 packet:(id)arg2 ;
-(void)initiateRekeyIKESA:(id)arg1 ;
-(void)receiveRekeyIKESA:(id)arg1 ;
-(void)receiveMOBIKE:(id)arg1 ;
-(void)receiveRedirect:(id)arg1 ;
-(void)receiveDeleteIKESA:(id)arg1 ;
-(void)receiveDeleteChildSA:(id)arg1 ;
-(void)initiateDeleteChildSA:(id)arg1 ;
-(BOOL)peerAuthenticated;
-(void)setPacketDelegate:(id<NEIKEv2PacketDelegate>)arg1 ;
-(NEIKEv2IKESAConfiguration *)ikeConfig;
-(id)initWithIKEConfig:(id)arg1 configurationDelegate:(id)arg2 queue:(id)arg3 saSession:(id)arg4 shouldCopySASession:(BOOL)arg5 transport:(id)arg6 packetDelegate:(id)arg7 ;
-(id)initWithIKEConfig:(id)arg1 configurationDelegate:(id)arg2 queue:(id)arg3 kernelSASessionName:(id)arg4 transport:(id)arg5 packetDelegate:(id)arg6 ;
-(void)setIkeConfig:(NEIKEv2IKESAConfiguration *)arg1 ;
-(void)receivePacket:(id)arg1 ;
-(void)sendKeepaliveWithRetries:(unsigned)arg1 retryIntervalInMilliseconds:(unsigned long long)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)setStateUpdateBlock:(id)arg1 ;
-(void)setChildStateUpdateBlock:(id)arg1 ;
-(void)setConfigurationUpdateBlock:(id)arg1 ;
-(void)setTrafficSelectorUpdateBlock:(id)arg1 ;
-(void)setAdditionalAddressesUpdateBlock:(id)arg1 ;
-(void)setShortDPDEventBlock:(id)arg1 ;
-(void)setRedirectEventBlock:(id)arg1 ;
-(id)initWithIKEConfig:(id)arg1 firstChildConfig:(id)arg2 sessionConfig:(id)arg3 queue:(id)arg4 ipsecInterface:(NEVirtualInterface_sRef)arg5 ikeSocketHandler:(/*^block*/id)arg6 saSession:(id)arg7 packetDelegate:(id)arg8 ;
-(void)setClientCallbackInfo:(void*)arg1 ;
-(void)invalidateWithCompletionHandler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceRekeyIKE;
-(void)forceRekeyChild:(unsigned)arg1 ;
-(void)sendMOBIKEWithRetries:(unsigned)arg1 retryInterval:(unsigned long long)arg2 interfaceName:(id)arg3 invalidateTransport:(BOOL)arg4 resetEndpoint:(id)arg5 callbackQueue:(id)arg6 callback:(/*^block*/id)arg7 ;
-(NEIPSecSASession *)databaseSession;
-(BOOL)ownsDatabaseSession;
-(void)setDatabaseSession:(NEIPSecSASession *)arg1 ;
-(void)uninstallAllChildSAs;
-(NSObject*<OS_dispatch_source>)ikeLifetimeTimer;
-(void)setIkeLifetimeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dpdTimer;
-(void)setDpdTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)sendTimer;
-(void)setSendTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableDictionary *)databaseSAs;
-(int)lastRequestMessageID;
-(NSMutableDictionary *)receivedReplies;
-(unsigned long long)uniqueIndex;
-(void)setLastRequestMessageID:(int)arg1 ;
-(void)setLastReceivedMessageID:(int)arg1 ;
-(void)setPreviousMOBIKEMessageID:(int)arg1 ;
-(void)setUniqueIndex:(unsigned long long)arg1 ;
-(void)setIkeSocketHandler:(id)arg1 ;
-(id)ikeSocketHandler;
-(void*)clientCallbackInfo;
-(void)setIsListening:(BOOL)arg1 ;
-(BOOL)isListening;
-(void)setListenChildSAUserConfig:(NEIKEv2ChildSAConfiguration *)arg1 ;
-(void)setChildSAs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)childSAs;
-(void)setDatabaseLarvalSAs:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)databaseLarvalSAs;
-(void)setDatabaseSAs:(NSMutableDictionary *)arg1 ;
-(void)setSentRequests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sentRequests;
-(void)setSentReplies:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sentReplies;
-(void)setReceivedRequests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)receivedRequests;
-(void)setReceivedReplies:(NSMutableDictionary *)arg1 ;
-(void)setReceivedInitiatorFragments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)receivedInitiatorFragments;
-(void)setReceivedResponderFragments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)receivedResponderFragments;
-(void)setOwnsDatabaseSession:(BOOL)arg1 ;
-(void)setRttState:(NEIKEv2RTT *)arg1 ;
-(id)initWithIKEConfig:(id)arg1 firstChildConfig:(id)arg2 sessionConfig:(id)arg3 queue:(id)arg4 ipsecInterface:(NEVirtualInterface_sRef)arg5 ikeSocketHandler:(/*^block*/id)arg6 saSession:(id)arg7 shouldOwnSASession:(BOOL)arg8 packetDelegate:(id)arg9 transport:(id)arg10 configurationDelegate:(id)arg11 ;
-(void)enqueuePendingRequestContext:(id)arg1 ;
-(void)startDPDTimer;
-(void)cancelDPDTimer;
-(void)startIKELifetimeTimer;
-(NSObject*<OS_dispatch_source>)receiveTimer;
-(void)setReceiveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)waitingRequestHandler;
-(void)setWaitingRequestHandler:(id)arg1 ;
-(void)cancelSendTimer;
-(BOOL)fireWaitingRequestHandlerWithPacket:(id)arg1 ;
-(void)setPreviousMOBIKERequest:(NEIKEv2Packet *)arg1 ;
-(void)setOwnsIPSecInterface:(BOOL)arg1 ;
-(id)copyIPsecInterfaceWithMissingAllowed:(BOOL)arg1 ;
-(void)addEmptyInterface;
-(id)copySAFromDictionary:(id)arg1 forSPI:(id)arg2 ;
-(id)copyIPsecInterface;
-(BOOL)migrateChildSA:(id)arg1 ;
-(id)lastRequestReplyHandler;
-(void)setLastRequestReplyHandler:(id)arg1 ;
-(void)setIsAborted:(BOOL)arg1 ;
-(void)setSentRequest:(id)arg1 ;
-(BOOL)sendCurrentRequest:(/*^block*/id)arg1 ;
-(void)setSentReply:(id)arg1 messageID:(int)arg2 ;
-(BOOL)sendReplyForMessageID:(int)arg1 ;
-(unsigned short)initiatorFragmentCount;
-(unsigned short)responderFragmentCount;
-(void)setInitiatorFragmentCount:(unsigned short)arg1 ;
-(void)setResponderFragmentCount:(unsigned short)arg1 ;
-(void)saveFragment:(id)arg1 ;
-(void)setReceivedReply:(id)arg1 messageID:(int)arg2 ;
-(void)setReceivedRequest:(id)arg1 messageID:(int)arg2 ;
-(NEIKEv2ChildSAConfiguration *)listenChildSAUserConfig;
-(id)stateUpdateBlock;
-(id)childStateUpdateBlock;
-(BOOL)hasContactedConfigurationDelegate;
-(BOOL)ownsIPSecInterface;
-(void)setAssignedConfiguration:(NEIKEv2ConfigurationMessage *)arg1 ;
-(id)configurationUpdateBlock;
-(NEIKEv2ConfigurationMessage *)assignedConfiguration;
-(id)additionalAddressesUpdateBlock;
-(id)redirectEventBlock;
-(id)shortDPDEventBlock;
-(id)privateNotifyStatusEvent;
-(id)copySAFromDictionary:(id)arg1 forChild:(id)arg2 ;
-(id)trafficSelectorUpdateBlock;
-(void)setIsInvalidated:(BOOL)arg1 ;
-(void)flushPendingRequestContexts;
-(void)unestablishConfiguration;
-(void)uninstallChildSA:(id)arg1 ;
-(NSMutableArray *)pendingRequestContexts;
-(void)setPendingRequestContexts:(NSMutableArray *)arg1 ;
-(void)sendPendingRequestContext;
-(void)setHasOutboundRequestInFlight:(BOOL)arg1 ;
-(void)expireSA:(id)arg1 ;
-(void)deleteSA:(id)arg1 ;
-(void)idleTimeoutSA:(id)arg1 ;
-(void)blackholeDetectedSA:(id)arg1 ;
-(id)initWithIKEConfig:(id)arg1 firstChildConfig:(id)arg2 sessionConfig:(id)arg3 queue:(id)arg4 ipsecInterface:(NEVirtualInterface_sRef)arg5 ikeSocketHandler:(/*^block*/id)arg6 kernelSASessionName:(id)arg7 packetDelegate:(id)arg8 ;
-(void)sendPrivateNotifies:(id)arg1 maxRetries:(unsigned)arg2 retryIntervalInMilliseconds:(unsigned long long)arg3 callbackQueue:(id)arg4 callback:(/*^block*/id)arg5 ;
-(id)copyReceivedRequestForMessageID:(int)arg1 ;
-(id)copyReceivedReplyForMessageID:(int)arg1 ;
-(void)reportCustomPayload:(id)arg1 ;
-(/*function pointer*/void*)clientCallback;
-(void)setClientCallback:(/*function pointer*/void*)arg1 ;
-(void)setPrivateNotifyStatusEvent:(id)arg1 ;
-(int)lastReceivedMessageID;
@end

