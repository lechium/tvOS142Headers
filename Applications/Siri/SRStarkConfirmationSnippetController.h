//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRStarkConfirmationSnippetViewDelegate-Protocol.h"
#import "SRStarkItemController-Protocol.h"
#import "SUICProgressStateMachineObserving-Protocol.h"

@class AFAnalyticsTurnBasedInstrumentationContext, AceObject, NSArray, NSString, NSTimer, SRStarkConfirmationSnippetView, SUICProgressStateMachine;
@protocol SRStarkConfirmationSnippetControllerDelegate;

@interface SRStarkConfirmationSnippetController : UIViewController <SUICProgressStateMachineObserving, SRStarkItemController, SRStarkConfirmationSnippetViewDelegate>
{
    _Bool _shouldProceedToNextCommandAtSpeechSynthesisEnd;	// 8 = 0x8
    SRStarkConfirmationSnippetView *_snippetView;	// 16 = 0x10
    id <SRStarkConfirmationSnippetControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_confirmationButtons;	// 32 = 0x20
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 40 = 0x28
    NSString *_ignoreErrorDialogPhaseAceId;	// 48 = 0x30
    AceObject *_aceObject;	// 56 = 0x38
    NSTimer *_idleTimer;	// 64 = 0x40
    SUICProgressStateMachine *_readingProgressStateMachine;	// 72 = 0x48
    NSTimer *_readingProgressTimer;	// 80 = 0x50
    double _speechDurationSeconds;	// 88 = 0x58
    double _speechElapsedSeconds;	// 96 = 0x60
    NSString *_confirmationTitle;	// 104 = 0x68
    NSString *_confirmationDescription;	// 112 = 0x70
    unsigned long long _confirmationStyle;	// 120 = 0x78
}

+ (_Bool)_isSpeechDurationValid:(double)arg1;	// IMP=0x000000010004810c
+ (void)_buttonType:(long long *)arg1 iconType:(long long *)arg2 title:(id *)arg3 unreadMessagesCount:(id *)arg4 fromConfirmationOption:(id)arg5 withSpeechDurationInSeconds:(double)arg6;	// IMP=0x0000000100047ec8
+ (long long)_buttonIconTypeForIconType:(id)arg1 iconLabel:(id)arg2 speechDurationSeconds:(double)arg3;	// IMP=0x0000000100047af4
- (void).cxx_destruct;	// IMP=0x00000001000482ac
@property(readonly, nonatomic) unsigned long long confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
@property(readonly, copy, nonatomic) NSString *confirmationDescription; // @synthesize confirmationDescription=_confirmationDescription;
@property(readonly, copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd; // @synthesize shouldProceedToNextCommandAtSpeechSynthesisEnd=_shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(nonatomic) double speechElapsedSeconds; // @synthesize speechElapsedSeconds=_speechElapsedSeconds;
@property(nonatomic) double speechDurationSeconds; // @synthesize speechDurationSeconds=_speechDurationSeconds;
@property(readonly, nonatomic) NSTimer *readingProgressTimer; // @synthesize readingProgressTimer=_readingProgressTimer;
@property(retain, nonatomic) SUICProgressStateMachine *readingProgressStateMachine; // @synthesize readingProgressStateMachine=_readingProgressStateMachine;
@property(retain, nonatomic, getter=_idleTimer) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(readonly, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(copy, nonatomic) NSString *ignoreErrorDialogPhaseAceId; // @synthesize ignoreErrorDialogPhaseAceId=_ignoreErrorDialogPhaseAceId;
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(readonly, nonatomic) NSArray *confirmationButtons; // @synthesize confirmationButtons=_confirmationButtons;
@property(nonatomic) __weak id <SRStarkConfirmationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SRStarkConfirmationSnippetView *snippetView; // @synthesize snippetView=_snippetView;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;	// IMP=0x00000001000479ec
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;	// IMP=0x00000001000476d4
- (_Bool)isShowingGatekeeperHeader;	// IMP=0x000000010004768c
- (unsigned long long)styleForConfirmationViewStyle:(id)arg1;	// IMP=0x0000000100047618
- (void)_startAnimatingMessageReadingProgressIndicatorForDuration:(double)arg1;	// IMP=0x0000000100047498
- (_Bool)_isReadAgainItem:(id)arg1;	// IMP=0x0000000100047434
- (void)_sendGenericAceCommands:(id)arg1 andDismissSnippet:(_Bool)arg2;	// IMP=0x0000000100047310
- (void)loadView;	// IMP=0x00000001000472c4
- (void)messageReadingAnimationTimerFired;	// IMP=0x0000000100047118
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0000000100046f9c
- (unsigned long long)autoDismissalReason;	// IMP=0x0000000100046f94
- (long long)autoDismissalStrategy;	// IMP=0x0000000100046f8c
- (void)stopMessageReadingProgressAnimation;	// IMP=0x0000000100046f38
@property(readonly, nonatomic, getter=isSystemStyle) _Bool systemStyle;
- (void)_updateConfirmationButtonToIconType:(long long)arg1;	// IMP=0x0000000100046d7c
- (void)_resetReadingProgressAndConfirmationButtonIcon;	// IMP=0x0000000100046cf4
- (void)_populateCommand:(id)arg1 withInstrumentationTurn:(id)arg2;	// IMP=0x0000000100046b58
- (void)_setupConfirmationOptionButtons:(id)arg1 withStyle:(unsigned long long)arg2 speechDurationSeconds:(double)arg3;	// IMP=0x000000010004609c
- (void)_setupMessageReadingProgressForDuration:(double)arg1;	// IMP=0x0000000100045fa0
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x00000001000459d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

