//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRBLEDiscoveryProviding-Protocol.h"

@class CBSpatialInteractionSession, NSData, NSMutableSet, NSString, PRBluetoothDeviceCache;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, PRBLEDiscoveryConsuming;

@interface PRBLEDiscoverySession : NSObject <PRBLEDiscoveryProviding>
{
    CBSpatialInteractionSession *_cbSession;	// 8 = 0x8
    PRBluetoothDeviceCache *_deviceCache;	// 16 = 0x10
    NSMutableSet *_peers;	// 24 = 0x18
    NSData *_localToken;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_clientQueue;	// 48 = 0x30
    double _defaultTimeoutInSeconds;	// 56 = 0x38
    _Bool _wifiCoexCriticalActive;	// 64 = 0x40
    NSObject<OS_dispatch_semaphore> *_sema;	// 72 = 0x48
    id <PRBLEDiscoveryConsuming> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010000afb8
@property(nonatomic) __weak id <PRBLEDiscoveryConsuming> delegate; // @synthesize delegate=_delegate;
- (void)aopWorkaroundDataReceived:(id)arg1;	// IMP=0x000000010000af54
- (void)bluetoothAdvertisingAddressChanged;	// IMP=0x000000010000ae7c
- (void)systemOverrideNotification;	// IMP=0x000000010000ab6c
- (void)bluetoothServiceInterrupted;	// IMP=0x000000010000aac4
- (void)bluetoothStateChanged;	// IMP=0x000000010000a92c
- (void)didFailWithError:(id)arg1;	// IMP=0x000000010000a8d4
- (void)didLoseDevice:(id)arg1;	// IMP=0x000000010000a4c8
- (void)didDiscoverDevice:(id)arg1;	// IMP=0x000000010000a174
- (id)deviceCache;	// IMP=0x000000010000a16c
- (optional_df22365f)nonConnectableAdvertisingAddress;	// IMP=0x000000010000a088
- (id)currentPeers;	// IMP=0x000000010000a078
- (void)stopScanningAndRemovePeers:(_Bool)arg1;	// IMP=0x0000000100009e80
- (void)startScanning;	// IMP=0x0000000100009df0
- (void)stopAdvertising;	// IMP=0x0000000100009d60
- (void)startAdvertisingWithUWBConfig:(id)arg1;	// IMP=0x0000000100009c38
- (id)retrieveDiscoveryTokenWithError:(id *)arg1;	// IMP=0x0000000100009b98
- (id)removePeerDiscoveryToken:(id)arg1;	// IMP=0x00000001000096c0
- (id)addPeerDiscoveryToken:(id)arg1;	// IMP=0x000000010000926c
- (void)invalidate;	// IMP=0x000000010000925c
- (id)stopAndClearState;	// IMP=0x0000000100009100
- (id)activate;	// IMP=0x0000000100008ba8
- (void)setDefaultTimeoutInSeconds:(double)arg1;	// IMP=0x0000000100008af8
- (void)setClientQueue:(id)arg1;	// IMP=0x0000000100008a30
- (void)setDeviceRelationshipFlags:(unsigned long long)arg1;	// IMP=0x00000001000089a0
- (id)init;	// IMP=0x00000001000081b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

