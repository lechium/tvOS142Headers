/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, CKDOperationMetrics;

@interface CKDOperationStatistics : NSObject <NSCopying> {

	NSString* _operationClassName;
	NSMutableDictionary* _recentErrorsByDate;
	unsigned long long _operationCount;
	CKDOperationMetrics* _aggregateCKMetrics;
	CKDOperationMetrics* _aggregateMMCSMetrics;

}

@property (nonatomic,readonly) NSString * operationClassName;                           //@synthesize operationClassName=_operationClassName - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * recentErrorsByDate;                //@synthesize recentErrorsByDate=_recentErrorsByDate - In the implementation block
@property (readonly) unsigned long long operationCount;                                 //@synthesize operationCount=_operationCount - In the implementation block
@property (nonatomic,readonly) CKDOperationMetrics * aggregateCKMetrics;                //@synthesize aggregateCKMetrics=_aggregateCKMetrics - In the implementation block
@property (nonatomic,readonly) CKDOperationMetrics * aggregateMMCSMetrics;              //@synthesize aggregateMMCSMetrics=_aggregateMMCSMetrics - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addOperation:(id)arg1 ;
-(unsigned long long)operationCount;
-(void)merge:(id)arg1 ;
-(id)CKStatusReportArray;
-(id)initWithOperationClassName:(id)arg1 ;
-(NSString *)operationClassName;
-(NSMutableDictionary *)recentErrorsByDate;
-(CKDOperationMetrics *)aggregateCKMetrics;
-(CKDOperationMetrics *)aggregateMMCSMetrics;
-(id)_trimmedError:(id)arg1 ;
-(void)_addMetrics:(id)arg1 toAggregate:(id)arg2 ;
@end

