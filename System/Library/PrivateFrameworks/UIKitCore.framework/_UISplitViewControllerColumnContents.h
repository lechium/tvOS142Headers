/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController, UINavigationController;

@interface _UISplitViewControllerColumnContents : NSObject {

	UIViewController* _viewController;
	UINavigationController* _navigationController;
	UIViewController* _navigationControllerWrapper;

}

@property (nonatomic,readonly) UINavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                           //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIViewController * navigationControllerWrapper;              //@synthesize navigationControllerWrapper=_navigationControllerWrapper - In the implementation block
-(id)description;
-(UIViewController *)viewController;
-(UINavigationController *)navigationController;
-(id)initWithViewController:(id)arg1 navigationController:(id)arg2 navigationControllerWrapper:(id)arg3 ;
-(UIViewController *)navigationControllerWrapper;
@end
