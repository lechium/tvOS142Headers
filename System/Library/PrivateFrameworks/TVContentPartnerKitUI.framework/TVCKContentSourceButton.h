/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIView, UIImage, NSShadow, UIColor, UILabel, UIImageView, CALayer, UITapGestureRecognizer, NSAttributedString;

@interface TVCKContentSourceButton : UIControl {

	UIView* _shadowView;
	unsigned long long _style;
	id _representedObject;
	UIImage* _image;
	NSShadow* _shadow;
	UIColor* _borderColor;
	UIView* _visualEffectView;
	UIView* _overlayView;
	UILabel* _textView;
	UILabel* _textMask;
	UIImageView* _imageView;
	CALayer* _imageMask;
	UITapGestureRecognizer* _selectRecognizer;
	UIEdgeInsets _padding;
	UIEdgeInsets _borderWidths;

}

@property (nonatomic,retain) UIView * visualEffectView;                              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                   //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UILabel * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UILabel * textMask;                                     //@synthesize textMask=_textMask - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) CALayer * imageMask;                                    //@synthesize imageMask=_imageMask - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * selectRecognizer;              //@synthesize selectRecognizer=_selectRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) id representedObject;                                   //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                   //@synthesize padding=_padding - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                      //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                  //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidths;                              //@synthesize borderWidths=_borderWidths - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIColor *)borderColor;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(NSShadow *)shadow;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(id)representedObject;
-(UILabel *)textView;
-(void)setTextView:(UILabel *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIEdgeInsets)borderWidths;
-(UIView *)visualEffectView;
-(void)setVisualEffectView:(UIView *)arg1 ;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
-(UITapGestureRecognizer *)selectRecognizer;
-(void)setSelectRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)_backgroundColorForStyle:(unsigned long long)arg1 ;
-(BOOL)_useFlatImageForStyle:(unsigned long long)arg1 ;
-(id)_compositingFilterForStyle:(unsigned long long)arg1 ;
-(UILabel *)textMask;
-(CALayer *)imageMask;
-(void)setBorderWidths:(UIEdgeInsets)arg1 ;
-(void)setTextMask:(UILabel *)arg1 ;
-(void)setImageMask:(CALayer *)arg1 ;
@end

