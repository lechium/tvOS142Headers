/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, VCConnectionProtocol;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSString, TimingCollection, VCConnectionManager, NSMutableArray;

@interface VCTransportSession : NSObject {

	BOOL _isCallActive;
	BOOL _requiresWiFi;
	BOOL _useCompressedConnectionData;
	unsigned _basebandNotificationRegistrationToken;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject* _connectionSetupPiggybackBlob;
	NSString* _localFrameworkVersion;
	NSString* _remoteFrameworkVersion;
	opaqueRTCReportingRef _reportingAgent;
	TimingCollection* _perfTimings;
	VCConnectionManager* _connectionManager;
	/*^block*/id _eventHandler;
	NSMutableArray* _streams;
	opaque_pthread_mutex_t _stateLock;
	id<VCConnectionProtocol> _registeredConnection;

}

@property (nonatomic,readonly) int detailedErrorCode; 
@property (nonatomic,readonly) BOOL isHandoverSupported; 
@property (nonatomic,readonly) BOOL isRemoteOSPreLion; 
@property (assign,nonatomic) BOOL requiresWiFi;                                             //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (assign,nonatomic) BOOL useCompressedConnectionData;                              //@synthesize useCompressedConnectionData=_useCompressedConnectionData - In the implementation block
@property (nonatomic,readonly) unsigned connectionSetupRTTEstimate; 
@property (nonatomic,retain) NSObject * connectionSetupPiggybackBlob;                       //@synthesize connectionSetupPiggybackBlob=_connectionSetupPiggybackBlob - In the implementation block
@property (nonatomic,retain) TimingCollection * perfTimings;                                //@synthesize perfTimings=_perfTimings - In the implementation block
@property (nonatomic,readonly) VCConnectionManager * connectionManager;                     //@synthesize connectionManager=_connectionManager - In the implementation block
@property (nonatomic,copy) id eventHandler;                                                 //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) unsigned basebandNotificationRegistrationToken;              //@synthesize basebandNotificationRegistrationToken=_basebandNotificationRegistrationToken - In the implementation block
@property (assign,setter=setCallActive:,nonatomic) BOOL isCallActive; 
@property (nonatomic,retain) id<VCConnectionProtocol> registeredConnection;                 //@synthesize registeredConnection=_registeredConnection - In the implementation block
@property (readonly) int networkInterfaceType; 
@property (readonly) unsigned networkMTU; 
@property (readonly) BOOL isIPv6; 
+(int)vtpPacketTypeForStreamType:(unsigned)arg1 ;
+(unsigned)trafficClassForStreamType:(unsigned)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(VCConnectionManager *)connectionManager;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(BOOL)requiresWiFi;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(int)networkInterfaceType;
-(id)initWithNotificationQueue:(id)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)callEventHandlerWithEvent:(unsigned)arg1 info:(id)arg2 ;
-(int)createVFD:(int*)arg1 forStreamType:(unsigned)arg2 ;
-(unsigned)networkMTU;
-(BOOL)isIPv6;
-(BOOL)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)setConnectionSetupPiggybackBlob:(NSObject *)arg1 ;
-(NSObject *)connectionSetupPiggybackBlob;
-(void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2 ;
-(void)setPerfTimings:(TimingCollection *)arg1 ;
-(BOOL)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(BOOL)arg1 ;
-(int)detailedErrorCode;
-(void)reportNetworkConditionsDegraded;
-(void)setCallActive:(BOOL)arg1 ;
-(BOOL)isRemoteOSPreLion;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1 ;
-(unsigned)basebandNotificationRegistrationToken;
-(BOOL)isHandoverSupported;
-(unsigned)connectionSetupRTTEstimate;
-(int)deregisterNotificationForTransportStream:(OpaqueVCTransportStreamRef)arg1 ;
-(void)handleTransportStreamDeactivated:(OpaqueVCTransportStreamRef)arg1 ;
-(int)createTransportStream:(OpaqueVCTransportStream*)arg1 withType:(unsigned)arg2 options:(id)arg3 ;
-(BOOL)isCallActive;
-(TimingCollection *)perfTimings;
-(id<VCConnectionProtocol>)registeredConnection;
-(void)setRegisteredConnection:(id<VCConnectionProtocol>)arg1 ;
@end

