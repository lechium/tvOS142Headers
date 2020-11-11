//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVHKAsynchronousWorkToken, TVHKMediaEntitiesFetchRequest, TVHKMediaLibrary;
@protocol TVPPlayback;

@interface TVHGeniusMixPlaybackMonitor : NSObject
{
    id <TVPPlayback> _player;	// 8 = 0x8
    TVHKMediaLibrary *_mediaLibrary;	// 16 = 0x10
    TVHKMediaEntitiesFetchRequest *_fetchRequest;	// 24 = 0x18
    TVHKAsynchronousWorkToken *_fetchRequestWorkToken;	// 32 = 0x20
    unsigned long long _monitorToken;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010000f9a0
- (void).cxx_destruct;	// IMP=0x000000010001083c
@property(nonatomic) unsigned long long monitorToken; // @synthesize monitorToken=_monitorToken;
@property(retain, nonatomic) TVHKAsynchronousWorkToken *fetchRequestWorkToken; // @synthesize fetchRequestWorkToken=_fetchRequestWorkToken;
@property(copy, nonatomic) TVHKMediaEntitiesFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) id <TVPPlayback> player; // @synthesize player=_player;
- (void)_stop;	// IMP=0x0000000100010744
- (void)_stopObservingMediaServer:(id)arg1;	// IMP=0x00000001000106c0
- (void)_startObservingMediaServer:(id)arg1;	// IMP=0x0000000100010634
- (void)_handleFetchResponse:(id)arg1 player:(id)arg2;	// IMP=0x0000000100010190
- (void)_handleCurrentPlaybackMediaItemDidChangeNotification:(id)arg1;	// IMP=0x000000010000fc90
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x000000010000fbe4
- (void)_handleMediaServerConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x000000010000fb4c
- (void)startMonitoringPlaybackWithPlayer:(id)arg1 fetchRequest:(id)arg2 mediaLibrary:(id)arg3;	// IMP=0x000000010000fa90
- (void)dealloc;	// IMP=0x000000010000fa44

@end

