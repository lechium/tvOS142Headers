//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBAppInfoControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, PBAppInfoController;
@protocol OS_dispatch_queue;

@interface PBAppIconCache : NSObject <PBAppInfoControllerDelegate>
{
    NSString *_name;	// 8 = 0x8
    NSString *_cachePath;	// 16 = 0x10
    NSArray *_iconScales;	// 24 = 0x18
    PBAppInfoController *_appInfoController;	// 32 = 0x20
    NSMutableDictionary *_queue_cacheEntryByBundleIdentifier;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    struct CGSize _iconSize;	// 64 = 0x40
}

+ (id)_appIconNameForAppInfo:(id)arg1;	// IMP=0x00000001000c5864
+ (id)_placeholderIconImageForScale:(double)arg1;	// IMP=0x00000001000c5820
+ (id)_pathForCacheKey:(id)arg1 cacheDirectory:(id)arg2;	// IMP=0x00000001000c5770
+ (id)_cacheKeyForBundleIdentifier:(id)arg1 scale:(double)arg2 lastModifiedDate:(double)arg3;	// IMP=0x00000001000c56b4
+ (id)sharedAppSwitcherIconCache;	// IMP=0x00000001000c2bd0
- (void).cxx_destruct;	// IMP=0x00000001000c5a50
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) NSMutableDictionary *queue_cacheEntryByBundleIdentifier; // @synthesize queue_cacheEntryByBundleIdentifier=_queue_cacheEntryByBundleIdentifier;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) NSArray *iconScales; // @synthesize iconScales=_iconScales;
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_buildAndPruneCache;	// IMP=0x00000001000c4e94
- (void)_workQueue_removeApplicationIconsForCacheEntry:(id)arg1;	// IMP=0x00000001000c4c04
- (void)_workQueue_removeApplicationIconsForAppInfo:(id)arg1;	// IMP=0x00000001000c4974
- (void)_workQueue_createApplicationIcon:(id)arg1 preferExisting:(_Bool)arg2;	// IMP=0x00000001000c3fa0
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00000001000c37b8
- (id)iconImageForAppWithBundleIdentifier:(id)arg1 scale:(double)arg2;	// IMP=0x00000001000c32f8
- (id)initWithName:(id)arg1 iconSize:(struct CGSize)arg2;	// IMP=0x00000001000c2d30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

