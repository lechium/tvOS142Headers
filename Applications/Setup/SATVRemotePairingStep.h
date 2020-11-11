//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSMutableDictionary, NSString, NSTimer, SATVRemoteViewController;
@protocol TVSKStepDelegate;

@interface SATVRemotePairingStep : NSObject <TVSKStep>
{
    _Bool _hasAttemptedSilentActivation;	// 8 = 0x8
    SATVRemoteViewController *_pairRemoteViewController;	// 16 = 0x10
    id <TVSKStepDelegate> stepDelegate;	// 24 = 0x18
    NSMutableDictionary *_metricsPayload;	// 32 = 0x20
    NSTimer *_touchlessSetupTimer;	// 40 = 0x28
    NSTimer *_TFDEPPollTimer;	// 48 = 0x30
}

+ (id)stableIdentifier;	// IMP=0x000000010005bc80
+ (void)initialize;	// IMP=0x000000010005ba20
- (void).cxx_destruct;	// IMP=0x000000010005cfd8
@property(nonatomic) _Bool hasAttemptedSilentActivation; // @synthesize hasAttemptedSilentActivation=_hasAttemptedSilentActivation;
@property(retain, nonatomic) NSTimer *TFDEPPollTimer; // @synthesize TFDEPPollTimer=_TFDEPPollTimer;
@property(retain, nonatomic) NSTimer *touchlessSetupTimer; // @synthesize touchlessSetupTimer=_touchlessSetupTimer;
@property(retain, nonatomic) NSMutableDictionary *metricsPayload; // @synthesize metricsPayload=_metricsPayload;
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_autoAdvanceNow;	// IMP=0x000000010005cf58
- (void)_completeStepWithSuccess:(_Bool)arg1 finishSetup:(_Bool)arg2;	// IMP=0x000000010005ce7c
- (void)_autoAdvanceIfNeeded;	// IMP=0x000000010005cc48
- (void)_showRemotePairingViewController:(id)arg1;	// IMP=0x000000010005cbd8
@property(readonly, nonatomic, getter=_pairRemoteViewController) SATVRemoteViewController *pairRemoteViewController; // @synthesize pairRemoteViewController=_pairRemoteViewController;
- (void)_invalidateAllTimers;	// IMP=0x000000010005ca5c
- (void)_invalidateTouchlessTimer;	// IMP=0x000000010005ca28
- (void)_setupTouchlessTimerAfterDelay:(double)arg1 invocation:(id)arg2;	// IMP=0x000000010005c958
- (void)_beginTouchlessSetupWithInvocation:(id)arg1 afterDelay:(double)arg2;	// IMP=0x000000010005c800
- (_Bool)_isResumingTouchlessSetup;	// IMP=0x000000010005c748
- (void)TFDEPPollTimerFired:(id)arg1;	// IMP=0x000000010005c640
- (_Bool)isTeslaEnrolled;	// IMP=0x000000010005c590
- (void)_stopTFDEPPolling;	// IMP=0x000000010005c508
- (void)_startTFDEPPolling;	// IMP=0x000000010005c458
- (void)_retrieveCloudConfigurationDetails;	// IMP=0x000000010005c2a4
- (void)_attemptSilentActivationIfPossible;	// IMP=0x000000010005be64
- (void)autoAdvance;	// IMP=0x000000010005be60
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010005bc8c
- (id)init;	// IMP=0x000000010005ba84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
