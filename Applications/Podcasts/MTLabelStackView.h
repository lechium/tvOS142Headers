//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, UIColor, UILabel;
@protocol MTLabelStackViewDelegate;

@interface MTLabelStackView : UIView
{
    _Bool _heightWillChange;	// 8 = 0x8
    NSCache *_textSizeCache;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    NSString *_titleTextStyle;	// 32 = 0x20
    NSString *_subtitleTextStyle;	// 40 = 0x28
    UIColor *_titleTextColor;	// 48 = 0x30
    UIColor *_subtitleTextColor;	// 56 = 0x38
    id <MTLabelStackViewDelegate> _delegate;	// 64 = 0x40
    double _subtitleMaxWidth;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UILabel *_subtitleLabel;	// 88 = 0x58
}

+ (unsigned long long)defaultSubtitleNumberOfLines;	// IMP=0x00000001000dfda0
+ (unsigned long long)defaultTitleNumberOfLines;	// IMP=0x00000001000dfd98
+ (id)defaultSubtitleFont;	// IMP=0x00000001000dfd34
+ (id)defaultTitleFont;	// IMP=0x00000001000dfcd0
+ (id)defaultSubtitleTextStyle;	// IMP=0x00000001000dfcc0
+ (id)defaultTitleTextStyle;	// IMP=0x00000001000dfcb0
+ (double)distanceBetweenLabelFramesWithTitleFont:(id)arg1 subtitleFont:(id)arg2 multilineTitle:(_Bool)arg3;	// IMP=0x00000001000dfc00
+ (double)distanceBetweenLabelFrames;	// IMP=0x00000001000dfb4c
+ (double)maxHeightForTitleNumberOfLines:(unsigned long long)arg1 subtitleNumberOfLines:(unsigned long long)arg2;	// IMP=0x00000001000dfa54
+ (double)maxHeight;	// IMP=0x00000001000df9fc
- (void).cxx_destruct;	// IMP=0x00000001000e1330
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double subtitleMaxWidth; // @synthesize subtitleMaxWidth=_subtitleMaxWidth;
@property(nonatomic) __weak id <MTLabelStackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long subtitleNumberOfLines;
@property(nonatomic) unsigned long long titleNumberOfLines;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)_notifyDelegateIfHeightChanged;	// IMP=0x00000001000e0794
- (void)_heightWillChange;	// IMP=0x00000001000e0778
- (void)_updateSubtitleFont;	// IMP=0x00000001000e06c4
- (void)_updateTitleFont;	// IMP=0x00000001000e0610
- (id)sizeCacheKeyForLabel:(id)arg1 width:(double)arg2;	// IMP=0x00000001000e05d4
- (double)subtitleHeightForWidth:(double)arg1;	// IMP=0x00000001000e04ac
- (double)titleHeightForWidth:(double)arg1;	// IMP=0x00000001000e0384
- (double)distanceBetweenLabelFrames;	// IMP=0x00000001000e0218
- (double)heightForWidth:(double)arg1;	// IMP=0x00000001000e0194
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000e0164
- (void)layoutSubviews;	// IMP=0x00000001000dffbc
- (void)updateFonts;	// IMP=0x00000001000dfecc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000dfda8

@end
