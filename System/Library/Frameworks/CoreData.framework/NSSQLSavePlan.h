/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSSQLSaveChangesRequestContext, NSMutableArray, NSMutableSet, NSMutableDictionary, NSSaveChangesRequest, NSManagedObjectContext;

@interface NSSQLSavePlan : NSObject {

	NSSQLSaveChangesRequestContext* _requestContext;
	CFDictionaryRef _changeCache;
	CFDictionaryRef _insertCache;
	CFDictionaryRef _toManyCache;
	NSMutableArray* _rowsToDelete;
	NSMutableSet* _updatedByRequest;
	NSMutableSet* _updatedByForeignKey;
	NSMutableSet* _rowsToAddToRowCache;
	CFDictionaryRef _updatedFOKRowsInCurrentSave;
	CFDictionaryRef _deletedFOKRowsInCurrentSave;
	NSMutableArray* _externalDataReferencesToSave;
	NSMutableArray* _externalDataReferencesToDelete;
	NSMutableArray* _fileBackedFuturesToCopy;
	NSMutableArray* _fileBackedFuturesToDelete;
	NSMutableDictionary* _toManyRelationshipChanges;
	NSMutableDictionary* _usedIndexes;
	int _transactionInMemorySequence;
	struct {
		unsigned notifyFOKChanges : 1;
		unsigned hasChanges : 1;
		unsigned reserved : 30;
	}  _flags;

}

@property (nonatomic,readonly) NSSaveChangesRequest * saveRequest; 
@property (nonatomic,readonly) NSManagedObjectContext * savingContext; 
@property (assign,nonatomic) int transactionInMemorySequence; 
@property (nonatomic,readonly) id<_NSCoreDataCollectionWithoutKeys> externalDataReferencesToSave;                //@synthesize externalDataReferencesToSave=_externalDataReferencesToSave - In the implementation block
@property (nonatomic,readonly) id<_NSCoreDataCollectionWithoutKeys> externalDataReferencesToDelete;              //@synthesize externalDataReferencesToDelete=_externalDataReferencesToDelete - In the implementation block
@property (nonatomic,readonly) id<_NSCoreDataCollectionWithoutKeys> fileBackedFuturesToCopy;                     //@synthesize fileBackedFuturesToCopy=_fileBackedFuturesToCopy - In the implementation block
@property (nonatomic,readonly) id<_NSCoreDataCollectionWithoutKeys> fileBackedFuturesToDelete;                   //@synthesize fileBackedFuturesToDelete=_fileBackedFuturesToDelete - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * usedIndexes;                                                //@synthesize usedIndexes=_usedIndexes - In the implementation block
-(void)dealloc;
-(id)entityForEntityDescription:(id)arg1 ;
-(id<_NSCoreDataCollectionWithoutKeys>)externalDataReferencesToDelete;
-(id<_NSCoreDataCollectionWithoutKeys>)fileBackedFuturesToDelete;
-(void)setTransactionInMemorySequence:(int)arg1 ;
-(BOOL)hasChangesForWriting;
-(int)transactionInMemorySequence;
-(id)newInsertedRows;
-(id)newPrimaryUpdatedRows;
-(id)newAncillaryUpdatedRows;
-(id)newDeletedRows;
-(id)newCorrelationTableUpdates;
-(id)toManyRelationshipChanges;
-(long long)_knownPrimaryKeyForObjectID:(id)arg1 ;
-(unsigned)_knownEntityKeyForObjectID:(id)arg1 ;
-(void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned long long*)arg4 reorderedIndexes:(char**)arg5 ;
-(unsigned)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4 ;
-(void)_registerChangedFOKs:(id)arg1 deletions:(id)arg2 forSourceObject:(id)arg3 andRelationship:(id)arg4 ;
-(id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalOrderKeys:(id)arg3 originalSnapshot:(id)arg4 value:(id)arg5 added:(id)arg6 deleted:(id)arg7 sourceRowPK:(long long)arg8 properties:(id)arg9 sourceObject:(id)arg10 newIndexes:(unsigned long long*)arg11 reorderedIndexes:(char**)arg12 ;
-(id)_findOrCreateChangeSnapshotForGlobalID:(id)arg1 ;
-(id)_correlationTableUpdateTrackerForRelationship:(id)arg1 ;
-(long long)_knownPrimaryKeyForObject:(id)arg1 ;
-(unsigned)_knownEntityKeyForObject:(id)arg1 ;
-(unsigned)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3 ;
-(void)_addFileBackedFutureToDelete:(id)arg1 ;
-(void)_addExternalReferenceDataToDelete:(id)arg1 ;
-(void)_addFileBackedFutureToCopy:(id)arg1 ;
-(void)_addExternalReferenceDataToSave:(id)arg1 ;
-(void)_recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(BOOL)arg4 ;
-(id)_entityForObject:(id)arg1 ;
-(void)_prepareForDeletionOfDatabaseExternalPropertiesForObject:(id)arg1 ;
-(void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(BOOL)arg4 shouldAddToRowCache:(BOOL*)arg5 ;
-(void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1 ;
-(void)_prepareForDeletionOfFileBackedFuturesForObject:(id)arg1 ;
-(void)_createCorrelationTrackerUpdatesForDeletedObject:(id)arg1 ;
-(void)_createRowsForSave;
-(void)_computeUpdatedRowSplit;
-(void)prepareRows;
-(id)initForRequestContext:(id)arg1 ;
-(NSSaveChangesRequest *)saveRequest;
-(NSManagedObjectContext *)savingContext;
-(id)newObjectsForFastLockConflictDetection;
-(id)newObjectsForExhaustiveLockConflictDetection;
-(id)newObjectsForUniquenessConflictDetectionGivenReportedFailures:(id)arg1 ;
-(id)newRowsToAddToRowCache;
-(id)foreignOrderKeysBeingUpdated;
-(id)foreignOrderKeysBeingDeleted;
-(id<_NSCoreDataCollectionWithoutKeys>)externalDataReferencesToSave;
-(id<_NSCoreDataCollectionWithoutKeys>)fileBackedFuturesToCopy;
-(NSMutableDictionary *)usedIndexes;
@end

