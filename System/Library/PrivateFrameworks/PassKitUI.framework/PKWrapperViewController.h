/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface PKWrapperViewController : UIViewController {

	long long _type;
	UIViewController* _wrappedViewController;

}

@property (nonatomic,readonly) UIViewController * wrappedViewController;              //@synthesize wrappedViewController=_wrappedViewController - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(long long)preferredUserInterfaceStyle;
-(void)_updatePreferredContentSize;
-(unsigned long long)edgesForExtendedLayout;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(UIViewController *)wrappedViewController;
-(id)childViewControllerForUserInterfaceStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
@end
