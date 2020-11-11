//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface MTTVContentUnavailableView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005f144
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010005ee44
- (void)layoutSubviews;	// IMP=0x000000010005ea04
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010005e798
- (void)updateColors;	// IMP=0x000000010005e67c
- (void)configureSubviews;	// IMP=0x000000010005e5ac
- (void)setButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000010005e4c4
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *message;
@property(retain, nonatomic) NSString *title;
- (id)init;	// IMP=0x000000010005e178

@end

