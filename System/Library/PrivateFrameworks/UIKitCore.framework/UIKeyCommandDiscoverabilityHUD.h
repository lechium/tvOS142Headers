/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)clearHUDPopTimer;
+(void)dismissHUD;
-(void)dealloc;
-(void)_applicationWillResignActive;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
-(void)_scheduleHUDPresentation;
-(void)_dismissHUD;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
-(void)_clearHUDPopTimer;
-(void)_didTakeScreenshot;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(BOOL)_HUDAllowedForWindow:(id)arg1 ;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
@end

