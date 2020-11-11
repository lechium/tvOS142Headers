/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFCloudKitImporterWorkItem.h>
#import <libobjc.A.dylib/PFCloudKitSerializerDelegate.h>

@class NSMutableDictionary, NSUUID, NSMutableArray, PFCloudKitFetchedAssetBytesMetric, PFCloudKitFetchedRecordBytesMetric, NSDictionary, NSArray, NSString;

@interface PFCloudKitImportRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {

	NSMutableDictionary* _assetPathToSafeSaveURL;
	NSUUID* _importOperationIdentifier;
	NSMutableArray* _updatedRecords;
	unsigned long long _totalOperationBytes;
	PFCloudKitFetchedAssetBytesMetric* _fetchedAssetBytesMetric;
	PFCloudKitFetchedRecordBytesMetric* _fetchedRecordBytesMetric;
	NSMutableDictionary* _recordTypeToDeletedRecordID;
	NSMutableArray* _allRecordIDs;
	NSMutableArray* _encounteredErrors;
	NSMutableArray* _failedRelationships;
	NSMutableArray* _incrementalResults;
	NSMutableArray* _unknownItemRecordIDs;
	unsigned long long _currentOperationBytes;

}

@property (nonatomic,readonly) NSUUID * importOperationIdentifier;                      //@synthesize importOperationIdentifier=_importOperationIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetPathToSafeSaveURL;                   //@synthesize assetPathToSafeSaveURL=_assetPathToSafeSaveURL - In the implementation block
@property (nonatomic,readonly) NSArray * encounteredErrors;                             //@synthesize encounteredErrors=_encounteredErrors - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecords;                                //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordTypeToDeletedRecordID;              //@synthesize recordTypeToDeletedRecordID=_recordTypeToDeletedRecordID - In the implementation block
@property (nonatomic,readonly) NSArray * allRecordIDs;                                  //@synthesize allRecordIDs=_allRecordIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long currentOperationBytes;                //@synthesize currentOperationBytes=_currentOperationBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalOperationBytes;                  //@synthesize totalOperationBytes=_totalOperationBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalRecordBytes; 
@property (nonatomic,readonly) NSArray * incrementalResults;                            //@synthesize incrementalResults=_incrementalResults - In the implementation block
@property (nonatomic,readonly) NSArray * unknownItemRecordIDs;                          //@synthesize unknownItemRecordIDs=_unknownItemRecordIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)addUpdatedRecord:(id)arg1 ;
-(void)fetchOperationFinishedWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)recordTypeToDeletedRecordID;
-(void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)totalRecordBytes;
-(id)createMirroringResultForRequest:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(void)checkAndApplyChangesIfNeeded:(id)arg1 ;
-(void)addEncounteredError:(id)arg1 ;
-(id)entityNameToAttributesToUpdate;
-(id)entityNameToRelationshipsToUpdate;
-(void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3 ;
-(id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2 ;
-(void)addDeletedRecordID:(id)arg1 ofType:(id)arg2 ;
-(NSUUID *)importOperationIdentifier;
-(BOOL)checkForActiveImportOperationInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)removeDownloadedAssetFiles;
-(BOOL)handleImportError:(id)arg1 ;
-(id)newMirroringResultByApplyingAccumulatedChanges;
-(NSDictionary *)assetPathToSafeSaveURL;
-(unsigned long long)currentOperationBytes;
-(unsigned long long)totalOperationBytes;
-(NSArray *)updatedRecords;
-(NSArray *)allRecordIDs;
-(NSArray *)encounteredErrors;
-(NSArray *)incrementalResults;
-(NSArray *)unknownItemRecordIDs;
@end

