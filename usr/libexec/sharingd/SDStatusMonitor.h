//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCProfileConnectionObserver-Protocol.h"

@class BluetoothManager, CNContact, CNContactStore, CUSystemMonitor, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSMutableString, NSNumber, NSSet, NSString, SDAirDropServer, SFPowerSource;

__attribute__((visibility("hidden")))
@interface SDStatusMonitor : NSObject <MCProfileConnectionObserver>
{
    _Bool _activateStarted;	// 8 = 0x8
    NSNumber *_airDropAllowed;	// 16 = 0x10
    int _airDropCount;	// 24 = 0x18
    int _airDropModeNotifyToken;	// 28 = 0x1c
    _Bool _airDropPublished;	// 32 = 0x20
    NSNumber *_backlightOn;	// 40 = 0x28
    int _backlightLevelToken;	// 48 = 0x30
    NSString *_bonjourName;	// 56 = 0x38
    _Bool _carplayConnected;	// 64 = 0x40
    NSMutableDictionary *_certificates;	// 72 = 0x48
    NSString *_computerName;	// 80 = 0x50
    NSNumber *_computerToComputer;	// 88 = 0x58
    NSString *_consoleUser;	// 96 = 0x60
    unsigned int _consoleUserID;	// 104 = 0x68
    CNContactStore *_contactStore;	// 112 = 0x70
    NSString *_currentDiscoverableMode;	// 120 = 0x78
    NSString *_deviceInformation;	// 128 = 0x80
    _Bool _deviceIsHighPriority;	// 136 = 0x88
    NSNumber *_deviceKeyBagState;	// 144 = 0x90
    NSNumber *_deviceKeyBagUnlocked;	// 152 = 0x98
    NSNumber *_deviceSupportsWAPI;	// 160 = 0xa0
    NSNumber *_deviceUIUnlocked;	// 168 = 0xa8
    _Bool _deviceWasUnlockedOnce;	// 176 = 0xb0
    struct __CFRunLoopSource *_dynamicStoreSource;	// 184 = 0xb8
    _Bool _finderAirDropEnabled;	// 192 = 0xc0
    SDAirDropServer *_finderServer;	// 200 = 0xc8
    NSNumber *_handoffVisible;	// 208 = 0xd0
    NSMutableDictionary *_identities;	// 216 = 0xd8
    int _keyBagUnlockToken;	// 224 = 0xe0
    NSString *_localHostName;	// 232 = 0xe8
    NSDictionary *_mountPoints;	// 240 = 0xf0
    NSString *_myAppleID;	// 248 = 0xf8
    NSString *_myAppleIDCommonName;	// 256 = 0x100
    struct __SecCertificate *_myAppleIDIntermediateCertificate;	// 264 = 0x108
    struct __SecCertificate *_myAppleIDCertificate;	// 272 = 0x110
    struct __SecIdentity *_myAppleIDSecIdentity;	// 280 = 0x118
    NSMutableString *_myEmailHashes;	// 288 = 0x120
    NSMutableString *_myPhoneHashes;	// 296 = 0x128
    struct _DNSServiceRef_t *_nameMonitor;	// 304 = 0x130
    _Bool _needsExitForLocaleChange;	// 312 = 0x138
    NSString *_netbiosName;	// 320 = 0x140
    unsigned int _notifierObject;	// 328 = 0x148
    struct IONotificationPort *_notifyPortRef;	// 336 = 0x150
    NSDictionary *_odisksMountPoints;	// 344 = 0x158
    long long _pairedWatchWristState;	// 352 = 0x160
    NSNumber *_personalHotspotAutoState;	// 360 = 0x168
    _Bool _personalHotspotFamilyEnabled;	// 368 = 0x170
    NSMutableDictionary *_personalHotspotFamilyStates;	// 376 = 0x178
    NSNumber *_personalHotspotAllowed;	// 384 = 0x180
    struct __IOPMConnection *_pmConnection;	// 392 = 0x188
    NSMutableSet *_preventExitForLocaleReasons;	// 400 = 0x190
    unsigned int _rootPort;	// 408 = 0x198
    NSNumber *_screenOn;	// 416 = 0x1a0
    NSMutableDictionary *_serverNames;	// 424 = 0x1a8
    _Bool _sleepModeOn;	// 432 = 0x1b0
    struct __SCPreferences *_smbPreferences;	// 440 = 0x1b8
    NSMutableDictionary *_ssidHashes;	// 448 = 0x1c0
    CUSystemMonitor *_systemMonitor;	// 456 = 0x1c8
    unsigned int _systemUIFlags;	// 464 = 0x1d0
    int _uiLockStatusToken;	// 468 = 0x1d4
    NSNumber *_wirelessAccessPoint;	// 472 = 0x1d8
    NSString *_workgroup;	// 480 = 0x1e0
    long long _watchWristState;	// 488 = 0x1e8
    NSString *_requestedDiscoverableMode;	// 496 = 0x1f0
    struct __WiFiDeviceClient *_wifiDevice;	// 504 = 0x1f8
    struct __WiFiDeviceClient *_awdlDevice;	// 512 = 0x200
    struct __WiFiManagerClient *_wifiManager;	// 520 = 0x208
    _Bool _wifiDeviceAttachmentRegistered;	// 528 = 0x210
    _Bool _wifiScheduledOnRunLoop;	// 529 = 0x211
    BluetoothManager *_bluetoothManager;	// 536 = 0x218
    int _screenBlankedToken;	// 544 = 0x220
    NSMutableDictionary *_longHashesToContactIdentifier;	// 552 = 0x228
    NSMutableDictionary *_mediumHashesToContactIdentifier;	// 560 = 0x230
    NSMutableSet *_shortHashes;	// 568 = 0x238
    _Bool _controlCenterVisible;	// 576 = 0x240
    _Bool _multipleUsersLoggedIn;	// 577 = 0x241
    CNContact *___meCard;	// 584 = 0x248
    NSDictionary *_awdlState;	// 592 = 0x250
    NSDate *_lastDarkWakeDate;	// 600 = 0x258
    NSSet *_effectiveBlacklistedAppBundleIDs;	// 608 = 0x260
}

