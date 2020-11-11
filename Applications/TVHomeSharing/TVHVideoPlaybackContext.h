//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVPlayerViewControllerDelegate-Protocol.h"
#import "TVHPlaybackContext-Protocol.h"
#import "TVHVideoPlaybackViewControllerDelegate-Protocol.h"

@class BSWatchdog, NSString, TVHVideoPlaybackViewController, TVPPlayer, UIViewController;
@protocol TVHPlaybackViewController;

@interface TVHVideoPlaybackContext : NSObject <AVPlayerViewControllerDelegate, TVHVideoPlaybackViewControllerDelegate, TVHPlaybackContext>
{
    _Bool _usingDiskCaching;	// 8 = 0x8
    TVPPlayer *_player;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    TVHVideoPlaybackViewController *_fullscreenVideoPlaybackViewController;	// 32 = 0x20
    CDUnknownBlockType _restoreUserInterfaceCompletionHandler;	// 40 = 0x28
    BSWatchdog *_restoreUserInterfaceWatchdog;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversOfState;	// IMP=0x000000010008956c
- (void).cxx_destruct;	// IMP=0x0000000100089850
@property(retain, nonatomic) BSWatchdog *restoreUserInterfaceWatchdog; // @synthesize restoreUserInterfaceWatchdog=_restoreUserInterfaceWatchdog;
@property(copy, nonatomic) CDUnknownBlockType restoreUserInterfaceCompletionHandler; // @synthesize restoreUserInterfaceCompletionHandler=_restoreUserInterfaceCompletionHandler;
@property(retain, nonatomic) TVHVideoPlaybackViewController *fullscreenVideoPlaybackViewController; // @synthesize fullscreenVideoPlaybackViewController=_fullscreenVideoPlaybackViewController;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool usingDiskCaching; // @synthesize usingDiskCaching=_usingDiskCaching;
@property(readonly, nonatomic) TVPPlayer *player; // @synthesize player=_player;
- (void)_tearDownPictureInPicturePlayback;	// IMP=0x0000000100089744
- (id)_videoPlaybackViewControllerForPlayer:(id)arg1 playerViewController:(id)arg2;	// IMP=0x00000001000896a4
- (id)_videoPlaybackViewControllerForPlayer:(id)arg1;	// IMP=0x0000000100089694
- (void)_completeRestoreUserInterfaceWithSuccess:(_Bool)arg1;	// IMP=0x00000001000895e4
@property(readonly, copy) NSString *description;
- (void)_handleCurrentPlaybackMediaItemDidChangeNotification:(id)arg1;	// IMP=0x0000000100089294
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x000000010008912c
- (void)videoPlayerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithAVPlayerViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100088cfc
- (void)videoPlayerViewController:(id)arg1 didStopPictureInPictureWithAVPlayerViewController:(id)arg2;	// IMP=0x0000000100088c0c
- (void)videoPlayerViewController:(id)arg1 willStopPictureInPictureWithAVPlayerViewController:(id)arg2;	// IMP=0x0000000100088b38
- (void)videoPlayerViewController:(id)arg1 failedToStartPictureInPictureWithAVPlayerViewController:(id)arg2 error:(id)arg3;	// IMP=0x0000000100088a38
- (void)videoPlayerViewController:(id)arg1 didStartPictureInPictureWithAVPlayerViewController:(id)arg2;	// IMP=0x000000010008897c
- (void)videoPlayerViewController:(id)arg1 willStartPictureInPictureWithAVPlayerViewController:(id)arg2;	// IMP=0x0000000100088890
- (void)videoPlayerViewControllerViewDidAppear:(id)arg1;	// IMP=0x0000000100088724
- (void)configureWithPlaylist:(id)arg1 canUseDiskCaching:(_Bool)arg2;	// IMP=0x0000000100088548
@property(readonly, nonatomic) UIViewController<TVHPlaybackViewController> *playbackViewController;
- (void)restorePictureInPictureVideoToFullscreen;	// IMP=0x00000001000883d0
- (_Bool)isPlayingFirstItemInPlaylist:(id)arg1;	// IMP=0x00000001000881d0
- (void)dealloc;	// IMP=0x0000000100088148
- (id)init;	// IMP=0x000000010008804c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
