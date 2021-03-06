//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabase.h>

@interface CKDatabase (Subscription)
- (id)_getOperationConfiguration;	// IMP=0x0000000100008a98
- (void)_addSubscriptionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000086d0
- (void)addSubscriptionForDatabaseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000082c8
- (void)updateAuthRenewalForMediaService:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012edc
- (void)removeMediaServices:(id)arg1 withUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012780
- (void)getServiceConfigurationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011b68
- (void)updateProperty:(id)arg1 propertyInfo:(id)arg2 withUserInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001116c
- (void)_deleteRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010ef8
- (void)removeMediaService:(id)arg1 withUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010040
- (void)getDefaultMediaService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f3cc
- (void)_updateDefaultService:(id)arg1 serviceID:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ed5c
- (void)updateDefaultMediaService:(id)arg1 withUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e87c
- (void)getAvailableServices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dd34
- (void)addMediaService:(id)arg1 withUserInfo:(id)arg2 transaction:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000d000
- (id)_operationConfiguration;	// IMP=0x000000010003f884
- (void)_notifyObserversDataChanged:(id)arg1 cachedData:(id)arg2;	// IMP=0x000000010003f788
- (void)_checkShareStatusIfApplicable:(id)arg1;	// IMP=0x000000010003f278
- (void)_populateRecordZoneWithCachedInfo:(id)arg1 cachedInfo:(id)arg2;	// IMP=0x000000010003e884
- (void)_handleManateeLossOnPrivateDatabase:(id)arg1 homeUserID:(id)arg2;	// IMP=0x000000010003e1e0
- (void)_handleManateeLossOnSharedDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003df24
- (void)handleCKErrorMissingManateeIdentity:(id)arg1 homeUserID:(id)arg2;	// IMP=0x000000010003dbb4
- (void)handleCKErrorMissingManateeIdentity:(id)arg1 homeUserIDS:(id)arg2;	// IMP=0x000000010003d854
- (void)_handleCKErrorChangeTokenExpired:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010003d6b0
- (void)_updateServerChangeTokenMap:(id)arg1 serverChangeToken:(id)arg2;	// IMP=0x000000010003d454
- (id)_fetchRefreshTokenForRecordZoneID:(id)arg1;	// IMP=0x000000010003d0e0
- (id)_fetchPlaceholderRecordData:(id)arg1;	// IMP=0x000000010003cd70
- (void)modifyCKRecordWithRecordsToSave:(id)arg1 recordIDSToDelete:(id)arg2 missingManateeIdentity:(_Bool)arg3 withAttribution:(id)arg4 withOptions:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010003c9a4
- (void)deleteRecordWithID:(id)arg1 missingManateeIdentity:(_Bool)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c79c
- (void)deleteRecord:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c72c
- (void)saveRecord:(id)arg1 withAttribution:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c4bc
- (void)saveRecord:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c44c
- (id)_handleChangesInChangedRecords:(id)arg1 withDataInLocalCopy:(id)arg2;	// IMP=0x000000010003b5c4
- (id)_handleDeletedRecordIDS:(id)arg1 withDataInLocalCopy:(id)arg2;	// IMP=0x000000010003b118
- (id)_handleChangedRecords:(id)arg1 andDeletedRecordIDS:(id)arg2;	// IMP=0x000000010003afc0
- (void)_saveRecordZone:(id)arg1 withAttribution:(id)arg2 andOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003ac74
- (void)_purgeDeletedZonesFromDefaults:(id)arg1;	// IMP=0x000000010003a380
- (id)_handleRecordZonesChanged:(id)arg1 deletedRecordZones:(id)arg2;	// IMP=0x000000010003a01c
- (void)fetchAllRecordsForRecordZoneID:(id)arg1 userInfo:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100038ee0
- (void)fetchRecordWithIDS:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038c80
- (void)fetchRecordWithID:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038a10
- (void)deleteRecordZone:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038798
- (void)_updateUserInfoToRecordZoneIDMap:(id)arg1 userID:(id)arg2;	// IMP=0x0000000100038634
- (id)_checkIfRecordZonePresentForUser:(id)arg1;	// IMP=0x0000000100038554
- (void)fetchRecordZoneFor:(id)arg1 user:(id)arg2 withOptions:(id)arg3 withAttribution:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100036e14
- (void)fetchRecordZoneFor:(id)arg1 user:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100036d80
- (void)refreshDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003671c
@end

