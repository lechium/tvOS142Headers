//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDUnlockIDSControllerDelegate-Protocol.h"

@class NSString, SDUnlockIDSController, SDUnlockSecurityManager;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDUnlockSessionManager : NSObject <SDUnlockIDSControllerDelegate>
{
    long long _setupAuthSession;	// 8 = 0x8
    long long _unlockAuthSession;	// 16 = 0x10
    long long _stashBagSession;	// 24 = 0x18
    SDUnlockIDSController *_idsController;	// 32 = 0x20
    SDUnlockSecurityManager *_securityManager;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_unlockTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010019cfa4
@property(retain) NSObject<OS_dispatch_source> *unlockTimer; // @synthesize unlockTimer=_unlockTimer;
@property(retain) SDUnlockSecurityManager *securityManager; // @synthesize securityManager=_securityManager;
@property(retain) SDUnlockIDSController *idsController; // @synthesize idsController=_idsController;
@property long long stashBagSession; // @synthesize stashBagSession=_stashBagSession;
@property long long unlockAuthSession; // @synthesize unlockAuthSession=_unlockAuthSession;
@property long long setupAuthSession; // @synthesize setupAuthSession=_setupAuthSession;
- (void)logProtoBufReceived:(id)arg1;	// IMP=0x000000010019cdfc
- (void)logProtoBufSend:(id)arg1;	// IMP=0x000000010019ccc0
- (unsigned int)generateSessionID;	// IMP=0x000000010019ccb8
- (_Bool)activeDevicesMatch;	// IMP=0x000000010019caac
- (id)activeDevice;	// IMP=0x000000010019c8fc
- (id)activeDeviceDescription;	// IMP=0x000000010019c8a8
- (id)activeDeviceName;	// IMP=0x000000010019c848
- (id)pairingStorePath;	// IMP=0x000000010019c7e8
- (id)pairingID;	// IMP=0x000000010019c760
- (_Bool)deviceIsPaired;	// IMP=0x000000010019c6e0
- (unsigned short)pairingCompatibilityState;	// IMP=0x000000010019c68c
- (_Bool)inConfigureState;	// IMP=0x000000010019c668
- (_Bool)shouldAbort;	// IMP=0x000000010019c660
- (void)abortDevicePairingWithReason:(id)arg1;	// IMP=0x000000010019c524
- (void)sendDisableMessage;	// IMP=0x000000010019c430
- (void)sendResetMessage:(unsigned int)arg1 reason:(unsigned short)arg2;	// IMP=0x000000010019c2fc
- (void)invalidateUnlockTimer;	// IMP=0x000000010019c274
- (void)restartUnlockTimer:(unsigned long long)arg1;	// IMP=0x000000010019c104
- (void)resetStashState;	// IMP=0x000000010019c094
- (void)resetState;	// IMP=0x000000010019c014
- (void)resetAndClearState;	// IMP=0x000000010019c008
- (void)resetSetupState;	// IMP=0x000000010019bf98
- (void)resetAll;	// IMP=0x000000010019bf54
- (void)disableUnlockWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010019be74
- (_Bool)unlockEnabled;	// IMP=0x000000010019be28
- (void)disableUnlockPairingForSecManager:(id)arg1;	// IMP=0x000000010019bd44
- (void)disableUnlockPairing;	// IMP=0x000000010019bcc8
- (void)enableUnlockPairing;	// IMP=0x000000010019bc3c
- (void)deviceDidEnterConfigState:(id)arg1;	// IMP=0x000000010019bb78
- (void)pairingDidBegin:(id)arg1;	// IMP=0x000000010019bab4
- (void)pairingStatusChanged:(id)arg1;	// IMP=0x000000010019b9e8
- (void)updateExitPrevention;	// IMP=0x000000010019b9e4
- (void)handleDevicesDidFailToPair;	// IMP=0x000000010019b964
- (void)devicesDidFailToPair:(id)arg1;	// IMP=0x000000010019b958
- (id)generateDebugInfo;	// IMP=0x000000010019b470
- (void)removeObservers;	// IMP=0x000000010019b420
- (void)addObservers;	// IMP=0x000000010019b238
- (void)debugInfoRequested:(id)arg1;	// IMP=0x000000010019b234
- (void)preventExitForLocaleIfNeeded;	// IMP=0x000000010019b184
- (void)updateSecurityManager;	// IMP=0x000000010019afa0
- (void)updateSecurityManagerIfNeeded;	// IMP=0x000000010019af4c
- (void)dealloc;	// IMP=0x000000010019af00
- (id)init;	// IMP=0x000000010019ae50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

