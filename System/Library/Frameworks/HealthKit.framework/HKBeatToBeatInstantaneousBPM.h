/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKBeatToBeatInstantaneousBPM : NSObject {

	double _bpm;
	double _time;

}

@property (nonatomic,readonly) double bpm;               //@synthesize bpm=_bpm - In the implementation block
@property (nonatomic,readonly) double time;              //@synthesize time=_time - In the implementation block
-(double)time;
-(id)initWithBPM:(double)arg1 time:(double)arg2 ;
-(double)bpm;
@end

