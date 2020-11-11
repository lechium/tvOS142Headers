//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MPAssetKeyDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString, NSTimer, PXDisplayAssetCountsByPlaybackStyle, TVPMarimbaView, TVPSlideshowUtilities, UIActivityIndicatorView, UITableView, UITapGestureRecognizer, UIView, UIVisualEffectView;
@protocol OS_dispatch_source;

@interface TVPSlideshowMarimbaViewController : UIViewController <MPAssetKeyDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _displaysTransitionStyleOptions;	// 8 = 0x8
    _Bool _displayThemeOptions;	// 9 = 0x9
    _Bool _didPauseMarimbaRenderer;	// 10 = 0xa
    _Bool _didStartSlideshow;	// 11 = 0xb
    _Bool _didReachSlideshowEnd;	// 12 = 0xc
    NSDictionary *_options;	// 16 = 0x10
    long long _slideshowStartIndex;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    TVPMarimbaView *_marimbaView;	// 40 = 0x28
    UIVisualEffectView *_blurBackgroundView;	// 48 = 0x30
    UITableView *_slideshowOptionsView;	// 56 = 0x38
    UIView *_headerView;	// 64 = 0x40
    UIActivityIndicatorView *_preloadSpinnerView;	// 72 = 0x48
    UITapGestureRecognizer *_menuGestureRecognizer;	// 80 = 0x50
    UITapGestureRecognizer *_playPauseGestureRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_leftButtonRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_rightButtonRecognizer;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_assetsRefreshTimer;	// 112 = 0x70
    NSArray *_photoAssets;	// 120 = 0x78
    PXDisplayAssetCountsByPlaybackStyle *_assetCountsByPlaybackStyle;	// 128 = 0x80
    NSArray *_slideshowThemeSettings;	// 136 = 0x88
    NSArray *_slideshowTransitionSettings;	// 144 = 0x90
    NSDictionary *_assetKeysToAssetPaths;	// 152 = 0x98
    NSDictionary *_themeParameters;	// 160 = 0xa0
    NSString *_focusedThemeForPreview;	// 168 = 0xa8
    TVPSlideshowUtilities *_slideshowUtilites;	// 176 = 0xb0
    long long _initialImagePrefetchCount;	// 184 = 0xb8
    long long _indexOfNextImageToPrefetch;	// 192 = 0xc0
    long long _minImageFetchPreloadGap;	// 200 = 0xc8
    long long _maxImageBatchPreloadCount;	// 208 = 0xd0
    NSTimer *_themeTimer;	// 216 = 0xd8
    NSString *_slideshowStyle;	// 224 = 0xe0
}

