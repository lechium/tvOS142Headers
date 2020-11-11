/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UINavigationControllerDelegate.h>

@protocol UINavigationControllerDelegate, SiriUINavigationTransitioning;
@class NSString;

@interface _SiriUINavigationControllerDelegateAdapter : NSObject <UINavigationControllerDelegate> {

	id<UINavigationControllerDelegate> _externalDelegate;
	id<SiriUINavigationTransitioning> _transitionController;

}

@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> externalDelegate;              //@synthesize externalDelegate=_externalDelegate - In the implementation block
@property (nonatomic,retain) id<SiriUINavigationTransitioning> transitionController;                  //@synthesize transitionController=_transitionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id<UINavigationControllerDelegate>)externalDelegate;
-(id<SiriUINavigationTransitioning>)transitionController;
-(void)setExternalDelegate:(id<UINavigationControllerDelegate>)arg1 ;
-(void)setTransitionController:(id<SiriUINavigationTransitioning>)arg1 ;
@end

