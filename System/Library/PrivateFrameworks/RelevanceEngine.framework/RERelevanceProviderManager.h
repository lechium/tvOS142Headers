/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RERelevanceProviderManagerProperties.h>

@protocol OS_dispatch_queue;
@class NSArray, RERelevanceProviderEnvironment, NSHashTable, REPriorityQueue, REUpNextTimer, NSDictionary, NSObject, NSString, REFeatureSet;

@interface RERelevanceProviderManager : NSObject <RERelevanceProviderManagerProperties> {

	RERelevanceProviderEnvironment* _environment;
	NSHashTable* _providers;
	REPriorityQueue* _scheduledUpdates;
	REUpNextTimer* _updateTimer;
	NSArray* _effectiveFeatures;
	NSDictionary* _inflectionValues;
	BOOL _dataStoresOpened;
	BOOL _hasSeperateRelevanceQueue;
	BOOL _implementsPrepareForUpdate;
	NSObject*<OS_dispatch_queue> _relevanceQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _loggingHeader;
	REFeatureSet* _supportedFeatures;

}

@property (assign,nonatomic,__weak) RERelevanceProviderEnvironment * environment; 
@property (nonatomic,retain) REFeatureSet * supportedFeatures;                                 //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (nonatomic,readonly) NSArray * effectiveFeatures; 
@property (nonatomic,readonly) NSArray * allProviders; 
@property (nonatomic,readonly) NSArray * allRelevanceProviders; 
@property (nonatomic,readonly) unsigned long long scheduledUpdatesCount; 
@property (nonatomic,readonly) BOOL dataSourcesOpened; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
+(id)_dependencyClasses;
+(BOOL)_wantsDelayedUpdate;
+(id)providerManagerClasses;
+(BOOL)_requiresLocationServices;
+(BOOL)supportsHistoricProviders;
+(void)setProviderManagerClassesLoadingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(void)resume;
-(void)pause;
-(RERelevanceProviderEnvironment *)environment;
-(void)endActivity:(id)arg1 ;
-(void)setEnvironment:(RERelevanceProviderEnvironment *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(REFeatureSet *)supportedFeatures;
-(void)setSupportedFeatures:(REFeatureSet *)arg1 ;
-(void)_handleSignificantTimeChange;
-(void)pauseWithCompletion:(/*^block*/id)arg1 ;
-(void)resumeWithCompletion:(/*^block*/id)arg1 ;
-(void)_scheduleUpdate:(id)arg1 ;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(void)beginActivity:(id)arg1 ;
-(void)beginFetchingData;
-(void)finishFetchingData;
-(void)_loadLoggingHeader;
-(void)_removeAllPendingUpdates;
-(void)_enumerateProviders:(/*^block*/id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(void)_removeProvider:(id)arg1 ;
-(float)_relevanceForProvider:(id)arg1 ;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(void)enumerateInflectionFeatureValues:(/*^block*/id)arg1 ;
-(id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2 ;
-(id)_manager_queue;
-(NSArray *)effectiveFeatures;
-(id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3 ;
-(void)_prepareForUpdateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)allProviders;
-(BOOL)containsProvider:(id)arg1 ;
-(void)relevanceForHistoricProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relevanceForProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isProviderHistoric:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)relevanceForProvider:(id)arg1 context:(id)arg2 ;
-(BOOL)_isValidProvider:(id)arg1 ;
-(void)_accessQueue_scheduleUpdate:(id)arg1 ;
-(void)_closeDataStoresAndObserveChanges;
-(void)_openDataStoresAndObserveChanges;
-(void)_relevanceQueue_openDataStores;
-(void)_accessQueue_performPendingUpdatesAndScheduleTimerIfNeeded;
-(void)_accessQueue_resetTimer;
-(void)_accessQueue_performUpdate:(id)arg1 ;
-(void)_accessQueue_performImmediateUpdate:(id)arg1 ;
-(void)_accessQueue_appendCompletionHandlerForScheduledUpdate:(id)arg1 ;
-(NSArray *)allRelevanceProviders;
-(unsigned long long)scheduledUpdatesCount;
-(BOOL)dataSourcesOpened;
-(BOOL)_dataSourcesOpened;
@end
