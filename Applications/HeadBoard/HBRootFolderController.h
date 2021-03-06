//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBAppInfoControllerDelegate-Protocol.h"
#import "HBFolderObserver-Protocol.h"
#import "HBRootFolderProvider-Protocol.h"

@class HBAppInfoController, HBFolder, NSString, NSURL, PBSAppInfoConfiguration;
@protocol OS_dispatch_source;

@interface HBRootFolderController : NSObject <HBFolderObserver, HBAppInfoControllerDelegate, HBRootFolderProvider>
{
    int _backgroundStateNotificationToken;	// 8 = 0x8
    _Bool _storeDemoMode;	// 12 = 0xc
    HBFolder *_rootFolder;	// 16 = 0x10
    HBAppInfoController *_appInfoController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_reloadSource;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_saveSource;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_prepareFolderIconCacheSource;	// 48 = 0x30
    NSURL *_appOrderURL;	// 56 = 0x38
    PBSAppInfoConfiguration *_configuration;	// 64 = 0x40
    NSURL *_storeDemoModeAppOrderURL;	// 72 = 0x48
}

+ (_Bool)_hasRestrictedLayout;	// IMP=0x00000001000a1f04
+ (id)_emptyFolder;	// IMP=0x00000001000a1120
+ (id)_provisionedBundleIdentifiersFromDefaultAppOrder;	// IMP=0x00000001000a0a38
+ (id)_provisionedBundleIdentifiers;	// IMP=0x00000001000a096c
+ (id)_folderWithContentsOfURL:(id)arg1;	// IMP=0x00000001000a03dc
+ (id)_rawFolderWithContentsOfURL:(id)arg1;	// IMP=0x00000001000a02fc
+ (id)_userAppOrderURL;	// IMP=0x00000001000a0134
+ (id)_bundleAppOrderURL;	// IMP=0x00000001000a0014
+ (void)_writeAppOrderFilesIfNeeded;	// IMP=0x000000010009ff68
+ (void)_removeAppOrderFilesIfNeeded;	// IMP=0x000000010009fe98
+ (id)_folderWithItunesRepresentation:(id)arg1;	// IMP=0x000000010009fde8
+ (void)initialize;	// IMP=0x000000010009f368
- (void).cxx_destruct;	// IMP=0x00000001000a2a5c
@property(copy, nonatomic, getter=_storeDemoModeAppOrderURL, setter=_setStoreDemoModeAppOrderURL:) NSURL *storeDemoModeAppOrderURL; // @synthesize storeDemoModeAppOrderURL=_storeDemoModeAppOrderURL;
@property(nonatomic, getter=_isStoreDemoMode, setter=_setStoreDemoMode:) _Bool storeDemoMode; // @synthesize storeDemoMode=_storeDemoMode;
@property(retain, nonatomic, getter=_configuration, setter=_setConfiguration:) PBSAppInfoConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic, getter=_appOrderURL, setter=_setAppOrderURL:) NSURL *appOrderURL; // @synthesize appOrderURL=_appOrderURL;
@property(readonly, nonatomic, getter=_prepareFolderIconCacheSource) NSObject<OS_dispatch_source> *prepareFolderIconCacheSource; // @synthesize prepareFolderIconCacheSource=_prepareFolderIconCacheSource;
@property(readonly, nonatomic, getter=_saveSource) NSObject<OS_dispatch_source> *saveSource; // @synthesize saveSource=_saveSource;
@property(readonly, nonatomic, getter=_reloadSource) NSObject<OS_dispatch_source> *reloadSource; // @synthesize reloadSource=_reloadSource;
@property(readonly, nonatomic, getter=_appInfoController) HBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) HBFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
- (void)itemsDidChange:(id)arg1;	// IMP=0x00000001000a29f8
- (void)folderChangeNeedsSaving:(id)arg1;	// IMP=0x00000001000a29ec
- (void)appInfoController:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x00000001000a294c
- (void)appInfoController:(id)arg1 didUpdateAlternateAppIconsForAppInfos:(id)arg2;	// IMP=0x00000001000a28ac
- (void)appInfoController:(id)arg1 didRemoveAppInfos:(id)arg2;	// IMP=0x00000001000a264c
- (void)appInfoController:(id)arg1 didAddAppInfos:(id)arg2;	// IMP=0x00000001000a24f4
- (void)_setNeedsPrepareFolderIconCache;	// IMP=0x00000001000a2458
- (void)_prepareFolderIconCache;	// IMP=0x00000001000a225c
- (id)_makeStoreDemoModeFolder;	// IMP=0x00000001000a2140
- (id)_makeManagedModeFolder;	// IMP=0x00000001000a2084
- (void)_didAddAppInfos:(id)arg1;	// IMP=0x00000001000a1ba8
- (void)_addAppInfosToRootFolder:(id)arg1;	// IMP=0x00000001000a1810
- (void)_updateRootFolderWithCurrentAppInfos;	// IMP=0x00000001000a13f4
- (void)_save;	// IMP=0x00000001000a1200
- (void)_setNeedsSave;	// IMP=0x00000001000a1164
- (void)_updateStoreDemoMode;	// IMP=0x00000001000a103c
- (void)_setNeedsReload;	// IMP=0x00000001000a0eec
- (void)_reload;	// IMP=0x00000001000a0c20
- (void)_mergeRootFolderInPlaceWithFolder:(id)arg1;	// IMP=0x00000001000a080c
- (void)_reloadRootFolderFromFolder:(id)arg1;	// IMP=0x00000001000a0448
- (void)_modelSerializationDidSerialize:(id)arg1;	// IMP=0x000000010009fbb0
- (void)_applicationDidBecomeActive;	// IMP=0x000000010009fb30
- (void)dealloc;	// IMP=0x000000010009fa2c
- (id)init;	// IMP=0x000000010009f3c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

