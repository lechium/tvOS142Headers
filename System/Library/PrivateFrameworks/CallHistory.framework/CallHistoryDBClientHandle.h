/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {

	CallHistoryDBHandle* dbStoreHandle;
	id _observerCallRecordRef;
	id _observerCallTimersRef;

}

@property (nonatomic,readonly) CallHistoryDBHandle * dbStoreHandle; 
+(id)createForClient;
+(id)createForServer;
-(id)init;
-(void)dealloc;
-(id)manager;
-(id)init:(BOOL)arg1 ;
-(void)resetTimers;
-(void)registerForNotifications;
-(BOOL)deleteAll;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(BOOL)deleteAll:(id*)arg1 ;
-(BOOL)resetAllTimers;
-(void)unRegisterForNotifications;
-(id)fetchAll;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 ;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(id)timerLastReset;
-(unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(long long)deleteCallsWithPredicate:(id)arg1 ;
-(BOOL)createCallRecord:(id)arg1 ;
-(BOOL)createCallRecords:(id)arg1 ;
-(id)updateCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveDatabase:(id*)arg1 ;
-(id)updateCallRecords:(id)arg1 ;
-(id)updateAllCallRecords:(id)arg1 ;
-(void)parseCallStatus_sync:(unsigned)arg1 isAnswered:(BOOL*)arg2 isOriginated:(BOOL*)arg3 ;
-(void)handleCallRecordSave_sync:(id)arg1 ;
-(void)handleCallTimersSave_sync:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2 ;
-(BOOL)createCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateCallRecords_sync:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateAllCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2 ;
-(BOOL)willHandleNotification_sync:(id)arg1 ;
-(BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2 ;
-(unsigned)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3 ;
-(CallHistoryDBHandle *)dbStoreHandle;
@end

