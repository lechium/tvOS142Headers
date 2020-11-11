//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsUI/IMMediaRemoteController.h>

#import "MTPlaybackQueueControllerSessionDelegate-Protocol.h"

@class AFMultiUserConnection, MPRemoteCommandCenter, MTDefaultsChangeNotifier, MTSiriAnalyticsController, NSArray, NSString;

@interface MTMediaRemoteController : IMMediaRemoteController <MTPlaybackQueueControllerSessionDelegate>
{
    MPRemoteCommandCenter *_metadataCommandCenter;	// 8 = 0x8
    long long _remoteSkipPreference;	// 16 = 0x10
    MTSiriAnalyticsController *_siriAnalyticsController;	// 24 = 0x18
    AFMultiUserConnection *_siriMultiUserConnection;	// 32 = 0x20
    MTDefaultsChangeNotifier *_defaultsObserver;	// 40 = 0x28
    NSArray *_internalRequestLabels;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000d8028
@property(retain, nonatomic) NSArray *internalRequestLabels; // @synthesize internalRequestLabels=_internalRequestLabels;
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsObserver; // @synthesize defaultsObserver=_defaultsObserver;
@property(retain, nonatomic) AFMultiUserConnection *siriMultiUserConnection; // @synthesize siriMultiUserConnection=_siriMultiUserConnection;
@property(retain, nonatomic) MTSiriAnalyticsController *siriAnalyticsController; // @synthesize siriAnalyticsController=_siriAnalyticsController;
@property(nonatomic) long long remoteSkipPreference; // @synthesize remoteSkipPreference=_remoteSkipPreference;
@property(retain, nonatomic) MPRemoteCommandCenter *metadataCommandCenter; // @synthesize metadataCommandCenter=_metadataCommandCenter;
- (id)_skipBackwardCommandEvent;	// IMP=0x00000001000d7e88
- (id)_skipForwardCommandEvent;	// IMP=0x00000001000d7dac
- (_Bool)_commandEventIsInternal:(id)arg1;	// IMP=0x00000001000d7d14
- (_Bool)_commandEventIsFromSiri:(id)arg1;	// IMP=0x00000001000d7c68
- (void)updateRemoteSkipPreferenceFromDefaults:(id)arg1;	// IMP=0x00000001000d7c1c
- (void)updatePreferredSkipDurationsFromUserDefaults:(id)arg1 forCommandCenter:(id)arg2;	// IMP=0x00000001000d79f4
- (void)sessionIdentifierDidChange;	// IMP=0x00000001000d7928
- (long long)remoteChangePlaybackRate:(id)arg1;	// IMP=0x00000001000d77d4
- (long long)remotePreviousTrack:(id)arg1;	// IMP=0x00000001000d76e4
- (long long)remoteNextTrack:(id)arg1;	// IMP=0x00000001000d75f4
- (void)remoteTogglePlayPauseCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d7524
- (long long)remotePause:(id)arg1;	// IMP=0x00000001000d74f0
- (void)remotePlayCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d7124
- (void)remoteSetPlaybackSessionCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d6b00
- (void)remoteSetPlaybackQueueCommand:(id)arg1 isMagicMoment:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d51f8
- (void)remoteSetPlaybackQueueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d51a4
- (void)remoteSetMetadataPlaybackQueueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d5150
- (void)remoteRemoveFromPlaybackQueueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d5084
- (void)remoteReorderPlaybackQueueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d4f88
- (void)remotePlayItemInPlaybackQueueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d4ebc
- (void)remoteInsertIntoPlaybackQueueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d4c64
- (long long)findIndexOfCommand:(unsigned int)arg1 inArray:(struct __CFArray *)arg2;	// IMP=0x00000001000d4bf4
- (struct __CFArray *)copySupportedCommands;	// IMP=0x00000001000d4ad4
- (void)dealloc;	// IMP=0x00000001000d49b0
- (id)accountFromQueueContainingDsid:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d4854
- (void)accountForRequesterUserId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d4348
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000001000d38bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
