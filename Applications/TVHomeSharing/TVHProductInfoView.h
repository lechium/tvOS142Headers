//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSString, TVFocusableTextView, TVHProductMetadataView, UIColor, UILabel;
@protocol TVHProductInfoViewDelegate;

@interface TVHProductInfoView : UIView
{
    id <TVHProductInfoViewDelegate> _delegate;	// 8 = 0x8
    TVHProductMetadataView *_metadataView;	// 16 = 0x10
    NSArray *_controls;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    TVFocusableTextView *_contentDescriptionTextView;	// 48 = 0x30
    UIColor *_dynamicTextColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100044414
@property(retain, nonatomic) UIColor *dynamicTextColor; // @synthesize dynamicTextColor=_dynamicTextColor;
@property(retain, nonatomic) TVFocusableTextView *contentDescriptionTextView; // @synthesize contentDescriptionTextView=_contentDescriptionTextView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(retain, nonatomic) TVHProductMetadataView *metadataView; // @synthesize metadataView=_metadataView;
@property(nonatomic) __weak id <TVHProductInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectContentDescriptionText;	// IMP=0x00000001000442e8
- (id)preferredFocusEnvironments;	// IMP=0x0000000100044208
- (void)layoutSubviews;	// IMP=0x0000000100043ddc
@property(copy, nonatomic) NSAttributedString *contentDescription;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000432e8

@end

