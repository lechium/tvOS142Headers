/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class BWFigVideoCaptureStream, NSObject, NSArray;

@interface BWStreamStartStopState : NSObject {

	BWFigVideoCaptureStream* _stream;
	NSObject*<OS_dispatch_group> _hasStartedGroup;
	BOOL _hasEnteredStartedGroup;
	NSObject*<OS_dispatch_group> _dependentsHaveStoppedGroup;
	BWStreamStartStopState* _blockingMasterState;
	NSArray* _blockingSlaveStates;
	float _timeoutInSeconds;
	BOOL _waitForMasterAEToSettle;

}

@property (nonatomic,readonly) BWFigVideoCaptureStream * stream;              //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSArray * blockingSlaveStates;                   //@synthesize blockingSlaveStates=_blockingSlaveStates - In the implementation block
@property (assign,nonatomic) BOOL waitForMasterAEToSettle;                    //@synthesize waitForMasterAEToSettle=_waitForMasterAEToSettle - In the implementation block
-(id)description;
-(void)dealloc;
-(BWFigVideoCaptureStream *)stream;
-(BOOL)dependentWillStart;
-(void)dependentDidStop;
-(id)initWithStream:(id)arg1 masterState:(id)arg2 timeoutInSeconds:(float)arg3 ;
-(BOOL)streamWillStart;
-(void)streamDidStart;
-(BOOL)streamWillStop;
-(void)streamDidStop;
-(NSArray *)blockingSlaveStates;
-(void)setBlockingSlaveStates:(NSArray *)arg1 ;
-(BOOL)waitForMasterAEToSettle;
-(void)setWaitForMasterAEToSettle:(BOOL)arg1 ;
@end

