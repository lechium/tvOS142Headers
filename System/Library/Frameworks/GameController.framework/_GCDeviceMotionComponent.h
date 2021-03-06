/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GCDeviceMotionComponent <_GCDeviceComponent>
@property (nonatomic,copy) id deviceMotionServiceConnectedHandler; 
@property (nonatomic,readonly) id<_GCMotionEventSourceDescription> motionEventSource; 
@property (assign,nonatomic) BOOL sensorsActive; 
@required
-(void)setSensorsActive:(BOOL)arg1;
-(BOOL)sensorsActive;
-(id)deviceMotionServiceConnectedHandler;
-(void)setDeviceMotionServiceConnectedHandler:(/*^block*/id)arg1;
-(id<_GCMotionEventSourceDescription>)motionEventSource;

@end

