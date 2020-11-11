/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSTimer;

@interface NADecayingTimer : NSObject {

	NSDate* _referenceDate;
	unsigned long long _minimumUnit;
	/*^block*/id _block;
	NSTimer* _timer;

}

@property (nonatomic,readonly) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumUnit;              //@synthesize minimumUnit=_minimumUnit - In the implementation block
@property (nonatomic,copy,readonly) id block;                               //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                               //@synthesize timer=_timer - In the implementation block
+(id)scheduledTimerWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)block;
-(NSDate *)referenceDate;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(unsigned long long)minimumUnit;
-(id)_nextFireDate;
-(void)_scheduleNextTimer;
-(id)initWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(unsigned long long)_mostSignificantUnitForDateComponents:(id)arg1 ;
-(void)_timerEvent;
@end
