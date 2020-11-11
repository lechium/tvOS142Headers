//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HBAppGridViewControllerDelegate-Protocol.h"
#import "HBFolderObserver-Protocol.h"
#import "HBRootFolderProvider-Protocol.h"
#import "HBUILaunchAnimationEnvironment-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class HBApp, HBAppGridViewController, HBFolder, HBFolderAnimationView, NSString, UIFocusGuide, UIPageControl, UITextField, UIView, _HBFolderClosingView;
@protocol HBRootFolderProvider;

@interface HBFolderViewController : UIViewController <HBAppGridViewControllerDelegate, HBFolderObserver, MCProfileConnectionObserver, UITextFieldDelegate, HBRootFolderProvider, HBUILaunchAnimationEnvironment>
{
    _Bool _closing;	// 8 = 0x8
    _Bool _resignTransitionToLeft;	// 9 = 0x9
    HBFolder *_folder;	// 16 = 0x10
    id <HBRootFolderProvider> _rootFolderProvider;	// 24 = 0x18
    HBAppGridViewController *_gridViewController;	// 32 = 0x20
    UIView *_folderStyleView;	// 40 = 0x28
    UIView *_folderContainerView;	// 48 = 0x30
    UITextField *_renameFolderTextField;	// 56 = 0x38
    UIFocusGuide *_leadingRenameFolderTextFieldFocusGuide;	// 64 = 0x40
    UIFocusGuide *_trailingRenameFolderTextFieldFocusGuide;	// 72 = 0x48
    UIPageControl *_pageControl;	// 80 = 0x50
    UIView *_animationContainerView;	// 88 = 0x58
    UIView *_animationBackgroundView;	// 96 = 0x60
    HBFolderAnimationView *_animationImageView;	// 104 = 0x68
    HBApp *_transitionApp;	// 112 = 0x70
    UIView *_transitionView;	// 120 = 0x78
    _HBFolderClosingView *_focusSink;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100080838
@property(readonly, nonatomic) _HBFolderClosingView *focusSink; // @synthesize focusSink=_focusSink;
@property(nonatomic, getter=isResignTransitionToLeft) _Bool resignTransitionToLeft; // @synthesize resignTransitionToLeft=_resignTransitionToLeft;
@property(retain, nonatomic) UIView *transitionView; // @synthesize transitionView=_transitionView;
@property(retain, nonatomic) HBApp *transitionApp; // @synthesize transitionApp=_transitionApp;
@property(nonatomic, getter=isClosing) _Bool closing; // @synthesize closing=_closing;
@property(retain, nonatomic) HBFolderAnimationView *animationImageView; // @synthesize animationImageView=_animationImageView;
@property(retain, nonatomic) UIView *animationBackgroundView; // @synthesize animationBackgroundView=_animationBackgroundView;
@property(retain, nonatomic) UIView *animationContainerView; // @synthesize animationContainerView=_animationContainerView;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIFocusGuide *trailingRenameFolderTextFieldFocusGuide; // @synthesize trailingRenameFolderTextFieldFocusGuide=_trailingRenameFolderTextFieldFocusGuide;
@property(readonly, nonatomic) UIFocusGuide *leadingRenameFolderTextFieldFocusGuide; // @synthesize leadingRenameFolderTextFieldFocusGuide=_leadingRenameFolderTextFieldFocusGuide;
@property(readonly, nonatomic) UITextField *renameFolderTextField; // @synthesize renameFolderTextField=_renameFolderTextField;
@property(retain, nonatomic) UIView *folderContainerView; // @synthesize folderContainerView=_folderContainerView;
@property(retain, nonatomic) UIView *folderStyleView; // @synthesize folderStyleView=_folderStyleView;
@property(retain, nonatomic) HBAppGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(nonatomic) __weak id <HBRootFolderProvider> rootFolderProvider; // @synthesize rootFolderProvider=_rootFolderProvider;
@property(retain, nonatomic) HBFolder *folder; // @synthesize folder=_folder;
- (id)nextLaunchAnimationEnvironments;	// IMP=0x00000001000805a8
- (id)gridViewControllerSourceViewForLaunchAnimation:(id)arg1;	// IMP=0x000000010008059c
- (void)_updatePageControlPagesCount;	// IMP=0x000000010008050c
- (void)_close;	// IMP=0x00000001000801d4
- (void)_folderCloseAction:(id)arg1;	// IMP=0x0000000100080140
@property(readonly, nonatomic) HBFolder *rootFolder;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007fc78
- (id)preferredFocusEnvironments;	// IMP=0x000000010007fb78
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000010007faa0
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x000000010007f9c8
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010007f9bc
- (void)itemsDidChange:(id)arg1;	// IMP=0x000000010007f8f0
- (void)appGridViewController:(id)arg1 didUpdateFocusInContext:(CDStruct_334d6f95)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010007f7f0
- (void)gridViewControllerEditingStateChanged:(id)arg1;	// IMP=0x000000010007f79c
- (void)viewDidLoad;	// IMP=0x000000010007e5a8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010007e530
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007e4b8
- (void)zoomResignItemTransitionAnimationComplete:(id)arg1;	// IMP=0x000000010007e390
- (void)applyZoomResignItemTransitionAnimationEndPositions:(struct CGPoint)arg1;	// IMP=0x000000010007e380
- (void)prepareZoomResignAnimationWithTransitionApp:(id)arg1 transitionView:(id)arg2 resignTransitionToLeft:(_Bool)arg3;	// IMP=0x000000010007e11c
- (id)_iconImagesForZoomAnimation;	// IMP=0x000000010007e10c
- (id)_iconImagesForZoomAnimationExcludingApps:(id)arg1;	// IMP=0x000000010007ddc0
- (void)zoomResignAnimationComplete;	// IMP=0x000000010007dd40
- (void)applyZoomResignAnimationEndPositions:(struct CGPoint)arg1;	// IMP=0x000000010007dd30
- (void)_applyZoomResignAnimationEndPositions:(struct CGPoint)arg1 endsInFocusedState:(_Bool)arg2;	// IMP=0x000000010007d9d0
- (void)prepareZoomResignAnimation;	// IMP=0x000000010007d984
- (void)_prepareZoomResignAnimationWithImages:(id)arg1;	// IMP=0x000000010007d638
- (void)zoomLaunchItemTransitionAnimationComplete;	// IMP=0x000000010007d560
- (void)applyZoomLaunchItemTransitionAnimationEndPositions;	// IMP=0x000000010007d554
- (void)prepareZoomLaunchAnimationWithTransitionApp:(id)arg1 withTransitionView:(id)arg2 cellConfiguration:(id)arg3 initialPosition:(struct CGPoint)arg4;	// IMP=0x000000010007d350
- (void)fadeLaunchItemTransitionAnimationCompleteWithApp:(id)arg1 withTransitionView:(id)arg2;	// IMP=0x000000010007d2c8
- (void)zoomLaunchAnimationComplete;	// IMP=0x000000010007d2bc
- (void)_zoomLaunchAnimationComplete;	// IMP=0x000000010007cfec
- (void)applyZoomLaunchAnimationEndPositions;	// IMP=0x000000010007cbd4
- (void)prepareZoomLaunchAnimationWithCellConfiguration:(id)arg1 initialPosition:(struct CGPoint)arg2 scale:(double)arg3;	// IMP=0x000000010007caa0
- (void)_prepareZoomLaunchAnimationWithInitialPosition:(struct CGPoint)arg1 cellConfiguration:(id)arg2;	// IMP=0x000000010007c5bc
- (void)dealloc;	// IMP=0x000000010007c560
- (id)initWithFolder:(id)arg1;	// IMP=0x000000010007c34c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007c33c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010007c32c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
