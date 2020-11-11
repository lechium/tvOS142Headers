/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSString, PPDKStorage, _DKEventStream, PPSourceStorage;

@interface PPRecordStorageHelper : NSObject {

	NSString* _table;
	NSString* _feedbackTable;
	NSString* _clusterIdentifierColumn;
	unsigned _maxRecords;
	PPDKStorage* _duetStorage;
	_DKEventStream* _duetStream;
	NSString* _lastDuetImportDateKey;
	NSString* _lastDuetDeletionDateKey;
	PPSourceStorage* _sourceStorage;

}
-(id)init;
-(id)initWithName:(id)arg1 table:(id)arg2 clusterIdentifierColumn:(id)arg3 maxRecords:(unsigned)arg4 duetStorage:(id)arg5 duetStream:(id)arg6 sourceStorage:(id)arg7 ;
-(id)blobFromUUID:(id)arg1 ;
-(id)uuidForStatement:(id)arg1 referencingBlobInColumn:(int)arg2 ;
-(BOOL)clearWithDatabase:(id)arg1 client:(unsigned char)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 clearExternalTableReferences:(/*^block*/id)arg5 ;
-(id)decayedFeedbackCountsForItemString:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 ;
-(BOOL)storeFeedback:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 lowercaseItemStrings:(BOOL)arg4 limit:(unsigned)arg5 ;
-(BOOL)decayFeedbackWithDatabase:(id)arg1 client:(unsigned char)arg2 decayRate:(double)arg3 ;
-(void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(id)createTempRowIdTableForRecordsToDropMakingRoomForCount:(unsigned)arg1 txnWitness:(id)arg2 ;
-(/*^block*/id)duetEventDeletionProcessingBlockWithDatabase:(id)arg1 client:(unsigned char)arg2 ;
-(id)_lastDeletionDateWithTransaction:(id)arg1 ;
-(void)_processTombstoneEventBatch:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 lastTombstoneDate:(id*)arg4 ;
-(void)_cleanDatabaseOfCloudSyncedEventsWithUUIDs:(id)arg1 txnWitness:(id)arg2 ;
-(BOOL)_dkEventMetadataFixupHasCompletedWithDatabase:(id)arg1 client:(unsigned char)arg2 ;
-(void)fixupDKEventsMetadataWithShouldContinueBlock:(/*^block*/id)arg1 database:(id)arg2 client:(unsigned char)arg3 ;
-(BOOL)_cleanUpMalformedMetadataDuetEvents:(id)arg1 error:(id*)arg2 ;
-(void)importDuetEventsWithLimit:(unsigned)arg1 database:(id)arg2 client:(unsigned char)arg3 remoteEventsOnly:(BOOL)arg4 isComplete:(BOOL*)arg5 shouldContinueBlock:(/*^block*/id)arg6 eventImportBlock:(/*^block*/id)arg7 ;
-(void)_addEventsSourcedOnLastImportDateToSet:(id)arg1 lastDKImportDate:(id*)arg2 txnWitness:(id)arg3 ;
-(id)_importDuetEventBatch:(id)arg1 lastDKImportDate:(id)arg2 isComplete:(BOOL*)arg3 eventImportBlock:(/*^block*/id)arg4 txnWitness:(id)arg5 ;
-(void)disableSyncForBundleIds:(id)arg1 txnWitness:(id)arg2 ;
-(BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg1 algorithm:(unsigned)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsWithName:(id)arg1 algorithm:(unsigned)arg2 bundleId:(id)arg3 groupId:(id)arg4 category:(unsigned)arg5 beforeDate:(id)arg6 txnWitness:(id)arg7 atLeastOneRecordClusterRemoved:(BOOL*)arg8 deletedCount:(unsigned long long*)arg9 error:(id*)arg10 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 algorithm:(unsigned)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned)arg4 txnWitness:(id)arg5 atLeastOneRecordClusterRemoved:(BOOL*)arg6 deletedCount:(unsigned long long*)arg7 error:(id*)arg8 ;
-(void)deleteAllRemoteRecordsMissingInDuetFromDatabase:(id)arg1 client:(unsigned char)arg2 shouldContinueBlock:(/*^block*/id)arg3 ;
-(void)_filterAndRemoveMissingRemoteRecordsFromBatch:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 deletedCount:(unsigned long long*)arg4 ;
-(BOOL)deleteFeedbackCountRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2 ;
-(BOOL)pruneOrphanedFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 txnWitness:(id)arg4 isComplete:(BOOL*)arg5 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 ;
-(id)createTempRowIdTableForRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2 ;
-(void)deleteRecordsForRowIds:(id)arg1 txnWitness:(id)arg2 atLeastOneClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 ;
-(void)deleteRecordsWithRowIdsFromTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 ;
-(void)_deleteRecordsWithRowIdsFromQuery:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL*)arg3 deletedCount:(unsigned long long*)arg4 bind:(/*^block*/id)arg5 ;
-(PASDBIterAction_)_processRowForDeletionWithStatement:(id)arg1 handle:(id)arg2 ;
-(void)_deleteDKEventsWithRowIdQuery:(id)arg1 txnWitness:(id)arg2 ;
-(BOOL)fixupDKEventsWithDatabase:(id)arg1 fixup49995922Table:(id)arg2 batchSize:(unsigned)arg3 shouldContinueBlock:(/*^block*/id)arg4 createRecordWithStatement:(/*^block*/id)arg5 eventForRecord:(/*^block*/id)arg6 ;
-(unsigned)distinctClusterCountInDatabase:(id)arg1 client:(unsigned char)arg2 ;
-(id)clusterIdentifiersExistingInDatabaseBeforeDate:(id)arg1 client:(unsigned char)arg2 date:(id)arg3 ;
-(id)thirdPartyBundleIdsFromTodayInDatabase:(id)arg1 client:(unsigned char)arg2 ;
-(id)lastDonationTimeForSourcesInDatabase:(id)arg1 client:(unsigned char)arg2 before:(id)arg3 ;
@end
