/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate, _DRTopicInterestSummary;

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSPredicate* _predicate;
	_DRTopicInterestSummary* _summary;

}

@property (retain) _DRTopicInterestSummary * summary;              //@synthesize summary=_summary - In the implementation block
+(id)topicStatisticsQueryWithFilter:(id)arg1 ;
+(id)sumExpression;
+(id)countExpression;
+(id)topicStatisticsQuery;
-(_DRTopicInterestSummary *)summary;
-(void)setSummary:(_DRTopicInterestSummary *)arg1 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)clearSummary;
@end

