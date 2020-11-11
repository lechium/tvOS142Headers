/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>
@optional
-(BOOL)isNavigationBarHidden;
-(id)_transitionCoordinator;
-(void)_updatePaletteConstraints;
-(void)_updatePalettesWithBlock:(/*^block*/id)arg1;
-(void)_navigationBarDidChangeStyle:(id)arg1;
-(void)navigationBarDidChangeOpacity:(id)arg1;
-(id)_navigationBarWindowForInterfaceOrientation:(id)arg1;
-(void)_navigationBarDidEndAnimation:(id)arg1;
-(void)_navigationBarDidUpdateStack:(id)arg1;
-(void)_popNavigationBar:(id)arg1 item:(id)arg2;
-(NSDirectionalEdgeInsets*)_layoutMarginsforNavigationBar:(id)arg1;
-(BOOL)enableBackButtonDuringTransition;
-(void)navigationBarDidResizeForPrompt:(id)arg1;
-(void)_navigationBarChangedSize:(id)arg1;
-(void)_navigationBarWillBeginCoordinatedTransitionAnimations:(id)arg1;
-(CGRect*)_incomingNavigationBarFrame;
-(void)_navigationBar:(id)arg1 itemEnabledAutoScrollTransition:(id)arg2;
-(BOOL)_hasInterruptibleNavigationTransition;
-(BOOL)_willPerformCustomNavigationTransitionForPush;
-(BOOL)_shouldCrossFadeNavigationBar;
-(double)_customNavigationTransitionDuration;
-(BOOL)_willPerformCustomNavigationTransitionForPop;
-(BOOL)_isInteractiveCustomNavigationTransition;
-(BOOL)_navigationBarLayoutIsInInteractiveScroll;
-(void)_navigationBar:(id)arg1 requestPopToItem:(id)arg2;
-(id)_navigationBarAdditionalActionsForBackButtonMenu:(id)arg1;
-(BOOL)_navigationBar:(id)arg1 getContentOffsetOfObservedScrollViewIfApplicable:(CGPoint*)arg2;
-(double)_navigationBar:(id)arg1 preferredHeightForTransitionToHeightRange:(SCD_Struct_UI25)arg2;
-(void)_navigationBar:(id)arg1 topItemUpdatedContentLayout:(id)arg2;
-(void)_navigationItemDidUpdateSearchController:(id)arg1 oldSearchController:(id)arg2;
-(BOOL)_navigationBarShouldUpdateProgress;

@end
