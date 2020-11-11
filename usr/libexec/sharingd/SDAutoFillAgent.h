//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSRemoteAlertHandleObserver-Protocol.h"
#import "SDSharedRemoteTextInputDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SBSRemoteAlertHandle, SDNotificationManager, SDStatusMonitor, SFBLEScanner, SFDevice, SFDeviceDiscovery, SFRemoteAutoFillService, SFRemoteAutoFillSession, SFSiriRemoteMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoFillAgent : NSObject <SBSRemoteAlertHandleObserver, SDSharedRemoteTextInputDelegate>
{
    SBSRemoteAlertHandle *_alertHandle;	// 8 = 0x8
    _Bool _autoFillContext;	// 16 = 0x10
    _Bool _bulletinsDisabled;	// 17 = 0x11
    int _cleanKeysState;	// 20 = 0x14
    CDUnknownBlockType _credentialsHandler;	// 24 = 0x18
    SFDeviceDiscovery *_deviceDiscovery;	// 32 = 0x20
    NSMutableDictionary *_devices;	// 40 = 0x28
    NSMutableDictionary *_btDevices;	// 48 = 0x30
    SFRemoteAutoFillSession *_grantingSession;	// 56 = 0x38
    NSMutableDictionary *_grantedDevices;	// 64 = 0x40
    NSMutableSet *_helpers;	// 72 = 0x48
    NSMutableSet *_ignoredTVs;	// 80 = 0x50
    SDNotificationManager *_notificationManager;	// 88 = 0x58
    NSMutableDictionary *_proximityDevices;	// 96 = 0x60
    SFBLEScanner *_proximityDiscovery;	// 104 = 0x68
    _Bool _proximityEnabled;	// 112 = 0x70
    NSString *_requestingAppLocalizedName;	// 120 = 0x78
    NSString *_requestingAppUnlocalizedName;	// 128 = 0x80
    NSArray *_requestingAssociatedDomains;	// 136 = 0x88
    NSString *_requestingBundleID;	// 144 = 0x90
    SFRemoteAutoFillService *_requestingService;	// 152 = 0x98
    _Bool _requestingServiceTimedOut;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_requestingServiceTimer;	// 168 = 0xa8
    int _requestingServiceState;	// 176 = 0xb0
    _Bool _remoteMonitoringEnabled;	// 180 = 0xb4
    _Bool _rtiActivated;	// 181 = 0xb5
    _Bool _scanningEnabled;	// 182 = 0xb6
    SFSiriRemoteMonitor *_siriRemoteMonitor;	// 184 = 0xb8
    int _siriRemoteMonitorState;	// 192 = 0xc0
    SDStatusMonitor *_statusMonitor;	// 200 = 0xc8
    NSMutableDictionary *_triggeredDevices;	// 208 = 0xd0
    _Bool _uiDelayActive;	// 216 = 0xd8
    SFDevice *_uiDelayDevice;	// 224 = 0xe0
    NSObject<OS_dispatch_source> *_uiDelayTimer;	// 232 = 0xe8
    _Bool _prefGrantingEnabled;	// 240 = 0xf0
    _Bool _prefPairedTVAllowed;	// 241 = 0xf1
    _Bool _prefRateLimitDisabled;	// 242 = 0xf2
    _Bool _prefRequestingEnabled;	// 243 = 0xf3
    _Bool _prefRequiresProx;	// 244 = 0xf4
    _Bool _testingService;	// 245 = 0xf5
    _Bool _preventNotifications;	// 246 = 0xf6
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000010009c980
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)_uiShowing;	// IMP=0x000000010009c8ec
- (void)_uiStop:(id)arg1;	// IMP=0x000000010009c774
- (void)_uiStart:(id)arg1 extraInfo:(id)arg2;	// IMP=0x000000010009c728
- (void)_uiStartIfNeeded:(id)arg1 extraInfo:(id)arg2;	// IMP=0x000000010009c49c
- (void)_uiStartIfEnabled:(id)arg1 extraInfo:(id)arg2;	// IMP=0x000000010009c498
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000010009c2dc
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000010009c17c
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x000000010009c01c
- (void)passwordPickerStart:(id)arg1 bundleID:(id)arg2 localizedAppName:(id)arg3 unlocalizedAppName:(id)arg4 associatedDomains:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010009bc74
- (void)_deactivateUIDelayTimer;	// IMP=0x000000010009bbdc
- (void)_activateUIDelayTimer;	// IMP=0x000000010009ba34
- (void)testUI:(id)arg1;	// IMP=0x000000010009b76c
- (void)testService:(id)arg1;	// IMP=0x000000010009b684
- (void)testRemote:(id)arg1;	// IMP=0x000000010009b554
- (void)testKeychain:(id)arg1;	// IMP=0x000000010009b4b8
- (void)_sessionHandlePairingSucceededResponse:(id)arg1;	// IMP=0x000000010009b434
- (void)_sessionStop:(id)arg1;	// IMP=0x000000010009b1c8
- (void)_sessionStart:(id)arg1;	// IMP=0x000000010009abd0
- (void)_serviceTimeoutStop;	// IMP=0x000000010009ab48
- (void)_serviceTimeoutStart;	// IMP=0x000000010009a978
- (void)_serviceStopRequestingAutoFill;	// IMP=0x000000010009a8dc
- (void)_serviceStartRequestingAutoFillIfReady;	// IMP=0x000000010009a788
- (_Bool)_serviceShouldRequestAutoFill;	// IMP=0x000000010009a6ec
- (void)_serviceHandleUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x000000010009a534
- (void)_serviceHandleError:(id)arg1;	// IMP=0x000000010009a4b0
- (void)_serviceEnsureStopped;	// IMP=0x000000010009a40c
- (void)_serviceEnsureStarted;	// IMP=0x000000010009a058
- (void)_siriRemoteMonitorEnsureStopped;	// IMP=0x0000000100099fc4
- (void)_siriRemoteMonitorEnsureStarted;	// IMP=0x0000000100099dcc
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x0000000100099c88
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x0000000100099aac
- (void)_rtiEnsureStopped;	// IMP=0x0000000100099a44
- (void)_rtiEnsureStarted;	// IMP=0x00000001000999d8
- (void)_proximityLost:(id)arg1;	// IMP=0x00000001000998ec
- (void)_proximityFound:(id)arg1;	// IMP=0x0000000100099810
- (void)_proximityChanged:(id)arg1;	// IMP=0x00000001000994a8
- (void)_proximityEnsureStopped;	// IMP=0x00000001000993f8
- (void)_proximityEnsureStarted;	// IMP=0x0000000100099138
- (void)_helpersClientPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x0000000100098ffc
- (void)_helpersClientPairingSucceeded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100098eac
- (int)helper:(id)arg1 userNotificationDidDismiss:(id)arg2;	// IMP=0x0000000100098d6c
- (int)helper:(id)arg1 userNotificationDidActivate:(id)arg2;	// IMP=0x0000000100098c50
- (int)helper:(id)arg1 tryPIN:(id)arg2;	// IMP=0x0000000100098b28
- (int)helper:(id)arg1 didPickUsername:(id)arg2 password:(id)arg3 error:(id)arg4;	// IMP=0x0000000100098888
- (void)helperStop:(id)arg1;	// IMP=0x00000001000987cc
- (int)helperStart:(id)arg1;	// IMP=0x00000001000986bc
- (void)_deviceStoppedRequesting:(id)arg1;	// IMP=0x0000000100098548
- (void)_deviceLost:(id)arg1;	// IMP=0x0000000100098350
- (void)_deviceFound:(id)arg1;	// IMP=0x00000001000980e8
- (void)_deviceChanged:(id)arg1;	// IMP=0x0000000100097dec
- (void)_discoveryEnsureStopped;	// IMP=0x0000000100097c90
- (void)_discoveryEnsureStarted;	// IMP=0x0000000100097970
- (void)notificiationDidDismiss:(id)arg1;	// IMP=0x000000010009789c
- (void)_bulletinsEnsureStopped;	// IMP=0x000000010009788c
- (void)_bulletinsEnsureStarted;	// IMP=0x0000000100097824
- (void)_uiLockStatusChanged:(id)arg1;	// IMP=0x00000001000976e0
- (void)_screenStateChanged:(id)arg1;	// IMP=0x0000000100097594
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100096f50
- (void)_postSetupNotificationForDevice:(id)arg1;	// IMP=0x0000000100096d80
- (void)_ensureKeychainCleaned:(_Bool)arg1;	// IMP=0x0000000100096668
- (void)_commonEnsureStopped;	// IMP=0x00000001000965b8
- (void)_commonEnsureStarted;	// IMP=0x00000001000964d0
- (void)_update;	// IMP=0x00000001000962c0
- (void)prefsChanged;	// IMP=0x0000000100095c38
- (void)_invalidate;	// IMP=0x0000000100095b58
- (void)invalidate;	// IMP=0x0000000100095af0
- (void)_activate;	// IMP=0x0000000100095a70
- (void)activate;	// IMP=0x0000000100095a08
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100095514
- (id)init;	// IMP=0x00000001000954b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
