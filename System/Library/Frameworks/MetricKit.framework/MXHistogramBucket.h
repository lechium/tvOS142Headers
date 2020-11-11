/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter, NSMeasurement;

@interface MXHistogramBucket : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _histogramBucketFormatter;
	NSMeasurement* _bucketStart;
	NSMeasurement* _bucketEnd;
	unsigned long long _bucketCount;

}

@property (readonly) NSMeasurement * bucketStart;                 //@synthesize bucketStart=_bucketStart - In the implementation block
@property (readonly) NSMeasurement * bucketEnd;                   //@synthesize bucketEnd=_bucketEnd - In the implementation block
@property (readonly) unsigned long long bucketCount;              //@synthesize bucketCount=_bucketCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(unsigned long long)bucketCount;
-(id)initWithBucketStart:(id)arg1 bucketEnd:(id)arg2 bucketCount:(unsigned long long)arg3 ;
-(NSMeasurement *)bucketStart;
-(NSMeasurement *)bucketEnd;
@end
