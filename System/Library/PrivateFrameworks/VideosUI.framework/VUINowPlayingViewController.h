/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVMediaControllerDelegate.h>
#import <libobjc.A.dylib/VUIPostPlayControllerDelegate.h>
#import <libobjc.A.dylib/TVMediaControllerHosting.h>

@protocol VUINowPlayingViewControllerDelegate, TVMediaControllerHosting;
@class TVMediaPlaybackManager, VUIMediaController, IKAppContext, NSArray, UIViewController, VUINowPlayingHudView, VUINowPlayingViewModel, VUIButton, VUINowPlayingSkipButtonLayout, VUIVideoAdvisoryView, VUIProductPlacementView, UITapGestureRecognizer, NSString;

@interface VUINowPlayingViewController : UIViewController <TVMediaControllerDelegate, VUIPostPlayControllerDelegate, TVMediaControllerHosting> {

	int _playbackReportToken;
	struct {
		BOOL respondsToViewWillAppear;
		BOOL respondsToViewDidAppear;
		BOOL respondsToViewWillDisappear;
		BOOL respondsToViewDidDisappear;
		BOOL respondsToEnableUIMode;
		BOOL respondsToSkipIntro;
		BOOL respondsToFromBeginning;
		BOOL respondsToMoreInfo;
		BOOL respondsToMenuPress;
		BOOL respondsToSafeAreaChange;
		BOOL respondsToUserDidInteract;
		BOOL respondsToMediaInfoDidChange;
	}  _delegateFlags;
	BOOL _showsNowPlayingHUD;
	BOOL _nowPlayingHudVisible;
	BOOL _popWhenDone;
	BOOL _waitingForPostPlayDocumentUpdate;
	BOOL _waitingForPostPlayDocumentUpdateToShowPostPlay;
	id<VUINowPlayingViewControllerDelegate> _delegate;
	TVMediaPlaybackManager* _mediaPlaybackManager;
	VUIMediaController* _mediaController;
	unsigned long long _currentUI;
	IKAppContext* _appContext;
	NSArray* _enabledUIModes;
	UIViewController*<TVMediaControllerHosting> _mediaControllerHost;
	VUINowPlayingHudView* _nowPlayingHudView;
	VUINowPlayingViewModel* _viewModel;
	VUIButton* _skipIntroButton;
	UIViewController* _postPlayViewController;
	unsigned long long _playbackContext;
	VUINowPlayingSkipButtonLayout* _skipButtonLayout;
	VUIVideoAdvisoryView* _ratingView;
	VUIProductPlacementView* _productPlacementView;
	UITapGestureRecognizer* _internalMenuGestureRecognizer;
	unsigned long long _disappearanceReason;

}

