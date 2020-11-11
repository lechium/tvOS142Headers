//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"

@class BKSApplicationStateMonitor, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_os_log;

@interface PBHardwareButtonAccessManager : NSObject <PBSceneManagerObserver, PBInstanceDependable>
{
    NSObject<OS_os_log> *_logObject;	// 8 = 0x8
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 16 = 0x10
    NSMutableSet *_viewServiceApplicationBundleIdentifiers;	// 24 = 0x18
    NSMutableSet *_foregroundApplicationBundleIdentifiers;	// 32 = 0x20
    NSMutableOrderedSet *_appsWithVolumeButtonAccess;	// 40 = 0x28
    NSMutableOrderedSet *_appsWithExclusivePlayPauseButtonAccess;	// 48 = 0x30
    NSMutableSet *_suspendedAppsWithVolumeButtonAccess;	// 56 = 0x38
    NSMutableSet *_suspendedAppsWithExclusivePlayPauseButtonAccess;	// 64 = 0x40
    NSString *_focusedSceneBundleIdentifier;	// 72 = 0x48
    NSString *_appWithVolumeButtonAccess;	// 80 = 0x50
    NSString *_appWithExclusivePlayPauseButtonAccess;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x000000010021f044
+ (id)dependencyDescription;	// IMP=0x000000010021ee9c
- (void).cxx_destruct;	// IMP=0x0000000100220f7c
@property(copy, nonatomic) NSString *appWithExclusivePlayPauseButtonAccess; // @synthesize appWithExclusivePlayPauseButtonAccess=_appWithExclusivePlayPauseButtonAccess;
@property(copy, nonatomic) NSString *appWithVolumeButtonAccess; // @synthesize appWithVolumeButtonAccess=_appWithVolumeButtonAccess;
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x0000000100220c84
- (void)_updateAppButtonAccess;	// IMP=0x0000000100220a20
- (void)_updateApplicationStateForBundleIdentifier:(id)arg1;	// IMP=0x0000000100220860
- (void)_updateApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000010021fbcc
- (void)setExclusivePlayPauseButtonAccessEnabled:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x000000010021f9d0
- (void)setVolumeButtonAccessEnabled:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x000000010021f7d4
- (void)dealloc;	// IMP=0x000000010021f740
- (id)init;	// IMP=0x000000010021f144

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

