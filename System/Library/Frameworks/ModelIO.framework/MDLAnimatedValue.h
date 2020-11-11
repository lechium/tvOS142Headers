/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MDLAnimatedValue : NSObject <NSCopying> {

	vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> >* _timeSampledData;
	unsigned long long _interpolation;

}

@property (nonatomic,readonly) unsigned long long precision; 
@property (nonatomic,readonly) unsigned long long timeSampleCount; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (assign,nonatomic) unsigned long long interpolation;                  //@synthesize interpolation=_interpolation - In the implementation block
@property (nonatomic,readonly) NSArray * keyTimes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)clear;
-(NSArray *)keyTimes;
-(unsigned long long)precision;
-(double)minimumTime;
-(double)maximumTime;
-(void)resetWithAnimatedValue:(id)arg1 ;
-(unsigned long long)timeSampleCount;
-(unsigned long long)getTimes:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(BOOL)isAnimated;
-(unsigned long long)interpolation;
-(void)setInterpolation:(unsigned long long)arg1 ;
@end

