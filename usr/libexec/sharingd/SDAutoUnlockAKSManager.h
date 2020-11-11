//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockTransportClient-Protocol.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockAKSManager : NSObject <SDAutoUnlockTransportClient>
{
    _Bool _wristDetectDisabled;	// 8 = 0x8
    _Bool _autoUnlockDisabledDueToManagement;	// 9 = 0x9
    _Bool _waitingForUnlock;	// 10 = 0xa
    _Bool _t208Machine;	// 11 = 0xb
    NSString *_localDeviceID;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSData *_localLTK;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_keybagAssertionTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_waitingForUnlockTimer;	// 56 = 0x38
    NSMutableDictionary *_remoteLTKs;	// 64 = 0x40
    NSMutableDictionary *_cachedSessions;	// 72 = 0x48
    NSMutableDictionary *_cachedSessionKeys;	// 80 = 0x50
    NSMutableDictionary *_watchIDsToPairingRecords;	// 88 = 0x58
    NSMutableDictionary *_preferredRemoteLTKForDeviceID;	// 96 = 0x60
    NSMutableArray *_watchIDsMissingSessionKey;	// 104 = 0x68
    NSString *_remoteLTKStorageFilePath;	// 112 = 0x70
    NSString *_watchIDsToPairingRecordsStorageFilePath;	// 120 = 0x78
    id _keybagAssertion;	// 128 = 0x80
    NSString *_companionIDStorageFilePath;	// 136 = 0x88
    NSString *_watchIDToCompanionIDStorageFilePath;	// 144 = 0x90
}

