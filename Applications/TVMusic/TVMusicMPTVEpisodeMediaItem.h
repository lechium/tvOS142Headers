//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPObjectMediaItem.h"

@class MPModelTVEpisode;

@interface TVMusicMPTVEpisodeMediaItem : TVMusicMPObjectMediaItem
{
}

- (id)description;	// IMP=0x00000001000a1d38
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000001000a17f8
- (_Bool)useBookmarks;	// IMP=0x00000001000a17f0
@property(readonly, nonatomic) MPModelTVEpisode *tvEpisode;
- (id)initWithTVEpisode:(id)arg1;	// IMP=0x00000001000a17d4
- (id)initWithTVEpisode:(id)arg1 mediaItemMetadata:(id)arg2;	// IMP=0x00000001000a1764

@end
