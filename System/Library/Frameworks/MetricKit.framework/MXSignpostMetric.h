/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXMetric.h>

@class NSString, MXSignpostIntervalData;

@interface MXSignpostMetric : MXMetric {

	NSString* _signpostName;
	NSString* _signpostCategory;
	MXSignpostIntervalData* _signpostIntervalData;
	unsigned long long _totalCount;

}

@property (readonly) NSString * signpostName;                                    //@synthesize signpostName=_signpostName - In the implementation block
@property (readonly) NSString * signpostCategory;                                //@synthesize signpostCategory=_signpostCategory - In the implementation block
@property (readonly) MXSignpostIntervalData * signpostIntervalData;              //@synthesize signpostIntervalData=_signpostIntervalData - In the implementation block
@property (readonly) unsigned long long totalCount;                              //@synthesize totalCount=_totalCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(unsigned long long)totalCount;
-(NSString *)signpostName;
-(id)initWithSignpostName:(id)arg1 withSignpostCategory:(id)arg2 withTotalCount:(unsigned long long)arg3 withSignpostIntervalData:(id)arg4 ;
-(NSString *)signpostCategory;
-(MXSignpostIntervalData *)signpostIntervalData;
@end

