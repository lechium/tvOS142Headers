//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBCloudSyncDatabaseServices, HBRawFolder, NSDictionary, NSMutableDictionary, NSOperation, PendingChanges;
@protocol HBCloudSyncOperationDelegate, OS_dispatch_queue;

@interface HBCloudSyncDatabaseFacade : NSObject
{
    struct {
        unsigned int delegateOperationWillBegin:1;
        unsigned int delegateOperationDidFailWithError:1;
        unsigned int delegateOperationDidCompleteSuccessfully:1;
    } _flags;	// 8 = 0x8
    _Bool _syncStateIsDirtyForDevice;	// 12 = 0xc
    id <HBCloudSyncOperationDelegate> _cloudSyncOperationDelegate;	// 16 = 0x10
    HBCloudSyncDatabaseServices *_cloudSyncDBServices;	// 24 = 0x18
    HBRawFolder *_rootFolder;	// 32 = 0x20
    PendingChanges *_pendingChangesToBeProcessed;	// 40 = 0x28
    NSDictionary *_syncedItemsToParentMapping;	// 48 = 0x30
    NSDictionary *_syncedFolderIdsToDisplayNamesMapping;	// 56 = 0x38
    NSMutableDictionary *_appIdentifiersToSyncedAlternateIconNames;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_cloudSyncFacadeSerialQueue;	// 72 = 0x48
}

+ (id)sharedCloudSyncDatabaseFacade;	// IMP=0x000000010000e73c
+ (void)initialize;	// IMP=0x000000010000e6d8
- (void).cxx_destruct;	// IMP=0x00000001000171c4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cloudSyncFacadeSerialQueue; // @synthesize cloudSyncFacadeSerialQueue=_cloudSyncFacadeSerialQueue;
@property(nonatomic) _Bool syncStateIsDirtyForDevice; // @synthesize syncStateIsDirtyForDevice=_syncStateIsDirtyForDevice;
@property(retain, nonatomic) NSMutableDictionary *appIdentifiersToSyncedAlternateIconNames; // @synthesize appIdentifiersToSyncedAlternateIconNames=_appIdentifiersToSyncedAlternateIconNames;
@property(copy, nonatomic) NSDictionary *syncedFolderIdsToDisplayNamesMapping; // @synthesize syncedFolderIdsToDisplayNamesMapping=_syncedFolderIdsToDisplayNamesMapping;
@property(copy, nonatomic) NSDictionary *syncedItemsToParentMapping; // @synthesize syncedItemsToParentMapping=_syncedItemsToParentMapping;
@property(retain, nonatomic) PendingChanges *pendingChangesToBeProcessed; // @synthesize pendingChangesToBeProcessed=_pendingChangesToBeProcessed;
@property(retain, nonatomic) HBRawFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(retain, nonatomic) HBCloudSyncDatabaseServices *cloudSyncDBServices; // @synthesize cloudSyncDBServices=_cloudSyncDBServices;
@property(nonatomic) __weak id <HBCloudSyncOperationDelegate> cloudSyncOperationDelegate; // @synthesize cloudSyncOperationDelegate=_cloudSyncOperationDelegate;
- (void)_generateUUIDForAddedFoldersInList:(id)arg1;	// IMP=0x0000000100016eb0
- (id)_applicationsToBeUninstalledFromDeletedRecordIDs:(id)arg1 oldFolder:(id)arg2;	// IMP=0x0000000100016a44
- (id)_installableAppRecordsFromNewFolder:(id)arg1 changedRecords:(id)arg2;	// IMP=0x00000001000165e4
- (void)_updateInstallableRecordsList:(id)arg1 fromInstallingProxies:(id)arg2;	// IMP=0x00000001000162e4
- (id)_deletableItemsListWithHashedIdsFromList:(id)arg1;	// IMP=0x00000001000160a8
- (void)_createAndSaveRecordsToCloudWithFolder:(id)arg1;	// IMP=0x0000000100015a74
- (void)_registerForNotificationsToListenForZoneChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000159c8
- (void)_setAlternateIconNamesForApps:(id)arg1 rootFolder:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000151e4
- (_Bool)_saveFolder:(id)arg1 shouldSendNotification:(_Bool)arg2 mergeInPlace:(_Bool)arg3;	// IMP=0x0000000100014f54
- (void)_finishAndSaveFolderIfRequired:(id)arg1 operationError:(id)arg2 userInfo:(id)arg3 mergeInPlace:(_Bool)arg4;	// IMP=0x0000000100014c04
- (_Bool)_doDeviceChangesNeedToBeSyncedToCloudBasedOffCloudRecords:(id)arg1 rootFolder:(id)arg2;	// IMP=0x00000001000141c8
- (void)_syncDeviceChangesToCloud;	// IMP=0x0000000100013428
- (void)_updateLocalDeviceStateWithChangedCloudRecords:(id)arg1 deletedRecordIDs:(id)arg2 shouldPerformMigration:(_Bool)arg3 shouldMergeInPlace:(_Bool)arg4;	// IMP=0x0000000100012708
- (void)_deleteOldZonesPostMigration;	// IMP=0x0000000100012380
- (void)_saveSubscriptionsPostMigration;	// IMP=0x0000000100011ff0
- (void)_updateDeviceByFetchingChangesForZoneID:(id)arg1;	// IMP=0x0000000100011b90
- (void)_fetchOneHomeScreenZoneDeletionStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000010001140c
- (id)_validInstallableAppRecordsFromRecords:(id)arg1;	// IMP=0x000000010001124c
- (id)_deserializeRootFolder;	// IMP=0x0000000100011014
- (void)_unarchiveLastKnownCloudSyncedState;	// IMP=0x0000000100010bac
- (void)_archiveLastKnownCloudSyncedState;	// IMP=0x0000000100010944
- (void)appInstallsBeganPostSync:(id)arg1;	// IMP=0x000000010001069c
- (void)discardOneHomeScreenZone;	// IMP=0x0000000100010300
- (void)syncDeviceFolderStructureToCloud;	// IMP=0x0000000100010234
@property(readonly, nonatomic) NSOperation *currentOperation;
- (void)beginMigrationCheck;	// IMP=0x000000010000fae4
- (void)migrateCloudData;	// IMP=0x000000010000f47c
- (void)updateCloudStateFromDevice;	// IMP=0x000000010000f414
- (void)updateDeviceStateFromCloud;	// IMP=0x000000010000eb50
- (void)resetSyncParameters;	// IMP=0x000000010000ea70
- (void)dealloc;	// IMP=0x000000010000e8a8
- (id)init;	// IMP=0x000000010000e7a8

@end
