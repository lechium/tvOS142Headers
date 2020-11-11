//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPPlaybackViewController.h>

#import "IMActionControllerDelegate-Protocol.h"
#import "TVPPlaybackViewControllerDelegate-Protocol.h"

@class AVRoutePickerView, IMActionController, NSString;
@protocol TVPPlayback;

@interface MTTVNowPlayingViewController : TVPPlaybackViewController <TVPPlaybackViewControllerDelegate, IMActionControllerDelegate>
{
    AVRoutePickerView *_routePickerButton;	// 8 = 0x8
    _Bool _remoteViewService;	// 16 = 0x10
    id <TVPPlayback> _playback;	// 24 = 0x18
    IMActionController *_actionController;	// 32 = 0x20
    TVPPlaybackViewController *_playbackViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100080894
@property(retain, nonatomic) TVPPlaybackViewController *playbackViewController; // @synthesize playbackViewController=_playbackViewController;
@property(retain, nonatomic) IMActionController *actionController; // @synthesize actionController=_actionController;
@property(nonatomic, getter=isRemoteViewService) _Bool remoteViewService; // @synthesize remoteViewService=_remoteViewService;
@property(retain, nonatomic) id <TVPPlayback> playback; // @synthesize playback=_playback;
- (void)_updateAudioRoute;	// IMP=0x000000010008073c
- (void)_audioRouteDidChange:(id)arg1;	// IMP=0x0000000100080730
- (void)_playerPathChanged:(id)arg1;	// IMP=0x00000001000806dc
- (void)_appDidBecomeActive:(id)arg1;	// IMP=0x00000001000806d0
- (void)_playbackQueueDidChange:(id)arg1;	// IMP=0x0000000100080690
- (void)_nowPlayingViewWillLoad:(id)arg1;	// IMP=0x000000010008068c
- (void)_nowPlayingViewWillDisappear:(id)arg1;	// IMP=0x0000000100080688
- (void)_nowPlayingViewWillAppear:(id)arg1;	// IMP=0x00000001000805ec
- (id)rootNavigationController;	// IMP=0x000000010008055c
- (id)_menuItemsForActionController:(id)arg1;	// IMP=0x0000000100080340
- (id)routePickerControlForPlaybackViewController:(id)arg1;	// IMP=0x00000001000802c0
- (long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1;	// IMP=0x00000001000801ec
- (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007ff74
- (id)musicPlayQueue;	// IMP=0x000000010007fee8
- (id)musicNowPlayingViewController;	// IMP=0x000000010007fe5c
- (_Bool)_tvTabBarShouldAutohide;	// IMP=0x000000010007fdb0
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x000000010007fd54
- (id)init;	// IMP=0x000000010007fb20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
