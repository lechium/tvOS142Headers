/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFBLERecorderReplayDelegate;
@class NSMutableArray;

@interface SFBLERecorder : NSObject {

	NSMutableArray* _recordings;
	unsigned long long _replayIndex;
	long long _payloadType;
	id<SFBLERecorderReplayDelegate> _replayDelegate;

}

@property (nonatomic,readonly) long long payloadType;                                            //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic,__weak) id<SFBLERecorderReplayDelegate> replayDelegate;              //@synthesize replayDelegate=_replayDelegate - In the implementation block
-(long long)payloadType;
-(id)initWithPayloadType:(long long)arg1 ;
-(id)initWithRecordingURL:(id)arg1 ;
-(BOOL)recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4 error:(id*)arg5 ;
-(BOOL)replayNextRecording;
-(BOOL)saveToDirectory:(id)arg1 ;
-(id<SFBLERecorderReplayDelegate>)replayDelegate;
-(void)setReplayDelegate:(id<SFBLERecorderReplayDelegate>)arg1 ;
@end