+ (id)sharedManager;	// IMP=0x00000001000e08e4
- (void).cxx_destruct;	// IMP=0x00000001000ed85c
@property(copy, nonatomic) NSString *watchIDToCompanionIDStorageFilePath; // @synthesize watchIDToCompanionIDStorageFilePath=_watchIDToCompanionIDStorageFilePath;
@property(copy, nonatomic) NSString *companionIDStorageFilePath; // @synthesize companionIDStorageFilePath=_companionIDStorageFilePath;
@property(retain) id keybagAssertion; // @synthesize keybagAssertion=_keybagAssertion;
@property(copy, nonatomic) NSString *watchIDsToPairingRecordsStorageFilePath; // @synthesize watchIDsToPairingRecordsStorageFilePath=_watchIDsToPairingRecordsStorageFilePath;
@property(copy, nonatomic) NSString *remoteLTKStorageFilePath; // @synthesize remoteLTKStorageFilePath=_remoteLTKStorageFilePath;
@property(retain, nonatomic) NSMutableArray *watchIDsMissingSessionKey; // @synthesize watchIDsMissingSessionKey=_watchIDsMissingSessionKey;
@property(retain, nonatomic) NSMutableDictionary *preferredRemoteLTKForDeviceID; // @synthesize preferredRemoteLTKForDeviceID=_preferredRemoteLTKForDeviceID;
@property(retain, nonatomic) NSMutableDictionary *watchIDsToPairingRecords; // @synthesize watchIDsToPairingRecords=_watchIDsToPairingRecords;
@property(retain, nonatomic) NSMutableDictionary *cachedSessionKeys; // @synthesize cachedSessionKeys=_cachedSessionKeys;
@property(retain, nonatomic) NSMutableDictionary *cachedSessions; // @synthesize cachedSessions=_cachedSessions;
@property(retain, nonatomic) NSMutableDictionary *remoteLTKs; // @synthesize remoteLTKs=_remoteLTKs;
@property(retain) NSObject<OS_dispatch_source> *waitingForUnlockTimer; // @synthesize waitingForUnlockTimer=_waitingForUnlockTimer;
@property(retain) NSObject<OS_dispatch_source> *keybagAssertionTimer; // @synthesize keybagAssertionTimer=_keybagAssertionTimer;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSData *localLTK; // @synthesize localLTK=_localLTK;
@property(nonatomic) _Bool t208Machine; // @synthesize t208Machine=_t208Machine;
@property(nonatomic) _Bool waitingForUnlock; // @synthesize waitingForUnlock=_waitingForUnlock;
@property(nonatomic) _Bool autoUnlockDisabledDueToManagement; // @synthesize autoUnlockDisabledDueToManagement=_autoUnlockDisabledDueToManagement;
@property(nonatomic) _Bool wristDetectDisabled; // @synthesize wristDetectDisabled=_wristDetectDisabled;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
- (void)updateDynamicStoreEnabled;	// IMP=0x00000001000ed6fc
- (id)baseDictionary;	// IMP=0x00000001000ed688
- (id)baseLocalKeysDictionary;	// IMP=0x00000001000ed634
- (id)baseLocalKeysDictionaryForDevice:(id)arg1 type:(id)arg2;	// IMP=0x00000001000ed584
- (id)baseModernSyncedDictionary;	// IMP=0x00000001000ed50c
- (id)modernSyncedDictionaryForDevice:(id)arg1;	// IMP=0x00000001000ed450
- (id)baseSyncedDictionary;	// IMP=0x00000001000ed3d4
- (id)syncedDictionaryForDevice:(id)arg1;	// IMP=0x00000001000ed318
- (id)baseRangingDictionary;	// IMP=0x00000001000ed2a0
- (id)baseRangingDictionaryForDevice:(id)arg1;	// IMP=0x00000001000ed228
- (id)keychainDataForQuery:(id)arg1;	// IMP=0x00000001000ed0e8
- (void)deleteAllRangingKeys;	// IMP=0x00000001000ecf28
- (void)deleteRangingKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ecd94
- (_Bool)storeRangingKey:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x00000001000ecb34
- (id)rangingKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ecad4
- (id)sessionKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ec984
- (_Bool)sessionKeyExistsForDeviceID:(id)arg1;	// IMP=0x00000001000ec948
- (id)deriveKeyFromSharedSecret:(id)arg1;	// IMP=0x00000001000ec848
- (void)updateSessionKeys;	// IMP=0x00000001000ec57c
- (void)updateRangingKeysIfNeccesary;	// IMP=0x00000001000ec25c
- (id)ltkInfoForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000ec194
- (id)ltkInfoForDeviceID:(id)arg1;	// IMP=0x00000001000ec184
- (id)longTermKeyIDForDeviceID:(id)arg1;	// IMP=0x00000001000ec0cc
- (id)longTermKeyForDevice:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000ec078
- (id)anyLongTermKeyForDeviceID:(id)arg1;	// IMP=0x00000001000ebfdc
- (void)deleteRemoteLongTermKeyForDeviceID:(id)arg1 modern:(_Bool)arg2 tombstone:(_Bool)arg3;	// IMP=0x00000001000ebee4
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3 modern:(_Bool)arg4;	// IMP=0x00000001000ebc24
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3;	// IMP=0x00000001000ebb64
- (void)deleteAllEscrowSecrets;	// IMP=0x00000001000eba88
- (void)deleteEscrowSecretForDeviceID:(id)arg1;	// IMP=0x00000001000eb950
- (id)escrowSecretCreationDateForDeviceID:(id)arg1;	// IMP=0x00000001000eb800
- (_Bool)escrowSecretExistsForDevice:(id)arg1;	// IMP=0x00000001000eb730
- (_Bool)storeEscrowSecret:(id)arg1 pairingID:(id)arg2 deviceID:(id)arg3;	// IMP=0x00000001000eb5ac
- (id)keyPairingIDForDeviceID:(id)arg1;	// IMP=0x00000001000eb4e8
- (id)escrowSecretForDevice:(id)arg1;	// IMP=0x00000001000eb15c
- (_Bool)storeKeychainItemWithAttributeDictionary:(id)arg1 updateDictionary:(id)arg2 addDictionary:(id)arg3;	// IMP=0x00000001000eafe0
- (id)autoUnlockFolderPath;	// IMP=0x00000001000eaed8
- (id)loadCompanionIDs;	// IMP=0x00000001000eab04
- (void)deleteLegacyCompanionIDs;	// IMP=0x00000001000ea9e4
- (id)migrateLegacyCompanionIDs:(id)arg1;	// IMP=0x00000001000ea8b0
- (id)loadLegacyWatchIDToCompanionIDMapping;	// IMP=0x00000001000ea604
- (void)deleteLegacyWatchToCompanionIDs;	// IMP=0x00000001000ea4e4
- (void)migrateLegacyWatchIDToCompanionIDs;	// IMP=0x00000001000ea384
- (void)loadWatchIDsToPairingRecords;	// IMP=0x00000001000ea308
- (void)saveWatchIDsToPairingRecords;	// IMP=0x00000001000ea164
- (void)removePairingRecordForWatchID:(id)arg1;	// IMP=0x00000001000ea0e8
- (void)removePairingIDForWatchID:(id)arg1;	// IMP=0x00000001000e9f88
- (id)pairingIDForWatchID:(id)arg1;	// IMP=0x00000001000e9edc
- (void)setPairingID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x00000001000e9d58
- (void)removeCompanionIDForWatchID:(id)arg1;	// IMP=0x00000001000e9bf8
- (id)companionIDForWatchID:(id)arg1;	// IMP=0x00000001000e9b4c
- (void)setCompanionID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x00000001000e99c8
- (id)allPairedWatchDeviceIDs;	// IMP=0x00000001000e9974
- (void)reloadPairingRecordsIfNeeded;	// IMP=0x00000001000e98d4
- (void)loadRemoteLTKs;	// IMP=0x00000001000e93c0
- (void)loadRemoteLTKsIfNeeded;	// IMP=0x00000001000e936c
- (void)saveRemoteLTKs;	// IMP=0x00000001000e91c8
- (void)clearRemoteLTKs;	// IMP=0x00000001000e90ec
- (void)removeRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e8fdc
- (void)addRemoteLTK:(id)arg1 ltkHash:(id)arg2 ltkModDate:(id)arg3 modernLTK:(id)arg4 modernLTKHash:(id)arg5 modernLTKModeDate:(id)arg6 deviceID:(id)arg7;	// IMP=0x00000001000e8d04
- (_Bool)disablePairingWithKeyDevice:(id)arg1;	// IMP=0x00000001000e8c20
- (_Bool)ltkExistsForKeyDevice:(id)arg1 updateLTKs:(_Bool)arg2;	// IMP=0x00000001000e8aa4
- (_Bool)ltkExistsForKeyDevice:(id)arg1;	// IMP=0x00000001000e8a94
- (void)removeAllRemoteLTKsOnSignOut;	// IMP=0x00000001000e8814
- (void)disablePairingForAllKeyDevices;	// IMP=0x00000001000e8598
- (void)deleteEscrowSecretForAllDevices;	// IMP=0x00000001000e82d0
- (void)handleRequiredStateDisabled;	// IMP=0x00000001000e82cc
- (_Bool)deviceEnabledAsKey:(id)arg1;	// IMP=0x00000001000e812c
- (_Bool)deviceEnabledAsKeyForAnyDevice;	// IMP=0x00000001000e7f18
- (_Bool)deviceEnabledAsKeyForAnyIDSDevice;	// IMP=0x00000001000e7d04
- (_Bool)localDeviceEnabledAsKey;	// IMP=0x00000001000e7c88
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x00000001000e7bc8
- (void)handleLTKResponse:(id)arg1;	// IMP=0x00000001000e7bc4
- (void)invalidateWaitingForUnlockTimer;	// IMP=0x00000001000e7aec
- (void)restartWaitingForUnlockTimer;	// IMP=0x00000001000e78ec
- (void)restartKeybagAssertionTimer;	// IMP=0x00000001000e76f0
- (void)releaseKeybagAssertion;	// IMP=0x00000001000e7674
- (void)takeMobileKeybagAssertion;	// IMP=0x00000001000e755c
- (_Bool)pendingReceiveForPeer:(id)arg1;	// IMP=0x00000001000e7554
- (_Bool)pendingSendForPeer:(id)arg1;	// IMP=0x00000001000e754c
- (_Bool)keychainNeedsSyncingForRequest:(id)arg1;	// IMP=0x00000001000e712c
- (id)ltksForRequest:(id)arg1;	// IMP=0x00000001000e6b88
- (void)handleLTKRequest:(id)arg1;	// IMP=0x00000001000e6b84
- (void)sendLTKResponseWithPayload:(id)arg1 viewState:(id)arg2 needsUnlock:(id)arg3 currentlySyncing:(id)arg4;	// IMP=0x00000001000e6b80
- (void)fetchLTKsFromCompanionForDeviceID:(id)arg1 needsLTK:(_Bool)arg2 remoteNeedsLTK:(_Bool)arg3 checkViewState:(_Bool)arg4;	// IMP=0x00000001000e6b7c
- (void)fetchLTKsFromCompanion:(_Bool)arg1;	// IMP=0x00000001000e6b60
- (void)updatePreferredRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e67d4
- (id)remoteLTKList;	// IMP=0x00000001000e6694
- (id)remoteLTKEntryForDeviceID:(id)arg1;	// IMP=0x00000001000e6614
- (id)remoteLTKHashForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000e65a4
- (_Bool)hashMatchesAnyRemoteLTKForDeviceID:(id)arg1 ltkHash:(id)arg2 isPreferred:(_Bool *)arg3;	// IMP=0x00000001000e625c
- (id)remoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e6180
- (id)allRemoteLTKData;	// IMP=0x00000001000e6048
- (id)signedDevices;	// IMP=0x00000001000e5ee4
- (id)modernSignedDevices;	// IMP=0x00000001000e5d80
- (id)modificationDataForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x00000001000e5bd0
- (id)keychainDevices:(_Bool)arg1;	// IMP=0x00000001000e597c
- (id)allKeychainDevices;	// IMP=0x00000001000e596c
- (_Bool)signLTK:(id)arg1 ltkModDate:(id)arg2 modernLTK:(id)arg3 modernLTKModDate:(id)arg4 deviceID:(id)arg5;	// IMP=0x00000001000e55fc
- (_Bool)signLTK:(id)arg1 modernLTK:(id)arg2 forDeviceID:(id)arg3;	// IMP=0x00000001000e557c
- (_Bool)signLTKsForDeviceID:(id)arg1;	// IMP=0x00000001000e54c8
- (void)resignRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e54bc
- (void)checkRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00000001000e52b8
- (void)checkRemoteLTKs;	// IMP=0x00000001000e52b4
- (void)updateRemoteLTKs;	// IMP=0x00000001000e52a0
- (void)updateLTKsForDeviceID:(id)arg1 staleRemoteLTK:(_Bool)arg2;	// IMP=0x00000001000e4bfc
- (int)ltkSyncStatusForDeviceID:(id)arg1 hash:(id)arg2 modern:(_Bool)arg3;	// IMP=0x00000001000e4a3c
- (_Bool)deviceIsLocalDevice:(id)arg1;	// IMP=0x00000001000e49c0
- (long long)keyClassForDeviceID:(id)arg1;	// IMP=0x00000001000e48e0
- (long long)ltkKeyClass;	// IMP=0x00000001000e48d8
- (void)updateLocalLTKForSignout;	// IMP=0x00000001000e4770
- (id)ltkHashForLocalLTK;	// IMP=0x00000001000e46ec
- (void)checkLocalLTK;	// IMP=0x00000001000e3f54
- (void)generateLocalLTK;	// IMP=0x00000001000e3b58
- (_Bool)loadLocalLTK;	// IMP=0x00000001000e35f0
- (id)deviceIDsMissingSessionKey;	// IMP=0x00000001000e34d0
- (void)clearAllDeviceIDsMissingSessionKeys;	// IMP=0x00000001000e33a0
- (void)removeDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x00000001000e3248
- (void)addDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x00000001000e30c0
- (id)decryptMessage:(id)arg1 authTag:(id)arg2 nonce:(id)arg3 bluetoothID:(id)arg4 cachedDevices:(_Bool)arg5 errorCode:(long long *)arg6;	// IMP=0x00000001000e27a0
- (_Bool)encryptMessageData:(id)arg1 deviceID:(id)arg2 encryptedMessage:(id *)arg3 authTag:(id *)arg4 nonce:(id *)arg5;	// IMP=0x00000001000e24a8
- (_Bool)canCreateTokenSessionForDeviceID:(id)arg1;	// IMP=0x00000001000e2450
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 externalACMContext:(id)arg3;	// IMP=0x00000001000e21d8
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x00000001000e21c8
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 usingEscrow:(_Bool)arg3;	// IMP=0x00000001000e1ee0
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x00000001000e1ed0
- (id)aksPairingSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 errorCode:(long long *)arg3;	// IMP=0x00000001000e1d6c
- (void)consoleUserChanged:(id)arg1;	// IMP=0x00000001000e1c44
- (void)handleKeyBagLockStateChanged;	// IMP=0x00000001000e1c40
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x00000001000e1b90
- (void)appleAccountSignedOut:(id)arg1;	// IMP=0x00000001000e1adc
- (void)appleAccountSignedIn:(id)arg1;	// IMP=0x00000001000e1a70
- (void)deviceFirstUnlocked:(id)arg1;	// IMP=0x00000001000e1a64
- (void)handleManagementChanged:(id)arg1;	// IMP=0x00000001000e17e8
- (void)addObservers;	// IMP=0x00000001000e16ac
- (void)loadLocalUniqueIDIfNeeded;	// IMP=0x00000001000e1594
@property(readonly, nonatomic) _Bool viewSyncing;
- (void)updateLocalLTK;	// IMP=0x00000001000e0dcc
- (void)updateLTKs;	// IMP=0x00000001000e0d28
- (void)start;	// IMP=0x00000001000e0b34
- (id)init;	// IMP=0x00000001000e0950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
