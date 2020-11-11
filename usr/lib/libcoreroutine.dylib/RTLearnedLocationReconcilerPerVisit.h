/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, RTPersistenceManager, RTDefaultsManager, RTDistanceCalculator, NSArray;

@interface RTLearnedLocationReconcilerPerVisit : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	RTPersistenceManager* _persistenceManager;
	RTDefaultsManager* _defaultsManager;
	RTDistanceCalculator* _distanceCalculator;
	NSArray* _reconciliationModels;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;              //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (retain) NSArray * reconciliationModels;                                   //@synthesize reconciliationModels=_reconciliationModels - In the implementation block
+(void)submitMetricsOnReconciledGraphDensity:(id)arg1 algorithm:(unsigned long long)arg2 persistenceManager:(id)arg3 managedObjectContext:(id)arg4 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_currentModel;
-(RTDefaultsManager *)defaultsManager;
-(RTDistanceCalculator *)distanceCalculator;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithPersistenceManager:(id)arg1 defaultsManager:(id)arg2 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)performReconciliationWithHandler:(/*^block*/id)arg1 ;
-(id)initWithPersistenceManager:(id)arg1 defaultsManager:(id)arg2 distanceCalculator:(id)arg3 reconciliationModels:(id)arg4 ;
-(void)_performReconciliationWithHandler:(/*^block*/id)arg1 ;
-(void)_reconcileVisitsWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_visitsWithContext:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(void)_reconcileVisits:(id)arg1 context:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_reconcileVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)collapseVisits:(id)arg1 context:(id)arg2 ;
-(void)collapseReconciledVisitsToLocationsOfInterest:(id)arg1 context:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_findWinner:(id)arg1 currentVisit:(id)arg2 model:(id)arg3 modelContext:(id)arg4 ;
-(id)_visitFollowingVisit:(id)arg1 visits:(id)arg2 ;
-(NSArray *)reconciliationModels;
-(void)reconcileVisits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)reconcileVisits:(id)arg1 context:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)setReconciliationModels:(NSArray *)arg1 ;
@end

