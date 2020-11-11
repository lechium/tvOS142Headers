//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface SRTranscriptFlowLayout : SiriUICollectionViewFlowLayout
{
    NSMutableArray *_insertedIndexPaths;	// 8 = 0x8
    NSMutableArray *_reloadedIndexPaths;	// 16 = 0x10
    NSMutableArray *_handledIndexPaths;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100009cb4
@property(readonly, nonatomic, getter=_handledIndexPaths) NSMutableArray *handledIndexPaths; // @synthesize handledIndexPaths=_handledIndexPaths;
@property(readonly, nonatomic, getter=_reloadedIndexPaths) NSMutableArray *reloadedIndexPaths; // @synthesize reloadedIndexPaths=_reloadedIndexPaths;
@property(readonly, nonatomic, getter=_insertedIndexPaths) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x00000001000099a4
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x000000010000984c
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000010000977c
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x0000000100009578
- (id)init;	// IMP=0x000000010000946c

@end

