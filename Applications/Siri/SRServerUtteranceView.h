//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIContentLabel, UIFont;

@interface SRServerUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SiriUIContentLabel *_label;	// 40 = 0x28
    _Bool _chevronHasBeenShown;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 49 = 0x31
}

+ (double)insertionAnimatedZPosition;	// IMP=0x00000001000896bc
- (void).cxx_destruct;	// IMP=0x0000000100089b68
- (double)_scaledSiriCorrectionViewLeading;	// IMP=0x0000000100089b08
- (void)layoutSubviews;	// IMP=0x00000001000899cc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100089968
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(retain, nonatomic) UIFont *font;
- (void)setAttributedText:(id)arg1;	// IMP=0x00000001000897f4
- (void)setText:(id)arg1;	// IMP=0x0000000100089788
- (double)baselineOffsetFromBottom;	// IMP=0x0000000100089728
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x00000001000896c8
- (_Bool)chevronHasBeenShown;	// IMP=0x00000001000896ac
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x000000010008968c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100089510

@end

