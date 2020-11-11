//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTColorTheme, UILabel, _UIBackdropView;

@interface MTTVSectionHeaderView : UIView
{
    _Bool _floating;	// 8 = 0x8
    _Bool _alwaysFloating;	// 9 = 0x9
    MTColorTheme *_colorTheme;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
    _UIBackdropView *_backgroundView;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    UIView *_dividerBar;	// 48 = 0x30
    _UIBackdropView *_backdropView;	// 56 = 0x38
    UILabel *_textLabel;	// 64 = 0x40
    struct UIEdgeInsets _contentInset;	// 72 = 0x48
    struct UIEdgeInsets __layoutMargins;	// 104 = 0x68
}

+ (id)font;	// IMP=0x000000010016eb08
+ (double)height;	// IMP=0x000000010016ea5c
- (void).cxx_destruct;	// IMP=0x000000010016f810
@property(nonatomic) struct UIEdgeInsets _layoutMargins; // @synthesize _layoutMargins=__layoutMargins;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *dividerBar; // @synthesize dividerBar=_dividerBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UIBackdropView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool alwaysFloating; // @synthesize alwaysFloating=_alwaysFloating;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010016f6c8
- (void)layoutSubviews;	// IMP=0x000000010016f210
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010016f144
- (void)_updateBlurEffects;	// IMP=0x000000010016ee54
- (void)prepareForReuse;	// IMP=0x000000010016edc0
- (void)_configureSubviews;	// IMP=0x000000010016eba4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010016eb28

@end
