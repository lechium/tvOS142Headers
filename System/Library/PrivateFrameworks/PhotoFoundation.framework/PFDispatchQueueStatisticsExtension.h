/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension {

	AQ _enqueuedCount;
	AQ _maxEnqueuedCount;
	AQ _executingCount;
	AQ _completedCount;
	AQ _executionTime;
	AQ _maxExecutionTime;
	AQ _maxWaitTime;
	AQ _totalWaitTime;
	unsigned long long _maxEnqueuedCountTrigger;
	unsigned long long _maxExecutionTimeTrigger;
	unsigned long long _maxWaitTimeTrigger;
	unsigned long long _lastLogTime;

}
-(id)description;
-(id)init;
-(BOOL)_shouldLog;
-(unsigned long long)executionTime;
-(unsigned long long)completedCount;
-(void)installOnQueue:(id)arg1 ;
-(void)queue:(id)arg1 willEnqueueSync:(id)arg2 ;
-(void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 willExecute:(id)arg2 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(id)newBlockInfo;
-(Class)blockInfoClass;
-(unsigned long long)enqueuedCount;
-(unsigned long long)maxEnqueuedCount;
-(unsigned long long)executingCount;
-(unsigned long long)maxExecutionTime;
-(unsigned long long)maxWaitTime;
-(unsigned long long)totalWaitTime;
-(void)maxEnqueuedCountIncreased:(id)arg1 ;
-(void)maxExecutionTimeIncreased:(id)arg1 ;
-(void)maxWaitTimeIncreased:(id)arg1 ;
-(BOOL)_updateMaximum:(A*)arg1 value:(unsigned long long)arg2 :(unsigned long long)arg3 ;
-(void)blockEnqueued:(id)arg1 ;
-(void)blockCompletedAfterWait:(unsigned long long)arg1 executionTime:(unsigned long long)arg2 queue:(id)arg3 ;
@end
