/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {

	UIWindow* _presentationWindow;

}
-(id)init;
-(void)dealloc;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadView;
-(void)_voiceOverStatusChanged;
-(void)_cleanUpPresentationWindow;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
@end

