/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIAccelerometerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class CMMotionManager;

@interface UIAccelerometer : NSObject {

	double _updateInterval;
	id<UIAccelerometerDelegate> _delegate;
	struct {
		unsigned delegateDidAccelerate : 1;
		unsigned reserved : 31;
	}  _accelerometerFlags;
	CMMotionManager* _motionManager;

}

@property (assign,nonatomic) double updateInterval;                                    //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic,__weak) id<UIAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAccelerometer;
-(id)init;
-(void)dealloc;
-(id<UIAccelerometerDelegate>)delegate;
-(void)setDelegate:(id<UIAccelerometerDelegate>)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(id)_motionManager;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(void)_startAccelerometerIfNecessary;
-(void)_stopAccelerometer;
-(void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
@end

