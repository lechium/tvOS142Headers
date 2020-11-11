/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration {

	NSDate* _anchorDate;
	unsigned long long _options;
	NSDateComponents* _intervalComponents;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,copy) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (assign,nonatomic) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                 //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(unsigned long long)mergeStrategy;
-(void)setAnchorDate:(NSDate *)arg1 ;
-(void)setIntervalComponents:(NSDateComponents *)arg1 ;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
@end

