//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCInstallerReader.h>

#import "MCInteractionClientDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCInstaller : MCInstallerReader <MCInteractionClientDelegate>
{
    NSMutableArray *_queuedProfiles;	// 8 = 0x8
    NSMutableArray *_queuedProvisioningProfiles;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_purgatoryWorkerQueue;	// 24 = 0x18
    NSDictionary *_currentlyInstallingRestrictions;	// 32 = 0x20
    NSMutableDictionary *_setAsideAccountIdentifiersByPayloadClass;	// 40 = 0x28
    NSMutableDictionary *_setAsideDictionariesByPayloadClass;	// 48 = 0x30
}

+ (void)_enumerateProfilesWithCriteria:(CDUnknownBlockType)arg1 filterFlags:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010004aed0
+ (void)considerProfilesInstalledDuringBuddyForManagement;	// IMP=0x000000010004a930
+ (id)_installationFailureErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010004a67c
+ (void)_setPathsSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;	// IMP=0x000000010004a60c
+ (unsigned long long)targetDeviceTypeForCurrentDevice;	// IMP=0x00000001000465ac
+ (id)notInstalledByMDMError;	// IMP=0x0000000100041444
+ (id)deviceIsSupervisedError;	// IMP=0x0000000100041394
+ (id)deviceNotSupervisedError;	// IMP=0x00000001000412e4
+ (id)sharedInstaller;	// IMP=0x000000010003e0ac
- (void).cxx_destruct;	// IMP=0x000000010004b888
@property(retain, nonatomic) NSMutableDictionary *setAsideDictionariesByPayloadClass; // @synthesize setAsideDictionariesByPayloadClass=_setAsideDictionariesByPayloadClass;
@property(retain, nonatomic) NSMutableDictionary *setAsideAccountIdentifiersByPayloadClass; // @synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass;
- (id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1;	// IMP=0x000000010004b76c
- (void)_purgatoryWorkerQueue_resetProfilePurgatorySettingsAndPostProfileListChangedNotification:(_Bool)arg1;	// IMP=0x000000010004b760
- (void)purgeProfileWithIdentifier:(id)arg1 FromPurgatoryForTargetDeviceType:(unsigned long long)arg2;	// IMP=0x000000010004b568
- (void)purgeProfilesFromPurgatoryForTargetDeviceType:(unsigned long long)arg1;	// IMP=0x000000010004b350
- (_Bool)sendProfileData:(id)arg1 withIdentifier:(id)arg2 toPurgatoryForTargetDeviceType:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x000000010004b0fc
- (id)_installedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x000000010004a724
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049d48
- (void)cleanUp;	// IMP=0x00000001000498d8
- (void)removeManagedProfilesIfNecessary;	// IMP=0x00000001000497d0
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x00000001000497a0
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3 source:(id)arg4;	// IMP=0x000000010004951c
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 source:(id)arg3;	// IMP=0x00000001000494c0
- (void)_cleanUpAfterRemovingProfileWithIdentifier:(id)arg1 installedForUser:(_Bool)arg2 profileHandler:(id)arg3 oldRestrictions:(id)arg4;	// IMP=0x0000000100048f30
- (void)_reallyRemoveProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 profileInstalled:(_Bool)arg3 targetDeviceType:(unsigned long long)arg4 options:(id)arg5 source:(id)arg6;	// IMP=0x00000001000487e4
- (void)removeAllProfilesFromInstallationQueue;	// IMP=0x000000010004879c
- (id)_managingProfileIdentifierForProfileIdentifier:(id)arg1;	// IMP=0x00000001000486c8
- (void)_removeOrphanedResources;	// IMP=0x0000000100047b20
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x0000000100047928
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 installForSystem:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x0000000100047084
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100047014
- (id)_profileNotEligibleErrorWithProfile:(id)arg1;	// IMP=0x0000000100046f58
- (id)_watchInformationOutIsCellularSupported:(_Bool *)arg1;	// IMP=0x0000000100046f50
- (id)_preflightProfileForInstallationOnWatch:(id)arg1;	// IMP=0x0000000100046a08
- (id)_preflightProfileForInstallationOnHomePod:(id)arg1;	// IMP=0x00000001000466ec
- (id)_errorUnacceptablePayload:(id)arg1;	// IMP=0x0000000100046630
- (_Bool)_overrideProfileValidation;	// IMP=0x00000001000465cc
- (id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100044764
- (id)existingProfileContainingPayloadClass:(Class)arg1 inProfilesWithFilterFlags:(int)arg2 excludingProfileIdentifier:(id)arg3;	// IMP=0x0000000100044578
- (id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2;	// IMP=0x0000000100044564
- (_Bool)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100044490
- (_Bool)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100044378
- (_Bool)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x00000001000442d0
- (id)setAsideDictionariesForPayloadHandlerClass:(Class)arg1;	// IMP=0x000000010004426c
- (void)addSetAsideDictionary:(id)arg1 forPayloadHandlerClass:(Class)arg2;	// IMP=0x0000000100044190
- (id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1;	// IMP=0x00000001000440ec
- (void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2;	// IMP=0x0000000100043fd8
- (_Bool)deviceSupervisionRequiredForPayload:(id)arg1;	// IMP=0x0000000100043e20
- (id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00000001000414dc
- (id)_deviceLockedError;	// IMP=0x000000010004124c
- (id)_guardAgainstNoMDMPayloadWithNewProfile:(id)arg1 oldProfile:(id)arg2;	// IMP=0x00000001000410d4
- (id)_validateMDMReplacementNewProfile:(id)arg1 oldProfile:(id)arg2 client:(id)arg3;	// IMP=0x0000000100040c90
- (_Bool)_promptUserForMAIDSignIn:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x0000000100040b64
- (_Bool)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100040310
- (id)_userCancelledErrorWithFriendlyName:(id)arg1;	// IMP=0x0000000100040278
- (id)_invalidInputError;	// IMP=0x00000001000401e0
- (id)_installationHaltedTopLevelError;	// IMP=0x00000001000400c8
- (id)_uiProfileInstallationDisabledTopLevelError;	// IMP=0x0000000100040030
- (id)_targetDeviceMismatchError;	// IMP=0x000000010003ff98
- (id)_targetDeviceInvalidError;	// IMP=0x000000010003ff00
- (id)_targetDeviceArchivedError;	// IMP=0x000000010003fe68
- (id)_targetDeviceUnavailableError;	// IMP=0x000000010003fdd0
- (id)_targetDeviceErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010003fd20
- (id)_malformedPayloadErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010003fc70
- (id)_malformedPayloadErrorInternal:(_Bool)arg1;	// IMP=0x000000010003fbbc
- (id)_queueProfileData:(id)arg1 profile:(id)arg2 forDevice:(unsigned long long)arg3;	// IMP=0x000000010003f65c
- (long long)_targetValidationStatusForProfile:(id)arg1;	// IMP=0x000000010003f538
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003eacc
- (id)popProvisioningProfileDataAtHeadOfInstallationQueue;	// IMP=0x000000010003ea4c
- (_Bool)queueProvisioningProfileDataForInstallation:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010003e8e8
- (id)_badProvisioningProfileError;	// IMP=0x000000010003e850
- (id)popProfileDataAtHeadOfInstallationQueue;	// IMP=0x000000010003e7d0
- (id)pathToInstalledProfileByUUID:(id)arg1;	// IMP=0x000000010003e448
- (id)pathToUninstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x000000010003e350
- (id)pathToInstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x000000010003e230
- (id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1;	// IMP=0x000000010003e1cc
- (id)init;	// IMP=0x000000010003e118

@end
