//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRTranscriptViewControllerDataSource-Protocol.h"
#import "SRTranscriptViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTimer, SRTranscriptStackView, UINavigationController;
@protocol SRTranscriptStackViewControllerDataSource, SRTranscriptStackViewControllerDelegate;

@interface SRTranscriptStackViewController : UIViewController <SRTranscriptViewControllerDataSource, SRTranscriptViewControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _inUITrackingRunLoopMode;	// 8 = 0x8
    id <SRTranscriptStackViewControllerDataSource> _dataSource;	// 16 = 0x10
    id <SRTranscriptStackViewControllerDelegate> _delegate;	// 24 = 0x18
    UINavigationController *_navigationController;	// 32 = 0x20
    NSMutableArray *_navigationTransitionQueue;	// 40 = 0x28
    NSTimer *_navigationTransitionTimer;	// 48 = 0x30
}

+ (id)_createViewControllerWithItemIdentifier:(id)arg1;	// IMP=0x0000000100004558
- (void).cxx_destruct;	// IMP=0x0000000100008ee4
@property(nonatomic, getter=_isInUITrackingRunLoopMode, setter=_setInUITrackingRunLoopMode:) _Bool inUITrackingRunLoopMode; // @synthesize inUITrackingRunLoopMode=_inUITrackingRunLoopMode;
@property(retain, nonatomic, getter=_navigationTransitionTimer, setter=_setNavigationTransitionTimer:) NSTimer *navigationTransitionTimer; // @synthesize navigationTransitionTimer=_navigationTransitionTimer;
@property(retain, nonatomic, getter=_navigationTransitionQueue, setter=_navigationTransitionQueue:) NSMutableArray *navigationTransitionQueue; // @synthesize navigationTransitionQueue=_navigationTransitionQueue;
@property(readonly, nonatomic, getter=_navigationController) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SRTranscriptStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRTranscriptStackViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100008e14
- (void)navigationControllerInteractivePopGestureRecognized:(id)arg1;	// IMP=0x0000000100008dc4
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100008af0
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000089fc
- (unsigned long long)navigationIndexOfTranscriptViewController:(id)arg1;	// IMP=0x0000000100008964
- (_Bool)inTextInputModeForTranscriptViewController:(id)arg1;	// IMP=0x0000000100008910
- (CDStruct_a82615c4)keyboardInfoForTranscriptViewController:(id)arg1;	// IMP=0x00000001000088a0
- (void)transcriptViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x0000000100008858
- (void)transcriptViewController:(id)arg1 viewDidSetContentSize:(struct CGSize)arg2;	// IMP=0x00000001000087a4
- (void)transcriptViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008734
- (unsigned long long)deviceLockStateForTranscriptViewController:(id)arg1;	// IMP=0x00000001000086e0
- (id)transcriptViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x000000010000865c
- (id)transcriptViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x00000001000085d8
- (void)transcriptViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010000854c
- (void)transcriptViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x0000000100008480
- (void)transcriptViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x00000001000083d4
- (void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2;	// IMP=0x0000000100008348
- (void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x00000001000082c8
- (void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000823c
- (void)transcriptViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000081b4
- (void)transcriptViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100008154
- (void)transcriptViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x00000001000080fc
- (void)transcriptViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010000808c
- (void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010000801c
- (void)transcriptViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x0000000100007fac
- (void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0000000100007f3c
- (void)transcriptViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x0000000100007ee4
- (void)transcriptViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x0000000100007e8c
- (void)cancelSpeakingForTranscriptViewController:(id)arg1;	// IMP=0x0000000100007e44
- (void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007da8
- (void)cancelRequestForTranscriptViewController:(id)arg1;	// IMP=0x0000000100007d60
- (void)transcriptViewControllerDidEndEditing:(id)arg1;	// IMP=0x0000000100007d18
- (void)transcriptViewControllerWillBeginEditing:(id)arg1;	// IMP=0x0000000100007cd0
- (void)transcriptViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007c64
- (_Bool)transcriptViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x0000000100007c10
- (void)willSendStartRequestForTranscriptViewController:(id)arg1;	// IMP=0x0000000100007bc8
- (void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007b18
- (void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3;	// IMP=0x0000000100007b14
- (void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(id)arg5;	// IMP=0x0000000100007a10
- (void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007960
- (id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1;	// IMP=0x0000000100007904
- (void)transcriptViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100007894
- (void)transcriptViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x00000001000077e8
- (void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010000773c
- (void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x00000001000076cc
- (void)transcriptViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x0000000100007684
- (_Bool)transcriptViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x0000000100007630
- (_Bool)transcriptViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x00000001000075dc
- (long long)initialDisplayTypeForTranscriptViewController:(id)arg1;	// IMP=0x0000000100007588
- (double)statusViewHeightForTranscriptViewController:(id)arg1;	// IMP=0x000000010000752c
- (struct CGRect)statusBarFrameForTranscriptViewController:(id)arg1;	// IMP=0x00000001000074b0
- (struct CGSize)estimatedVisibleContentSizeForTranscriptViewController:(id)arg1;	// IMP=0x0000000100007408
- (double)contentWidthForTranscriptViewController:(id)arg1;	// IMP=0x00000001000073ac
- (id)siriEnabledAppListForTranscriptViewController:(id)arg1;	// IMP=0x0000000100007350
- (id)domainObjectStoreForTranscriptViewController:(id)arg1;	// IMP=0x00000001000072f4
- (id)conversationItemListForTranscriptViewController:(id)arg1;	// IMP=0x000000010000721c
- (long long)siriStateForTranscriptViewController:(id)arg1;	// IMP=0x00000001000071c8
- (void)_exitUITrackingRunLoopMode;	// IMP=0x0000000100007188
- (void)_enterUITrackingRunLoopMode;	// IMP=0x0000000100007144
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000070f0
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006ce4
- (id)_indexPathsForItemsAtIndexes:(id)arg1 inTranscriptViewController:(id)arg2;	// IMP=0x0000000100006b14
- (id)_indexPathForItemAtIndex:(long long)arg1 inTranscriptViewController:(id)arg2;	// IMP=0x0000000100006ab4
- (id)_indexPathForViewControllerDisplayingItemAtIndexPath:(id)arg1;	// IMP=0x0000000100006aa4
- (id)_transcriptViewControllerDisplayingChildrenOfItemAtIndexPath:(id)arg1;	// IMP=0x0000000100006a44
- (id)_transcriptViewControllerDisplayingChildrenOfItemWithIdentifier:(id)arg1;	// IMP=0x0000000100006800
- (id)_indexPathForParentOfItemsInTranscriptViewController:(id)arg1;	// IMP=0x000000010000679c
- (id)_indexPathForItemWithIdentifier:(id)arg1;	// IMP=0x000000010000671c
- (id)_identifierOfItemAtIndexPath:(id)arg1;	// IMP=0x000000010000669c
- (id)_topTranscriptViewController;	// IMP=0x0000000100006648
- (_Bool)logActiveTranscriptContents;	// IMP=0x00000001000065fc
- (void)siriDidDetectSpeechStartpoint;	// IMP=0x00000001000065bc
- (void)siriStoppedFingerprintingMusic;	// IMP=0x000000010000657c
- (void)siriBeganFingerprintingMusic;	// IMP=0x000000010000653c
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x00000001000064d0
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x0000000100006464
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x00000001000063f8
- (void)changeUtterance:(id)arg1;	// IMP=0x000000010000638c
- (void)_processTransitionQueue;	// IMP=0x0000000100006184
- (void)_queuePushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100005fd8
- (void)_queuePopToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100005dcc
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;	// IMP=0x0000000100005d14
- (void)presentationStateDidChangeForItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100005c30
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexPaths:(id)arg2 parentItemIdentifiers:(id)arg3;	// IMP=0x00000001000057f8
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100005714
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000053f0
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)restoreTopTranscriptPositionAnimated:(_Bool)arg1;	// IMP=0x000000010000535c
- (void)showTranscriptEnd;	// IMP=0x000000010000531c
- (void)showTranscriptStart;	// IMP=0x00000001000052bc
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (id)_conversation;	// IMP=0x00000001000051c8
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x0000000100005154
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x00000001000050e8
- (void)siriRequestWillStart;	// IMP=0x00000001000050a8
- (void)siriDidDeactivate;	// IMP=0x0000000100004f38
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x0000000100004eec
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x0000000100004db8
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x0000000100004c8c
@property(readonly, nonatomic) NSArray *requestContext;
- (void)keyboardHeightDidChange;	// IMP=0x0000000100004bf0
- (void)statusViewHeightDidChange;	// IMP=0x0000000100004ba8
- (void)statusBarFrameDidChange;	// IMP=0x0000000100004b60
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x0000000100004a34
- (void)showRootTranscript;	// IMP=0x00000001000049bc
- (void)pinLastDisplayedChildOfItemWithIdentifier:(id)arg1;	// IMP=0x0000000100004970
- (void)pinItemWithIdentifier:(id)arg1;	// IMP=0x00000001000048b8
- (id)identifierOfLastDisplayedChildOfItemWithIdentifier:(id)arg1;	// IMP=0x0000000100004864
- (void)resumeTouchesIfNecessary;	// IMP=0x0000000100004748
- (void)cancelTouchesIfNecessary;	// IMP=0x000000010000462c
- (id)_transcriptViewControllers;	// IMP=0x00000001000045d8
- (id)_createViewControllerWithItemIdentifier:(id)arg1;	// IMP=0x00000001000044d0
- (void)reloadData;	// IMP=0x000000010000439c
- (void)loadView;	// IMP=0x0000000100004158
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x000000010000414c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000408c
- (void)dealloc;	// IMP=0x0000000100003ef4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000100003b90
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100003b2c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100003ac8
- (void)srsvc_setConversation:(id)arg1;	// IMP=0x000000010007fa24
- (id)srsvc_conversation;	// IMP=0x000000010007fa18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRTranscriptStackView *view; // @dynamic view;

@end

