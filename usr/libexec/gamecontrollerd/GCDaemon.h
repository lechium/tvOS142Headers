//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCAppConnectionsFilter-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class GCKeyboardAndMouseEventObserver, NSMutableSet, NSString, NSXPCListener;
@protocol OS_os_transaction;

@interface GCDaemon : NSObject <NSXPCListenerDelegate, GCAppConnectionsFilter>
{
    NSXPCListener *_appServiceListener;	// 8 = 0x8
    NSXPCListener *_driverServiceListener;	// 16 = 0x10
    NSXPCListener *_hapticServiceListener;	// 24 = 0x18
    NSObject<OS_os_transaction> *_clientTransaction;	// 32 = 0x20
    NSMutableSet *_clients;	// 40 = 0x28
    GCKeyboardAndMouseEventObserver *_eventObserver;	// 48 = 0x30
    unsigned long long _activeDevicesCount;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001000083c8
+ (void)run;	// IMP=0x000000010000831c
- (void).cxx_destruct;	// IMP=0x0000000100009558
- (id)filterClientForPid:(int)arg1;	// IMP=0x00000001000093c8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100009224
- (_Bool)acceptNewConnection:(id)arg1 fromGCEnabledApp:(id)arg2;	// IMP=0x000000010000904c
- (_Bool)acceptNewConnection:(id)arg1 fromHIDServer:(id)arg2;	// IMP=0x0000000100008ecc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100008c2c
- (void)client:(id)arg1 connectionsDidChange:(id)arg2;	// IMP=0x0000000100008a94
- (void)refreshClientTransaction;	// IMP=0x00000001000088c4
- (id)clientForConnection:(id)arg1;	// IMP=0x00000001000086e0
- (void)dealloc;	// IMP=0x0000000100008660
- (void)_stop;	// IMP=0x000000010000865c
- (void)_start;	// IMP=0x0000000100008618
- (id)init;	// IMP=0x00000001000085e0
- (id)_init;	// IMP=0x0000000100008440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
