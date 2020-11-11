/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLTimerScheduler;
@class CLSilo;

@interface CLTimer : NSObject {

	double _delaySetAtTime;
	double _nextFireDelay;
	CLSilo* _silo;
	id<CLTimerScheduler> _scheduler;
	/*^block*/id _handler;
	double _fireInterval;

}

@property (assign,nonatomic) double nextFireTime; 
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double nextFireDelay;              //@synthesize nextFireDelay=_nextFireDelay - In the implementation block
@property (assign,nonatomic) double fireInterval;               //@synthesize fireInterval=_fireInterval - In the implementation block
-(void)invalidate;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(double)fireInterval;
-(void)setNextFireDelay:(double)arg1 ;
-(void)setNextFireDelay:(double)arg1 interval:(double)arg2 ;
-(void)updateScheduler;
-(void)shouldFire;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)dbgAssertInside;
-(double)nextFireDelay;
-(void)setFireInterval:(double)arg1 ;
-(double)nextFireDelayRaw;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(double)nextFireTime;
-(void)setNextFireTime:(double)arg1 ;
@end

