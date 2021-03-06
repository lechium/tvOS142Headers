//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVNPRoutingDestination.h"

#import "MPVolumeControllerDelegate-Protocol.h"

@class MPAVEndpointRoute, MPVolumeController, NSString, TVNPEndpointRouteConnection;
@protocol NSCopying;

@interface TVNPEndpointRoutingDestination : TVNPRoutingDestination <MPVolumeControllerDelegate>
{
    MPAVEndpointRoute *_endpointRoute;	// 112 = 0x70
    TVNPEndpointRouteConnection *_routeConnection;	// 120 = 0x78
    MPVolumeController *_volumeController;	// 128 = 0x80
    id <NSCopying> _routeConnectionObserverToken;	// 136 = 0x88
    unsigned long long _connectionState;	// 144 = 0x90
}

+ (unsigned long long)_playbackStateForMPCPlaybackState:(long long)arg1;	// IMP=0x0000000100004b24
+ (id)keyPathsForValuesAffectingPaired;	// IMP=0x0000000100004098
+ (id)keyPathsForValuesAffectingDisconnected;	// IMP=0x000000010000407c
+ (id)keyPathsForValuesAffectingConnected;	// IMP=0x0000000100004060
- (void).cxx_destruct;	// IMP=0x0000000100004ba8
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) id <NSCopying> routeConnectionObserverToken; // @synthesize routeConnectionObserverToken=_routeConnectionObserverToken;
@property(readonly, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) TVNPEndpointRouteConnection *routeConnection; // @synthesize routeConnection=_routeConnection;
@property(readonly, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
- (void)_metadataDidChange:(id)arg1 forKeys:(id)arg2;	// IMP=0x0000000100004768
- (void)_updateVolume;	// IMP=0x00000001000045c4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000044e0
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x0000000100004478
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x0000000100004410
- (void)connectAndPair;	// IMP=0x00000001000043f8
- (void)togglePlayPause;	// IMP=0x00000001000043e0
- (void)refreshPropertiesWithRoute:(id)arg1;	// IMP=0x0000000100004170
- (void)setVolumeLevel:(id)arg1;	// IMP=0x00000001000040b4
- (id)deviceImage;	// IMP=0x0000000100003ff4
- (_Bool)isDisconnected;	// IMP=0x0000000100003fd0
- (_Bool)isConnecting;	// IMP=0x0000000100003fac
- (_Bool)isConnected;	// IMP=0x0000000100003f88
- (_Bool)isPaired;	// IMP=0x0000000100003f70
@property(nonatomic) _Bool isCurrentDestination; // @dynamic isCurrentDestination;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100003e18
- (id)initWithEndpointRoute:(id)arg1;	// IMP=0x0000000100003a24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

