/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSArray, _UIAsyncInvocation, PKRemoteAddPassesViewController, PKAssertion;

@interface PKAddPassesViewController : UIViewController {

	BOOL _viewHasAppeared;
	BOOL _succeeded;
	unsigned long long _presentationSource;
	NSArray* _passDataArray;
	_UIAsyncInvocation* _viewServiceCancelRequest;
	PKRemoteAddPassesViewController* _remoteViewController;
	PKAssertion* _contactlessInterfaceAssertion;
	id<PKAddPassesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddPassesViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(void)dealloc;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)succeeded;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)modalPresentationStyle;
-(id)childViewControllerForStatusBarStyle;
-(long long)preferredStatusBarStyle;
-(id)initWithPass:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)_requestRemoteViewController;
-(long long)modalTransitionStyle;
-(BOOL)shouldAutorotate;
-(id)childViewControllerForStatusBarHidden;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2 ;
-(id)initWithPasses:(id)arg1 ;
-(void)_applyRemoteViewController:(id)arg1 ;
-(void)_ingestionDidFinishWithResult:(unsigned long long)arg1 ;
@end
