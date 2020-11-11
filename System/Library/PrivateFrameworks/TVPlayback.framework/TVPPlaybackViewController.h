/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVPlayback/TVPVideoPlayerViewControllerDelegate.h>
#import <TVPlayback/TVPPlaybackViewControllerDelegate.h>

@protocol TVPPlayback, TVPPlaybackViewControllerDelegate;
@class NSObject, MPAVRoute, NSTimer, TVPHardwareButtonEventManager, NSString;

@interface TVPPlaybackViewController : UIViewController <TVPVideoPlayerViewControllerDelegate, TVPPlaybackViewControllerDelegate> {

	BOOL _showsTitleWhileLoading;
	BOOL _isRadioPlayback;
	BOOL _isIdleScreen;
	BOOL _allowDefaultMenuButtonBehavior;
	BOOL _popWhenPlayerStops;
	BOOL _isMusicPlaylist;
	BOOL _allowsSkipping;
	BOOL _foregrounded;
	BOOL _showsInfoMetadataSubpanel;
	BOOL _invalidatePlayerWhenDone;
	BOOL _startedPlaying;
	BOOL _hasBeenRemovedFromParentViewController;
	NSObject*<TVPPlayback> _player;
	long long _initialPlaybackType;
	long long _resumeMenuOption;
	double _startTime;
	id<TVPPlaybackViewControllerDelegate> _playbackDelegate;
	MPAVRoute* _endpointRoute;
	NSTimer* _playbackLimitTimer;
	TVPHardwareButtonEventManager* _buttonEventManager;

}

