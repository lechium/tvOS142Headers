//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

#import "NSCacheDelegate-Protocol.h"

@class NSCache, NSString;

@interface MTEpisodeDescriptionCache : MTSingleton <NSCacheDelegate>
{
    NSCache *_descriptionCache;	// 8 = 0x8
    NSCache *_episodeCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010015930c
@property(retain, nonatomic) NSCache *episodeCache; // @synthesize episodeCache=_episodeCache;
@property(retain, nonatomic) NSCache *descriptionCache; // @synthesize descriptionCache=_descriptionCache;
- (id)descriptionPrefixTextForPlayerItem:(id)arg1 options:(unsigned long long)arg2 trailingNewline:(_Bool)arg3;	// IMP=0x0000000100158b7c
- (id)metadataHeaderForPlayerItem:(id)arg1;	// IMP=0x0000000100158b68
- (id)descriptionBodyTextForEpisode:(id)arg1 html:(_Bool)arg2 withAttributes:(id)arg3;	// IMP=0x0000000100158958
- (id)createVideoGlyphAttributedString;	// IMP=0x00000001001588b8
- (id)descriptionFooterTextForEpisode:(id)arg1 includesSeasonEpisodeType:(_Bool)arg2 includesDuration:(_Bool)arg3 includesPlayedIfPlayed:(_Bool)arg4 hasBodyText:(_Bool)arg5 unavailableReason:(unsigned long long)arg6;	// IMP=0x00000001001578a4
- (id)descriptionPrefixTextForEpisode:(id)arg1 options:(unsigned long long)arg2 trailingNewline:(_Bool)arg3;	// IMP=0x0000000100157174
- (id)descriptionTextForEpisode:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000100156edc
- (void)updateCacheForEpisode:(id)arg1;	// IMP=0x0000000100156d0c
- (id)descriptionKeyForOptions:(unsigned long long)arg1 unavailableReason:(unsigned long long)arg2;	// IMP=0x0000000100156cb8
- (id)descriptionCacheForEpisodeUuid:(id)arg1;	// IMP=0x0000000100156bcc
- (id)dependantPropertyKeys;	// IMP=0x0000000100156a68
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000001001567c8
- (void)invalidate;	// IMP=0x000000010015674c
- (id)metadataFooterForEpisode:(id)arg1 includingSeasonEpisodeType:(_Bool)arg2 includingDuration:(_Bool)arg3 includingPlayedIfPlayed:(_Bool)arg4;	// IMP=0x0000000100156718
- (id)metadataFooterForEpisode:(id)arg1 includingDuration:(_Bool)arg2;	// IMP=0x0000000100156700
- (id)metadataFooterForEpisode:(id)arg1;	// IMP=0x00000001001566f0
- (id)metadataHeaderForEpisode:(id)arg1;	// IMP=0x00000001001566e0
- (id)descriptionForEpisode:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000100156558
- (id)episodeDescription:(id)arg1;	// IMP=0x000000010015654c
- (id)descriptionForEpisode:(id)arg1;	// IMP=0x0000000100156440
- (void)dealloc;	// IMP=0x00000001001563c8
- (id)init;	// IMP=0x0000000100156330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

