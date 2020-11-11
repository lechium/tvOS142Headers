/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning_Internal.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIView, UIViewPropertyAnimator, NSString;

@interface _UISheetAnimationController : NSObject <UIViewControllerAnimatedTransitioning_Internal, UIViewControllerAnimatedTransitioning> {

	BOOL _isReversed;
	BOOL _isInInitialLayout;
	BOOL _scalesDownForwardView;
	/*^block*/id _noninteractiveAnimations;
	/*^block*/id _noninteractiveCompletion;
	id<UIViewControllerContextTransitioning> _transitionContext;
	UIView* _forwardView;
	UIViewPropertyAnimator* _propertyAnimator;
	CGPoint _offset;
	CGPoint _attachmentPoint;
	CGRect _sourceFrame;
	CGRect _forwardViewFullFrame;

}

@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) BOOL isForward; 
@property (nonatomic,retain) UIView * forwardView;                                                           //@synthesize forwardView=_forwardView - In the implementation block
@property (assign,nonatomic) CGRect forwardViewFullFrame;                                                    //@synthesize forwardViewFullFrame=_forwardViewFullFrame - In the implementation block
@property (assign,nonatomic) BOOL isInInitialLayout;                                                         //@synthesize isInInitialLayout=_isInInitialLayout - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * propertyAnimator;                                      //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (assign,nonatomic) BOOL scalesDownForwardView;                                                     //@synthesize scalesDownForwardView=_scalesDownForwardView - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                                                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) CGPoint attachmentPoint;                                                        //@synthesize attachmentPoint=_attachmentPoint - In the implementation block
@property (assign,nonatomic) BOOL isReversed;                                                                //@synthesize isReversed=_isReversed - In the implementation block
@property (assign,nonatomic) CGRect sourceFrame;                                                             //@synthesize sourceFrame=_sourceFrame - In the implementation block
@property (nonatomic,copy) id noninteractiveAnimations;                                                      //@synthesize noninteractiveAnimations=_noninteractiveAnimations - In the implementation block
@property (nonatomic,copy) id noninteractiveCompletion;                                                      //@synthesize noninteractiveCompletion=_noninteractiveCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)interruptibleAnimatorForTransition:(id)arg1 ;
-(CGRect)sourceFrame;
-(BOOL)isForward;
-(BOOL)isReversed;
-(void)setIsReversed:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(void)setPropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(CGPoint)attachmentPoint;
-(void)setSourceFrame:(CGRect)arg1 ;
-(void)setAttachmentPoint:(CGPoint)arg1 ;
-(void)layoutTransitionViews;
-(void)runNoninteractiveAnimationsIfPossible;
-(BOOL)_allowKeyboardToAnimateAlongside:(id)arg1 ;
-(void)setForwardView:(UIView *)arg1 ;
-(void)setForwardViewFullFrame:(CGRect)arg1 ;
-(CGRect)forwardViewFullFrame;
-(UIView *)forwardView;
-(void)setIsInInitialLayout:(BOOL)arg1 ;
-(BOOL)isInInitialLayout;
-(BOOL)scalesDownForwardView;
-(id)noninteractiveAnimations;
-(id)noninteractiveCompletion;
-(void)setNoninteractiveAnimations:(id)arg1 ;
-(void)setNoninteractiveCompletion:(id)arg1 ;
-(void)setScalesDownForwardView:(BOOL)arg1 ;
@end

