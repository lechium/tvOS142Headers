//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBOSUpdateAssetManager : NSObject
{
    _Bool processingSpaceRequest;	// 8 = 0x8
    _Bool processingAssetRequest;	// 9 = 0x9
}

+ (long long)_compareOSVersion:(id)arg1 andBuild:(id)arg2 withOSVersion:(id)arg3 andBuild:(id)arg4;	// IMP=0x000000010014e1d0
+ (id)sharedManager;	// IMP=0x00000001001475c0
@property(nonatomic) _Bool processingAssetRequest; // @synthesize processingAssetRequest;
@property(nonatomic) _Bool processingSpaceRequest; // @synthesize processingSpaceRequest;
- (long long)_purgeAsset:(id)arg1;	// IMP=0x000000010014de50
- (void)_reportAssetCatalogDownloadWithResult:(long long)arg1 forAttempt:(long long)arg2;	// IMP=0x000000010014dcd8
- (void)_refreshAssetCatalogUsingOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014d530
- (long long)_purgeableSizeFor:(id)arg1;	// IMP=0x000000010014d10c
- (id)_postedDateForQuery:(id)arg1;	// IMP=0x000000010014cee8
- (long long)_performMetadataQuery:(id)arg1;	// IMP=0x000000010014cd64
- (id)_queryForLocalAssetSearch;	// IMP=0x000000010014cc2c
- (id)_queryForAssetDownload;	// IMP=0x000000010014cb0c
- (id)_queryForAssetPurge;	// IMP=0x000000010014c9d4
- (_Bool)_asset:(id)arg1 withReleaseDate:(id)arg2 matchesUpdate:(id)arg3;	// IMP=0x000000010014c8c0
- (long long)_compareAsset:(id)arg1 withAsset:(id)arg2;	// IMP=0x000000010014c450
- (_Bool)_isAsset:(id)arg1 eligibleForAction:(unsigned long long)arg2 delayingUpdates:(_Bool)arg3;	// IMP=0x000000010014bccc
- (void)_finishInstalledAssetForUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014b554
- (void)_finishAssetForAction:(unsigned long long)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014a47c
- (void)_configureForVPN;	// IMP=0x000000010014a1e4
- (void)dateAtWhichDelayedUpdatesExpireWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100149c8c
- (void)descriptorForCurrentlyInstalledAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001495c0
- (id)descriptorForAsset:(id)arg1 withReleaseDate:(id)arg2;	// IMP=0x0000000100148df0
- (void)installedAssetForUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100148c04
- (void)assetForAction:(unsigned long long)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100148798
- (void)purgeLocalAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100147f50
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100147768
- (id)init;	// IMP=0x0000000100147690

@end
