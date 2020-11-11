//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIServerSessionResourceManager-Protocol.h"
#import "PRAppStateMonitorObserver-Protocol.h"
#import "PRBLEDiscoveryConsuming-Protocol.h"
#import "PRInterruptable-Protocol.h"
#import "PRRangingManagerClientRelayTarget-Protocol.h"
#import "UWBSessionServerProtocol-Protocol.h"

@class NIServerAnalyticsManager, NIServerBaseSession, NIServerSessionLifeCycleManager, NSData, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, PRAppStateMonitor, PRAuthorizationManager;
@protocol OS_dispatch_queue, PRBLEDiscoveryProviding, PRSessionActivationGuard, PRUWBServiceProviding, UWBSessionDelegateProxyProtocol;

@interface NIServerSessionContainer : NSObject <PRAppStateMonitorObserver, NIServerSessionResourceManager, PRBLEDiscoveryConsuming, UWBSessionServerProtocol, PRRangingManagerClientRelayTarget, PRInterruptable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSData *_localDiscoveryToken;	// 16 = 0x10
    NIServerSessionLifeCycleManager *_lifeCycleManager;	// 24 = 0x18
    PRAppStateMonitor *_appStateMonitor;	// 32 = 0x20
    struct unordered_map<UWBSessionInterruptionReasonInternal, UWBSessionInterruptionBookkeeping, std::__1::hash<UWBSessionInterruptionReasonInternal>, std::__1::equal_to<UWBSessionInterruptionReasonInternal>, std::__1::allocator<std::__1::pair<const UWBSessionInterruptionReasonInternal, UWBSessionInterruptionBookkeeping>>> _interruptionsMap;	// 40 = 0x28
    NSMutableDictionary *_clientEntitlementsMap;	// 80 = 0x50
    PRAuthorizationManager *_authManager;	// 88 = 0x58
    NIServerAnalyticsManager *_analyticsManager;	// 96 = 0x60
    NIServerBaseSession *_specializedSession;	// 104 = 0x68
    int _pid;	// 112 = 0x70
    int _currentUWBProviderState;	// 116 = 0x74
    int _latestAppState;	// 120 = 0x78
    id <UWBSessionDelegateProxyProtocol> _client;	// 128 = 0x80
    NSXPCConnection *_connection;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 144 = 0x90
    NSString *_signingIdentity;	// 152 = 0x98
    NSUUID *_sessionIdentifier;	// 160 = 0xa0
    id <PRBLEDiscoveryProviding> _bleProvider;	// 168 = 0xa8
    id <PRUWBServiceProviding> _uwbProvider;	// 176 = 0xb0
    id <PRSessionActivationGuard> _activationGuard;	// 184 = 0xb8
    long long _latestBluetoothState;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x000000010002e000
