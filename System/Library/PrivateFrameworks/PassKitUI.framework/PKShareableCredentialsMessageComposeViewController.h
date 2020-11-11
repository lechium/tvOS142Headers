/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;
@class PKAddShareablePassConfiguration, _UIAsyncInvocation, PKRemoteShareableCredentialsMessageComposeViewController;

@interface PKShareableCredentialsMessageComposeViewController : UIViewController {

	id<PKShareableCredentialsMessageComposeViewControllerDelegate> _delegate;
	PKAddShareablePassConfiguration* _configuration;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteShareableCredentialsMessageComposeViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKShareableCredentialsMessageComposeViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKShareableCredentialsMessageComposeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKShareableCredentialsMessageComposeViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 ;
-(long long)modalTransitionStyle;
-(BOOL)shouldAutorotate;
-(id)childViewControllerForStatusBarHidden;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

