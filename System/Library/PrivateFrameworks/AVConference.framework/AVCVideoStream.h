/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, AVCMediaStreamConfig, VCVideoStream, NSDictionary, NSObject, NSString;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id _delegate;
	VCVideoStream* _opaqueStream;
	long long _streamToken;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _shouldUseXPC;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (nonatomic,readonly) long long streamToken;                                          //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) id<AVCVideoStreamDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)capabilities;
+(id)extractClientDownlinkQualityInfoDictionary:(id)arg1 ;
+(id)extractClientUplinkQualityInfoDictionary:(id)arg1 ;
-(void)dealloc;
-(id<AVCVideoStreamDelegate>)delegate;
-(void)setDelegate:(id<AVCVideoStreamDelegate>)arg1 ;
-(void)resume;
-(void)start;
-(void)stop;
-(AVCMediaStreamConfig *)configuration;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)pause;
-(NSDictionary *)capabilities;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(long long)streamToken;
-(void)refreshLoggingParameters;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)requestLastDecodedFrame;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTPTimeOutEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(BOOL)configure:(id)arg1 error:(id*)arg2 ;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 connectionClientID:(id)arg4 callID:(id)arg5 options:(id)arg6 error:(id*)arg7 ;
-(id)initWithNetworkSockets:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithNWConnectionClientID:(unsigned char)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(void)updateVideoConfiguration:(id)arg1 ;
-(id)getStats;
@end

