/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol UINamedLayerStack;
@class NSString, NSArray, CALayer, CATransformLayer, _UIStackedImageLayerDelegate, UIView, _UIStackedImageConfiguration;

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate> {

	BOOL _animatingToNormalState;
	BOOL _animatingStateChange;
	double _selectionStartTime;
	double _selectionDuration;
	long long _selectionStyle;
	double _idleModeFocusSizeOffset;
	CGSize _radiosityImageScale;
	BOOL _radiosityNeedsLayout;
	double _scale;
	NSString* _imageStackContentsGravity;
	double _radiosityRequestTime;
	double _rotationAmount;
	CGPoint _translationOffset;
	double _maximumParallaxDepth;
	BOOL _nonOpaqueShadow;
	BOOL _singleLayerNoMask;
	BOOL _layerStackSupportsInflation;
	BOOL _layerStackInflated;
	unsigned long long _layerStackInflationSeed;
	BOOL _deferredInflationPending;
	id _flatImage;
	NSArray* _parallaxImages;
	NSArray* _parallaxLayerDepths;
	CALayer* _imageLayersContainer;
	NSArray* _imageLayers;
	CALayer* _flatLayer;
	CALayer* _maskLayer;
	CALayer* _radiosityLayer;
	CALayer* _selectedPlaceholderLayer;
	CALayer* _shadowLayer;
	CALayer* _unfocusedShadowLayer;
	CALayer* _specularLayer;
	CALayer* _cursorLayer;
	CALayer* _cursorLayerContainer;
	CALayer* _focusKeylineStrokeLayer;
	CALayer* _overlayLayer;
	CALayer* _overlayContainerLayer;
	CALayer* _unmaskedOverlayLayer;
	CALayer* _unmaskedOverlayContainerLayer;
	CATransformLayer* _imagePerspectiveTransformLayer;
	CATransformLayer* _imageRotationTransformLayer;
	CATransformLayer* _maskPerspectiveTransformLayer;
	CATransformLayer* _maskRotationTransformLayer;
	CATransformLayer* _unmaskedOverlayPerspectiveTransformLayer;
	CATransformLayer* _unmaskedOverlayRotationTransformLayer;
	CATransformLayer* _cursorRotationTransformLayer;
	CALayer* _frontmostPerspectiveTransformLayer;
	CATransformLayer* _frontmostRotationTransformLayer;
	_UIStackedImageLayerDelegate* _layoutDelegate;
	UIView* _animationView;
	_UIStackedImageConfiguration* _configuration;
	id<UINamedLayerStack> _layerStack;
	unsigned long long _controlState;
	CGPoint _focusDirection;

}

