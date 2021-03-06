//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class MusicJSNativeViewEventRegistry, MusicJSNowPlayingController, MusicJSPlaybackCoordinator;

@interface MTStoreAppContextScriptManager : MTSingleton
{
    MusicJSNativeViewEventRegistry *_jsNativeViewEventRegistry;	// 8 = 0x8
    MusicJSNowPlayingController *_jsNowPlayingController;	// 16 = 0x10
    MusicJSPlaybackCoordinator *_jsPlaybackCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000828c
@property(readonly, nonatomic) MusicJSPlaybackCoordinator *jsPlaybackCoordinator; // @synthesize jsPlaybackCoordinator=_jsPlaybackCoordinator;
@property(readonly, nonatomic) MusicJSNowPlayingController *jsNowPlayingController; // @synthesize jsNowPlayingController=_jsNowPlayingController;
@property(readonly, nonatomic) MusicJSNativeViewEventRegistry *jsNativeViewEventRegistry; // @synthesize jsNativeViewEventRegistry=_jsNativeViewEventRegistry;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x00000001000081cc

@end

