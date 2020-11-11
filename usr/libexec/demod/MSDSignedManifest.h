//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDDemoManifestCheck, NSArray, NSDictionary, NSString;

@interface MSDSignedManifest : NSObject
{
    _Bool _staggeredContentUpdateEnabled;	// 8 = 0x8
    NSString *_signingKey;	// 16 = 0x10
    NSArray *_installationOrder;	// 24 = 0x18
    NSArray *_criticalComponents;	// 32 = 0x20
    NSDictionary *_payload;	// 40 = 0x28
    MSDDemoManifestCheck *_manifestVerifier;	// 48 = 0x30
}

+ (id)getComponentFromPath:(id)arg1 forManifestVersion:(id)arg2;	// IMP=0x000000010006afb0
+ (id)appsPrefixForManifestVersion:(id)arg1;	// IMP=0x000000010006af70
+ (id)signedManifestFromManifestData:(id)arg1;	// IMP=0x00000001000698bc
+ (void)setSignedManifest:(id)arg1;	// IMP=0x00000001000698ac
+ (id)signedManifest;	// IMP=0x00000001000698a0
- (void).cxx_destruct;	// IMP=0x000000010006d720
@property _Bool staggeredContentUpdateEnabled; // @synthesize staggeredContentUpdateEnabled=_staggeredContentUpdateEnabled;
@property(retain) MSDDemoManifestCheck *manifestVerifier; // @synthesize manifestVerifier=_manifestVerifier;
@property(retain) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain) NSArray *criticalComponents; // @synthesize criticalComponents=_criticalComponents;
@property(retain) NSArray *installationOrder; // @synthesize installationOrder=_installationOrder;
@property(retain, nonatomic) NSString *signingKey; // @synthesize signingKey=_signingKey;
- (_Bool)validateInstallationOrder;	// IMP=0x000000010006d4d4
- (void)parseInstallationOrder;	// IMP=0x000000010006d2f0
- (_Bool)isManualSigning:(id)arg1;	// IMP=0x000000010006d0d4
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 withKey:(struct __SecKey *)arg3;	// IMP=0x000000010006cf68
- (struct __SecKey *)createPublicKey:(id)arg1 usingPolicy:(struct __SecPolicy *)arg2 anchors:(id)arg3;	// IMP=0x000000010006ca6c
- (struct __SecKey *)createPublicKeyForDevelopmentSigningStandard:(id)arg1;	// IMP=0x000000010006c980
- (struct __SecKey *)createPublicKeyAppleISTSigning:(id)arg1;	// IMP=0x000000010006c398
- (struct __SecKey *)createPublicKeyForDevelopmentSigning:(id)arg1;	// IMP=0x000000010006c2fc
- (struct __SecKey *)createPublicKeyForStrongSigning:(id)arg1;	// IMP=0x000000010006c1c4
- (id)verifyManifestSignature:(id)arg1;	// IMP=0x000000010006b3e0
- (id)getDataSectionKeys;	// IMP=0x000000010006b3c4
- (id)getStandAlonePackageVersion:(id)arg1;	// IMP=0x000000010006b320
- (id)getComponentVersion:(id)arg1;	// IMP=0x000000010006b1c0
- (id)standAlonePackageIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010006af68
- (id)appIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010006aee0
- (_Bool)isItemStandAlonePackage:(id)arg1;	// IMP=0x000000010006aed8
- (_Bool)isItemApp:(id)arg1;	// IMP=0x000000010006aec0
- (_Bool)isItemSystemAppData:(id)arg1;	// IMP=0x000000010006aea8
- (_Bool)isItemConfigurationProfileBackup:(id)arg1;	// IMP=0x000000010006aea0
- (_Bool)isItemProvisioningProfileBackup:(id)arg1;	// IMP=0x000000010006ae88
- (_Bool)isItemSystemContainerBackup:(id)arg1;	// IMP=0x000000010006ae70
- (_Bool)isItemBaseBackup:(id)arg1;	// IMP=0x000000010006ae58
- (_Bool)isItemBackup:(id)arg1;	// IMP=0x000000010006ae40
- (id)originServerForApp:(id)arg1;	// IMP=0x000000010006ad70
- (id)originServerForBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010006ac74
- (_Bool)hasSystemContainerBackupInRange:(struct _NSRange)arg1;	// IMP=0x000000010006ab40
- (id)mergedBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010006a780
- (struct _NSRange)rangeOfGroupedBackups:(long long)arg1;	// IMP=0x000000010006a750
- (id)itemAtIndexInManifest:(long long)arg1;	// IMP=0x000000010006a6f4
@property(readonly, getter=getBackupList) NSDictionary *backupList;
@property(readonly, getter=getBackup) NSDictionary *backup;
@property(readonly, getter=getSystemAppDataList) NSDictionary *systemAppDataList;
- (id)getDataForApp:(id)arg1 fromDataSection:(id)arg2;	// IMP=0x000000010006a564
- (id)getComponentDataList:(id)arg1;	// IMP=0x000000010006a55c
@property(readonly, getter=getUserDataList) NSDictionary *userDataList;
@property(readonly, getter=getSharedDataList) NSDictionary *sharedDataList;
- (long long)getAppType:(id)arg1;	// IMP=0x000000010006a544
- (id)getSystemAppDependecies:(id)arg1;	// IMP=0x000000010006a53c
- (id)getAppDependecies:(id)arg1;	// IMP=0x000000010006a534
@property(readonly, getter=getPlugInDataList) NSDictionary *plugInDataList;
@property(readonly, getter=getGroupDataList) NSDictionary *groupDataList;
@property(readonly, getter=getAppDataList) NSDictionary *appDataList;
@property(readonly, getter=getAppList) NSDictionary *appList;
@property(readonly, getter=getInfo) NSDictionary *info;
@property(readonly, getter=getVersion) int version;
@property(readonly, getter=getInstallationOrderSystemApps) NSString *installationOrderSystemApps;
@property(readonly, getter=getInstallationOrderAppsPrefix) NSString *installationOrderAppsPrefix;
- (void)dealloc;	// IMP=0x000000010006a288
- (id)initWithManifestData:(id)arg1;	// IMP=0x0000000100069910

@end
