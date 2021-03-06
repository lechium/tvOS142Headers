/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIViewController, UINavigationController;

@interface UISnapshotModalViewController : UIViewController {

	long long _interfaceOrientation;
	UIViewController* _disappearingViewController;
	UINavigationController* _parentController;

}

@property (nonatomic,retain) UIViewController * disappearingViewController;              //@synthesize disappearingViewController=_disappearingViewController - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)disappearingViewController;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(id)initWithInterfaceOrientation:(long long)arg1 ;
-(void)setDisappearingViewController:(UIViewController *)arg1 ;
@end

