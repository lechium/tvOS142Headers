/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIWindow, UIView, UIClassicStatusBarView;

@interface UIStatusBarViewController : UIViewController {

	BOOL _iPhoneWS;
	UIWindow* _window;
	UIView* _statusBar;
	UIClassicStatusBarView* _statusBarBackgroundView;
	BOOL _keyboardVisible;

}
+(double)statusBarOrientationAnimationDurationFrom:(long long)arg1 to:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(id)_window;
-(void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)_updateStatusBarForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 style:(long long)arg3 hidden:(BOOL)arg4 slideUp:(BOOL)arg5 ;
-(void)_changeStatusBarOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_zoom:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_statusBarViewControllerKeyboardWillShow:(id)arg1 ;
-(void)_statusBarViewControllerKeyboardDidHide:(id)arg1 ;
-(void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 hidden:(BOOL)arg3 slideUp:(BOOL)arg4 ;
-(void)_finishStatusBarOrientationChange;
-(void)_prepareForZoom:(BOOL)arg1 ;
-(CGSize)_statusBarSizeForOrientation:(long long)arg1 ;
@end

