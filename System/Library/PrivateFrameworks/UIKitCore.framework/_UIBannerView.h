/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBannerContent, CALayer, UIView, UILabel, UIImageView;

@interface _UIBannerView : UIView {

	BOOL _highlighted;
	_UIBannerContent* _content;
	CALayer* _backgroundLayer;
	UIView* _highlightView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) _UIBannerContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) CALayer * backgroundLayer;               //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                  //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                     //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                        //@synthesize highlighted=_highlighted - In the implementation block
-(_UIBannerContent *)content;
-(void)setContent:(_UIBannerContent *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)highlightView;
-(BOOL)highlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateConstraints;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(CALayer *)backgroundLayer;
-(void)setHighlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
@end

