//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDUnlockSessionManager.h"

#import "SDUnlockIDSControllerDelegate-Protocol.h"

@class NSDate, NSObject, NSString, NSTimer, SDUnlockSessionRecord;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDUnlockKeyManager : SDUnlockSessionManager <SDUnlockIDSControllerDelegate>
{
    _Bool _useEscrowRecord;	// 8 = 0x8
    _Bool _remoteDeviceLocked;	// 9 = 0x9
    _Bool _ltkWaitingForUnlock;	// 10 = 0xa
    _Bool _outstandingStartLTK;	// 11 = 0xb
    _Bool _unlockingForKeybagUnlock;	// 12 = 0xc
    long long _unlockingState;	// 16 = 0x10
    NSTimer *_stashTimer;	// 24 = 0x18
    NSDate *_deviceSwitchUnlockRetryDate;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_stateTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_longTermKeyTimer;	// 48 = 0x30
    SDUnlockSessionRecord *_sessionRecord;	// 56 = 0x38
    CDUnknownBlockType _stashHandler;	// 64 = 0x40
    CDUnknownBlockType _stateHandler;	// 72 = 0x48
    id _keybagAssertion;	// 80 = 0x50
}

+ (id)sharedKeyManager;	// IMP=0x000000010019187c
- (void).cxx_destruct;	// IMP=0x0000000100198a8c
@property(retain) id keybagAssertion; // @synthesize keybagAssertion=_keybagAssertion;
@property(copy) CDUnknownBlockType stateHandler; // @synthesize stateHandler=_stateHandler;
@property(copy) CDUnknownBlockType stashHandler; // @synthesize stashHandler=_stashHandler;
@property(retain) SDUnlockSessionRecord *sessionRecord; // @synthesize sessionRecord=_sessionRecord;
@property(retain) NSObject<OS_dispatch_source> *longTermKeyTimer; // @synthesize longTermKeyTimer=_longTermKeyTimer;
@property(retain) NSObject<OS_dispatch_source> *stateTimer; // @synthesize stateTimer=_stateTimer;
@property(retain) NSDate *deviceSwitchUnlockRetryDate; // @synthesize deviceSwitchUnlockRetryDate=_deviceSwitchUnlockRetryDate;
@property _Bool unlockingForKeybagUnlock; // @synthesize unlockingForKeybagUnlock=_unlockingForKeybagUnlock;
@property _Bool outstandingStartLTK; // @synthesize outstandingStartLTK=_outstandingStartLTK;
@property _Bool ltkWaitingForUnlock; // @synthesize ltkWaitingForUnlock=_ltkWaitingForUnlock;
@property _Bool remoteDeviceLocked; // @synthesize remoteDeviceLocked=_remoteDeviceLocked;
@property(retain) NSTimer *stashTimer; // @synthesize stashTimer=_stashTimer;
@property _Bool useEscrowRecord; // @synthesize useEscrowRecord=_useEscrowRecord;
- (_Bool)initiateStashBagCreationWithManifest:(id)arg1;	// IMP=0x0000000100198714
- (void)initiateRemoteUnlock;	// IMP=0x0000000100197f4c
- (void)sendStateRequest;	// IMP=0x0000000100197ca8
- (void)sendStashToken:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0000000100197a18
- (void)sendStashKeyRequest:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0000000100197788
- (void)sendSessionAuthenticationToken:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000001001975b8
- (void)sendSessionKeyExchangeRequest:(id)arg1 usedEscrow:(_Bool)arg2 sessionID:(unsigned int)arg3;	// IMP=0x00000001001973f8
- (void)sendSetupCreateEscrowRecordWithSessionID:(unsigned int)arg1 stepData:(id)arg2 errorCode:(long long)arg3;	// IMP=0x0000000100197248
- (void)sendSetupSessionCreatedWithLocalKey:(id)arg1 stepData:(id)arg2 sessionID:(unsigned int)arg3 errorCode:(long long)arg4;	// IMP=0x0000000100197060
- (void)sendClassALongTermKeyResponse:(id)arg1 sessionID:(unsigned int)arg2 errorCode:(unsigned int)arg3;	// IMP=0x0000000100196ea4
- (void)sendLongTermKeyResponse:(id)arg1 requestID:(id)arg2;	// IMP=0x0000000100196c88
- (void)sendStartLTKTransfer;	// IMP=0x0000000100196a60
- (void)handleUnlockStateResponse:(id)arg1;	// IMP=0x00000001001967b4
- (void)handleStashConfirmation:(id)arg1;	// IMP=0x000000010019661c
- (void)handleStashKeyExchangeResponse:(id)arg1;	// IMP=0x00000001001962c4
- (void)handleResetState:(id)arg1;	// IMP=0x0000000100196208
- (void)handleUnlockConfirmation:(id)arg1;	// IMP=0x0000000100195f14
- (void)handleSessionKeyExchangeResponse:(id)arg1;	// IMP=0x0000000100195a88
- (void)handleCreateEscrowSecret:(id)arg1;	// IMP=0x0000000100195634
- (void)handleEscrowSessionRequest:(unsigned int)arg1 withUpdatedLongTermKey:(_Bool)arg2;	// IMP=0x0000000100195320
- (void)handleSetupRequest:(id)arg1;	// IMP=0x00000001001950bc
- (_Bool)updateLongTermKey:(id)arg1;	// IMP=0x0000000100194f80
- (void)handleClassALongTermKeyRequest:(id)arg1;	// IMP=0x0000000100194d04
- (void)handleLongTermKeyRequest:(id)arg1;	// IMP=0x0000000100194a74
- (void)handleRemoteLockStateChanged:(id)arg1;	// IMP=0x0000000100194784
- (void)idsControllerNearbyStateChanged:(id)arg1;	// IMP=0x000000010019470c
- (void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3;	// IMP=0x0000000100194550
- (id)stringForState:(long long)arg1;	// IMP=0x0000000100194514
@property long long unlockingState; // @synthesize unlockingState=_unlockingState;
- (void)resetState;	// IMP=0x0000000100194340
- (void)resetAndClearState;	// IMP=0x00000001001942fc
- (void)resetSetupState;	// IMP=0x00000001001942b8
- (void)notifyStashStateWithError:(id)arg1;	// IMP=0x00000001001941a4
- (void)establishStashBagWithManifest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100193eac
- (void)establishStashBagWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100193c20
- (void)invalidateStashTimer;	// IMP=0x0000000100193bd4
- (void)stashTimerFired:(id)arg1;	// IMP=0x0000000100193ac4
- (void)restartStashTimer;	// IMP=0x0000000100193a4c
- (void)invalidateStateTimer;	// IMP=0x00000001001939bc
- (void)restartStateTimer;	// IMP=0x0000000100193754
- (void)notifyUnlockStateWithState:(id)arg1 error:(id)arg2;	// IMP=0x00000001001936e0
- (void)unlockStateForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019357c
- (void)syncUnlockEnabled:(_Bool)arg1;	// IMP=0x0000000100193488
- (_Bool)unlockEnabled;	// IMP=0x0000000100193404
- (void)disableUnlockPairingForSecurityManager:(id)arg1;	// IMP=0x0000000100193340
- (void)disableUnlockPairing;	// IMP=0x0000000100193330
- (void)checkDevicePairingState;	// IMP=0x00000001001931f8
- (void)handleActiveDeviceUpdated;	// IMP=0x00000001001930c0
- (void)releaseKeyBagAssertion;	// IMP=0x000000010019303c
- (void)takeMobileKeybagAssertion;	// IMP=0x0000000100192ed8
- (void)invalidateLongTermKeyTimer;	// IMP=0x0000000100192e48
- (void)restartLongTermKeyTimer:(unsigned long long)arg1;	// IMP=0x0000000100192ca4
- (void)newDeviceBecameActive:(id)arg1;	// IMP=0x0000000100192bc0
- (void)devicesDidFailToPair:(id)arg1;	// IMP=0x0000000100192904
- (void)devicesDidUnpair:(id)arg1;	// IMP=0x0000000100192648
- (_Bool)startUnlockIfNeeded;	// IMP=0x0000000100192560
- (void)handleUILockStateChange;	// IMP=0x00000001001923bc
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x0000000100192210
- (void)startLTKExchange;	// IMP=0x00000001001921cc
- (void)handleConfigState;	// IMP=0x00000001001920f4
- (void)deviceDidEnterConfigurationState:(id)arg1;	// IMP=0x0000000100192014
- (id)generateDebugInfo;	// IMP=0x0000000100191d88
- (void)debugInfoRequested:(id)arg1;	// IMP=0x0000000100191d24
- (void)addObservers;	// IMP=0x0000000100191b6c
- (id)init;	// IMP=0x00000001001918e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
