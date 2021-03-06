//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SRStarkConfirmationSnippetController.h"

@class NSTimer, SRStarkConfirmationSnippetView, SRStarkEmergencyCallConfirmationSnippetView;

@interface SRStarkEmergencyCallConfirmationSnippetController : SRStarkConfirmationSnippetController
{
    long long _seconds;	// 8 = 0x8
    NSTimer *_countdownTimer;	// 16 = 0x10
    SRStarkConfirmationSnippetView *_snippetView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100030238
- (void)setSnippetView:(id)arg1;	// IMP=0x0000000100030224
- (void)_updateCountdown:(id)arg1;	// IMP=0x000000010002ffc8
- (unsigned long long)autoDismissalReason;	// IMP=0x000000010002ffc0
- (long long)autoDismissalStrategy;	// IMP=0x000000010002ffb8
@property(readonly) SRStarkEmergencyCallConfirmationSnippetView *emergencySnippetView;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010002fee8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010002fdc8
- (id)snippetView;	// IMP=0x000000010002fa94
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x000000010002f9dc

@end

