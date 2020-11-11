//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "TVSMModuleContentViewControllerDismissalDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, NSUUID, PBSControlCenterOverlayAssertion, TVSMHomeCameraContentView, TVSMHomeCameraPageControlsView, UICollectionViewDiffableDataSource, UITapGestureRecognizer;
@protocol TVSMHomeFullScreenCameraViewControllerDelegate;

@interface TVSMHomeFullScreenCameraCollectionViewController : UICollectionViewController <TVSMModuleContentViewControllerDismissalDelegate>
{
    _Bool _useInitialCameraView;	// 8 = 0x8
    TVSMHomeCameraContentView *_initialCameraContentView;	// 16 = 0x10
    TVSMHomeCameraContentView *_finalCameraContentView;	// 24 = 0x18
    NSMutableDictionary *_homeItemsByID;	// 32 = 0x20
    id <TVSMHomeFullScreenCameraViewControllerDelegate> _dismissalDelegate;	// 40 = 0x28
    PBSControlCenterOverlayAssertion *_overlayAssertion;	// 48 = 0x30
    NSArray *_cameraItems;	// 56 = 0x38
    NSUUID *_initialCameraIdentifier;	// 64 = 0x40
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 72 = 0x48
    NSUUID *_centeredCameraIdentifier;	// 80 = 0x50
    NSMutableDictionary *_contentViewsByID;	// 88 = 0x58
    TVSMHomeCameraPageControlsView *_pageControlsView;	// 96 = 0x60
    NSTimer *_hidePageControlsViewTimer;	// 104 = 0x68
    UITapGestureRecognizer *_toggleContentViewsTapGestureRecognizer;	// 112 = 0x70
}

+ (id)_fullScreenCameraLayout;	// IMP=0x0000000000013994
- (void).cxx_destruct;	// IMP=0x0000000000014260
@property(readonly, nonatomic) UITapGestureRecognizer *toggleContentViewsTapGestureRecognizer; // @synthesize toggleContentViewsTapGestureRecognizer=_toggleContentViewsTapGestureRecognizer;
@property(readonly, nonatomic) NSTimer *hidePageControlsViewTimer; // @synthesize hidePageControlsViewTimer=_hidePageControlsViewTimer;
@property(retain, nonatomic) TVSMHomeCameraPageControlsView *pageControlsView; // @synthesize pageControlsView=_pageControlsView;
@property(retain, nonatomic) NSMutableDictionary *contentViewsByID; // @synthesize contentViewsByID=_contentViewsByID;
@property(retain, nonatomic) NSUUID *centeredCameraIdentifier; // @synthesize centeredCameraIdentifier=_centeredCameraIdentifier;
@property(nonatomic) _Bool useInitialCameraView; // @synthesize useInitialCameraView=_useInitialCameraView;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) NSUUID *initialCameraIdentifier; // @synthesize initialCameraIdentifier=_initialCameraIdentifier;
@property(readonly, nonatomic) NSArray *cameraItems; // @synthesize cameraItems=_cameraItems;
@property(readonly, nonatomic) PBSControlCenterOverlayAssertion *overlayAssertion; // @synthesize overlayAssertion=_overlayAssertion;
@property(nonatomic) __weak id <TVSMHomeFullScreenCameraViewControllerDelegate> dismissalDelegate; // @synthesize dismissalDelegate=_dismissalDelegate;
@property(retain, nonatomic) NSMutableDictionary *homeItemsByID; // @synthesize homeItemsByID=_homeItemsByID;
@property(retain, nonatomic) TVSMHomeCameraContentView *finalCameraContentView; // @synthesize finalCameraContentView=_finalCameraContentView;
@property(retain, nonatomic) TVSMHomeCameraContentView *initialCameraContentView; // @synthesize initialCameraContentView=_initialCameraContentView;
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000000001403c
- (void)_toggleContentViews:(id)arg1;	// IMP=0x0000000000013ea4
- (void)_setPageControlsViewHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000013d38
- (void)_scheduleHidePageControlsViewTimerIfNeeded;	// IMP=0x0000000000013bc0
- (void)systemMenuDidRequestDismissalWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000137f8
- (void)didPressMenu:(id)arg1;	// IMP=0x0000000000013640
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000000135b4
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000132c0
- (void)updateCameraItemsAnimated:(_Bool)arg1;	// IMP=0x0000000000012c34
- (void)updateCollectionViewWithInitialCameraView;	// IMP=0x0000000000012be8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000012ad8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000129c0
- (void)viewDidLoad;	// IMP=0x0000000000012534
- (id)initWithCameraItems:(id)arg1 focusedIdentifier:(id)arg2;	// IMP=0x00000000000123b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
