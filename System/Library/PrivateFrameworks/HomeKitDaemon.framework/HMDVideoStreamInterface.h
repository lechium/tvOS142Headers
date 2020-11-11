/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDStreamInterface.h>
#import <libobjc.A.dylib/AVCVideoStreamDelegate.h>
#import <libobjc.A.dylib/HMDVideoStreamReconfigureDelegate.h>

@protocol HMDVideoStreamInterfaceDelegate, OS_dispatch_queue, HMDVideoStreamLastDecodedFrameDelegate;
@class HMDVideoStreamReconfigure, AVCVideoStream, NSObject, HMFOSTransaction, NSNumber, NSString;

@interface HMDVideoStreamInterface : HMDStreamInterface <AVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate> {

	HMDVideoStreamReconfigure* _videoStreamReconfigure;
	AVCVideoStream* _videoStream;
	id<HMDVideoStreamInterfaceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _lastFrameDelegateQueue;
	id<HMDVideoStreamLastDecodedFrameDelegate> _lastFrameDelegate;
	HMFOSTransaction* _snapshotDataTrasaction;
	double _rtcpSendIntervalSec;

}

@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec;                                        //@synthesize rtcpSendIntervalSec=_rtcpSendIntervalSec - In the implementation block
@property (nonatomic,readonly) NSNumber * syncSource; 
@property (nonatomic,readonly) NSNumber * streamToken; 
@property (nonatomic,readonly) HMDVideoStreamReconfigure * videoStreamReconfigure;              //@synthesize videoStreamReconfigure=_videoStreamReconfigure - In the implementation block
@property (nonatomic,retain) AVCVideoStream * videoStream;                                      //@synthesize videoStream=_videoStream - In the implementation block
@property (__weak,readonly) id<HMDVideoStreamInterfaceDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lastFrameDelegateQueue;               //@synthesize lastFrameDelegateQueue=_lastFrameDelegateQueue - In the implementation block
@property (__weak) id<HMDVideoStreamLastDecodedFrameDelegate> lastFrameDelegate;                //@synthesize lastFrameDelegate=_lastFrameDelegate - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * snapshotDataTrasaction;                         //@synthesize snapshotDataTrasaction=_snapshotDataTrasaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDVideoStreamInterfaceDelegate>)delegate;
-(NSNumber *)streamToken;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(NSNumber *)syncSource;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTPTimeOutEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(void)streamDidServerDie:(id)arg1 ;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidRTPTimeOut:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg1 ;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(void)stream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2 ;
-(void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(id)logIdentifier;
-(void)stopStream;
-(void)startStream:(id)arg1 ;
-(void)_callNetworkImproved;
-(void)_callNetworkDeteriorated;
-(void)videoStreamReconfigureDidNetworkImprove:(id)arg1 ;
-(void)videoStreamReconfigureDidNetworkDeteriorate:(id)arg1 ;
-(void)updateReconfigurationMode:(BOOL)arg1 ;
-(BOOL)_createLocalSocket;
-(void)setSnapshotDataTrasaction:(HMFOSTransaction *)arg1 ;
-(AVCVideoStream *)videoStream;
-(BOOL)_initializeStreamRemoteSender:(id)arg1 ;
-(BOOL)_initializeStreamRemoteDestinationReceiver:(id)arg1 ;
-(BOOL)_initializeStreamRemoteSocketReceiver:(id)arg1 ;
-(BOOL)_initializeStreamRemoteLocal;
-(void)setVideoStream:(AVCVideoStream *)arg1 ;
-(void)_startStream:(id)arg1 ;
-(void)_callStarted:(id)arg1 ;
-(HMDVideoStreamReconfigure *)videoStreamReconfigure;
-(void)setLastFrameDelegate:(id<HMDVideoStreamLastDecodedFrameDelegate>)arg1 ;
-(void)setLastFrameDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<HMDVideoStreamLastDecodedFrameDelegate>)lastFrameDelegate;
-(HMFOSTransaction *)snapshotDataTrasaction;
-(void)_callDidUpdateConfiguration;
-(void)_callDidGetLastDecodedFrame:(id)arg1 ;
-(void)_callStopped:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6 ;
-(void)updateStreamConfiguration:(id)arg1 ;
-(void)setSnapshotDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)captureSnapshot;
-(NSObject*<OS_dispatch_queue>)lastFrameDelegateQueue;
@end
