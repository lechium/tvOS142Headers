//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBPresentationElementFocusCoordinatorObserver-Protocol.h"
#import "PBSBulletinServiceDelegate-Protocol.h"
#import "PBUserProfileStoreDelegate-Protocol.h"

@class ACAccountStore, CUHomeKitManager, NSCountedSet, NSDate, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSTimer, PBAccountNotificationCoalescingQueue, PBBulletinService, PBSBulletin, PBSUserProfilesSnapshot, PBUserProfileStore, TVSUIProfilePictureCache, TVSUIProfilePictureStore;
@protocol OS_dispatch_queue;

@interface PBUserProfileManager : NSObject <PBPowerManagerObserver, PBSBulletinServiceDelegate, PBPresentationElementFocusCoordinatorObserver, PBUserProfileStoreDelegate, PBInstanceDependable>
{
    _Bool _performingCreateUserProfilesMigration;	// 8 = 0x8
    _Bool _shouldPresentAutomaticWelcomeBackBulletin;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_observerQueue;	// 24 = 0x18
    ACAccountStore *_accountStore;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    NSMutableDictionary *_userProfileManagerDidUpdateObservers;	// 48 = 0x30
    PBUserProfileStore *_userProfileStore;	// 56 = 0x38
    NSTimer *_automaticWelcomeBackBulletinDelayTimer;	// 64 = 0x40
    PBSBulletin *_currentWelcomeBackBulletin;	// 72 = 0x48
    TVSUIProfilePictureStore *_profilePictureStore;	// 80 = 0x50
    TVSUIProfilePictureCache *_profilePictureCache;	// 88 = 0x58
    NSCountedSet *_ignoringUserProfileAccountNotificationsReasons;	// 96 = 0x60
    PBAccountNotificationCoalescingQueue *_pendingUserProfileAccountNotifications;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_homeKitQueue;	// 112 = 0x70
    CUHomeKitManager *_homeKitManager;	// 120 = 0x78
    NSMutableSet *_provisioningUserProfileAttributes;	// 128 = 0x80
    PBBulletinService *_bulletinService;	// 136 = 0x88
    NSDate *_dateLastSystemWake;	// 144 = 0x90
}

