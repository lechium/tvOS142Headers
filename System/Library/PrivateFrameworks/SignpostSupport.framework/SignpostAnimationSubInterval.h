/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostSupportTimeInterval.h>

@class NSString;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval> {

	unsigned long long _startMachContinuousTime;
	unsigned long long _endMachContinuousTime;
	double _timebaseRatio;

}

@property (nonatomic,readonly) double timebaseRatio;                                    //@synthesize timebaseRatio=_timebaseRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long startMachContinuousTime;              //@synthesize startMachContinuousTime=_startMachContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachContinuousTime;                //@synthesize endMachContinuousTime=_endMachContinuousTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)durationSeconds;
-(double)durationMs;
-(unsigned long long)durationMachContinuousTime;
-(double)timebaseRatio;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(unsigned long long)durationNanoseconds;
-(unsigned long long)startNanoseconds;
-(unsigned long long)endNanoseconds;
-(double)startSeconds;
-(double)endSeconds;
-(double)startMs;
-(double)endMs;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 ;
-(id)initWithInterval:(id)arg1 ;
@end

