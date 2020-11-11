/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLCloudPersistentHistoryMigratorContext;
@class PLCloudBatchUploader, PLCloudPhotoLibraryUploadTracker, NSManagedObjectContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {

	PLCloudBatchUploader* _uploader;
	PLCloudPhotoLibraryUploadTracker* _uploadTracker;
	NSManagedObjectContext* _managedObjectContext;
	id<PLCloudPersistentHistoryMigratorContext> _migratorContext;

}
+(void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4 ;
-(long long)migrate;
-(id)initWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4 ;
-(void)migrateToPersistentHistoryIfNecessary;
-(BOOL)checkForExistingMigrationMarker;
-(BOOL)readLastKnownChangeHubIndex:(unsigned long long*)arg1 ;
-(id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)arg1 ;
-(id)fetchAllPersistentHistoryTransactions;
-(void)uploadEventResults:(id)arg1 ;
-(void)updateSavedTokenFromPersistentHistoryResult:(id)arg1 ;
@end

