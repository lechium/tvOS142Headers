//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIContentButton, UILabel;

@interface SRTapToEditView : UIView
{
    UILabel *_tapToEditLabel;	// 8 = 0x8
    SiriUIContentButton *_circleButton;	// 16 = 0x10
    SiriUIContentButton *_chevronButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004d40c
- (double)_circleToLabelHeightDifference;	// IMP=0x000000010004d374
- (void)_setHighlighted:(_Bool)arg1;	// IMP=0x000000010004d2bc
- (double)baselineOffsetFromBottom;	// IMP=0x000000010004d22c
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010004d1a8
- (void)layoutSubviews;	// IMP=0x000000010004cfa0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010004cf1c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004cf0c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004cefc
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004ceec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004ca24

@end