+ (id)_photoAssetsFromPHAssets:(id)arg1;	// IMP=0x00000001000377d8
- (void).cxx_destruct;	// IMP=0x00000001000396a0
@property(copy, nonatomic) NSString *slideshowStyle; // @synthesize slideshowStyle=_slideshowStyle;
@property(nonatomic) _Bool didReachSlideshowEnd; // @synthesize didReachSlideshowEnd=_didReachSlideshowEnd;
@property(nonatomic) _Bool didStartSlideshow; // @synthesize didStartSlideshow=_didStartSlideshow;
@property(nonatomic) _Bool didPauseMarimbaRenderer; // @synthesize didPauseMarimbaRenderer=_didPauseMarimbaRenderer;
@property(nonatomic) _Bool displayThemeOptions; // @synthesize displayThemeOptions=_displayThemeOptions;
@property(retain, nonatomic) NSTimer *themeTimer; // @synthesize themeTimer=_themeTimer;
@property(nonatomic) long long maxImageBatchPreloadCount; // @synthesize maxImageBatchPreloadCount=_maxImageBatchPreloadCount;
@property(nonatomic) long long minImageFetchPreloadGap; // @synthesize minImageFetchPreloadGap=_minImageFetchPreloadGap;
@property(nonatomic) long long indexOfNextImageToPrefetch; // @synthesize indexOfNextImageToPrefetch=_indexOfNextImageToPrefetch;
@property(nonatomic) long long initialImagePrefetchCount; // @synthesize initialImagePrefetchCount=_initialImagePrefetchCount;
@property(retain, nonatomic) TVPSlideshowUtilities *slideshowUtilites; // @synthesize slideshowUtilites=_slideshowUtilites;
@property(copy, nonatomic) NSString *focusedThemeForPreview; // @synthesize focusedThemeForPreview=_focusedThemeForPreview;
@property(copy, nonatomic) NSDictionary *themeParameters; // @synthesize themeParameters=_themeParameters;
@property(copy, nonatomic) NSDictionary *assetKeysToAssetPaths; // @synthesize assetKeysToAssetPaths=_assetKeysToAssetPaths;
@property(copy, nonatomic) NSArray *slideshowTransitionSettings; // @synthesize slideshowTransitionSettings=_slideshowTransitionSettings;
@property(copy, nonatomic) NSArray *slideshowThemeSettings; // @synthesize slideshowThemeSettings=_slideshowThemeSettings;
@property(copy, nonatomic) PXDisplayAssetCountsByPlaybackStyle *assetCountsByPlaybackStyle; // @synthesize assetCountsByPlaybackStyle=_assetCountsByPlaybackStyle;
@property(copy, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assetsRefreshTimer; // @synthesize assetsRefreshTimer=_assetsRefreshTimer;
@property(retain, nonatomic) UITapGestureRecognizer *rightButtonRecognizer; // @synthesize rightButtonRecognizer=_rightButtonRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftButtonRecognizer; // @synthesize leftButtonRecognizer=_leftButtonRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *playPauseGestureRecognizer; // @synthesize playPauseGestureRecognizer=_playPauseGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UIActivityIndicatorView *preloadSpinnerView; // @synthesize preloadSpinnerView=_preloadSpinnerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *slideshowOptionsView; // @synthesize slideshowOptionsView=_slideshowOptionsView;
@property(retain, nonatomic) UIVisualEffectView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) TVPMarimbaView *marimbaView; // @synthesize marimbaView=_marimbaView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long slideshowStartIndex; // @synthesize slideshowStartIndex=_slideshowStartIndex;
@property(nonatomic) _Bool displaysTransitionStyleOptions; // @synthesize displaysTransitionStyleOptions=_displaysTransitionStyleOptions;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void)_initializeSlideshowMarimbaParametersWithOptions:(id)arg1 displayThemeOptions:(_Bool)arg2;	// IMP=0x00000001000387bc
- (void)_cancelExistingTimer;	// IMP=0x0000000100038770
- (struct CGSize)_getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x00000001000386b8
- (void)_preloadImagesForAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037e40
- (id)_defaultImageRequestOptions;	// IMP=0x0000000100037ddc
- (void)_updateMarimbaDocumentWithAddedAssets:(id)arg1;	// IMP=0x00000001000379b0
- (void)_reorderAssets;	// IMP=0x00000001000375f0
- (long long)_indexOfAssetPathInOrderedAssets:(id)arg1;	// IMP=0x0000000100037528
- (void)_startSlideshow;	// IMP=0x0000000100037308
- (void)_fingerTouchAction:(id)arg1;	// IMP=0x0000000100037090
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x0000000100036e04
- (void)_dismissImagePreloadSpinnerView;	// IMP=0x0000000100036db8
- (void)_displayImagePreloadSpinnerView;	// IMP=0x0000000100036c80
- (void)_refreshMarimbaPreviewWithPhotoAssets:(id)arg1;	// IMP=0x00000001000369e4
- (void)_pauseMarimbaRenderer;	// IMP=0x0000000100036970
- (void)_unpauseMarimbaRenderer;	// IMP=0x00000001000368c8
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000001000366d0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100036298
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100035dcc
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100035d30
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100035c90
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100035c5c
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000100035c50
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100035c44
- (void)_marimbaSlideshowPlaybackFinished:(id)arg1;	// IMP=0x0000000100035be0
- (void)_usedAllPathsNotification:(id)arg1;	// IMP=0x0000000100035b28
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x0000000100035b20
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x0000000100035b14
- (id)absolutePathForAssetKey:(id)arg1;	// IMP=0x000000010003515c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100035110
- (void)_rightAction:(id)arg1;	// IMP=0x000000010003508c
- (void)_leftAction:(id)arg1;	// IMP=0x0000000100035008
- (void)_playPauseAction:(id)arg1;	// IMP=0x0000000100034f74
- (void)_menuAction:(id)arg1;	// IMP=0x0000000100034ed0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100034e10
- (void)dealloc;	// IMP=0x0000000100034d98
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100034c84
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100034b14
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100034a8c
- (void)viewDidLoad;	// IMP=0x00000001000343b0
- (void)loadView;	// IMP=0x0000000100033d98
- (void)refreshPhotoAssets:(id)arg1;	// IMP=0x0000000100033970
- (void)immediatelyRefreshPhotoAssets:(id)arg1;	// IMP=0x0000000100033798
- (id)init;	// IMP=0x000000010003371c
- (id)initWithPhotoAssets:(id)arg1 displayThemeOptions:(_Bool)arg2;	// IMP=0x0000000100033660
- (id)initWithPhotoAssets:(id)arg1;	// IMP=0x0000000100033650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

