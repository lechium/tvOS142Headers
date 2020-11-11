/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXZoomableInlineHeaderViewConfiguration, UIVisualEffectView, UIView, UILabel;

@interface PXZoomableInlineHeaderView : UIView <PXGReusableView> {

	PXZoomableInlineHeaderViewConfiguration* _configuration;
	UIVisualEffectView* _effectView;
	UIView* _tintView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXZoomableInlineHeaderViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXZoomableInlineHeaderViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                           //@synthesize clippingRect=_clippingRect - In the implementation block
+(double)_heightForStyle:(unsigned long long)arg1 ;
+(id)_subtitleFontForStyle:(unsigned long long)arg1 ;
+(id)_titleFontForStyle:(unsigned long long)arg1 ;
+(CGSize)sizeWithConfiguration:(id)arg1 ;
+(double)_titleBaselineDistanceForFont:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserData:(PXZoomableInlineHeaderViewConfiguration *)arg1 ;
-(PXZoomableInlineHeaderViewConfiguration *)userData;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_configureViews;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)becomeReusable;
-(void)_updateConfiguration;
-(void)_setupViews;
-(void)_updateButtonWithConfiguration:(id)arg1 ;
-(void)_setupBackgroundView;
-(void)_setEffectViewCornerRadius:(double)arg1 ;
-(id)_tintViewBackgroundColor;
-(void)_platformSpecificViewSetup;
@end

