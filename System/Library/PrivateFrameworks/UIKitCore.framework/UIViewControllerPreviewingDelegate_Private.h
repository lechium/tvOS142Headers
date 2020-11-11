/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIViewControllerPreviewingDelegate_Private <NSObject>
@optional
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(void)_previewingContext:(id)arg1 willPresentViewController:(id)arg2;
-(void)_previewingContext:(id)arg1 willDismissViewController:(id)arg2;
-(id)committedViewControllerForPreviewViewController:(id)arg1;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;

@end