@property (nonatomic,retain) _UIStackedImageConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                          //@synthesize layerStack=_layerStack - In the implementation block
@property (assign,nonatomic) unsigned long long controlState;                           //@synthesize controlState=_controlState - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) CGPoint focusDirection;                                    //@synthesize focusDirection=_focusDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_scaledSizeForSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3 ;
+(id)_layerStackObservingKeys;
-(id)init;
-(void)dealloc;
-(_UIStackedImageConfiguration *)configuration;
-(void)setConfiguration:(_UIStackedImageConfiguration *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(BOOL)_isSelected;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(void)removeAllAnimations;
-(void)layoutSublayers;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)_overlayLayer;
-(void)setControlState:(unsigned long long)arg1 ;
-(BOOL)_isHighlighted;
-(long long)_selectionStyle;
-(void)_setOverlayLayer:(id)arg1 ;
-(unsigned long long)controlState;
-(BOOL)isPressed;
-(void)_setSelectionStyle:(long long)arg1 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(id)_parallaxLayerDepths;
-(void)_setParallaxLayerDepths:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setUnmaskedOverlayLayer:(id)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(unsigned long long)_primaryControlStateForState:(unsigned long long)arg1 ;
-(double)_idleModeFocusSizeOffset;
-(id)_imageStackContentsGravity;
-(id)_layerBelowTitles;
-(id)_flatLayer;
-(id)_shadowLayer;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(void)_setIdleModeFocusSizeOffset:(double)arg1 ;
-(void)_setImageStackContentsGravity:(id)arg1 ;
-(id<UINamedLayerStack>)layerStack;
-(void)_applyFocusDirectionTransform;
-(BOOL)_isFocused;
-(double)_unfocusedShadowRadius;
-(id)_contentLayers;
-(void)_updateShadowWithAnimationCoordinator:(id)arg1 ;
-(void)_updateSpecularLayerContents;
-(void)_setDefaultParallaxLayerDepths;
-(void)_updateNonOpaqueShadowStateFromLayerStack;
-(id)_preferredLayoutDelegateForLayer:(id)arg1 ;
-(CGRect)_positionAndSizeForLayerImage:(id)arg1 ;
-(CGRect)_displayFrameForModelFrame:(CGRect)arg1 ;
-(CGRect)_cursorBounds;
-(void)_updateShadowBounds;
-(void)_updateShadowPositionWithOffset:(CGPoint)arg1 ;
-(void)_updateOverlayLayout;
-(BOOL)_isFocusedOrFocusedIdle;
-(void)_updateLayerForSelection;
-(BOOL)_radiosityEnabled;
-(void)_layoutRadiosityLayer;
-(CGSize)_scaledSizeForCurrentState;
-(void)_updateCornerRadiusFromConfig;
-(void)_updateRadiosityFromLayerStack;
-(void)_setFlatImage:(id)arg1 ;
-(void)_updateSingleLayerNoMaskFromLayerStack;
-(void)_setupFrontmostTransformLayers;
-(void)_resetAnimatingToNormalState;
-(void)_setParallaxImages:(id)arg1 ;
-(BOOL)_isNormal;
-(void)_setLayerStackInflated:(BOOL)arg1 seed:(unsigned long long)arg2 ;
-(BOOL)_aspectMatchesLayerStack;
-(CATransform3D)_scaleTransformForCurrentState;
-(CATransform3D)_specularTransformForCurrentState;
-(void)_setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)_roundedBoundsSize;
-(CGSize)_focusCursorInsetSizeForSize:(CGSize)arg1 ;
-(void)_deselect;
-(void)_showImageLayers;
-(double)_focusedScaleFactorForCurrentBounds;
-(void)_updateImageLayerFilterChains;
-(void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1 ;
-(BOOL)_isFocusedIdle;
-(void)_removeLayerFromSuperlayer:(id)arg1 ;
-(void)_wrapLayerInView:(id)arg1 ;
-(void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1 ;
-(CGImageRef)_cgImageForLayeredImage:(id)arg1 ;
-(CGPoint)_layerStackToDisplayScaleFactor;
-(void)_updatePerspective;
-(void)_updateRotationAndTranslation:(id)arg1 ;
-(void)_updateFocusKeylineStrokeScale;
-(void)_updateFullBleedImageLayers;
-(void)_updateNormalImageLayers;
-(void)_updateContentProviderLayerFocusDirection;
-(void)_updateImageLayerFilterValues;
-(void)_updateOverlayContainerLayerHierarchy:(BOOL)arg1 ;
-(id)_randomImage;
-(CATransform3D)_perspectiveTransformForCurrentState;
-(CATransform3D)_rotationTransformForCurrentFocusDirection;
-(void)_updateFocusKeylineStrokeTranslation:(CGPoint)arg1 ;
-(void)_updateSpecularLayerContentsRect;
-(CATransform3D)_fixedFrameTransformForDepth:(double)arg1 fudgeFactor:(double)arg2 ;
-(double)_focusedShadowRadius;
-(double)_getShadowOpacity;
-(BOOL)_configuredForNonOpaqueShadow;
-(id)_imageLayersContainer;
-(id)_unmaskedOverlayLayer;
@end

