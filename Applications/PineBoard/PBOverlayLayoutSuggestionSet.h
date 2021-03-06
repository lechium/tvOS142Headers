//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBOverlayLayoutOffsetList;

@interface PBOverlayLayoutSuggestionSet : NSObject
{
    PBOverlayLayoutOffsetList *_hOffsets;	// 8 = 0x8
    PBOverlayLayoutOffsetList *_vOffsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000b9308
@property(readonly, nonatomic) PBOverlayLayoutOffsetList *vOffsets; // @synthesize vOffsets=_vOffsets;
@property(readonly, nonatomic) PBOverlayLayoutOffsetList *hOffsets; // @synthesize hOffsets=_hOffsets;
- (id)bestLayoutSuggestionAtIndexes:(id)arg1 withStickiness:(struct CGVector)arg2;	// IMP=0x00000001000b8f80
- (id)layoutSuggestionsAtIndexes:(id)arg1;	// IMP=0x00000001000b8d04
- (void)enumerateSuggestionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b8c94
- (void)enumerateSuggestionsAtIndexes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b88e4
- (void)addOffset:(double)arg1 forAxis:(unsigned long long)arg2;	// IMP=0x00000001000b8810
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithNodeCount:(unsigned long long)arg1;	// IMP=0x00000001000b872c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001000b85bc

@end

