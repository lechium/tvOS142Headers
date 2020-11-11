//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKBadgeController : NSObject
{
    NSMutableDictionary *_badgeDictionaries[4];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    _Bool _dirty;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x0000000100108928
- (void)registerBadgePermissionForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010a7b8
- (void)unbadgeAllApplications;	// IMP=0x000000010010a560
- (void)badgeAllApplications;	// IMP=0x000000010010a2d0
- (void)setBadgeCount:(unsigned long long)arg1 forBundleID:(id)arg2 badgeType:(unsigned long long)arg3;	// IMP=0x0000000100109e8c
- (unsigned long long)_totalBadgeCountForBundleID:(id)arg1;	// IMP=0x0000000100109d18
- (unsigned long long)badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x0000000100109b28
- (unsigned long long)_badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x00000001001099c4
- (id)_dictionaryForBadgeType:(unsigned long long)arg1;	// IMP=0x0000000100109890
- (void)badgeBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x000000010010957c
- (void)badgeApplicationWithBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00000001001090ec
- (_Bool)isBadgingEnabledForBundleID:(id)arg1;	// IMP=0x0000000100109080
- (void)synchronize;	// IMP=0x0000000100108ae0
- (id)_plistKeyForBadgeType:(unsigned long long)arg1;	// IMP=0x0000000100108aa8
- (void)dealloc;	// IMP=0x0000000100108a4c
- (id)init;	// IMP=0x00000001001089e0
- (id)_badgeCountURL;	// IMP=0x000000010010898c

@end

