//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray;

@interface HBTopShelfLabeledContentLayout : UICollectionViewFlowLayout
{
    struct {
        unsigned int delegateSizeOfSectionHeader:1;
    } _flags;	// 8 = 0x8
    _Bool _animatingFocusUpdate;	// 12 = 0xc
    NSArray *_headerFrames;	// 16 = 0x10
    unsigned long long _focusAnimationOptions;	// 24 = 0x18
    double _focusingAnimationDuration;	// 32 = 0x20
    double _unfocusingAnimationDuration;	// 40 = 0x28
}

+ (Class)invalidationContextClass;	// IMP=0x0000000100009794
- (void).cxx_destruct;	// IMP=0x000000010000a068
@property(nonatomic) double unfocusingAnimationDuration; // @synthesize unfocusingAnimationDuration=_unfocusingAnimationDuration;
@property(nonatomic) double focusingAnimationDuration; // @synthesize focusingAnimationDuration=_focusingAnimationDuration;
@property(nonatomic) unsigned long long focusAnimationOptions; // @synthesize focusAnimationOptions=_focusAnimationOptions;
@property(nonatomic, getter=isAnimatingFocusUpdate) _Bool animatingFocusUpdate; // @synthesize animatingFocusUpdate=_animatingFocusUpdate;
@property(copy, nonatomic) NSArray *headerFrames; // @synthesize headerFrames=_headerFrames;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x0000000100009fc4
- (long long)developmentLayoutDirection;	// IMP=0x0000000100009fbc
- (double)_widthOfSection:(long long)arg1;	// IMP=0x0000000100009fa0
- (struct CGRect)_rectOfSection:(long long)arg1;	// IMP=0x0000000100009de8
- (id)_layoutAttributesForSectionHeaderAtIndexPath:(id)arg1;	// IMP=0x0000000100009c44
- (void)_updateIsAboveFocusedItemStateForLayoutAttribute:(id)arg1;	// IMP=0x0000000100009824
- (void)_updateLabeledContentDelegateFlags;	// IMP=0x00000001000097a0
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000100009620
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000100009618
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100009554
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000010000921c
- (void)prepareLayout;	// IMP=0x0000000100008d24

@end

