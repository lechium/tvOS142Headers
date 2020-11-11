//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary, TVPCollectionViewLayoutAttributes;

@interface TVPCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    _Bool _isFocusEnteringCollectionView;	// 8 = 0x8
    _Bool _isFocusLeavingCollectionView;	// 9 = 0x9
    _Bool _isFocusInsideCollectionView;	// 10 = 0xa
    TVPCollectionViewLayoutAttributes *_titleLayoutAttributes;	// 16 = 0x10
    NSMutableDictionary *_headerAttributes;	// 24 = 0x18
    unsigned long long _focusHeading;	// 32 = 0x20
    NSMutableDictionary *_focusContainerGuides;	// 40 = 0x28
    struct CGSize _titleSize;	// 48 = 0x30
}

+ (Class)invalidationContextClass;	// IMP=0x000000010002c198
+ (Class)layoutAttributesClass;	// IMP=0x000000010002bce4
- (void).cxx_destruct;	// IMP=0x000000010002d008
@property(retain, nonatomic) NSMutableDictionary *focusContainerGuides; // @synthesize focusContainerGuides=_focusContainerGuides;
@property(nonatomic) _Bool isFocusInsideCollectionView; // @synthesize isFocusInsideCollectionView=_isFocusInsideCollectionView;
@property(nonatomic, setter=setFocusLeavingCollectionView:) _Bool isFocusLeavingCollectionView; // @synthesize isFocusLeavingCollectionView=_isFocusLeavingCollectionView;
@property(nonatomic, setter=setFocusEnteringCollectionView:) _Bool isFocusEnteringCollectionView; // @synthesize isFocusEnteringCollectionView=_isFocusEnteringCollectionView;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading=_focusHeading;
@property(retain, nonatomic) NSMutableDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) TVPCollectionViewLayoutAttributes *titleLayoutAttributes; // @synthesize titleLayoutAttributes=_titleLayoutAttributes;
@property(nonatomic, getter=_titleSize, setter=_setTitleSize:) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
- (void)_removeFocusContainerGuideForSection:(long long)arg1;	// IMP=0x000000010002cd30
- (id)_focusContainerGuideForSection:(long long)arg1;	// IMP=0x000000010002cbdc
- (void)_updateFocusContainerGuides;	// IMP=0x000000010002c7d8
- (struct CGSize)_titleAdjustmentSize;	// IMP=0x000000010002c78c
- (struct CGRect)_titleFrame;	// IMP=0x000000010002c5a4
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000010002c20c
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000010002c1a4
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x000000010002be08
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000010002bd90
- (void)_adjustLayoutAttributes:(id)arg1;	// IMP=0x000000010002bcf0
- (void)_applyCustomAttributesToAttributes:(id)arg1;	// IMP=0x000000010002bb98
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000010002bb14
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010002ba10
- (id)_layoutAttributesForTitle;	// IMP=0x000000010002b94c
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000010002b60c
- (void)prepareLayout;	// IMP=0x000000010002b4ec

@end
