//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface SSPlayStateManager : NSObject
{
    NSObject<OS_dispatch_queue> *_MRQueue;	// 8 = 0x8
    NSMutableSet *_playStateDelegates;	// 16 = 0x10
    _Bool _nowPlayingApplication;	// 24 = 0x18
    unsigned long long _playbackState;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000ecd0
- (void).cxx_destruct;	// IMP=0x000000010000f4e0
@property(readonly, nonatomic, getter=isNowPlayingApplication) _Bool nowPlayingApplication; // @synthesize nowPlayingApplication=_nowPlayingApplication;
@property(nonatomic, getter=getCurrentPlaybackState) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
- (id)contentPlaybackStateToString:(unsigned long long)arg1;	// IMP=0x000000010000f4a4
- (id)getLocalizedAppName;	// IMP=0x000000010000f420
- (void)_nowPlayingApplicationDidChange:(id)arg1;	// IMP=0x000000010000f19c
- (void)unregisterPlaybackStateChangedDelegate:(id)arg1;	// IMP=0x000000010000ef0c
- (void)registerPlaybackStateChangedDelegate:(id)arg1;	// IMP=0x000000010000eefc
- (void)dealloc;	// IMP=0x000000010000ee78
- (id)init;	// IMP=0x000000010000ed6c

@end

