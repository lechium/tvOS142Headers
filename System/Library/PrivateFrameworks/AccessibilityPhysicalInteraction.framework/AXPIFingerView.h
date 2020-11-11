/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol AXPIFingerAppearanceDelegate;
@class AXPIFingerLayer, CAShapeLayer, NSString;

@interface AXPIFingerView : UIView <CAAnimationDelegate> {

	BOOL _pressed;
	double _force;
	unsigned long long _shape;
	AXPIFingerLayer* _cursorLayer;
	CAShapeLayer* _outerStrokeTrackLayer;
	CAShapeLayer* _outerStrokeLayer;
	CAShapeLayer* _innerStrokeLayer;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	CAShapeLayer* _progressLayer;
	/*^block*/id _lastProgressCompletionBlock;

}

@property (nonatomic,retain) AXPIFingerLayer * cursorLayer;                                           //@synthesize cursorLayer=_cursorLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerStrokeTrackLayer;                                    //@synthesize outerStrokeTrackLayer=_outerStrokeTrackLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerStrokeLayer;                                         //@synthesize outerStrokeLayer=_outerStrokeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * innerStrokeLayer;                                         //@synthesize innerStrokeLayer=_innerStrokeLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                                            //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,copy) id lastProgressCompletionBlock;                                            //@synthesize lastProgressCompletionBlock=_lastProgressCompletionBlock - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                           //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) double force;                                                            //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long shape;                                                //@synthesize shape=_shape - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerClass;
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(unsigned long long)shape;
-(void)setShape:(unsigned long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(double)force;
-(void)setForce:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPressed:(BOOL)arg1 ;
-(id)backdropLayer;
-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)isPressed;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appearanceDelegate:(id)arg2 ;
-(void)setCursorLayer:(AXPIFingerLayer *)arg1 ;
-(void)setOuterStrokeTrackLayer:(CAShapeLayer *)arg1 ;
-(void)setOuterStrokeLayer:(CAShapeLayer *)arg1 ;
-(void)setInnerStrokeLayer:(CAShapeLayer *)arg1 ;
-(void)_setPathForCurrentShape;
-(CAShapeLayer *)outerStrokeTrackLayer;
-(CAShapeLayer *)outerStrokeLayer;
-(CAShapeLayer *)innerStrokeLayer;
-(AXPIFingerLayer *)cursorLayer;
-(void)cancelExisingCircularProgressAnimation;
-(void)setLastProgressCompletionBlock:(id)arg1 ;
-(id)_createProgressLayerWithDuration:(double)arg1 inRect:(CGRect)arg2 ;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)progressLayer;
-(id)lastProgressCompletionBlock;
-(double)_iconScaleForForce:(double)arg1 ;
-(void)animateCircularProgressWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end
