//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC6Arcade15TitleHeaderView : UICollectionReusableView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *detailLabel;	// 16 = 0x10
    MISSING_TYPE *style;	// 0 = 0x0
    MISSING_TYPE *accessoryView;	// 0 = 0x0
    MISSING_TYPE *accessory;	// 0 = 0x0
    MISSING_TYPE *accessoryAction;	// 0 = 0x0
    MISSING_TYPE *separatorLineView;	// 0 = 0x0
    MISSING_TYPE *separatorInset;	// 0 = 0x0
    MISSING_TYPE *avoidanceRegion;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000100131df0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (id)_accessibilitySupplementaryFooterViews;	// IMP=0x0000000100131a88
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;	// IMP=0x00000001001313cc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001001312e0
- (void)layoutSubviews;	// IMP=0x00000001001312b4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001001304ec
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x000000010013027c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010012fac8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010012faa8

@end

