//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockAuthSession.h"

@class NSArray, NSData, NSMutableData, NSNumber, NSObject, SDAutoUnlockMacIconCache, SDUnlockSessionKeyExchangeResponse;
@protocol OS_dispatch_source, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockKeySession : SDAutoUnlockAuthSession
{
    _Bool _wifiEnabled;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    _Bool _sentAWDLInfo;	// 10 = 0xa
    _Bool _userRequestRequired;	// 11 = 0xb
    _Bool _sessionCompleted;	// 12 = 0xc
    _Bool _alerted;	// 13 = 0xd
    _Bool _shouldAlertOnNotify;	// 14 = 0xe
    _Bool _promptedForApproval;	// 15 = 0xf
    _Bool _promptingForApproval;	// 16 = 0x10
    _Bool _oldApproveProtocol;	// 17 = 0x11
    _Bool _needsImageData;	// 18 = 0x12
    _Bool _usingImageCache;	// 19 = 0x13
    int _errorRequestingUnlock;	// 20 = 0x14
    unsigned int _powerAssertionID;	// 24 = 0x18
    int _powerAssertionState;	// 28 = 0x1c
    NSNumber *_unlockAllowed;	// 32 = 0x20
    NSObject<OS_os_transaction> *_transaction;	// 40 = 0x28
    CDUnknownBlockType _wifiRequestStartedHandler;	// 48 = 0x30
    long long _remoteCacheID;	// 56 = 0x38
    NSArray *_peerList;	// 64 = 0x40
    NSData *_proxyRequestData;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_assertionTimer;	// 80 = 0x50
    SDUnlockSessionKeyExchangeResponse *_exchangeResponse;	// 88 = 0x58
    NSMutableData *_authPromptIconData;	// 96 = 0x60
    SDAutoUnlockMacIconCache *_iconCache;	// 104 = 0x68
    NSData *_authPromptIconHash;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000450a8
@property(nonatomic) _Bool usingImageCache; // @synthesize usingImageCache=_usingImageCache;
@property(nonatomic) _Bool needsImageData; // @synthesize needsImageData=_needsImageData;
@property(retain, nonatomic) NSData *authPromptIconHash; // @synthesize authPromptIconHash=_authPromptIconHash;
@property(retain, nonatomic) SDAutoUnlockMacIconCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) NSMutableData *authPromptIconData; // @synthesize authPromptIconData=_authPromptIconData;
@property(retain, nonatomic) SDUnlockSessionKeyExchangeResponse *exchangeResponse; // @synthesize exchangeResponse=_exchangeResponse;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimer; // @synthesize assertionTimer=_assertionTimer;
@property(copy, nonatomic) NSData *proxyRequestData; // @synthesize proxyRequestData=_proxyRequestData;
@property(copy, nonatomic) NSArray *peerList; // @synthesize peerList=_peerList;
@property(nonatomic) long long remoteCacheID; // @synthesize remoteCacheID=_remoteCacheID;
@property(copy, nonatomic) CDUnknownBlockType wifiRequestStartedHandler; // @synthesize wifiRequestStartedHandler=_wifiRequestStartedHandler;
@property(nonatomic) int powerAssertionState; // @synthesize powerAssertionState=_powerAssertionState;
@property(nonatomic) unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) int errorRequestingUnlock; // @synthesize errorRequestingUnlock=_errorRequestingUnlock;
@property(retain, nonatomic) NSNumber *unlockAllowed; // @synthesize unlockAllowed=_unlockAllowed;
@property(nonatomic) _Bool oldApproveProtocol; // @synthesize oldApproveProtocol=_oldApproveProtocol;
@property(nonatomic) _Bool promptingForApproval; // @synthesize promptingForApproval=_promptingForApproval;
@property(nonatomic) _Bool promptedForApproval; // @synthesize promptedForApproval=_promptedForApproval;
@property(nonatomic) _Bool shouldAlertOnNotify; // @synthesize shouldAlertOnNotify=_shouldAlertOnNotify;
@property(nonatomic) _Bool alerted; // @synthesize alerted=_alerted;
@property(nonatomic) _Bool sessionCompleted; // @synthesize sessionCompleted=_sessionCompleted;
@property(nonatomic) _Bool userRequestRequired; // @synthesize userRequestRequired=_userRequestRequired;
@property(nonatomic) _Bool sentAWDLInfo; // @synthesize sentAWDLInfo=_sentAWDLInfo;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) _Bool wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
- (void)logAutoUnlockEnd;	// IMP=0x0000000100044c08
- (void)logAutoUnlockStart;	// IMP=0x0000000100044ab8
- (void)invalidateAssertionTimer;	// IMP=0x00000001000449e0
- (void)restartAssertionTimer;	// IMP=0x00000001000447c8
- (void)releaseIdleSleepAssertion;	// IMP=0x0000000100044720
- (void)declareSystemActivityAssertion;	// IMP=0x00000001000444bc
- (void)sendConfirmationACK;	// IMP=0x0000000100044284
- (void)sendSessionAuthToken:(id)arg1 error:(id)arg2;	// IMP=0x0000000100043de4
- (void)sendKeyExchangeRequestWithData:(id)arg1 error:(id)arg2;	// IMP=0x0000000100043a98
- (void)sendAuthPromptResponseWithData:(id)arg1 error:(id)arg2;	// IMP=0x0000000100043774
- (void)sendAWDLInfoWithKeyData:(id)arg1 error:(id)arg2;	// IMP=0x0000000100043128
- (void)handleUnlockConfirmation:(id)arg1;	// IMP=0x0000000100042d04
- (void)createAuthTokenIfReady;	// IMP=0x00000001000425bc
- (void)handleSessionKeyExchangeResponse:(id)arg1;	// IMP=0x000000010004235c
- (void)handleAuthPromptImageData:(id)arg1;	// IMP=0x0000000100042098
- (void)handleAuthPromptRequest:(id)arg1;	// IMP=0x0000000100041c14
- (_Bool)handleAWDLInfo:(id)arg1;	// IMP=0x0000000100041850
- (void)handleMessageWithWrapper:(id)arg1;	// IMP=0x00000001000411c0
- (void)handleWiFiRequestInvalidated;	// IMP=0x0000000100041178
- (void)handleWiFiRequestStartedWithStartAWDLHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041144
- (void)awdlNetworkStarted;	// IMP=0x0000000100040f78
- (void)createWiFiRequest;	// IMP=0x000000010004096c
- (void)alertOfUnlock;	// IMP=0x0000000100040858
- (void)promptForApproval;	// IMP=0x0000000100040854
- (void)deviceDisconnected:(id)arg1;	// IMP=0x00000001000405dc
- (void)removeObservers;	// IMP=0x000000010004058c
- (void)addObservers;	// IMP=0x0000000100040524
- (void)beginAKSSession;	// IMP=0x0000000100040520
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x000000010004034c
- (_Bool)keyCanUnlock;	// IMP=0x0000000100040344
- (void)_invalidate;	// IMP=0x0000000100040110
- (void)invalidate;	// IMP=0x000000010004008c
- (id)initWithBLEDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010003fdc4

@end

