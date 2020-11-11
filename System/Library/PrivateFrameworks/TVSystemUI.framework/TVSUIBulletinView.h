/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, TVSUIOuterShadowView, UILabel, UIImageView, UIView;

@interface TVSUIBulletinView : UIView {

	UIVisualEffectView* _backgroundView;
	TVSUIOuterShadowView* _shadowView;
	long long _bulletinPosition;
	long long _style;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	UIView* _accessoryView;
	UIView* _containerView;

}

@property (nonatomic,readonly) UIView * containerView;               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) long long style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                 //@synthesize accessoryView=_accessoryView - In the implementation block
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(UIView *)accessoryView;
-(UIView *)containerView;
-(id)initWithFrame:(CGRect)arg1 position:(long long)arg2 ;
-(void)_updateColorsForUserInterfaceStyle:(long long)arg1 ;
-(textSizeResult)_textSizeForTitle;
-(textSizeResult)_textSizeForSubtitle;
-(textSizeResult)_textSizeForLabel:(id)arg1 lines:(long long)arg2 minWidth:(double)arg3 step:(double)arg4 maxWidth:(double)arg5 ;
@end

