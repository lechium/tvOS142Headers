/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsWorkspace;

@interface NWActivityHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AnalyticsWorkspace* _workspace;

}
-(id)init;
-(void)_uploadCompleteNWActivityMetrics;
-(void)_garbageCollectNWActivityMetrics;
-(void)_deleteAllMetrics;
-(void)_deleteOldMetrics;
-(void)_deleteAllFragmentsMatchingPredicate:(id)arg1 ;
-(id)_fetchActivitiesWithPredicate:(id)arg1 batch:(BOOL)arg2 ;
-(id)analyticsWorkspace;
-(void)_deleteNWActivityFragment:(id)arg1 fromContext:(id)arg2 ;
-(id)_findNWActivityMetricsForUploading;
-(void)sendReportToMetricStream:(id)arg1 ;
-(BOOL)shouldSendMetricStream;
-(void)startNWActivitySuperMetricProcessing;
-(void)cleanOutNWActivityMetrics;
-(void)purgeOldNWActivityMetrics;
@end

