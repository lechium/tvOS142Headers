/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, MFLibrarySearchableIndexDataSource;
@class NSString, MFCancelationToken, NSObject, MFCoalescer, NSMutableArray, NSMutableSet, _MFLibrarySearchableIndexPendingRemovals, MFLazyCache, MFWeakSet;

@interface MFLibrarySearchableIndex : NSObject <MFDiagnosticsGenerator> {

	NSString* _indexName;
	MFCancelationToken* _cancelationToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _coalescingTimer;
	long long _resumeCount;
	long long _transaction;
	unsigned long long _throttledIndexingBatchSize;
	unsigned long long _throttledDataSourceBatchSize;
	unsigned long long _currentMaximumBatchSize;
	MFCoalescer* _budgetCoalescer;
	double _remainingIndexingBudget;
	long long _remainingIndexingBudgetOverage;
	NSObject*<OS_os_activity> _batchIndexingActivity;
	NSMutableArray* _pendingItems;
	NSMutableSet* _pendingDomainRemovals;
	_MFLibrarySearchableIndexPendingRemovals* _pendingIdentifierRemovals;
	NSObject*<OS_dispatch_queue> _indexingQueue;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;
	MFLazyCache* _searchResultsCache;
	MFWeakSet* _middleware;
	BOOL _isForeground;
	BOOL _isActive;
	BOOL _needsRefresh;
	BOOL _needsVerification;
	BOOL _clientStateFetched;
	BOOL _coalesceTimerFired;
	BOOL _scheduledProcessing;
	BOOL _scheduledRefresh;
	BOOL _scheduledVerification;
	id<MFLibrarySearchableIndexDataSource> _dataSource;

}

@property (getter=_transaction,readonly) long long transaction; 
@property (assign,setter=_setForeground:,getter=_isForeground,nonatomic) BOOL foreground; 
@property (assign,nonatomic) id<MFLibrarySearchableIndexDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_localClientStateURL;
+(id)_localClientState;
+(void)_saveLocalClientState:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)_invalidateCache;
-(void)removeAllItems;
-(long long)_transaction;
-(void)refresh;
-(id<MFLibrarySearchableIndexDataSource>)dataSource;
-(void)setDataSource:(id<MFLibrarySearchableIndexDataSource>)arg1 ;
-(BOOL)_isForeground;
-(void)removeItemsWithIdentifiers:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(id)identifiersMatchingCriterion:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)applicationWillResume;
-(unsigned long long)pendingIndexItemsCount;
-(void)indexItems:(id)arg1 ;
-(void)addMiddleware:(id)arg1 ;
-(void)removeItemsForDomainIdentifier:(id)arg1 ;
-(void)_setForeground:(BOOL)arg1 ;
-(double)persistedRemainingIndexingBudget;
-(void)_persistRemainingIndexingBudgetValue:(id)arg1 ;
-(void)_registerDistantFutureSpotlightVerification;
-(void)_powerStateChanged;
-(id)_budgetPersistenceKey;
-(void)_scheduleResetIndexingBudgetTimer;
-(void)setRemainingIndexingBudget:(double)arg1 shouldPersist:(BOOL)arg2 ;
-(void)_queueTransitionActive:(BOOL)arg1 ;
-(void)_resetIndexingBudgetTimer;
-(void)_processSpotlightVerificationWithCompletion:(/*^block*/id)arg1 ;
-(void)_transitionWithBudgetTimeUsed:(double)arg1 ;
-(void)_verifySpotlightIndex;
-(void)_queueRefresh;
-(void)_dataSourceScheduleWork:(/*^block*/id)arg1 ;
-(void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2 ;
-(void)_indexItems:(id)arg1 fromRefresh:(BOOL)arg2 ;
-(double)_throttleRequestedSize:(unsigned long long*)arg1 action:(/*^block*/id)arg2 ;
-(void)_coalescingTimerFired;
-(void)_queueConsumeBudgetElapsedPeriod:(double)arg1 ;
-(void)_fetchLastClientState;
-(void)_stopCoalescingTimer;
-(void)_scheduleProcessPendingItems;
-(void)_startCoalescingTimer;
-(void)_scheduleDataSourceRefresh;
-(void)_scheduleSpotlightVerification;
-(id)_consumeBatchOfSize:(unsigned long long)arg1 ;
-(void)_getDomainRemovals:(id*)arg1 identifierRemovals:(id*)arg2 ;
-(long long)_nextTransaction;
-(void)_processRefreshRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataSourceRequestNeededUpdatesWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataSourceVerifyRepresentativeSampleWithCompletion:(/*^block*/id)arg1 ;
-(void)_queueConsumeBudgetItemCount:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 dataSource:(id)arg2 ;
-(void)_noteNeedsLastClientStateFetch;
-(void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSpotlightDiagnosticsForMessageRowId:(id)arg1 ;
-(id)indexedEmptySubjectIdentifers;
@end

