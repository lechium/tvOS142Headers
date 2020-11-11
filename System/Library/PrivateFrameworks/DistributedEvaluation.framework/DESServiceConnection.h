/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DESService.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSXPCConnection, DESDeviceIdentifierStore, DESBundleRegistry, NSObject, NSMutableArray, NSHashTable, NSString;

@interface DESServiceConnection : NSObject <DESService> {

	double _connectionStartTime;
	NSXPCConnection* _connection;
	DESDeviceIdentifierStore* _identifierStore;
	DESBundleRegistry* _bundleRegistry;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _consumedSandboxExtensions;
	NSHashTable* _evaluationSessions;
	BOOL _hasSentActivityShouldDeferEvent;
	NSObject*<OS_xpc_object> _activity;

}

@property (readonly) DESDeviceIdentifierStore * _identifierStore; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)recordSetWithRecipeType:(id)arg1 nativeRecords:(id)arg2 coreDuetEventsUUIDs:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)activity;
-(BOOL)taskIsDeferred;
-(void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchNativeRecordDataForRecordUUID:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInstalledBundlesIdsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runEvaluationForBundleId:(id)arg1 recipePath:(id)arg2 recordUUIDs:(id)arg3 attachments:(id)arg4 sandboxExtensions:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)runLiveEvaluationForAllBundlesWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchTelemetryForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)postRecipeResultForBundleId:(id)arg1 baseURL:(id)arg2 result:(id)arg3 recipeUUID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setValue:(id)arg1 forInfoKey:(id)arg2 bundleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)wakeUpWithCompletion:(/*^block*/id)arg1 ;
-(void)_releaseSandboxExtensions;
-(id)initWithXPCConnection:(id)arg1 activity:(id)arg2 ;
-(void)sendActivityShouldDeferEvent;
-(BOOL)_hasRecordAccessToBundleId:(id)arg1 error:(id*)arg2 ;
-(DESDeviceIdentifierStore *)_identifierStore;
-(void)_fetchSavedRecordInfoForBundleId:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchCoreDuetEventsForBundleId:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_consumeSandboxExtensions:(id)arg1 error:(id*)arg2 ;
-(void)_runEvaluationForBundleId:(id)arg1 recipeEvaluation:(id)arg2 attachments:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_prepareEvaluationSessionForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

