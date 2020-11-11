//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"

@class NSString, PBSystemOverlayController, PBVolumeHUDViewController;
@protocol OS_dispatch_source;

@interface PBVolumeHUDManager : NSObject <PBSystemOverlayControllerDelegate, PBInstanceDependable>
{
    _Bool _dismissalStarted;	// 8 = 0x8
    _Bool _dismissalInterrupted;	// 9 = 0x9
    _Bool _volumeUpButtonIsDown;	// 10 = 0xa
    _Bool _volumeDownButtonIsDown;	// 11 = 0xb
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    PBVolumeHUDViewController *_volumeHUDViewController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dismissalTimer;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001001b8c4c
+ (id)dependencyDescription;	// IMP=0x00000001001b8aa4
- (void).cxx_destruct;	// IMP=0x00000001001ba028
@property(nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
@property(nonatomic) _Bool dismissalInterrupted; // @synthesize dismissalInterrupted=_dismissalInterrupted;
@property(nonatomic) _Bool dismissalStarted; // @synthesize dismissalStarted=_dismissalStarted;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(readonly, nonatomic) PBVolumeHUDViewController *volumeHUDViewController; // @synthesize volumeHUDViewController=_volumeHUDViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (id)glyphNameForRouteType:(long long)arg1;	// IMP=0x00000001001b9c8c
- (void)cancelDismissalTimer;	// IMP=0x00000001001b9c40
- (void)startDismissalTimer;	// IMP=0x00000001001b9a8c
- (void)dismissVolumeHUD;	// IMP=0x00000001001b97c4
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x00000001001b96b0
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x00000001001b95d0
- (void)showVolumeHUDWithImage:(id)arg1 level:(id)arg2;	// IMP=0x00000001001b9128
- (void)noteVolumeDownWasHit:(_Bool)arg1;	// IMP=0x00000001001b90a0
- (void)noteVolumeUpWasHit:(_Bool)arg1;	// IMP=0x00000001001b9018
- (_Bool)isPresenting;	// IMP=0x00000001001b8fd8
- (id)init;	// IMP=0x00000001001b8d4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

