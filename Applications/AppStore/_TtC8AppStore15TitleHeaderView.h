//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8AppStore15TitleHeaderView : UICollectionReusableView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *detailLabel;	// 16 = 0x10
    MISSING_TYPE *style;	// 2483474106 = 0x9406ceba
    MISSING_TYPE *accessoryView;	// 2432697312 = 0x910003e0
    MISSING_TYPE *accessory;	// 2483474090 = 0x9406ceaa
    MISSING_TYPE *accessoryAction;	// 4181984520 = 0xf9440508
    MISSING_TYPE *separatorLineView;	// 2483379739 = 0x94055e1b
    MISSING_TYPE *separatorInset;	// 2483474093 = 0x9406cead
    MISSING_TYPE *avoidanceRegion;	// 2839629812 = 0xa9414ff4
}

- (void).cxx_destruct;	// IMP=0x00000001001305d0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (id)_accessibilitySupplementaryFooterViews;	// IMP=0x000000010013034c
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;	// IMP=0x000000010012fc90
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010012fba4
- (void)layoutSubviews;	// IMP=0x000000010012fb78
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010012edb0
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x000000010012eb40
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010012e8f8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010012e8d8

@end
