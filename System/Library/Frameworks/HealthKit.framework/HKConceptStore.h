/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKConceptStoreClientInterface.h>

@class HKObserverSet, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSString;

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface> {

	HKObserverSet* _conceptObservers;
	os_unfair_lock_s _conceptIndexManagerStateLock;
	unsigned long long _lastKnownConceptIndexManagerState;
	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                    //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long currentConceptIndexerState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(id)taskServerIdentifier;
+(id)conceptStore;
-(id)init;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_startTaskServerIfNeeded;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)arg1 ;
-(id)ontologyVersionWithError:(id*)arg1 ;
-(id)conceptForIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)fetchConceptForIdentifier:(id)arg1 loadRelationships:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)loadRelationshipsForConcept:(id)arg1 error:(id*)arg2 ;
-(BOOL)makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 ;
-(BOOL)breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 ;
-(long long)countOfConceptsAssociatedToUserRecordsWithError:(id*)arg1 ;
-(BOOL)cleanUpAfterUnitTest;
-(void)resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)currentConceptIndexerState;
-(void)registerAsConceptObserver:(id)arg1 onQueue:(id)arg2 ;
-(void)unregisterAsConceptObserver:(id)arg1 onQueue:(id)arg2 ;
@end

