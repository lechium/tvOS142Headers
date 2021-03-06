//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCXPCProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface MCProfileServicer : NSObject <MCXPCProtocol>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100052190
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 repeatingInterval:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100052090
- (void)managingOrganizationInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051fb8
- (void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100051ec8
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100051cf8
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100051b28
- (id)prefixedFeaturePromptIdentifierForIdentifier:(id)arg1;	// IMP=0x0000000100051aec
- (void)cancelFeaturePromptWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005181c
- (void)showFeaturePromptForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 promptIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000512b4
- (void)shutDownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051120
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051054
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050ee8
- (void)setupAssistantDidFinishCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100050af0
- (void)hasMailAccountsWithFilteringEnabled:(_Bool)arg1 sourceAccountManagement:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100050940
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010005074c
- (void)setUserBookmarks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000505f0
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050500
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100050428
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050338
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100050260
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005018c
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000500b0
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004ffd0
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004fec8
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004fdf4
- (void)managedAppIDsWithFlags:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fd14
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004fbd4
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fac4
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f9f8
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f92c
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f844
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f75c
- (void)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004f644
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004f530
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004f41c
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004f2c8
- (void)removeValueSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f1a4
- (void)removeBoolSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f080
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010004e9ec
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e918
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004e834
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e75c
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e684
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e5b0
- (void)resetPasscodeMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e4dc
- (void)isPasscodeCompliantWithNamedPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e3e8
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004e2d4
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004e190
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010004dfcc
- (_Bool)remoteProcessCanRemoveProfilesOutError:(id *)arg1;	// IMP=0x000000010004df64
- (_Bool)isCloudLockedProfileWithIdentifier:(id)arg1;	// IMP=0x000000010004dea0
- (void)removeProtectedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004dc84
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004daa4
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004d894
- (void)updateProfileIdentifier:(id)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004d6f4
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d61c
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d4ac
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d3d4
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010004d268
- (void)installProfileData:(id)arg1 interactive:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004ce9c
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004cd38
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2 error:(id *)arg3;	// IMP=0x000000010004cc50
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004cb90
- (id)lacksArrayEntitlementError:(id)arg1 withMemberString:(id)arg2;	// IMP=0x000000010004cadc
- (id)lacksBooleanEntitlementError:(id)arg1;	// IMP=0x000000010004ca44
- (id)remoteProcessBundleID;	// IMP=0x000000010004c9d0
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2;	// IMP=0x000000010004c838
- (id)remoteProcessEntitlementStringArrayForKey:(id)arg1;	// IMP=0x000000010004c660
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x000000010004c540
- (void)setAllowedURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c448
- (void)setSpellCheckAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c364
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c280
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c19c
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c0b8
- (void)setSmartPunctuationAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bfd4
- (void)setAutoCorrectionAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bef0
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004be40
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004bd88
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004bcd0
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004bc60
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004bbf0
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bb78
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bb00
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004ba90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

