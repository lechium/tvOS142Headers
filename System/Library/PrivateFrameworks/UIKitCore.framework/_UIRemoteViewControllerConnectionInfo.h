/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIViewServiceInterface, NSArray, BSMachPortSendRight, _UIHostedWindowHostingHandle;

@interface _UIRemoteViewControllerConnectionInfo : NSObject {

	int _preferredStatusBarVisibility;
	_UIViewServiceInterface* _interface;
	id _viewControllerOperatorProxy;
	id _serviceViewControllerProxy;
	id _serviceViewControllerControlMessageProxy;
	id _textEffectsOperatorProxy;
	NSArray* _serviceViewControllerSupportedInterfaceOrientations;
	BSMachPortSendRight* _serviceAccessibilityServerPortWrapper;
	long long _preferredStatusBarStyle;
	_UIHostedWindowHostingHandle* _hostedWindowHostingHandle;
	_UIHostedWindowHostingHandle* _textEffectsWindowHostingHandle;
	_UIHostedWindowHostingHandle* _textEffectsWindowAboveStatusBarHostingHandle;
	_UIHostedWindowHostingHandle* _remoteKeyboardsWindowHostingHandle;

}

@property (retain) _UIViewServiceInterface * interface;                                                      //@synthesize interface=_interface - In the implementation block
@property (retain) id viewControllerOperatorProxy;                                                           //@synthesize viewControllerOperatorProxy=_viewControllerOperatorProxy - In the implementation block
@property (retain) id serviceViewControllerProxy;                                                            //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
@property (retain) id serviceViewControllerControlMessageProxy;                                              //@synthesize serviceViewControllerControlMessageProxy=_serviceViewControllerControlMessageProxy - In the implementation block
@property (retain) id textEffectsOperatorProxy;                                                              //@synthesize textEffectsOperatorProxy=_textEffectsOperatorProxy - In the implementation block
@property (retain) NSArray * serviceViewControllerSupportedInterfaceOrientations;                            //@synthesize serviceViewControllerSupportedInterfaceOrientations=_serviceViewControllerSupportedInterfaceOrientations - In the implementation block
@property (retain) BSMachPortSendRight * serviceAccessibilityServerPortWrapper;                              //@synthesize serviceAccessibilityServerPortWrapper=_serviceAccessibilityServerPortWrapper - In the implementation block
@property (assign) long long preferredStatusBarStyle;                                                        //@synthesize preferredStatusBarStyle=_preferredStatusBarStyle - In the implementation block
@property (assign) int preferredStatusBarVisibility;                                                         //@synthesize preferredStatusBarVisibility=_preferredStatusBarVisibility - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * hostedWindowHostingHandle;                                 //@synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * textEffectsWindowHostingHandle;                            //@synthesize textEffectsWindowHostingHandle=_textEffectsWindowHostingHandle - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * textEffectsWindowAboveStatusBarHostingHandle;              //@synthesize textEffectsWindowAboveStatusBarHostingHandle=_textEffectsWindowAboveStatusBarHostingHandle - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * remoteKeyboardsWindowHostingHandle;                        //@synthesize remoteKeyboardsWindowHostingHandle=_remoteKeyboardsWindowHostingHandle - In the implementation block
-(_UIViewServiceInterface *)interface;
-(void)setInterface:(_UIViewServiceInterface *)arg1 ;
-(long long)preferredStatusBarStyle;
-(_UIHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setHostedWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(id)serviceViewControllerProxy;
-(id)viewControllerOperatorProxy;
-(void)setViewControllerOperatorProxy:(id)arg1 ;
-(void)setServiceViewControllerProxy:(id)arg1 ;
-(id)serviceViewControllerControlMessageProxy;
-(void)setServiceViewControllerControlMessageProxy:(id)arg1 ;
-(id)textEffectsOperatorProxy;
-(void)setTextEffectsOperatorProxy:(id)arg1 ;
-(NSArray *)serviceViewControllerSupportedInterfaceOrientations;
-(void)setServiceViewControllerSupportedInterfaceOrientations:(NSArray *)arg1 ;
-(BSMachPortSendRight *)serviceAccessibilityServerPortWrapper;
-(void)setServiceAccessibilityServerPortWrapper:(BSMachPortSendRight *)arg1 ;
-(void)setPreferredStatusBarStyle:(long long)arg1 ;
-(int)preferredStatusBarVisibility;
-(void)setPreferredStatusBarVisibility:(int)arg1 ;
-(_UIHostedWindowHostingHandle *)textEffectsWindowHostingHandle;
-(void)setTextEffectsWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(_UIHostedWindowHostingHandle *)textEffectsWindowAboveStatusBarHostingHandle;
-(void)setTextEffectsWindowAboveStatusBarHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(_UIHostedWindowHostingHandle *)remoteKeyboardsWindowHostingHandle;
-(void)setRemoteKeyboardsWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
@end

