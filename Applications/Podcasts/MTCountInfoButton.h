//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTTouchInsetsButton, UIColor, UIFont, UILabel;

@interface MTCountInfoButton : UIControl
{
    unsigned long long _index;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    MTTouchInsetsButton *_button;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000e4898
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MTTouchInsetsButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)buttonTapped:(id)arg1;	// IMP=0x00000001000e4680
- (struct CGSize)labelSize;	// IMP=0x00000001000e4624
- (struct CGSize)buttonSize;	// IMP=0x00000001000e45c8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000e456c
- (void)layoutSubviews;	// IMP=0x00000001000e4400
- (id)_createLabelTextForCurrentState;	// IMP=0x00000001000e4268
- (void)_updateLabelText;	// IMP=0x00000001000e41b4
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (void)setIndex:(unsigned long long)arg1 forCount:(unsigned long long)arg2;	// IMP=0x00000001000e3f58
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e3e98

@end
