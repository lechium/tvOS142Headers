//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore22BaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore28AnnotationCollectionViewCell : _TtC8AppStore22BaseCollectionViewCell
{
    MISSING_TYPE *titleLabel;	// 176 = 0xb0
    MISSING_TYPE *summaryLabel;	// 184 = 0xb8
    MISSING_TYPE *detailViewPool;	// 0 = 0x0
    MISSING_TYPE *detailViews;	// 0 = 0x0
    MISSING_TYPE *linkLabel;	// 0 = 0x0
    MISSING_TYPE *backgroundEffectView;	// 0 = 0x0
    MISSING_TYPE *isExpanded;	// 2853962720 = 0xaa1c03e0
    MISSING_TYPE *titleText;	// 2853700601 = 0xaa1803f9
    MISSING_TYPE *explicitSummary;	// 3053450707 = 0xb5fff5d3
    MISSING_TYPE *detailItems;	// 1384120371 = 0x52800033
    MISSING_TYPE *linkAction;	// 3531603995 = 0xd280001b
}

- (void).cxx_destruct;	// IMP=0x0000000100163118
- (void)accessibilityLinkLabelTapped;	// IMP=0x0000000100162fe0
@property(nonatomic, readonly) _Bool accessibilityIsSummaryExpandable;
@property(nonatomic, readonly) _Bool accessibilityCellIsExpanded;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityLinkLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitySummaryLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) NSArray *accessibilityDetailItems;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001001620ac
- (void)layoutSubviews;	// IMP=0x0000000100161490
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000100161000
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)prepareForReuse;	// IMP=0x0000000100160d6c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100160b94
@property(nonatomic) long long overrideUserInterfaceStyle;

@end

