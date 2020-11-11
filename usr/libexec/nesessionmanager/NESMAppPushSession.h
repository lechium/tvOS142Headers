//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

#import "NEAppPushPluginDelegate-Protocol.h"

@class NEAppPushPlugin, NSMutableDictionary, NWMonitor, PCSimpleTimer;

@interface NESMAppPushSession : NESMSession <NEAppPushPluginDelegate>
{
    _Bool _active;	// 8 = 0x8
    PCSimpleTimer *_providerWakeTimer;	// 16 = 0x10
    NWMonitor *_ssidMatchMonitor;	// 24 = 0x18
    NEAppPushPlugin *_plugin;	// 32 = 0x20
    NSMutableDictionary *_outgoingMessageCompletionHandlers;	// 40 = 0x28
    long long _currentSSIDMatchStaus;	// 48 = 0x30
}

+ (Class)getCallKitMessageControllerClass;	// IMP=0x0000000100010aa8
+ (id)ssidMatchStatusString:(long long)arg1;	// IMP=0x0000000100010a6c
- (void).cxx_destruct;	// IMP=0x00000001000120d0
@property long long currentSSIDMatchStaus; // @synthesize currentSSIDMatchStaus=_currentSSIDMatchStaus;
@property(retain) NSMutableDictionary *outgoingMessageCompletionHandlers; // @synthesize outgoingMessageCompletionHandlers=_outgoingMessageCompletionHandlers;
@property _Bool active; // @synthesize active=_active;
@property(retain) NEAppPushPlugin *plugin; // @synthesize plugin=_plugin;
@property(retain) NWMonitor *ssidMatchMonitor; // @synthesize ssidMatchMonitor=_ssidMatchMonitor;
@property(retain) PCSimpleTimer *providerWakeTimer; // @synthesize providerWakeTimer=_providerWakeTimer;
- (void)handleProviderStopped:(id)arg1;	// IMP=0x0000000100011f64
- (void)didExtensionExit:(id)arg1;	// IMP=0x0000000100011e88
- (void)plugin:(id)arg1 didReceiveIncomingCallWithUserInfo:(id)arg2;	// IMP=0x0000000100011d58
- (void)plugin:(id)arg1 didReceiveProviderError:(id)arg2 forMessageID:(id)arg3;	// IMP=0x0000000100011a80
- (void)plugin:(id)arg1 didReceiveProviderError:(id)arg2;	// IMP=0x0000000100011944
- (_Bool)pinPlugin:(id)arg1 toConfigurationWithAuditTokens:(id)arg2;	// IMP=0x000000010001193c
- (void)pluginDidAcknowledgeSleep:(id)arg1;	// IMP=0x0000000100011938
- (void)plugin:(id)arg1 didInitializeWithUUIDs:(id)arg2;	// IMP=0x0000000100011934
- (void)pluginDidDispose:(id)arg1;	// IMP=0x00000001000117ec
- (void)plugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x0000000100011604
- (void)handleSendInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x00000001000111bc
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100011104
- (id)copyExtendedStatus;	// IMP=0x0000000100011028
- (void)sendIncomingCallInfoToCallKit:(id)arg1;	// IMP=0x0000000100010bd4
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x00000001000107bc
- (void)sendOutgoingCallMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010508
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100010214
- (void)exitSession;	// IMP=0x0000000100010108
- (void)dealloc;	// IMP=0x0000000100010030
- (void)disposeProvider;	// IMP=0x000000010000ff84
- (void)stopProvider;	// IMP=0x000000010000fed4
- (void)startProvider;	// IMP=0x000000010000fccc
- (void)initializePlugin;	// IMP=0x000000010000f964
- (void)resetSSIDMatchMonitor;	// IMP=0x000000010000f930
- (void)stopProviderWakeTimer;	// IMP=0x000000010000f81c
- (void)startProviderWakeTimer;	// IMP=0x000000010000f634
- (void)providerWakeTimerFired;	// IMP=0x000000010000f5a4
- (void)stopSSIDMatchMonitor;	// IMP=0x000000010000f504
- (void)startSSIDMatchMonitor;	// IMP=0x000000010000f328
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x000000010000f170

@end