- (void).cxx_destruct;	// IMP=0x000000010002df30
@property int latestAppState; // @synthesize latestAppState=_latestAppState;
@property long long latestBluetoothState; // @synthesize latestBluetoothState=_latestBluetoothState;
@property int currentUWBProviderState; // @synthesize currentUWBProviderState=_currentUWBProviderState;
@property(nonatomic) __weak id <PRSessionActivationGuard> activationGuard; // @synthesize activationGuard=_activationGuard;
@property(retain) id <PRUWBServiceProviding> uwbProvider; // @synthesize uwbProvider=_uwbProvider;
@property(retain) id <PRBLEDiscoveryProviding> bleProvider; // @synthesize bleProvider=_bleProvider;
@property(readonly) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(readonly, copy) NSString *signingIdentity; // @synthesize signingIdentity=_signingIdentity;
@property(readonly) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) id <UWBSessionDelegateProxyProtocol> client; // @synthesize client=_client;
- (id)updatesQueue;	// IMP=0x000000010002de60
- (void)monitoredApp:(int)arg1 didChangeState:(int)arg2;	// IMP=0x000000010002dc8c
- (void)_handleClientAppStoppedBeingVisible;	// IMP=0x000000010002dc3c
- (void)_handleClientAppBecameVisible;	// IMP=0x000000010002dbe8
- (void)_handleBluetoothBecameUnavailable;	// IMP=0x000000010002dbb8
- (void)_handleBluetoothBecameAvailable;	// IMP=0x000000010002db54
- (void)_handleUWBSystemError;	// IMP=0x000000010002db24
- (void)_handleUWBSystemOffWithCause:(int)arg1;	// IMP=0x000000010002dabc
- (void)_handleUWBSystemReady;	// IMP=0x000000010002daac
- (void)invalidate;	// IMP=0x000000010002da28
- (void)systemStateChanged:(unsigned long long)arg1;	// IMP=0x000000010002d98c
- (void)interruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;	// IMP=0x000000010002d664
- (void)interruptSessionWithReason:(long long)arg1 timestamp:(double)arg2;	// IMP=0x000000010002d2ec
@property(readonly) duration_6174cf92 nominalCycleRate;
- (void)bluetoothAdvertisingAddressChanged:(unsigned long long)arg1;	// IMP=0x000000010002d268
- (void)bluetoothServiceInterrupted;	// IMP=0x000000010002d204
- (void)bluetoothDidChangeState:(long long)arg1;	// IMP=0x000000010002d0f8
- (void)didLoseDevice:(id)arg1;	// IMP=0x000000010002d060
- (void)discoveredDevice:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010002cfa4
- (void)didDiscoverDevice:(id)arg1;	// IMP=0x000000010002cf0c
- (void)rangingServiceDidUpdateState:(int)arg1 cause:(int)arg2;	// IMP=0x000000010002cc00
- (void)serviceRequestDidUpdateStatus:(struct ServiceRequestStatusUpdate)arg1;	// IMP=0x000000010002cb04
- (void)didReceiveRemoteSessionData:(const struct RemoteSessionData *)arg1;	// IMP=0x000000010002ca60
- (void)didReceiveSessionStartNotification:(const struct SessionStartNotification *)arg1;	// IMP=0x000000010002c9bc
- (void)didReceiveNewSolution:(const struct RoseSolution *)arg1;	// IMP=0x000000010002c918
- (void)didFailWithErrorCode:(long long)arg1 errorString:(const basic_string_7c0a1c0b *)arg2;	// IMP=0x000000010002c79c
- (id)remote;	// IMP=0x000000010002c794
- (id)discoveryToken;	// IMP=0x000000010002c75c
- (id)analytics;	// IMP=0x000000010002c754
@property(retain, nonatomic) PRAppStateMonitor *appStateMonitor;
- (id)lifecycleSupervisor;	// IMP=0x000000010002c65c
- (id)uwbResource;	// IMP=0x000000010002c53c
- (id)btResource;	// IMP=0x000000010002c41c
- (id)serverSessionIdentifier;	// IMP=0x000000010002c414
- (int)clientPid;	// IMP=0x000000010002c40c
- (id)clientAppDisplayName;	// IMP=0x000000010002c2ec
- (id)clientConnectionQueue;	// IMP=0x000000010002c2e0
- (id)_displayPermissionsPromptIfNeeded;	// IMP=0x000000010002c090
@property(readonly, copy) NSString *displayName;
- (_Bool)_supportedPlatform;	// IMP=0x000000010002bfcc
- (id)_getCapabilities;	// IMP=0x000000010002be88
- (void)_populateClientEntitlements;	// IMP=0x000000010002bc24
- (_Bool)_isPrivilegedClient;	// IMP=0x000000010002bb70
- (_Bool)_backgroundOperationAllowed;	// IMP=0x000000010002babc
- (void)_handleSpecializedSessionInvalidation:(id)arg1;	// IMP=0x000000010002b934
- (void)_removeRegionPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b698
- (void)_addRegionPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b3d0
- (void)_removeObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b108
- (void)_addObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ae40
- (void)shareSandboxToken:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002acd4
- (void)pause:(CDUnknownBlockType)arg1;	// IMP=0x000000010002aa44
- (void)runWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a1e0
- (void)activate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100029a88
- (void)queryDeviceCapabilities:(CDUnknownBlockType)arg1;	// IMP=0x00000001000298e8
- (void)dealloc;	// IMP=0x0000000100029864
- (id)initWithClientInfo:(const struct PRNearbyInteractionClientInfo *)arg1 connection:(id)arg2 authorizationManager:(id)arg3;	// IMP=0x00000001000294b4
- (id)init;	// IMP=0x0000000100029468

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