@property (nonatomic,retain) IKAppContext * appContext;                                                           //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) TVMediaPlaybackManager * mediaPlaybackManager;                                       //@synthesize mediaPlaybackManager=_mediaPlaybackManager - In the implementation block
@property (nonatomic,copy) NSArray * enabledUIModes;                                                              //@synthesize enabledUIModes=_enabledUIModes - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<TVMediaControllerHosting> mediaControllerHost;              //@synthesize mediaControllerHost=_mediaControllerHost - In the implementation block
@property (nonatomic,retain) VUIMediaController * mediaController;                                                //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,retain) VUINowPlayingHudView * nowPlayingHudView;                                            //@synthesize nowPlayingHudView=_nowPlayingHudView - In the implementation block
@property (nonatomic,retain) VUINowPlayingViewModel * viewModel;                                                  //@synthesize viewModel=_viewModel - In the implementation block
@property (getter=isNowPlayingHudVisible,nonatomic,readonly) BOOL nowPlayingHudVisible;                           //@synthesize nowPlayingHudVisible=_nowPlayingHudVisible - In the implementation block
@property (assign,getter=shouldPopWhenDone,nonatomic) BOOL popWhenDone;                                           //@synthesize popWhenDone=_popWhenDone - In the implementation block
@property (nonatomic,retain) VUIButton * skipIntroButton;                                                         //@synthesize skipIntroButton=_skipIntroButton - In the implementation block
@property (nonatomic,retain) UIViewController * postPlayViewController;                                           //@synthesize postPlayViewController=_postPlayViewController - In the implementation block
@property (assign,nonatomic) unsigned long long playbackContext;                                                  //@synthesize playbackContext=_playbackContext - In the implementation block
@property (nonatomic,retain) VUINowPlayingSkipButtonLayout * skipButtonLayout;                                    //@synthesize skipButtonLayout=_skipButtonLayout - In the implementation block
@property (nonatomic,retain) VUIVideoAdvisoryView * ratingView;                                                   //@synthesize ratingView=_ratingView - In the implementation block
@property (nonatomic,retain) VUIProductPlacementView * productPlacementView;                                      //@synthesize productPlacementView=_productPlacementView - In the implementation block
@property (assign,getter=hasAlreadyShownAdvisory,nonatomic) BOOL alreadyShownAdvisory; 
@property (assign,nonatomic) BOOL waitingForPostPlayDocumentUpdate;                                               //@synthesize waitingForPostPlayDocumentUpdate=_waitingForPostPlayDocumentUpdate - In the implementation block
@property (assign,nonatomic) BOOL waitingForPostPlayDocumentUpdateToShowPostPlay;                                 //@synthesize waitingForPostPlayDocumentUpdateToShowPostPlay=_waitingForPostPlayDocumentUpdateToShowPostPlay - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * internalMenuGestureRecognizer;                              //@synthesize internalMenuGestureRecognizer=_internalMenuGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long disappearanceReason;                                              //@synthesize disappearanceReason=_disappearanceReason - In the implementation block
@property (assign,nonatomic) unsigned long long currentUI;                                                        //@synthesize currentUI=_currentUI - In the implementation block
@property (nonatomic,readonly) NSString * canonicalID; 
@property (nonatomic,readonly) NSString * showCanonicalID; 
@property (assign,nonatomic,__weak) id<VUINowPlayingViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsNowPlayingHUD;                                                             //@synthesize showsNowPlayingHUD=_showsNowPlayingHUD - In the implementation block
@property (assign,nonatomic) BOOL showsProductPageButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<VUINowPlayingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUINowPlayingViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(unsigned long long)playbackContext;
-(void)setPlaybackContext:(unsigned long long)arg1 ;
-(VUIMediaController *)mediaController;
-(VUINowPlayingViewModel *)viewModel;
-(void)_menuPressed:(id)arg1 ;
-(void)setViewModel:(VUINowPlayingViewModel *)arg1 ;
-(void)setMediaController:(VUIMediaController *)arg1 ;
-(NSString *)canonicalID;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(TVMediaPlaybackManager *)mediaPlaybackManager;
-(void)setMediaPlaybackManager:(TVMediaPlaybackManager *)arg1 ;
-(void)_hostMediaControllerIfPossible;
-(void)didFinishPlaybackForMediaController:(id)arg1 ;
-(void)stateDidChangeForMediaController:(id)arg1 ;
-(void)mediaController:(id)arg1 shouldShowStill:(inout BOOL*)arg2 afterStoppingForReason:(long long)arg3 ;
-(id)relinquishOwnership;
-(void)adoptMediaController:(id)arg1 ;
-(void)_initializeWithInfo:(id)arg1 restoringAVPlayerController:(BOOL)arg2 ;
-(void)_removeViewModelObservers;
-(void)transferMediaControllerIfNeeded;
-(void)_addGesutreRecognizersIfNeeded;
-(void)setDisappearanceReason:(unsigned long long)arg1 ;
-(unsigned long long)disappearanceReason;
-(void)_notifyDelegateOfSafeAreaChange;
-(VUIButton *)skipIntroButton;
-(CGRect)_skipIntroButtonFrame;
-(VUIVideoAdvisoryView *)ratingView;
-(VUIProductPlacementView *)productPlacementView;
-(VUINowPlayingHudView *)nowPlayingHudView;
-(UIViewController *)postPlayViewController;
-(BOOL)_isPostPlayVisible;
-(BOOL)_isSkipIntroVisible;
-(NSString *)showCanonicalID;
-(void)_removeGestureRecognizersIfNeeded;
-(void)_configureViewModel;
-(void)_createViewModelPostPlayViewController:(id)arg1 ;
-(void)setWaitingForPostPlayDocumentUpdate:(BOOL)arg1 ;
-(void)_sendPostPlayShouldUpdateNotificationExcludingCanonicals:(id)arg1 ;
-(void)_addMenuGestureRecognizerIfNeeded;
-(void)_removeMenuGestureRecognizerIfNeeded;
-(UIViewController*<TVMediaControllerHosting>)mediaControllerHost;
-(void)_createAndConfigureNowPlayingHudView;
-(UIEdgeInsets)_nowPlayingHudSafeAreaInset:(BOOL)arg1 ;
-(UITapGestureRecognizer *)internalMenuGestureRecognizer;
-(void)resetAutoPlayBingeWatchingQualifications;
-(void)setNowPlayingHudView:(VUINowPlayingHudView *)arg1 ;
-(void)setCurrentUI:(unsigned long long)arg1 ;
-(void)_recordImpressionsForPostPlayViewController;
-(void)setPostPlayViewController:(UIViewController *)arg1 ;
-(UIEdgeInsets)_postPlaySafeAreaInset:(BOOL)arg1 ;
-(BOOL)waitingForPostPlayDocumentUpdate;
-(void)setWaitingForPostPlayDocumentUpdateToShowPostPlay:(BOOL)arg1 ;
-(void)setRatingView:(VUIVideoAdvisoryView *)arg1 ;
-(void)setAlreadyShownAdvisory:(BOOL)arg1 ;
-(BOOL)hasAlreadyShownAdvisory;
-(void)setProductPlacementView:(VUIProductPlacementView *)arg1 ;
-(void)setSkipIntroButton:(VUIButton *)arg1 ;
-(UIEdgeInsets)_skipIntroSafeAreaInset:(BOOL)arg1 ;
-(BOOL)_isCurrentMediaTVShow;
-(id)_documentRefContextDataForCurrentMediaType;
-(BOOL)_canContinuePlaybackInWatchNow;
-(void)showPostPlay:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_showPostPlayControllerIfNeeded;
-(void)_initializeForLibraryPlaybackWith:(id)arg1 restoringAVPlayerController:(BOOL)arg2 ;
-(void)_initializeForExtrasPlaybackWith:(id)arg1 restoringAVPlayerController:(BOOL)arg2 ;
-(void)_initializeForGenericPlaybackWith:(id)arg1 restoringAVPlayerController:(BOOL)arg2 ;
-(void)_createPostPlayViewController;
-(BOOL)_allowsBackgroundPlaybackInWatchThroughOverride;
-(BOOL)_isNowPlayingHudVisible;
-(void)_addSwipeUpGestureRecognizerIfNeeded;
-(void)_removeSwipeUpGestureRecognizerIfNeeded;
-(void)setInternalMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)_allowsManualPostPlayInvocation;
-(BOOL)showsProductPageButton;
-(void)_addViewModelObservers;
-(VUINowPlayingSkipButtonLayout *)skipButtonLayout;
-(BOOL)_isCurrentMediaMovie;
-(BOOL)waitingForPostPlayDocumentUpdateToShowPostPlay;
-(void)_updatePostPlayContextDataForCurrentMediaType:(id)arg1 excludingCanonicals:(id)arg2 updateEvent:(BOOL)arg3 ;
-(BOOL)_canCreatePostPlayController;
-(void)userDidInteract:(id)arg1 ;
-(void)mediaInfoDidChangeTo:(id)arg1 canPlay:(BOOL)arg2 wasAutoPlayed:(BOOL)arg3 ;
-(void)postPlayControllerDidUpdate;
-(void)postPlayControllerReadyToBeDisplayed;
-(id)initWithNowPlayingInfo:(id)arg1 restoringAVPlayerController:(BOOL)arg2 ;
-(void)prepareForPostPlayExcludingCanonicals:(id)arg1 ;
-(void)setShowsNowPlayingHUD:(BOOL)arg1 ;
-(void)setShowsProductPageButton:(BOOL)arg1 ;
-(void)showNowPlayingHud:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showAdvisory:(BOOL)arg1 image:(id)arg2 animated:(BOOL)arg3 ;
-(void)showProductPlacement:(BOOL)arg1 image:(id)arg2 animated:(BOOL)arg3 ;
-(void)showSkipIntro:(BOOL)arg1 localizedTitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)showStillWatchingAlertWithFinishedHandler:(/*^block*/id)arg1 ;
-(void)showMoreInfo;
-(id)_mediaInfoFromMediaItem:(id)arg1 ;
-(id)_stillWatchingAlertDurationOverride;
-(BOOL)showsNowPlayingHUD;
-(unsigned long long)currentUI;
-(NSArray *)enabledUIModes;
-(void)setEnabledUIModes:(NSArray *)arg1 ;
-(void)setMediaControllerHost:(UIViewController*<TVMediaControllerHosting>)arg1 ;
-(BOOL)isNowPlayingHudVisible;
-(BOOL)shouldPopWhenDone;
-(void)setPopWhenDone:(BOOL)arg1 ;
-(void)setSkipButtonLayout:(VUINowPlayingSkipButtonLayout *)arg1 ;
@end

