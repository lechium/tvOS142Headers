//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP10cloudpaird24CloudPushServiceDelegate_-Protocol.h"

@class BTStateWatcher, CKContainer, CKDatabase, CKRecordZone, CKSubscription, NSError, NSMutableData, NSOperationQueue, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface MPCloudKit_Manatee : NSObject <_TtP10cloudpaird24CloudPushServiceDelegate_>
{
    _Bool _reinitAfterBuddy;	// 8 = 0x8
    _Bool _isAccountActive;	// 9 = 0x9
    _Bool _isWriteMasterKeysInProgress;	// 10 = 0xa
    _Bool _isFetchInProgress;	// 11 = 0xb
    _Bool _isFetchMasterKeyInProgress;	// 12 = 0xc
    _Bool _shouldPauseFetch;	// 13 = 0xd
    CKContainer *_cloudKitContainer;	// 16 = 0x10
    CKDatabase *_cloudKitDatabase;	// 24 = 0x18
    CKRecordZone *_recordZoneBlob;	// 32 = 0x20
    CKRecordZone *_recordZoneAccessoryDatabase;	// 40 = 0x28
    CKSubscription *_cloudSubscription;	// 48 = 0x30
    NSTimer *_countdownTimer;	// 56 = 0x38
    NSTimer *_pushTimer;	// 64 = 0x40
    NSMutableData *_masterBlob;	// 72 = 0x48
    BTStateWatcher *_buddyStateWatcher;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_pushQueue;	// 88 = 0x58
    NSError *_pauseErrorReason;	// 96 = 0x60
    NSOperationQueue *_modifyOperationQueue;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x000000010002ed78
- (void).cxx_destruct;	// IMP=0x000000010003ed6c
@property(retain, nonatomic) NSOperationQueue *modifyOperationQueue; // @synthesize modifyOperationQueue=_modifyOperationQueue;
@property _Bool shouldPauseFetch; // @synthesize shouldPauseFetch=_shouldPauseFetch;
@property(retain) NSError *pauseErrorReason; // @synthesize pauseErrorReason=_pauseErrorReason;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pushQueue; // @synthesize pushQueue=_pushQueue;
@property(nonatomic) _Bool isFetchMasterKeyInProgress; // @synthesize isFetchMasterKeyInProgress=_isFetchMasterKeyInProgress;
@property(nonatomic) _Bool isFetchInProgress; // @synthesize isFetchInProgress=_isFetchInProgress;
@property(retain, nonatomic) BTStateWatcher *buddyStateWatcher; // @synthesize buddyStateWatcher=_buddyStateWatcher;
@property(retain) NSMutableData *masterBlob; // @synthesize masterBlob=_masterBlob;
@property(retain) NSTimer *pushTimer; // @synthesize pushTimer=_pushTimer;
@property(retain) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) CKSubscription *cloudSubscription; // @synthesize cloudSubscription=_cloudSubscription;
@property(retain, nonatomic) CKRecordZone *recordZoneAccessoryDatabase; // @synthesize recordZoneAccessoryDatabase=_recordZoneAccessoryDatabase;
@property(retain, nonatomic) CKRecordZone *recordZoneBlob; // @synthesize recordZoneBlob=_recordZoneBlob;
@property(retain, nonatomic) CKDatabase *cloudKitDatabase; // @synthesize cloudKitDatabase=_cloudKitDatabase;
@property(retain, nonatomic) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(nonatomic) _Bool isWriteMasterKeysInProgress; // @synthesize isWriteMasterKeysInProgress=_isWriteMasterKeysInProgress;
@property(nonatomic) _Bool isAccountActive; // @synthesize isAccountActive=_isAccountActive;
- (void)didReceiveWithToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010003eaec
- (void)didReceiveWithPublicToken:(id)arg1;	// IMP=0x000000010003e9fc
- (void)didReceiveWithMessage:(id)arg1;	// IMP=0x000000010003e65c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pushDelegateQueue;
@property(readonly, copy, nonatomic) NSString *cloudContainerIdentifier;
- (void)upgradeAccessoryBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x000000010003d850
- (void)resetAccessoryZone:(id)arg1;	// IMP=0x000000010003d51c
- (void)_updateMasterZoneBlob:(id)arg1 accessoryblob:(id)arg2;	// IMP=0x000000010003cc94
- (void)resetMasterZone:(id)arg1 accessoryblob:(id)arg2;	// IMP=0x000000010003c6dc
- (void)resetCloudContainerManateeIdentityLost;	// IMP=0x000000010003c048
- (_Bool)manateeZoneUpgraded;	// IMP=0x000000010003bfa0
- (void)pushDisable;	// IMP=0x000000010003bf50
- (void)pushEnable;	// IMP=0x000000010003bd94
- (id)apsEnvironmentString;	// IMP=0x000000010003b9c8
- (void)removeSubscritionForRecordType:(id)arg1;	// IMP=0x000000010003b244
- (void)verifyAndCacheSubscriptionID:(id)arg1;	// IMP=0x000000010003af18
- (void)fetchSubscriptionForRecordType:(id)arg1 andPrefKey:(id)arg2;	// IMP=0x000000010003a9ac
- (void)createSubscritionForRecordType:(id)arg1;	// IMP=0x000000010003a200
- (void)deleteCloudKitAccessoryZone;	// IMP=0x0000000100039d5c
- (void)writeAccessoryBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x0000000100038b00
- (void)handleAccessoryModifyError:(id)arg1 forBlob:(id)arg2 withRetryCount:(unsigned long long)arg3;	// IMP=0x0000000100037f0c
- (void)modifyAccessoryBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x0000000100037728
- (void)updateCloudKitAccessoryZone:(id)arg1 delete:(_Bool)arg2;	// IMP=0x000000010003751c
- (void)writeKeyBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x0000000100036214
- (void)handleModifyMasterKeyError:(id)arg1 forBlob:(id)arg2 withRetryCount:(unsigned long long)arg3;	// IMP=0x000000010003598c
- (void)modifyKeyBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x0000000100035410
- (void)updateCloudKitBlobZone:(id)arg1;	// IMP=0x00000001000352ec
- (void)verifyDeletionOfAccessoryRecord:(id)arg1;	// IMP=0x0000000100034e34
- (void)fetchAccessoryKeyBlob:(unsigned long long)arg1;	// IMP=0x0000000100032fd0
- (void)checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x0000000100032aa8
- (void)checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032a98
- (void)fetchKeyBlob:(unsigned long long)arg1;	// IMP=0x0000000100030b24
- (void)_pushTimerFired:(id)arg1;	// IMP=0x00000001000309a8
- (void)resetPushTimer;	// IMP=0x0000000100030804
- (void)setupSubscriptions;	// IMP=0x00000001000307b8
- (void)accountStatusDidChange:(id)arg1;	// IMP=0x00000001000300f8
- (void)removeuserPreference:(id)arg1 sync:(_Bool)arg2;	// IMP=0x0000000100030028
- (void)setuserPreference:(id)arg1 value:(in bycopy id)arg2 sync:(_Bool)arg3;	// IMP=0x000000010002fe94
- (id)readUserPreference:(id)arg1;	// IMP=0x000000010002fe58
- (void)manateeZoneAvailabe;	// IMP=0x000000010002fc68
- (void)fetchAccountStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002fab8
- (void)initializeCloudKit;	// IMP=0x000000010002f874
- (void)buddySetupDone;	// IMP=0x000000010002f6fc
- (void)forceAccountStatus;	// IMP=0x000000010002f52c
- (void)getAccountStatus;	// IMP=0x000000010002f51c
- (_Bool)initializedCKAfterFirstUnlockedSinceBoot;	// IMP=0x000000010002f250
- (id)initWithRecordZoneName;	// IMP=0x000000010002eee8
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010002edf0
- (id)init;	// IMP=0x000000010002ede4

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

