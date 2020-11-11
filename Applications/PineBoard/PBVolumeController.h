//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPAVRoutingControllerDelegate-Protocol.h"
#import "MPVolumeControllerDelegate-Protocol.h"
#import "PBSBulletinServiceDelegate-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"

@class BKSApplicationStateMonitor, MPAVRoutingController, MPVolumeController, NSArray, NSMutableOrderedSet, NSMutableSet, NSNumber, NSString, PBBulletinService, PBSBulletin;
@protocol PBVolumeControllerDelegate;

@interface PBVolumeController : NSObject <PBSBulletinServiceDelegate, PBSceneManagerObserver, MPVolumeControllerDelegate, MPAVRoutingControllerDelegate>
{
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 8 = 0x8
    NSMutableSet *_viewServiceApplicationBundleIdentifiers;	// 16 = 0x10
    NSMutableSet *_foregroundApplicationBundleIdentifiers;	// 24 = 0x18
    NSMutableOrderedSet *_appsWithVolumeHUDAssertion;	// 32 = 0x20
    NSMutableSet *_suspendedAppsWithVolumeHUDAssertion;	// 40 = 0x28
    NSString *_focusedSceneBundleIdentifier;	// 48 = 0x30
    _Bool _systemMusicVolumeSupported;	// 56 = 0x38
    _Bool _systemAudioVolumeSupported;	// 57 = 0x39
    _Bool _systemMusicVolumeNotificationsEnabled;	// 58 = 0x3a
    _Bool _systemAudioVolumeNotificationsEnabled;	// 59 = 0x3b
    _Bool _updatingVolumeValues;	// 60 = 0x3c
    id <PBVolumeControllerDelegate> _delegate;	// 64 = 0x40
    PBBulletinService *_bulletinService;	// 72 = 0x48
    PBSBulletin *_volumeBulletin;	// 80 = 0x50
    MPAVRoutingController *_systemMusicRoutingController;	// 88 = 0x58
    MPAVRoutingController *_systemAudioRoutingController;	// 96 = 0x60
    MPVolumeController *_systemMusicVolumeController;	// 104 = 0x68
    MPVolumeController *_systemAudioVolumeController;	// 112 = 0x70
    NSNumber *_systemMusicVolume;	// 120 = 0x78
    NSNumber *_systemMusicVolume_unmuted;	// 128 = 0x80
    NSNumber *_systemAudioVolume;	// 136 = 0x88
    NSNumber *_systemAudioVolume_unmuted;	// 144 = 0x90
    NSArray *_systemMusicRoutes;	// 152 = 0x98
    NSArray *_systemAudioRoutes;	// 160 = 0xa0
    NSString *_appWithVolumeHUDAssertion;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000010007f454
@property(copy, nonatomic) NSString *appWithVolumeHUDAssertion; // @synthesize appWithVolumeHUDAssertion=_appWithVolumeHUDAssertion;
@property(readonly, nonatomic) _Bool updatingVolumeValues; // @synthesize updatingVolumeValues=_updatingVolumeValues;
@property(readonly, nonatomic) _Bool systemAudioVolumeNotificationsEnabled; // @synthesize systemAudioVolumeNotificationsEnabled=_systemAudioVolumeNotificationsEnabled;
@property(readonly, nonatomic) _Bool systemMusicVolumeNotificationsEnabled; // @synthesize systemMusicVolumeNotificationsEnabled=_systemMusicVolumeNotificationsEnabled;
@property(readonly, nonatomic) _Bool systemAudioVolumeSupported; // @synthesize systemAudioVolumeSupported=_systemAudioVolumeSupported;
@property(readonly, nonatomic) _Bool systemMusicVolumeSupported; // @synthesize systemMusicVolumeSupported=_systemMusicVolumeSupported;
@property(readonly, nonatomic) NSArray *systemAudioRoutes; // @synthesize systemAudioRoutes=_systemAudioRoutes;
@property(readonly, nonatomic) NSArray *systemMusicRoutes; // @synthesize systemMusicRoutes=_systemMusicRoutes;
@property(readonly, nonatomic) NSNumber *systemAudioVolume_unmuted; // @synthesize systemAudioVolume_unmuted=_systemAudioVolume_unmuted;
@property(readonly, nonatomic) NSNumber *systemAudioVolume; // @synthesize systemAudioVolume=_systemAudioVolume;
@property(readonly, nonatomic) NSNumber *systemMusicVolume_unmuted; // @synthesize systemMusicVolume_unmuted=_systemMusicVolume_unmuted;
@property(readonly, nonatomic) NSNumber *systemMusicVolume; // @synthesize systemMusicVolume=_systemMusicVolume;
@property(readonly, nonatomic) MPVolumeController *systemAudioVolumeController; // @synthesize systemAudioVolumeController=_systemAudioVolumeController;
@property(readonly, nonatomic) MPVolumeController *systemMusicVolumeController; // @synthesize systemMusicVolumeController=_systemMusicVolumeController;
@property(readonly, nonatomic) MPAVRoutingController *systemAudioRoutingController; // @synthesize systemAudioRoutingController=_systemAudioRoutingController;
@property(readonly, nonatomic) MPAVRoutingController *systemMusicRoutingController; // @synthesize systemMusicRoutingController=_systemMusicRoutingController;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(readonly, nonatomic) __weak id <PBVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x000000010007ef30
- (void)_updateAppVolumeHUDAssertions;	// IMP=0x000000010007edd8
- (void)_updateApplicationStateForBundleIdentifier:(id)arg1;	// IMP=0x000000010007ec18
- (void)_updateApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000010007e098
- (_Bool)_routeIsOdeon:(id)arg1;	// IMP=0x000000010007ddf0
- (float)odeonVolumeStepForCurrentVolume:(float)arg1 isIncrementing:(_Bool)arg2;	// IMP=0x000000010007dc9c
- (_Bool)odeonActiveForRoutingController:(id)arg1;	// IMP=0x000000010007daa8
- (_Bool)enableModernVolumeController;	// IMP=0x000000010007da6c
- (void)_presentVolumeBulletinForRoutes:(id)arg1 volumeLevel:(float)arg2;	// IMP=0x000000010007d548
- (void)_updateVolume;	// IMP=0x000000010007c3f0
- (void)_setNeedsVolumeUpdate;	// IMP=0x000000010007c2dc
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000010007c238
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x000000010007c084
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000010007be18
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000010007bba4
- (void)setSystemVolumeHUDSuppressed:(_Bool)arg1 forApp:(id)arg2;	// IMP=0x000000010007b938
- (void)setVolumeNotificationsEnabled:(_Bool)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x000000010007b7c0
- (_Bool)volumeSupportedForOutputContext:(unsigned long long)arg1;	// IMP=0x000000010007b768
- (void)muteVolumeForOutputContext:(unsigned long long)arg1;	// IMP=0x000000010007b1f8
- (void)decreaseVolumeForOutputContext:(unsigned long long)arg1;	// IMP=0x000000010007ad84
- (void)increaseVolumeForOutputContext:(unsigned long long)arg1;	// IMP=0x000000010007a884
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010007a170
- (id)init;	// IMP=0x000000010007a138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
