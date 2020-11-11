//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAPlatformInterfaceInternal-Protocol.h"

@class NSString;

@interface DAPlatform_Embedded : NSObject <DAPlatformInterfaceInternal>
{
}

+ (id)sharedInstance;	// IMP=0x0000000100016020
- (void)_activateCFUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonName:(id)arg3 cancelButtonName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100016100
- (void)_addPlatformCFUserNotificationOptions:(id)arg1;	// IMP=0x00000001000160fc
- (void)undimCheckerBoardDisplay;	// IMP=0x00000001000160f8
- (void)dimCheckerBoardDisplay;	// IMP=0x00000001000160f4
- (void)sceneStatusBarStyle:(long long)arg1;	// IMP=0x00000001000160f0
- (void)hideSceneStatusBar;	// IMP=0x00000001000160ec
- (void)showSceneStatusBar;	// IMP=0x00000001000160e8
- (_Bool)didSetProxyServerInformation;	// IMP=0x00000001000160e0
- (void)exitCheckerBoard;	// IMP=0x00000001000160dc
- (void)activateSimpleAlertWithTitle:(id)arg1 message:(id)arg2 defaultButtonName:(id)arg3 cancelButtonName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100016030
- (_Bool)isCheckerBoardActive;	// IMP=0x0000000100016028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

