//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMetricsDataSource-Protocol.h"

@class MTEpisodeIdentifier, NSString;

@interface MTEpisodeMetricDataSource : NSObject <IMMetricsDataSource>
{
    MTEpisodeIdentifier *_episodeIdentifier;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    unsigned long long _mediaType;	// 24 = 0x18
    unsigned long long _itemType;	// 32 = 0x20
    unsigned long long _podcastState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000311dc
@property(nonatomic) unsigned long long podcastState; // @synthesize podcastState=_podcastState;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) MTEpisodeIdentifier *episodeIdentifier; // @synthesize episodeIdentifier=_episodeIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100030fc4
- (id)metricsAdditionalData;	// IMP=0x0000000100030d88
- (id)metricsContentIdentifier;	// IMP=0x0000000100030d7c
- (id)_duration;	// IMP=0x0000000100030d44
- (id)_podcastState;	// IMP=0x0000000100030d00
- (id)_itemType;	// IMP=0x0000000100030cbc
- (id)_mediaType;	// IMP=0x0000000100030c68
- (id)_providerId;	// IMP=0x0000000100030c5c
- (id)_podcastFeedURL;	// IMP=0x0000000100030be8
- (id)_podcastId;	// IMP=0x0000000100030b4c
- (id)_contentGUID;	// IMP=0x0000000100030ad8
- (id)_contentId;	// IMP=0x0000000100030a3c
- (unsigned long long)_podcastStateForPlayerItem:(id)arg1;	// IMP=0x00000001000309e0
- (unsigned long long)_itemTypeForPlayerItem:(id)arg1;	// IMP=0x00000001000309a0
- (unsigned long long)_mediaTypeForPlayerItem:(id)arg1;	// IMP=0x0000000100030960
- (unsigned long long)_podcastStateForEpisode:(id)arg1;	// IMP=0x00000001000307e8
- (unsigned long long)_itemTypeForEpisode:(id)arg1;	// IMP=0x0000000100030698
- (unsigned long long)_mediaTypeForEpisode:(id)arg1;	// IMP=0x0000000100030520
- (id)initWithEpisode:(id)arg1;	// IMP=0x00000001000302c4
- (id)initWithPlayerItem:(id)arg1;	// IMP=0x00000001000301f0
- (id)initWithEpisodeIdentifier:(id)arg1;	// IMP=0x0000000100030178

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
