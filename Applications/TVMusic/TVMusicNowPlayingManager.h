//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVMusicTimedLyricsViewControllerDelegate-Protocol.h"
#import "TVPPlaybackViewControllerDelegate-Protocol.h"

@class AWAttentionAwarenessClient, MPModelLibraryResponse, MPModelSong, NSHashTable, NSString, NSTimer, TVMusicPlayer, TVMusicTimedLyricsViewController;
@protocol TVPMediaItem;

@interface TVMusicNowPlayingManager : NSObject <TVMusicTimedLyricsViewControllerDelegate, TVPPlaybackViewControllerDelegate>
{
    id <TVPMediaItem> _mediaItemForNowPlayingControls;	// 8 = 0x8
    MPModelSong *_songForNowPlayingControls;	// 16 = 0x10
    MPModelLibraryResponse *_responseForNowPlayingControls;	// 24 = 0x18
    TVMusicPlayer *_player;	// 32 = 0x20
    _Bool _isShowingMusicVideoFullscreen;	// 40 = 0x28
    _Bool _idleTimerSuspended;	// 41 = 0x29
    _Bool _storefrontSupportsLyrics;	// 42 = 0x2a
    NSHashTable *_playbackViewControllers;	// 48 = 0x30
    NSHashTable *_musicNowPlayingViewControllers;	// 56 = 0x38
    TVMusicTimedLyricsViewController *_timedLyricsViewController;	// 64 = 0x40
    NSTimer *_screenSaverTimer;	// 72 = 0x48
    AWAttentionAwarenessClient *_attentionAwarenessClient;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x000000010004e3e8
- (void).cxx_destruct;	// IMP=0x0000000100054ba0
@property _Bool storefrontSupportsLyrics; // @synthesize storefrontSupportsLyrics=_storefrontSupportsLyrics;
@property(nonatomic, getter=isIdleTimerSuspended) _Bool idleTimerSuspended; // @synthesize idleTimerSuspended=_idleTimerSuspended;
@property(retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // @synthesize attentionAwarenessClient=_attentionAwarenessClient;
@property(retain, nonatomic) NSTimer *screenSaverTimer; // @synthesize screenSaverTimer=_screenSaverTimer;
@property(nonatomic) __weak TVMusicTimedLyricsViewController *timedLyricsViewController; // @synthesize timedLyricsViewController=_timedLyricsViewController;
@property(nonatomic) _Bool isShowingMusicVideoFullscreen; // @synthesize isShowingMusicVideoFullscreen=_isShowingMusicVideoFullscreen;
@property(readonly, nonatomic) NSHashTable *musicNowPlayingViewControllers; // @synthesize musicNowPlayingViewControllers=_musicNowPlayingViewControllers;
@property(readonly, nonatomic) NSHashTable *playbackViewControllers; // @synthesize playbackViewControllers=_playbackViewControllers;
- (void)_removePlaybackControllersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000543ec
- (void)_removePlaybackControllers;	// IMP=0x00000001000543dc
- (unsigned long long)_currentlyPlayingPlaybackType;	// IMP=0x00000001000542bc
- (void)hideCurrentPlaybackControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000542b0
- (void)hideCurrentPlaybackController;	// IMP=0x00000001000542a4
- (void)showPlaybackControllerWithInitialPlaybackType:(unsigned long long)arg1;	// IMP=0x0000000100053c74
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100053ad0
- (void)_showIdleNowPlayingIfPossible;	// IMP=0x0000000100053a78
- (void)_updateIdleNowPlayingTimer;	// IMP=0x0000000100053894
- (_Bool)_idleNowPlayingShouldAppear;	// IMP=0x0000000100053620
- (void)_restoreScreenSaverDelay;	// IMP=0x00000001000534c8
- (void)_setMinimumScreenSaverDelay;	// IMP=0x0000000100053294
- (void)_addToLibraryAction;	// IMP=0x0000000100053224
- (id)_controlsWithAddButton:(_Bool)arg1;	// IMP=0x0000000100053040
- (void)_updateAudioRoute;	// IMP=0x0000000100052df4
- (void)_musicVideoAddToLibrary:(id)arg1;	// IMP=0x0000000100052ac8
- (void)_musicVideoViewWillDisappear:(id)arg1;	// IMP=0x0000000100052ab8
- (void)_musicVideoViewWillAppear:(id)arg1;	// IMP=0x0000000100052aa8
- (void)_playbackError:(id)arg1;	// IMP=0x000000010005299c
- (void)_playbackStatusChanged:(id)arg1;	// IMP=0x00000001000527fc
- (void)_audioRouteDidChange:(id)arg1;	// IMP=0x00000001000527f0
- (void)_appWillResignActive:(id)arg1;	// IMP=0x00000001000527e4
- (void)_appDidBecomeActive:(id)arg1;	// IMP=0x00000001000527b0
- (void)_songResponseDidInvalidate:(id)arg1;	// IMP=0x0000000100052584
- (void)_songDidRemoveFromLibrary:(id)arg1;	// IMP=0x0000000100052390
- (void)_songWillAddToLibrary:(id)arg1;	// IMP=0x0000000100052180
- (void)timedLyricsViewWillDisappear:(id)arg1;	// IMP=0x0000000100052060
- (void)timedLyricsViewDidAppear:(id)arg1;	// IMP=0x000000010005202c
- (void)sendTogglePlayPauseCommandForTimedLyricsViewController:(id)arg1;	// IMP=0x0000000100051fe4
- (void)sendPlayCommandForTimedLyricsViewController:(id)arg1;	// IMP=0x0000000100051f44
- (_Bool)timedLyricsViewControllerPlaybackIsPaused:(id)arg1;	// IMP=0x0000000100051eb0
- (void)timedLyricsViewController:(id)arg1 jumpToPosition:(double)arg2;	// IMP=0x0000000100051e58
- (double)elapsedTimeForTimedLyricsViewController:(id)arg1;	// IMP=0x0000000100051c28
- (_Bool)playbackViewControllerShouldChangeMediaUsingDirection:(id)arg1;	// IMP=0x0000000100051c20
- (_Bool)playbackViewController:(id)arg1 handleControlGesture:(long long)arg2;	// IMP=0x0000000100051b98
- (void)playbackViewController:(id)arg1 willShowIdleViewController:(id)arg2 forMediaItem:(id)arg3 targetCoverFrame:(inout struct CGRect *)arg4;	// IMP=0x0000000100051ae0
- (void)playbackViewController:(id)arg1 wantsIdleViewControllerForMediaItem:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100050fa0
- (_Bool)playbackViewController:(id)arg1 shouldShowIdleViewControllerForMediaItem:(id)arg2;	// IMP=0x0000000100050e40
- (long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1;	// IMP=0x0000000100050d98
- (void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100050748
- (_Bool)playbackViewControllerProvidesCustomControls:(id)arg1;	// IMP=0x0000000100050740
- (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000506f8
- (void)_newTracklist:(id)arg1;	// IMP=0x000000010005042c
- (void)_playerPathChanged:(id)arg1;	// IMP=0x00000001000502fc
- (void)_playbackStateDidChange:(id)arg1;	// IMP=0x0000000100050184
- (void)_currentMediaItemDidChange:(id)arg1;	// IMP=0x000000010004fe50
- (void)_playQueueEndActionUpdated:(id)arg1;	// IMP=0x000000010004faec
- (void)_playQueueDidChangeAutoplayAvailability:(id)arg1;	// IMP=0x000000010004f9a4
- (void)_playbackQueueDidChange:(id)arg1;	// IMP=0x000000010004f888
- (void)_musicViewWillDisappear:(id)arg1;	// IMP=0x000000010004f778
- (void)_musicViewWillAppear:(id)arg1;	// IMP=0x000000010004f520
- (void)_nowPlayingViewWillDisappear:(id)arg1;	// IMP=0x000000010004f450
- (void)_nowPlayingViewWillAppear:(id)arg1;	// IMP=0x000000010004f368
- (void)_updateAdditionalRightControlsForNowPlayingViewController:(id)arg1;	// IMP=0x000000010004ede8
@property(readonly, nonatomic) _Bool isMusicNowPlayingVisible;
@property(readonly, nonatomic) _Bool isNowPlayingVisible;
- (void)dealloc;	// IMP=0x000000010004ec9c
- (id)init;	// IMP=0x000000010004e454

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

