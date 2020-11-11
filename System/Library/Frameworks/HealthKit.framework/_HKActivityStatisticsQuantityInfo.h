/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HKQuantity;

@interface _HKActivityStatisticsQuantityInfo : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _quantityValue;

}

@property (nonatomic,retain) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantity * quantityValue;              //@synthesize quantityValue=_quantityValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(HKQuantity *)quantityValue;
-(void)setQuantityValue:(HKQuantity *)arg1 ;
@end

