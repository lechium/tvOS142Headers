//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTableViewCell.h"

@class MTColorTheme, NSString, UILabel, UIView;

@interface MTNoContentTableViewCell : MTTableViewCell
{
    UILabel *_messageLabel;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    MTColorTheme *_colorTheme;	// 40 = 0x28
    struct UIEdgeInsets _contentInset;	// 48 = 0x30
    struct UIEdgeInsets __layoutMargins;	// 80 = 0x50
}

+ (id)reuseIdentifier;	// IMP=0x000000010008dab0
- (void).cxx_destruct;	// IMP=0x000000010008e228
@property(nonatomic) struct UIEdgeInsets _layoutMargins; // @synthesize _layoutMargins=__layoutMargins;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(copy, nonatomic) NSString *message;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010008dfec
- (void)layoutSubviews;	// IMP=0x000000010008dde8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010008dd1c
- (void)setupCell;	// IMP=0x000000010008dbe4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010008db2c
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000010008db18
- (id)init;	// IMP=0x000000010008dabc

@end

