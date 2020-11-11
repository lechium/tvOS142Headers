//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTChevronView, NSNumber, UIColor, UIFont, UILabel;

@interface MTCountChevronView : UIView
{
    NSNumber *_count;	// 8 = 0x8
    UIColor *_textColor;	// 16 = 0x10
    UILabel *_countLabel;	// 24 = 0x18
    MTChevronView *_chevronView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100041bb4
@property(retain, nonatomic) MTChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (struct CGRect)_countFrameForViewSize:(struct CGSize)arg1;	// IMP=0x00000001000419c4
- (struct CGSize)_countSize;	// IMP=0x000000010004195c
- (struct CGSize)_chevronSize;	// IMP=0x0000000100041900
- (struct CGRect)_chevronFrameForViewSize:(struct CGSize)arg1;	// IMP=0x0000000100041878
- (void)_updateCurrentTextColor;	// IMP=0x000000010004178c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100041730
- (void)layoutSubviews;	// IMP=0x00000001000415e8
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000412b0

@end

