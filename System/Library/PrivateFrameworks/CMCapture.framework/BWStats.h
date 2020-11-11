/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSString;

@interface BWStats : NSObject {

	double _multiplier;
	NSString* _unitDesignator;
	long long _numberOfSamples;
	double _min;
	double _max;
	double _sumX;
	double _sumXX;

}

@property (assign,nonatomic) double multiplier;                        //@synthesize multiplier=_multiplier - In the implementation block
@property (nonatomic,copy) NSString * unitDesignator;                  //@synthesize unitDesignator=_unitDesignator - In the implementation block
@property (nonatomic,readonly) long long numberOfSamples;              //@synthesize numberOfSamples=_numberOfSamples - In the implementation block
@property (nonatomic,readonly) double min;                             //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) double max;                             //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) double average; 
@property (nonatomic,readonly) double standardDeviation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(double)multiplier;
-(void)setMultiplier:(double)arg1 ;
-(double)max;
-(double)min;
-(double)standardDeviation;
-(double)average;
-(void)setUnitDesignator:(NSString *)arg1 ;
-(void)addDataPoint:(double)arg1 ;
-(id)initWithStats:(id)arg1 ;
-(NSString *)unitDesignator;
-(long long)numberOfSamples;
-(void)removeDataPoint:(double)arg1 ;
@end
