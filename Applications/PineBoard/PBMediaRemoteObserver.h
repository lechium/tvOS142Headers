//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSBulletinServiceDelegate-Protocol.h"

@class NSNumber, NSString, PBBulletinService, PBMRMetadataUpdateTransaction, PBSBulletin;
@protocol PBMediaRemoteObserverDelegate;

@interface PBMediaRemoteObserver : NSObject <PBSBulletinServiceDelegate, PBInstanceDependable>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    NSNumber *_lastNotificationPID;	// 16 = 0x10
    _Bool _metadataUpdateRunning;	// 24 = 0x18
    _Bool _playing;	// 25 = 0x19
    _Bool _playingMusic;	// 26 = 0x1a
    _Bool _isMusicAppPlaying;	// 27 = 0x1b
    _Bool _isPodcastsAppPlaying;	// 28 = 0x1c
    int _nowPlayingProcessPID;	// 32 = 0x20
    NSNumber *_playbackRate;	// 40 = 0x28
    PBSBulletin *_currentBulletin;	// 48 = 0x30
    id <PBMediaRemoteObserverDelegate> _delegate;	// 56 = 0x38
    NSNumber *_trackIdentifier;	// 64 = 0x40
    NSString *_mediaType;	// 72 = 0x48
    PBMRMetadataUpdateTransaction *_metadataUpdateTransaction;	// 80 = 0x50
}

+ (id)_allAudioMediaTypes;	// IMP=0x00000001001d3410
+ (id)_bulletinInfoForNowPlayingInfo:(id)arg1;	// IMP=0x00000001001d2f70
+ (id)sharedInstance;	// IMP=0x00000001001cfb7c
+ (id)dependencyDescription;	// IMP=0x00000001001cfac4
- (void).cxx_destruct;	// IMP=0x00000001001d364c
@property(readonly, nonatomic) PBMRMetadataUpdateTransaction *metadataUpdateTransaction; // @synthesize metadataUpdateTransaction=_metadataUpdateTransaction;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSNumber *trackIdentifier; // @synthesize trackIdentifier=_trackIdentifier;
@property(nonatomic) __weak id <PBMediaRemoteObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateWithNowPlayingInfoDictionary:(id)arg1 playbackState:(unsigned int)arg2 nowPlayingPID:(int)arg3;	// IMP=0x00000001001d1ac4
- (void)_performMetadataUpdate;	// IMP=0x00000001001d10e4
- (void)_setNeedsMetadataUpdate;	// IMP=0x00000001001d0d20
- (void)_presentTrackChangeBulletinWithInfo:(id)arg1;	// IMP=0x00000001001d0a08
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00000001001d0920
- (void)_nowPlayingAppDidChange:(id)arg1;	// IMP=0x00000001001d0720
- (void)_nowPlayingAppPlaybackStateDidChange:(id)arg1;	// IMP=0x00000001001d0614
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x00000001001d0508
- (void)_remotePlayerPlaybackStateDidChange:(id)arg1;	// IMP=0x00000001001d03d4
@property(readonly, nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
@property(readonly, nonatomic) _Bool isPodcastsAppPlaying; // @synthesize isPodcastsAppPlaying=_isPodcastsAppPlaying;
@property(readonly, nonatomic) _Bool isMusicAppPlaying; // @synthesize isMusicAppPlaying=_isMusicAppPlaying;
@property(readonly, nonatomic) _Bool playingMusic; // @synthesize playingMusic=_playingMusic;
@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(readonly, copy, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
- (_Bool)nowPlayingMediaTypeAudioOnly;	// IMP=0x00000001001cfeb4
- (void)stopObserving;	// IMP=0x00000001001cfe4c
- (void)startObserving;	// IMP=0x00000001001cfce0
- (void)dealloc;	// IMP=0x00000001001cfc7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

