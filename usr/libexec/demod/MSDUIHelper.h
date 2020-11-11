//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDDemoUpdateStatusDelegate-Protocol.h"

@class BKSApplicationStateMonitor, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MSDUIHelper : NSObject <MSDDemoUpdateStatusDelegate>
{
    _Bool _allowCancel;	// 8 = 0x8
    int _fullScreenState;	// 12 = 0xc
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSString *_fullScreenUIAppId;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uiHelperQueue;	// 32 = 0x20
    NSString *_message;	// 40 = 0x28
    NSObject<OS_xpc_object> *_pendingMessage;	// 48 = 0x30
    long long _currentProgress;	// 56 = 0x38
    BKSApplicationStateMonitor *_fullScreenUIAppMonitor;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0000000100075774
- (void).cxx_destruct;	// IMP=0x0000000100077ea0
@property(retain) BKSApplicationStateMonitor *fullScreenUIAppMonitor; // @synthesize fullScreenUIAppMonitor=_fullScreenUIAppMonitor;
@property long long currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain) NSObject<OS_xpc_object> *pendingMessage; // @synthesize pendingMessage=_pendingMessage;
@property int fullScreenState; // @synthesize fullScreenState=_fullScreenState;
@property _Bool allowCancel; // @synthesize allowCancel=_allowCancel;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSObject<OS_dispatch_queue> *uiHelperQueue; // @synthesize uiHelperQueue=_uiHelperQueue;
@property(retain) NSString *fullScreenUIAppId; // @synthesize fullScreenUIAppId=_fullScreenUIAppId;
- (void)demoUpdateCompleted:(id)arg1;	// IMP=0x0000000100077df8
- (void)demoUpdateAllowCancel:(_Bool)arg1;	// IMP=0x0000000100077b2c
- (void)demoUpdateProgress:(long long)arg1;	// IMP=0x0000000100077840
- (void)demoUpdateFailed:(id)arg1;	// IMP=0x000000010007729c
- (_Bool)launchFullScreenUI_tv;	// IMP=0x0000000100076e20
- (void)handleFullScreenUIAppStateChange:(unsigned int)arg1;	// IMP=0x0000000100076a80
- (void)deactivateFullScreenUIAppMonitor;	// IMP=0x00000001000769ec
- (void)activateFullScreenUIAppMonitor;	// IMP=0x00000001000767e4
- (_Bool)launchFullScreenUI;	// IMP=0x0000000100076770
- (void)requestFullScreenUI;	// IMP=0x0000000100076538
- (void)fullScreenUICanceledByUser;	// IMP=0x00000001000763f4
- (void)stopFullScreenUI:(id)arg1;	// IMP=0x0000000100075e44
- (void)startFullScreenUIWith:(id)arg1 allowCancel:(_Bool)arg2;	// IMP=0x0000000100075bd0
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)init;	// IMP=0x00000001000757e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