@property (assign,nonatomic) BOOL invalidatePlayerWhenDone;                                              //@synthesize invalidatePlayerWhenDone=_invalidatePlayerWhenDone - In the implementation block
@property (nonatomic,retain) NSObject*<TVPPlayback> player;                                              //@synthesize player=_player - In the implementation block
@property (assign,getter=hasStartedPlaying,nonatomic) BOOL startedPlaying;                               //@synthesize startedPlaying=_startedPlaying - In the implementation block
@property (nonatomic,retain) NSTimer * playbackLimitTimer;                                               //@synthesize playbackLimitTimer=_playbackLimitTimer - In the implementation block
@property (assign,nonatomic) BOOL hasBeenRemovedFromParentViewController;                                //@synthesize hasBeenRemovedFromParentViewController=_hasBeenRemovedFromParentViewController - In the implementation block
@property (nonatomic,retain) TVPHardwareButtonEventManager * buttonEventManager;                         //@synthesize buttonEventManager=_buttonEventManager - In the implementation block
@property (assign,getter=isForegrounded,nonatomic) BOOL foregrounded;                                    //@synthesize foregrounded=_foregrounded - In the implementation block
@property (nonatomic,readonly) long long initialPlaybackType;                                            //@synthesize initialPlaybackType=_initialPlaybackType - In the implementation block
@property (assign,nonatomic) long long resumeMenuOption;                                                 //@synthesize resumeMenuOption=_resumeMenuOption - In the implementation block
@property (assign,nonatomic) double startTime;                                                           //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL showsTitleWhileLoading;                                                //@synthesize showsTitleWhileLoading=_showsTitleWhileLoading - In the implementation block
@property (assign,nonatomic) BOOL isRadioPlayback;                                                       //@synthesize isRadioPlayback=_isRadioPlayback - In the implementation block
@property (assign,nonatomic,__weak) id<TVPPlaybackViewControllerDelegate> playbackDelegate;              //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (assign,nonatomic) BOOL isIdleScreen;                                                          //@synthesize isIdleScreen=_isIdleScreen - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultMenuButtonBehavior;                                        //@synthesize allowDefaultMenuButtonBehavior=_allowDefaultMenuButtonBehavior - In the implementation block
@property (assign,nonatomic) BOOL popWhenPlayerStops;                                                    //@synthesize popWhenPlayerStops=_popWhenPlayerStops - In the implementation block
@property (assign,nonatomic) BOOL isMusicPlaylist;                                                       //@synthesize isMusicPlaylist=_isMusicPlaylist - In the implementation block
@property (assign,nonatomic) BOOL allowsVideoPlaybackWithoutVisuals; 
@property (assign,nonatomic) BOOL presentsNowPlayingVideoWithoutAnimations; 
@property (nonatomic,retain) MPAVRoute * endpointRoute;                                                  //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (assign,nonatomic) BOOL allowsSkipping;                                                        //@synthesize allowsSkipping=_allowsSkipping - In the implementation block
@property (assign,nonatomic) BOOL showsVideoControls; 
@property (assign,nonatomic) BOOL showsInfoMetadataSubpanel;                                             //@synthesize showsInfoMetadataSubpanel=_showsInfoMetadataSubpanel - In the implementation block
@property (assign,nonatomic) BOOL startPlaybackWhenViewAppears; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setStartTime:(double)arg1 ;
-(NSObject*<TVPPlayback>)player;
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(id<TVPPlaybackViewControllerDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<TVPPlaybackViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setEndpointRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)endpointRoute;
-(BOOL)isRadioPlayback;
-(BOOL)isForegrounded;
-(id)currentChildViewController;
-(void)_useNowPlayingVideoViewController:(id)arg1 ;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 initialPlaybackType:(long long)arg3 ;
-(long long)resumeMenuOption;
-(void)setResumeMenuOption:(long long)arg1 ;
-(void)insertOverlayViewController:(id)arg1 ;
-(void)insertOverlaySubview:(id)arg1 ;
-(void)contextMenuForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_currentChildViewControllerWillChangeTo:(id)arg1 ;
-(void)_currentChildViewControllerDidChangeFrom:(id)arg1 ;
-(void)setAllowsVideoPlaybackWithoutVisuals:(BOOL)arg1 ;
-(void)setPresentsNowPlayingVideoWithoutAnimations:(BOOL)arg1 ;
-(void)dismissWithErrorText:(id)arg1 ;
-(BOOL)playbackViewControllerProvidesCustomControls:(id)arg1 ;
-(void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)playbackViewController:(id)arg1 shouldShowIdleViewControllerForMediaItem:(id)arg2 ;
-(void)playbackViewController:(id)arg1 wantsIdleViewControllerForMediaItem:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)playbackViewController:(id)arg1 willShowIdleViewController:(id)arg2 forMediaItem:(id)arg3 targetCoverFrame:(inout CGRect*)arg4 ;
-(void)playbackViewControllerUserWillInitiatePlayback:(id)arg1 ;
-(long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1 ;
-(void)userDidFinishInteractionAfterErrorWasPresented:(id)arg1 ;
-(BOOL)playbackViewController:(id)arg1 handleControlGesture:(long long)arg2 ;
-(BOOL)playbackViewControllerShouldChangeMediaUsingDirection:(id)arg1 ;
-(void)loadCurrentMediaItem;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 ;
-(void)setIsIdleScreen:(BOOL)arg1 ;
-(void)setIsMusicPlaylist:(BOOL)arg1 ;
-(void)setAllowDefaultMenuButtonBehavior:(BOOL)arg1 ;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(long long)initialPlaybackType;
-(BOOL)popWhenPlayerStops;
-(void)setIsRadioPlayback:(BOOL)arg1 ;
-(BOOL)_tvTabBarShouldAutohide;
-(void)setPopWhenPlayerStops:(BOOL)arg1 ;
-(TVPHardwareButtonEventManager *)buttonEventManager;
-(void)setButtonEventManager:(TVPHardwareButtonEventManager *)arg1 ;
-(BOOL)allowsVideoPlaybackWithoutVisuals;
-(BOOL)showsInfoMetadataSubpanel;
-(BOOL)showsTitleWhileLoading;
-(BOOL)allowDefaultMenuButtonBehavior;
-(void)videoPlayerViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)startPlaybackWhenViewAppears;
-(BOOL)presentsNowPlayingVideoWithoutAnimations;
-(id)tvp_customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(void)setShowsTitleWhileLoading:(BOOL)arg1 ;
-(void)setShowsInfoMetadataSubpanel:(BOOL)arg1 ;
-(void)setStartPlaybackWhenViewAppears:(BOOL)arg1 ;
-(BOOL)invalidatePlayerWhenDone;
-(void)setInvalidatePlayerWhenDone:(BOOL)arg1 ;
-(void)_playerStateChanged:(id)arg1 ;
-(void)setHasBeenRemovedFromParentViewController:(BOOL)arg1 ;
-(void)_updateChildViewControllerForCurrentMediaItem;
-(void)setForegrounded:(BOOL)arg1 ;
-(BOOL)hasBeenRemovedFromParentViewController;
-(BOOL)allowsSkipping;
-(BOOL)hasStartedPlaying;
-(void)setStartedPlaying:(BOOL)arg1 ;
-(void)_startPlaybackLimitTimerWithLimit:(double)arg1 ;
-(void)_clearPlaybackLimitTimer;
-(NSTimer *)playbackLimitTimer;
-(void)setPlaybackLimitTimer:(NSTimer *)arg1 ;
-(void)_playbackLimitTimerFired:(id)arg1 ;
-(void)setAllowsSkipping:(BOOL)arg1 ;
-(void)transitionToBackground:(BOOL)arg1 ;
-(void)transitionToForeground:(BOOL)arg1 ;
-(BOOL)isIdleScreen;
-(BOOL)isMusicPlaylist;
@end

