//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade25ShelfDisplayingFlowLayout.h"

@class MISSING_TYPE;

@interface _TtC6Arcade29CollectionViewTableFlowLayout : _TtC6Arcade25ShelfDisplayingFlowLayout
{
    MISSING_TYPE *globalHeaderAvoidsOverscroll;	// 24 = 0x18
    MISSING_TYPE *isSupplementaryViewAnimationEnabled;	// 25 = 0x19
    MISSING_TYPE *globalHeaderSize;	// 32 = 0x20
    MISSING_TYPE *globalHeaderFrame;	// 48 = 0x30
    MISSING_TYPE *pendingPrepareObserver;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100193234
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000001001931a4
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000100193030
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000100192d8c
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100192ac4
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100192ab8
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000100192a1c
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001001923a8
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100192204
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100191e78
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x0000000100191b74
@property(nonatomic) _Bool sectionFootersPinToVisibleBounds;
@property(nonatomic) _Bool sectionHeadersPinToVisibleBounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001914ac
- (id)init;	// IMP=0x000000010019148c

@end
