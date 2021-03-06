/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@class UIView, VUIMonogramViewConfiguration, VUIMonogramDescription, UIImage, _TVImageView, TVImageProxy, NSString;

@interface VUIMonogramView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting> {

	UIView* _placeholderView;
	UIView* _unfocusedShadowView;
	UIView* _focusedShadowView;
	BOOL _isSelected;
	VUIMonogramViewConfiguration* _configuration;
	VUIMonogramDescription* _monogramDescription;
	UIImage* _image;
	UIImage* _placeholderImage;
	double _unfocusedImageAlpha;
	UIView* _overlayView;
	/*^block*/id _pressCompletionBlock;
	_TVImageView* _imageView;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,copy) id pressCompletionBlock;                                       //@synthesize pressCompletionBlock=_pressCompletionBlock - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                   //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,readonly) VUIMonogramViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) VUIMonogramDescription * monogramDescription;                //@synthesize monogramDescription=_monogramDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                  //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double unfocusedImageAlpha;                                  //@synthesize unfocusedImageAlpha=_unfocusedImageAlpha - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIMonogramViewConfiguration *)configuration;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(_TVImageView *)imageView;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)unfocusedImageAlpha;
-(void)setPressCompletionBlock:(id)arg1 ;
-(id)pressCompletionBlock;
-(void)setMonogramDescription:(VUIMonogramDescription *)arg1 ;
-(void)_updatePlaceholerView;
-(void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2 ;
-(void)_updateUnfocusedShadowFrameAndLayerWithFrame:(CGRect)arg1 ;
-(void)_updateFocusedShadowFrameAndLayerWithFrame:(CGRect)arg1 ;
-(void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1 ;
-(VUIMonogramDescription *)monogramDescription;
-(void)setUnfocusedImageAlpha:(double)arg1 ;
@end

