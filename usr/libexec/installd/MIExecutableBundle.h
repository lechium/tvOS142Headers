//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MIBundle.h"

@class MIBundleContainer, MICodeSigningInfo, MIEmbeddedWatchBundle, MIInstallationIdentity, MIPluginKitPluginBundle, NSArray, NSError, NSString, NSURL;

@interface MIExecutableBundle : MIBundle
{
    struct __CFBundle *_cfBundle;	// 8 = 0x8
    MIBundleContainer *_bundleContainer;	// 16 = 0x10
    unsigned long long _codeSignatureVerificationState;	// 24 = 0x18
    MIInstallationIdentity *_installationIdentity;	// 32 = 0x20
    NSError *_wk1AppBundleError;	// 40 = 0x28
    MIEmbeddedWatchBundle *_wk1AppBundle;	// 48 = 0x30
    NSError *_wk2AppBundleError;	// 56 = 0x38
    MIEmbeddedWatchBundle *_wk2AppBundle;	// 64 = 0x40
    MICodeSigningInfo *_codeSigningInfo;	// 72 = 0x48
    NSError *_codeSigningInfoError;	// 80 = 0x50
    NSString *_watchKitAppExecutableHash;	// 88 = 0x58
    MIPluginKitPluginBundle *_watchKitPlugin;	// 96 = 0x60
    unsigned long long _lsInstallType;	// 104 = 0x68
}