+ (_Bool)enableOOBPCredentialLogging;	// IMP=0x000000010018d354
+ (_Bool)enableNewHashing;	// IMP=0x000000010018d328
+ (_Bool)isBuddyCompleted;	// IMP=0x000000010018cca8
+ (_Bool)b332PairingEnabled;	// IMP=0x000000010018cc54
+ (long long)shareSheetMaxSuggestions;	// IMP=0x000000010018c6d4
+ (double)b332BTAddressRotationDelay;	// IMP=0x000000010018ba24
+ (id)sharedMonitor;	// IMP=0x0000000100183a44
- (void).cxx_destruct;	// IMP=0x00000001001908e8
@property(readonly) _Bool multipleUsersLoggedIn; // @synthesize multipleUsersLoggedIn=_multipleUsersLoggedIn;
@property(readonly) _Bool controlCenterVisible; // @synthesize controlCenterVisible=_controlCenterVisible;
@property(readonly) NSSet *effectiveBlacklistedAppBundleIDs; // @synthesize effectiveBlacklistedAppBundleIDs=_effectiveBlacklistedAppBundleIDs;
@property(readonly) NSDate *lastDarkWakeDate; // @synthesize lastDarkWakeDate=_lastDarkWakeDate;
@property(readonly) NSDictionary *awdlState; // @synthesize awdlState=_awdlState;
- (void)logWiFiPowerState;	// IMP=0x00000001001907dc
- (void)clearWirelessState;	// IMP=0x00000001001907a0
- (void)clearOperationModeInfo;	// IMP=0x0000000100190758
- (void)installSSIDCacheMonitor;	// IMP=0x0000000100190528
- (void)installWiFiPasswordSharingMonitor;	// IMP=0x00000001001903f4
- (void)handleWiFiPasswordSharingChanged;	// IMP=0x00000001001903cc
- (id)stringForWatchWristState:(long long)arg1;	// IMP=0x0000000100190374
@property(readonly) long long watchWristState;
- (void)updateWatchWristState:(long long)arg1;	// IMP=0x0000000100190268
- (void)installWristStateMonitor;	// IMP=0x0000000100190264
- (void)installVolumesMonitor;	// IMP=0x0000000100190260
- (void)installUserPictureMonitor;	// IMP=0x000000010019025c
- (void)installUILockStatusMonitor;	// IMP=0x0000000100190258
- (void)installSystemUIMonitor;	// IMP=0x0000000100190254
- (void)installSpringBoardStateMonitor;	// IMP=0x0000000100190120
- (_Bool)smbConfiguration:(struct __SCPreferences *)arg1 netBiosName:(id *)arg2 workgroup:(id *)arg3;	// IMP=0x0000000100190118
- (void)reloadSMBConfInfo;	// IMP=0x000000010018ffc4
- (void)installSMBPreferencesMonitor;	// IMP=0x000000010018ffc0
- (void)installSleepWakeCallBack;	// IMP=0x000000010018ff0c
- (void)installSleepNotification;	// IMP=0x000000010018ff08
- (void)handleSleepWakeCallBack:(unsigned int)arg1 messageArguement:(void *)arg2;	// IMP=0x000000010018fd30
- (void)installSleepStateMonitor;	// IMP=0x000000010018fd2c
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010018fd20
@property(readonly) SFPowerSource *localPowerSource;
- (void)updateLocalPowerSource:(id)arg1;	// IMP=0x000000010018fc8c
- (void)handleMISStateChanged:(id)arg1;	// IMP=0x000000010018fc0c
- (void)installMISMonitor;	// IMP=0x000000010018fba8
- (void)updatePairedWatchLockState:(int)arg1;	// IMP=0x000000010018fae0
@property(readonly) int pairedWatchLockState;
- (void)updatePairedWatchWristState:(long long)arg1;	// IMP=0x000000010018f9e4
@property(readonly) long long pairedWatchWristState;
- (void)handleNameMonitorCallBack:(const char *)arg1 flags:(unsigned int)arg2 error:(int)arg3;	// IMP=0x000000010018f908
- (void)updateBlacklistedAppBundleIDs;	// IMP=0x000000010018f7e0
- (void)managedConfigurationSettingsChanged:(id)arg1;	// IMP=0x000000010018f79c
- (void)installManagedConfigurationMonitor;	// IMP=0x000000010018f6e0
- (void)installLocaleChangeMonitor;	// IMP=0x000000010018f50c
- (void)installKeyBagUnlockMonitor;	// IMP=0x000000010018f390
- (void)installFinderSidebarPrefsMonitor;	// IMP=0x000000010018f38c
- (void)installDynamicStoreCallBack;	// IMP=0x000000010018f140
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;	// IMP=0x000000010018ee80
- (void)installDisplaySleepMonitor;	// IMP=0x000000010018ee7c
- (void)installDisplayConfigurationMonitor;	// IMP=0x000000010018ee78
- (void)installCoreTelephonyMonitor;	// IMP=0x000000010018ee74
- (void)installContactsMonitor;	// IMP=0x000000010018ecc0
- (void)contactsStoreMeCardChanged:(id)arg1;	// IMP=0x000000010018ebb4
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x000000010018ea6c
- (void)installClamshellStateChangeMonitor;	// IMP=0x000000010018ea68
- (void)uninstallCarPlayStatusMonitor;	// IMP=0x000000010018ea64
- (void)installWirelessCarPlayMonitor;	// IMP=0x000000010018ea60
- (void)installCarPlayStatusMonitor;	// IMP=0x000000010018ea5c
- (void)restartBonjourNameMonitor;	// IMP=0x000000010018ea0c
- (void)uninstallBonjourNameMonitor;	// IMP=0x000000010018e9e0
- (void)installBonjourNameMonitor;	// IMP=0x000000010018e8cc
- (void)logBluetoothPowerState;	// IMP=0x000000010018e7fc
- (void)logBluetoothAvailabilityState:(_Bool)arg1;	// IMP=0x000000010018e73c
- (void)installBluetoothMonitor;	// IMP=0x000000010018e4f8
- (void)bluetoothAddressChanged;	// IMP=0x000000010018e48c
- (void)bluetoothAvailabilityChange:(id)arg1;	// IMP=0x000000010018e408
- (void)airplaneModeChanged;	// IMP=0x000000010018e3f4
- (void)installAirplaneModeMonitor;	// IMP=0x000000010018e3f0
- (void)installBacklightMonitor;	// IMP=0x000000010018e3ec
- (void)updateWirelessDevice;	// IMP=0x000000010018dd1c
- (void)installWirelessMonitor;	// IMP=0x000000010018dc90
- (void)updateAWDLStateInfo;	// IMP=0x000000010018dc48
- (void)handleAWDLState:(id)arg1;	// IMP=0x000000010018da44
- (void)installAppleIDAccountInfoMonitor;	// IMP=0x000000010018d980
- (void)appleIDAccountInfoChanged:(id)arg1;	// IMP=0x000000010018d8d8
- (void)installAppleIDUsernameMonitor;	// IMP=0x000000010018d848
- (void)logAirDropTransactionForClientServer:(_Bool)arg1 beginEnd:(_Bool)arg2 count:(int)arg3;	// IMP=0x000000010018d748
@property(readonly) _Bool wirelessCarPlay;
@property(readonly) _Bool wirelessAccessPoint;
@property(readonly) _Bool wifiUserPowerPreference;
@property(readonly) _Bool testDiskFull;
@property(readonly) _Bool sleepModeOn;
@property(readonly) _Bool signedIntoPrimaryiCloudAccount;
@property(readonly) _Bool showThisComputer;
@property(readonly) _Bool showMeInWormhole;
@property(readonly) _Bool screenOn;
@property(readonly) _Bool runningAsSetupUser;
@property(readonly) _Bool registerAllInterfaces;
@property(readonly) _Bool myAppleIDIsManaged;
@property(readonly) _Bool internetSharingEnabled;
@property(readonly) _Bool ignoreIconDiskCache;
@property(readonly) _Bool handoffVisible;
@property(readonly) _Bool forceP2P;
@property(readonly) _Bool forceAWDL;
@property(readonly) _Bool finderAirDropEnabled;
@property(readonly) _Bool enableXML;
@property(readonly) _Bool enableWebloc;
@property(readonly) _Bool enableStreamDebugging;
@property(readonly) _Bool enableStrangers;
@property(readonly) _Bool enablePKZip;
@property(readonly) _Bool enableHotspotFallback;
@property(readonly) _Bool enableDVZip;
@property(readonly) _Bool enableDemoMode;
@property(readonly) _Bool enableDebugMode;
@property(readonly) _Bool enableContinuity;
@property(readonly) _Bool enableBugs;
@property(readonly) _Bool enableAllRecents;
@property(readonly) _Bool enableAirDropReceiving;
@property(readonly) _Bool enableAirDropAdvertising;
@property(readonly) _Bool eduModeEnabled;
@property(readonly) _Bool dockHasDownloadsFolder;
@property(readonly) _Bool disableTLS;
@property(readonly) _Bool disableRotation;
@property(readonly) _Bool disableExtractMediaFromBundles;
@property(readonly) _Bool disableQuarantine;
@property(readonly) _Bool disablePipelining;
@property(readonly) _Bool disablePictureQuery;
@property(readonly) _Bool disablePeopleSuggestions;
@property(readonly) _Bool disableContinuityTLS;
@property(readonly) _Bool disableCompression;
@property(readonly) _Bool disableAutoAccept;
@property(readonly) _Bool deviceWasUnlockedOnce;
@property(readonly) _Bool deviceUIUnlocked;
@property(readonly) _Bool deviceSupportsWAPI;
@property(readonly) _Bool deviceSupportsRanging;
@property(readonly) _Bool deviceSupportsContinuity;
@property(readonly) _Bool deviceRequiresNewRanging;
@property(readonly) _Bool deviceKeyBagUnlocked;
@property(readonly) _Bool deviceKeyBagLocking;
@property(readonly) _Bool deviceKeyBagLocked;
@property(readonly) _Bool deviceKeyBagDisabled;
@property(readonly) _Bool currentConsoleUser;
@property(readonly) _Bool connectedEnabled;
@property(readonly) _Bool computerToComputer;
@property(readonly) _Bool coalesceMe;
@property(readonly) _Bool carplayConnected;
@property(readonly) _Bool bypassLTKeyAbort;
@property(readonly) _Bool browseAllInterfaces;
@property(readonly) _Bool bonjourEnabled;
@property(readonly) _Bool backlightOn;
@property(readonly) _Bool alwaysSendPayload;
@property(readonly) _Bool alwaysAutoAccept;
@property(readonly) _Bool altDSIDNeedsFixing;
@property(readonly) _Bool allEnabled;
@property(readonly, getter=isAirDropAvailable) _Bool airdropAvailable;
- (void)updateAirDropAllowed;	// IMP=0x000000010018c924
@property(readonly, getter=isAirDropAllowed) _Bool airdropAllowed;
@property(readonly) int workgroupThreshold;
@property(readonly) NSString *workgroup;
@property(readonly) unsigned int systemUIFlags;
@property(readonly) NSString *someComputerName;
@property(readonly) int sidebarMaxCount;
@property(readonly) NSString *netbiosName;
@property(readonly) NSData *myShortHashesForAirDrop;
@property(readonly) NSData *myMediumHashes;
@property(readonly) NSString *myPrimaryEmail;
@property(readonly) NSString *myGivenName;
@property(readonly) NSString *myName;
@property(readonly) NSString *myEmail;
@property(readonly) NSDictionary *myAppleIDValidationRecord;
@property(readonly) NSArray *myAppleIDPhoneNumbers;
@property(readonly) NSString *myAppleIDPhoneHash;
@property(readonly) NSString *myAppleIDEmailHash;
@property(readonly) NSArray *myAppleIDEmailAddresses;
@property(readonly) NSString *myAppleIDCommonName;
- (id)_myAppleID;	// IMP=0x000000010018bd1c
@property(readonly) NSString *myAppleID;
@property(readonly) NSString *myAltDSID;
@property(readonly) NSString *myAccountAppleID;
@property(readonly) NSString *modelName;
@property(readonly) NSString *modelCode;
@property(readonly) int minPersonImageSize;
- (void)clearLocalHostName;	// IMP=0x000000010018b9e8
@property(readonly) NSString *localHostName;
@property(readonly) long long deviceKeyBagState;
@property(readonly) NSString *deviceInformation;
- (void)clearConsoleUser;	// IMP=0x000000010018b48c
@property(readonly) NSString *consoleUser;
- (void)clearComputerName;	// IMP=0x000000010018b40c
@property(readonly) NSString *computerName;
@property(readonly) NSString *bonjourName;
@property(readonly) NSData *bluetoothAddress;
- (id)awdlStateInfo;	// IMP=0x000000010018b250
@property(readonly) NSArray *awdlPeerList;
@property(readonly) NSDictionary *awdlInfo;
@property _Bool airplaneModeEnabled;
@property _Bool wirelessEnabled;
@property __weak SDAirDropServer *finderServer;
@property _Bool bluetoothEnabled;
@property _Bool airDropPublished;
- (id)wifiSSIDForSSIDHash:(id)arg1;	// IMP=0x000000010018ad10
- (unsigned int)wifiPasswordSharingAvailability;	// IMP=0x000000010018ab2c
- (id)defaultWiFiDevice;	// IMP=0x000000010018aaf4
- (struct __WiFiManagerClient *)wifiManager;	// IMP=0x000000010018aaec
- (_Bool)_multipleUsersLoggedIn;	// IMP=0x000000010018aae4
- (void)postNotification:(id)arg1;	// IMP=0x000000010018aad4
- (void)postNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010018aa44
- (void)removePreventExitForLocaleReason:(id)arg1;	// IMP=0x000000010018a8e8
- (void)addPreventExitForLocaleReason:(id)arg1;	// IMP=0x000000010018a7dc
@property(readonly) _Bool simStateReady;
- (long long)signalStrength;	// IMP=0x000000010018a7cc
- (void)updatePersonalHotspotAllowed;	// IMP=0x000000010018a6e0
@property(readonly) _Bool personalHotspotAllowed;
- (unsigned char)networkType;	// IMP=0x000000010018a638
@property(readonly) _Bool familyHotspotEnabled;
- (void)updateFamilyHotspotState;	// IMP=0x0000000100189f20
- (long long)familyHotspotStateForAltDSID:(id)arg1;	// IMP=0x0000000100189e84
- (_Bool)lteConnectionShows4G;	// IMP=0x0000000100189e7c
- (void)cellularDataEnabled:(_Bool *)arg1 airplaneMode:(_Bool *)arg2;	// IMP=0x0000000100189e68
- (void)updateAutoHotspotState;	// IMP=0x0000000100189ce0
- (long long)autoHotspotState;	// IMP=0x0000000100189c74
- (id)phoneNumbersForContact:(id)arg1;	// IMP=0x0000000100189ad0
- (void)resetMeCardWithReason:(id)arg1;	// IMP=0x000000010018997c
@property(readonly, nonatomic) CNContact *meCard; // @synthesize meCard=___meCard;
- (id)instantMessageEmailsForContact:(id)arg1;	// IMP=0x00000001001895c8
- (id)addressOrNumForHash:(id)arg1;	// IMP=0x00000001001893a8
- (id)emailOrPhoneForEmailHash:(id)arg1 phoneHash:(id)arg2;	// IMP=0x00000001001892ac
- (void)generateContactHashes;	// IMP=0x0000000100188ca0
- (id)emailsForContact:(id)arg1;	// IMP=0x0000000100188b20
- (id)contactWithPhoneNumberOrEmail:(id)arg1;	// IMP=0x0000000100188790
- (id)contactWithContactIdentifier:(id)arg1;	// IMP=0x000000010018847c
- (_Bool)contactsContainsShortHashes:(id)arg1;	// IMP=0x00000001001882cc
- (_Bool)contactIsBlocked:(id)arg1;	// IMP=0x00000001001882c4
- (_Bool)contactIdentifierIsBlocked:(id)arg1;	// IMP=0x00000001001882bc
- (id)contactIdentifierForMediumHashes:(id)arg1;	// IMP=0x0000000100188140
- (id)contactForCombinedHash:(id)arg1;	// IMP=0x0000000100187f00
- (id)contactForEmailHash:(id)arg1 phoneHash:(id)arg2;	// IMP=0x0000000100187e04
- (void)clearMyIconAndHash;	// IMP=0x0000000100187d30
- (void)clearHashesToContacts;	// IMP=0x0000000100187cdc
- (void)addPhoneNumbers:(id)arg1 toLongHashes:(id)arg2 andMediumHashes:(id)arg3 andShortHashes:(id)arg4 forContactIdentifier:(id)arg5;	// IMP=0x0000000100187968
- (void)addEmails:(id)arg1 toLongHashes:(id)arg2 andMediumHashes:(id)arg3 andShortHashes:(id)arg4 forContactIdentifier:(id)arg5;	// IMP=0x0000000100187590
- (id)addAdditionalInformationToMeCard:(id)arg1;	// IMP=0x0000000100186f0c
- (id)awdlNetwork;	// IMP=0x0000000100186d78
- (id)awdlInfoForPeerWithServiceName:(id)arg1;	// IMP=0x0000000100186ad8
- (id)awdlDevice;	// IMP=0x0000000100186aa0
- (id)verifiedIdentityForAppleID:(id)arg1;	// IMP=0x0000000100186a08
- (id)unifiedAppleIDInfo;	// IMP=0x0000000100186530
- (id)phoneNumbersForAppleID:(id)arg1;	// IMP=0x0000000100186468
- (void)hsa2EnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100186200
- (void)handleAppleAccountSignOut;	// IMP=0x0000000100186168
- (void)handleAppleAccountSignIn;	// IMP=0x00000001001860d0
- (void)fixAltDSIDIfNeeded;	// IMP=0x0000000100185df0
- (id)emailAddressesForAppleID:(id)arg1;	// IMP=0x0000000100185d28
- (struct __SecIdentity *)_copyMyAppleIDSecIdentity;	// IMP=0x0000000100185c88
- (struct __SecIdentity *)copyMyAppleIDSecIdentity;	// IMP=0x0000000100185c3c
- (struct __SecCertificate *)_copyMyAppleIDIntermediateCertificate;	// IMP=0x0000000100185b80
- (struct __SecCertificate *)copyMyAppleIDIntermediateCertificate;	// IMP=0x0000000100185b34
- (struct __SecCertificate *)_copyMyAppleIDCertificate;	// IMP=0x0000000100185a78
- (struct __SecCertificate *)copyMyAppleIDCertificate;	// IMP=0x0000000100185a2c
- (struct __SecCertificate *)copyCertificateForRealName:(id)arg1;	// IMP=0x0000000100185994
- (id)commonNameForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x00000001001858d0
- (void)clearMyAppleIDInfo;	// IMP=0x00000001001857a4
- (void)cacheIdentity:(id)arg1;	// IMP=0x00000001001856d4
- (void)cacheCertificate:(struct __SecCertificate *)arg1 forRealName:(id)arg2;	// IMP=0x0000000100185620
- (_Bool)verifyAndParseValidationRecordData:(id)arg1 intoDictionary:(out id *)arg2;	// IMP=0x00000001001852b0
- (long long)appleIDAccountState;	// IMP=0x0000000100185050
- (void)updateDiscoverableMode;	// IMP=0x0000000100184d94
- (void)setServerMountPoints:(id)arg1;	// IMP=0x0000000100184cfc
@property(retain) NSString *discoverableMode;
- (void)setODiskMountPoints:(id)arg1;	// IMP=0x0000000100184bf0
- (id)serverNameForHost:(id)arg1;	// IMP=0x0000000100184b38
- (void)removeServerName:(id)arg1;	// IMP=0x0000000100184aa4
- (id)reconciledDiscoverableMode;	// IMP=0x000000010018491c
- (id)odiskMountPointsForServer:(id)arg1;	// IMP=0x000000010018488c
- (id)newDiscoverableMode;	// IMP=0x00000001001845cc
- (id)mountPointsForServer:(id)arg1;	// IMP=0x000000010018453c
- (_Bool)isAirDropReady;	// IMP=0x00000001001843e4
- (long long)discoverableLevel;	// IMP=0x0000000100184334
- (id)defaultDiscoverableMode;	// IMP=0x0000000100184314
- (id)createHostNameKey:(id)arg1;	// IMP=0x000000010018425c
- (void)airDropTransactionEnd:(_Bool)arg1;	// IMP=0x00000001001841fc
- (void)airDropTransactionBegin:(_Bool)arg1;	// IMP=0x00000001001841a4
- (void)addServerName:(id)arg1 forHostName:(id)arg2;	// IMP=0x00000001001840d8
- (void)clearMonitorCache;	// IMP=0x0000000100183f70
- (void)activate;	// IMP=0x0000000100183cd0
- (id)init;	// IMP=0x0000000100183ac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