+ (void)_removePersonaWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012f4a4
+ (void)_createGuestPersonaWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010012ee9c
+ (void)_setDidShowWelcomeBackBulletinForUserProfile:(id)arg1;	// IMP=0x0000000100128abc
+ (_Bool)_didShowWelcomeBackBulletinForUserProfile:(id)arg1;	// IMP=0x000000010012894c
+ (void)_performCreateUserProfilesMigrationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100125014
+ (id)sharedInstance;	// IMP=0x000000010012040c
+ (id)dependencyDescription;	// IMP=0x000000010011fb14
- (void).cxx_destruct;	// IMP=0x0000000100132c64
@property(readonly, nonatomic) NSDate *dateLastSystemWake; // @synthesize dateLastSystemWake=_dateLastSystemWake;
@property(readonly, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(readonly, nonatomic) NSMutableSet *provisioningUserProfileAttributes; // @synthesize provisioningUserProfileAttributes=_provisioningUserProfileAttributes;
@property(readonly, nonatomic) CUHomeKitManager *homeKitManager; // @synthesize homeKitManager=_homeKitManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *homeKitQueue; // @synthesize homeKitQueue=_homeKitQueue;
@property(readonly, nonatomic) PBAccountNotificationCoalescingQueue *pendingUserProfileAccountNotifications; // @synthesize pendingUserProfileAccountNotifications=_pendingUserProfileAccountNotifications;
@property(readonly, nonatomic) NSCountedSet *ignoringUserProfileAccountNotificationsReasons; // @synthesize ignoringUserProfileAccountNotificationsReasons=_ignoringUserProfileAccountNotificationsReasons;
@property(readonly, nonatomic) TVSUIProfilePictureCache *profilePictureCache; // @synthesize profilePictureCache=_profilePictureCache;
@property(readonly, nonatomic) TVSUIProfilePictureStore *profilePictureStore; // @synthesize profilePictureStore=_profilePictureStore;
@property(readonly, nonatomic) PBSBulletin *currentWelcomeBackBulletin; // @synthesize currentWelcomeBackBulletin=_currentWelcomeBackBulletin;
@property(readonly, nonatomic) NSTimer *automaticWelcomeBackBulletinDelayTimer; // @synthesize automaticWelcomeBackBulletinDelayTimer=_automaticWelcomeBackBulletinDelayTimer;
@property(readonly, nonatomic) _Bool shouldPresentAutomaticWelcomeBackBulletin; // @synthesize shouldPresentAutomaticWelcomeBackBulletin=_shouldPresentAutomaticWelcomeBackBulletin;
@property(readonly, nonatomic) _Bool performingCreateUserProfilesMigration; // @synthesize performingCreateUserProfilesMigration=_performingCreateUserProfilesMigration;
@property(readonly, nonatomic) PBUserProfileStore *userProfileStore; // @synthesize userProfileStore=_userProfileStore;
@property(readonly, nonatomic) NSMutableDictionary *userProfileManagerDidUpdateObservers; // @synthesize userProfileManagerDidUpdateObservers=_userProfileManagerDidUpdateObservers;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)userProfileStore:(id)arg1 didChangeSelectedUserProfile:(id)arg2 previousSelectedUserProfile:(id)arg3;	// IMP=0x0000000100132974
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000100132788
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x000000010013208c
- (void)powerManagerDidWakeSystem:(id)arg1;	// IMP=0x0000000100131ff8
- (void)powerManagerDidSleepSystem:(id)arg1;	// IMP=0x0000000100131f94
- (id)_currentConnectionClientBundleIdentifier;	// IMP=0x0000000100131e20
- (void)_removeAllIgnoringUserProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x0000000100131c9c
- (void)_workQueue_validateAndFixActiveiTunesAccount;	// IMP=0x0000000100131b5c
- (id)_homeKitQueue_selfAccessoryHomeOwner;	// IMP=0x0000000100131ab8
- (void)_workQueue_initializeUserProfileStorage;	// IMP=0x000000010013191c
- (void)_activateItunesAccountWithUserProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001310c8
- (void)_workQueue_notifyObserversDidUpdate;	// IMP=0x0000000100130bc8
- (void)_removeGameCenterAccountWithAltDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001302e4
- (void)_removeIcloudAccountWithAltDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012fb70
- (void)_workQueue_createGuestUserProfileForItunesAccountNotificationWithItunesAltDSID:(id)arg1 homeUserIdentifier:(id)arg2;	// IMP=0x000000010012e578
- (void)_workQueue_endIgnoringUserProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x000000010012e428
- (void)_workQueue_processPendingAccountNotifications;	// IMP=0x000000010012e1b8
- (void)_batchUpdater_handleDidUpdateItunesAccountNotificationWithBatchUpdater:(id)arg1 itunesAltDSID:(id)arg2 existingUserProfiles:(id)arg3 existingHomeManagedUserProfiles:(id)arg4 addedHomeUserIdentifiers:(id)arg5 removedHomeUserIdentifiers:(id)arg6;	// IMP=0x000000010012ccf4
- (void)_workQueue_handleDidUpdateItunesAccountNotificationWithItunesAltDSID:(id)arg1 existingUserProfiles:(id)arg2 existingHomeManagedUserProfiles:(id)arg3 addedHomeUserIdentifiers:(id)arg4 removedHomeUserIdentifiers:(id)arg5;	// IMP=0x000000010012c9fc
- (void)_batchUpdater_didRemoveItunesAccountWithAltDSID:(id)arg1 batchUpdater:(id)arg2;	// IMP=0x000000010012bce8
- (void)_workQueue_didRemoveItunesAccountWithAltDSID:(id)arg1;	// IMP=0x000000010012ba98
- (void)_workQueue_didUpdateItunesAccountWithIdentifier:(id)arg1;	// IMP=0x000000010012b04c
- (void)_workQueue_didAddItunesAccountWithIdentifier:(id)arg1;	// IMP=0x000000010012a000
- (void)_workQueue_didRemoveGameCenterAccountWithAltDSID:(id)arg1;	// IMP=0x0000000100129a58
- (void)_workQueue_didRemoveIcloudAccountWithAltDSID:(id)arg1;	// IMP=0x00000001001294b0
- (void)_workQueue_handleUserProfileAccountNotification:(id)arg1;	// IMP=0x0000000100128fac
- (void)_handleUserProfileAccountNotification:(id)arg1;	// IMP=0x0000000100128cbc
- (id)_welcomeBulletinProfilePictureWithUserProfileAccountInfo:(id)arg1;	// IMP=0x0000000100127e60
- (void)_workQueue_presentWelcomeBackBulletinWithReason:(long long)arg1;	// IMP=0x0000000100127808
- (void)_workQueue_performCreateUserProfilesMigration;	// IMP=0x0000000100126c6c
- (void)_workQueue_removeUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001248e4
- (void)_workQueue_updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012406c
- (void)_workQueue_createUserProfileWithAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001238f0
- (void)_workQueue_selectUserProfileWithIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100122e60
- (void)sendDailyAnalyticsEvents;	// IMP=0x00000001001223d0
- (void)endIgnoringUserProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x0000000100122298
- (void)beginIgnoringUserProfileAccountNotificationsWithReason:(id)arg1;	// IMP=0x0000000100122068
- (void)removeUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100121c5c
- (void)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001217dc
- (void)createUserProfileWithAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001213b0
- (void)selectUserProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100120f48
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100120df0
- (id)observeUserProfileManagerDidUpdateUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100120c10
- (void)addObserver:(id)arg1;	// IMP=0x0000000100120adc
@property(readonly, nonatomic) PBSUserProfilesSnapshot *userProfilesSnapshot;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001001203a4
- (id)_init;	// IMP=0x0000000100120284
- (id)_initWithAccountStore:(id)arg1 bulletinService:(id)arg2 userProfileStore:(id)arg3;	// IMP=0x000000010011fcf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