+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000010002df98
- (void).cxx_destruct;	// IMP=0x0000000100035830
@property(nonatomic) unsigned long long lsInstallType; // @synthesize lsInstallType=_lsInstallType;
@property(retain, nonatomic) MIPluginKitPluginBundle *watchKitPlugin; // @synthesize watchKitPlugin=_watchKitPlugin;
@property(retain, nonatomic) NSString *watchKitAppExecutableHash; // @synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash;
@property(retain, nonatomic) NSError *codeSigningInfoError; // @synthesize codeSigningInfoError=_codeSigningInfoError;
@property(retain, nonatomic) MICodeSigningInfo *codeSigningInfo; // @synthesize codeSigningInfo=_codeSigningInfo;
@property(retain, nonatomic) MIEmbeddedWatchBundle *wk2AppBundle; // @synthesize wk2AppBundle=_wk2AppBundle;
@property(retain, nonatomic) NSError *wk2AppBundleError; // @synthesize wk2AppBundleError=_wk2AppBundleError;
@property(retain, nonatomic) MIEmbeddedWatchBundle *wk1AppBundle; // @synthesize wk1AppBundle=_wk1AppBundle;
@property(retain, nonatomic) NSError *wk1AppBundleError; // @synthesize wk1AppBundleError=_wk1AppBundleError;
@property(copy, nonatomic) MIInstallationIdentity *installationIdentity; // @synthesize installationIdentity=_installationIdentity;
@property(readonly, nonatomic) unsigned long long codeSignatureVerificationState; // @synthesize codeSignatureVerificationState=_codeSignatureVerificationState;
@property(nonatomic) __weak MIBundleContainer *bundleContainer; // @synthesize bundleContainer=_bundleContainer;
- (_Bool)hasOnlyAllowedWatchKitAppInfoPlistKeysForWatchKitVersion:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x00000001000352c8
- (id)watchKitV2AppBundleWithError:(id *)arg1;	// IMP=0x0000000100034bd0
- (id)_discoverWatchAppBundleAsPlaceholder:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000001000344f0
- (id)watchKitV1AppBundleWithError:(id *)arg1;	// IMP=0x00000001000341a0
- (id)watchKitAppBundleForWKVersionOrEarlier:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x0000000100033fd0
- (unsigned char)watchKitVersionWithError:(id *)arg1;	// IMP=0x0000000100033e2c
- (id)watchKitPluginWithError:(id *)arg1;	// IMP=0x0000000100033c14
@property(readonly, nonatomic) _Bool isWatchOnlyApp;
@property(readonly, nonatomic) _Bool watchKitAppRunsIndependentlyOfCompanion;
@property(readonly, nonatomic) _Bool minimumWatchOSVersionIsV6OrLater;
@property(readonly, nonatomic) _Bool minimumWatchOSVersionIsPreV6;
@property(readonly, copy, nonatomic) NSArray *counterpartIdentifiers; // @dynamic counterpartIdentifiers;
@property(readonly, copy, nonatomic) NSString *companionAppIdentifier;
@property(readonly, nonatomic) _Bool isExtensionlessWatchKitApp;
@property(readonly, nonatomic) _Bool isExtensionBasedWatchKitApp;
@property(readonly, nonatomic) _Bool hasWatchGlance;
@property(readonly, nonatomic) _Bool hasWatchCustomNotification;
- (_Bool)_hasResource:(id)arg1 withExtension:(id)arg2;	// IMP=0x0000000100033238
- (_Bool)validateSinfWithError:(id *)arg1;	// IMP=0x0000000100033030
- (id)fairPlaySinfInfoWithError:(id *)arg1;	// IMP=0x00000001000329f0
@property(readonly, nonatomic) _Bool hasSinf;
@property(readonly, nonatomic) _Bool needsSinf;
- (void)removeSinf;	// IMP=0x0000000100032800
- (_Bool)replicateRootSinfWithError:(id *)arg1;	// IMP=0x00000001000326fc
- (id)updateAndValidateSinf:(id)arg1 withRollback:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100032418
- (id)updateAndValidateSinf:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100032404
- (void)bestEffortRollbackSinfData:(id)arg1;	// IMP=0x00000001000322b0
- (_Bool)updateSinfWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100032154
@property(readonly, nonatomic) NSURL *rootSupfURL;
@property(readonly, nonatomic) NSURL *rootSuppURL;
@property(readonly, nonatomic) NSURL *rootSinfURL;
- (_Bool)validatePluginMetadataWithError:(id *)arg1;	// IMP=0x0000000100031be0
- (_Bool)makeExecutableWithError:(id *)arg1;	// IMP=0x0000000100031a24
@property(readonly, copy, nonatomic) NSArray *vpnPluginIdentifiers;
- (id)_dataContainerCreatingIfNeeded:(_Bool)arg1 makeLive:(_Bool)arg2 checkIfNeeded:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00000001000314f0
- (id)dataContainerCreatingIfNeeded:(_Bool)arg1 makeLive:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000001000314d8
- (id)dataContainerWithError:(id *)arg1;	// IMP=0x00000001000314b8
@property(readonly, nonatomic) Class dataContainerClass;
@property(readonly, nonatomic) long long dataContainerContentClass;
- (_Bool)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100030b94
- (_Bool)_hasNoConflictWithSystemAppsForSigningInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100030574
- (int)installEmbeddedProvisioningProfileWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030418
- (id)codeSigningInfoByValidatingResources:(_Bool)arg1 performingOnlineAuthorization:(_Bool)arg2 ignoringCachedSigningInfo:(_Bool)arg3 checkingTrustCacheIfApplicable:(_Bool)arg4 skippingProfileIDValidation:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000010002f71c
- (id)_codeSigningInfoFromMCM;	// IMP=0x000000010002f52c
- (_Bool)updateMCMWithCodeSigningInfoAsAdvanceCopy:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x000000010002f120
- (_Bool)needsDataContainer;	// IMP=0x000000010002ee34
- (_Bool)_hasNonContainerizingEntitlement:(id)arg1 checkSeatbeltProfiles:(_Bool)arg2;	// IMP=0x000000010002ec04
- (_Bool)_isGrandfatheredNonContainerized:(id)arg1;	// IMP=0x000000010002eb1c
@property(readonly, nonatomic) unsigned int maxLinkedSDKVersion;
- (_Bool)makeAndSetNewInstallationIdentityWithError:(id *)arg1;	// IMP=0x000000010002ea48
- (_Bool)transferInstallationIdentityFromBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002e944
- (id)installationIdentitySettingIfNotSet:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x000000010002e88c
- (id)watchKitAppExecutableHashWithError:(id *)arg1;	// IMP=0x000000010002e588
- (void)setBundleParentDirectoryURL:(id)arg1;	// IMP=0x000000010002e48c
- (id)lsInstallTypeWithError:(id *)arg1;	// IMP=0x000000010002e208
@property(readonly, nonatomic) struct __CFBundle *cfBundle; // @synthesize cfBundle=_cfBundle;
@property(readonly, nonatomic) NSURL *executableURL;
@property(readonly, copy, nonatomic) NSString *executableName;
- (id)initWithBundleInContainer:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002dec4
- (_Bool)_validateWithError:(id *)arg1;	// IMP=0x000000010002dbd8
- (void)dealloc;	// IMP=0x000000010002db80

@end

