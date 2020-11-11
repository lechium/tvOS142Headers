//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PBApplicationSceneTransitionView.h"

#import "PBApplicationSceneLayoutElement-Protocol.h"
#import "PBSceneHandleObserver-Protocol.h"
#import "PBUserProfileApplicationManagerObserver-Protocol.h"

@class NSString, PBSceneHandle, PBUserSwitchingShroudView, UIApplicationSceneDeactivationAssertion;
@protocol PBApplicationSceneViewDelegate;

@interface PBApplicationSceneView : PBApplicationSceneTransitionView <PBSceneHandleObserver, PBUserProfileApplicationManagerObserver, PBApplicationSceneLayoutElement>
{
    _Bool _wallpaperEnabled;	// 8 = 0x8
    _Bool _ready;	// 9 = 0x9
    _Bool _eligibleForFocus;	// 10 = 0xa
    _Bool _allowSnapshots;	// 11 = 0xb
    _Bool _supressUserSwitchShroudDismissal;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    PBSceneHandle *_sceneHandle;	// 32 = 0x20
    id <PBApplicationSceneViewDelegate> _delegate;	// 40 = 0x28
    unsigned long long _presentationMode;	// 48 = 0x30
    unsigned long long _effectivePresentationMode;	// 56 = 0x38
    PBUserSwitchingShroudView *_userSwitchingShroudView;	// 64 = 0x40
    UIApplicationSceneDeactivationAssertion *_userSwitchingDeactivationAssertion;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010022ac70
@property(readonly, nonatomic) UIApplicationSceneDeactivationAssertion *userSwitchingDeactivationAssertion; // @synthesize userSwitchingDeactivationAssertion=_userSwitchingDeactivationAssertion;
@property(nonatomic) _Bool supressUserSwitchShroudDismissal; // @synthesize supressUserSwitchShroudDismissal=_supressUserSwitchShroudDismissal;
@property(readonly, nonatomic) PBUserSwitchingShroudView *userSwitchingShroudView; // @synthesize userSwitchingShroudView=_userSwitchingShroudView;
@property(nonatomic) _Bool allowSnapshots; // @synthesize allowSnapshots=_allowSnapshots;
@property(nonatomic, getter=isEligibleForFocus) _Bool eligibleForFocus; // @synthesize eligibleForFocus=_eligibleForFocus;
@property(readonly, nonatomic) unsigned long long effectivePresentationMode; // @synthesize effectivePresentationMode=_effectivePresentationMode;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) __weak id <PBApplicationSceneViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic, getter=isWallpaperEnabled) _Bool wallpaperEnabled; // @synthesize wallpaperEnabled=_wallpaperEnabled;
@property(readonly, nonatomic) PBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_updateFocusEligibilityChanged:(_Bool)arg1;	// IMP=0x000000010022a598
- (void)_updateFocusEligibility;	// IMP=0x000000010022a55c
- (id)_viewForPresentationMode:(unsigned long long)arg1 withCurrentContentView:(id)arg2;	// IMP=0x0000000100229a30
- (id)_viewForPresentationMode:(unsigned long long)arg1;	// IMP=0x00000001002297b8
- (unsigned long long)_bestAvailableModeForMode:(unsigned long long)arg1;	// IMP=0x00000001002296b4
- (void)_updatePresentationModeWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002292e4
- (void)userProfileApplicationManager:(id)arg1 didUpdateApplicationsWithIdentifiers:(id)arg2;	// IMP=0x0000000100229124
- (void)userProfileApplicationManager:(id)arg1 willUpdateApplicationsWithIdentifiers:(id)arg2;	// IMP=0x0000000100228f94
- (void)_relinquishSwitchingUsersDeactivationAssertion;	// IMP=0x0000000100228f2c
- (void)_acquireSwitchingUsersDeactivationAssertionIfNeeded;	// IMP=0x0000000100228c5c
- (void)_removeUserSwitchingShroudViewAnimated:(_Bool)arg1;	// IMP=0x0000000100228aa0
- (void)_addUserSwitchingShroudViewAnimated:(_Bool)arg1;	// IMP=0x00000001002282b8
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x0000000100227f0c
- (void)sceneHandle:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x0000000100227d98
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x0000000100227cf4
- (void)invalidateScenePresentation;	// IMP=0x0000000100227b28
- (_Bool)canBecomeFocused;	// IMP=0x0000000100227a44
- (void)setPresentationMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100227980
- (void)didAddSubview:(id)arg1;	// IMP=0x0000000100227814
- (void)didMoveToWindow;	// IMP=0x0000000100227654
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000010022748c
- (void)dealloc;	// IMP=0x00000001002273b8
- (id)initWithSceneHandle:(id)arg1 layoutLevel:(long long)arg2;	// IMP=0x000000010022713c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002270e4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010022709c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

