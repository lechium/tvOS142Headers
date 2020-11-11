//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsUI/IMPlayerManifest.h>

#import "IMMetricsDataSource-Protocol.h"

@class MTPlayerItem, NSString;

@interface MTPlayerManifest : IMPlayerManifest <IMMetricsDataSource>
{
    _Bool _networkUPPEnabled;	// 8 = 0x8
    unsigned long long _playReason;	// 16 = 0x10
    NSString *_manifestIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000ecbfc
@property(retain, nonatomic) NSString *manifestIdentifier; // @synthesize manifestIdentifier=_manifestIdentifier;
@property(nonatomic) _Bool networkUPPEnabled; // @synthesize networkUPPEnabled=_networkUPPEnabled;
@property(nonatomic) unsigned long long playReason; // @synthesize playReason=_playReason;
- (id)metricsAdditionalData;	// IMP=0x00000001000eca14
- (id)metricsContentIdentifier;	// IMP=0x00000001000eca00
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ec950
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000ec914
- (_Bool)userActivityContainsPlayhead;	// IMP=0x00000001000ec830
- (id)activitySpotlightIdentifier;	// IMP=0x00000001000ec828
- (id)activity;	// IMP=0x00000001000ec7cc
- (id)init;	// IMP=0x00000001000ec720

// Remaining properties
@property(nonatomic) unsigned long long currentIndex;
@property(readonly, nonatomic) MTPlayerItem *currentItem; // @dynamic currentItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
