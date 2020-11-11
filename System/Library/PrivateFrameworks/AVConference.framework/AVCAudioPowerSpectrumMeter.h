/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject, NSSet;

@interface AVCAudioPowerSpectrumMeter : NSObject {

	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	double _audioSpectrumRefreshRate;
	unsigned short _audioSpectrumBinCount;
	unsigned _sessionToken;
	NSSet* _whiteListedXPCObjects;

}

@property (nonatomic,readonly) id<AVCAudioPowerSpectrumMeterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned sessionToken;                                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(void)dealloc;
-(id<AVCAudioPowerSpectrumMeterDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned)sessionToken;
-(id)initWithConfig:(AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)registerPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)unregisterPowerSpectrumForStreamToken:(long long)arg1 ;
-(void)deregisterBlocksForService;
-(void)registerBlocksForNotifications;
@end

