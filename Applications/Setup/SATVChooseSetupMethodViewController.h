//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVBluetoothKeyboardManagerDelegate-Protocol.h"
#import "SATVChooseOptionViewDataSource-Protocol.h"
#import "SATVChooseOptionViewDelegate-Protocol.h"
#import "TVSUIDigitEntryViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController, SATVBluetoothKeyboardManager, SATVChooseOptionView, TVSKLabel, TVSUIDigitEntryViewController;

@interface SATVChooseSetupMethodViewController : TVSKViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate, SATVBluetoothKeyboardManagerDelegate, TVSUIDigitEntryViewControllerDelegate>
{
    _Bool _bluetoothPairing;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    SATVChooseOptionView *_chooseOptionView;	// 24 = 0x18
    TVSKLabel *_keyboardPairingPromptLabel;	// 32 = 0x20
    SATVBluetoothKeyboardManager *_bluetoothKeyboardManager;	// 40 = 0x28
    TVSUIDigitEntryViewController *_digitEntryViewController;	// 48 = 0x30
    OBPrivacyLinkController *_privacyLink;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x0000000100040d64
- (void).cxx_destruct;	// IMP=0x0000000100042a60
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(nonatomic, getter=isBluetoothPairing) _Bool bluetoothPairing; // @synthesize bluetoothPairing=_bluetoothPairing;
@property(retain, nonatomic) TVSUIDigitEntryViewController *digitEntryViewController; // @synthesize digitEntryViewController=_digitEntryViewController;
@property(retain, nonatomic) SATVBluetoothKeyboardManager *bluetoothKeyboardManager; // @synthesize bluetoothKeyboardManager=_bluetoothKeyboardManager;
@property(retain, nonatomic) TVSKLabel *keyboardPairingPromptLabel; // @synthesize keyboardPairingPromptLabel=_keyboardPairingPromptLabel;
@property(retain, nonatomic) SATVChooseOptionView *chooseOptionView; // @synthesize chooseOptionView=_chooseOptionView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_callCompletionWithUseTapToSetup:(_Bool)arg1;	// IMP=0x00000001000428ec
- (void)_popDigitEntryController;	// IMP=0x000000010004288c
- (void)_stopBluetoothKeyboardPairing;	// IMP=0x0000000100042814
- (void)_beginBluetoothKeyboardPairing;	// IMP=0x000000010004279c
- (void)_configureKeyboardPairingPromptLabel;	// IMP=0x00000001000422d0
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x000000010004219c
- (void)willAttemptToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100042048
- (void)didFailToPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100041ee4
- (void)didPairBluetoothKeyboardWithName:(id)arg1;	// IMP=0x0000000100041d70
- (void)presentPIN:(long long)arg1 forKeyboardWithName:(id)arg2;	// IMP=0x0000000100041844
- (void)didSelectSecondOptionForView:(id)arg1;	// IMP=0x0000000100041778
- (void)didSelectFirstOptionForView:(id)arg1;	// IMP=0x00000001000416ac
- (id)secondOptionButtonFooterViewForView:(id)arg1;	// IMP=0x0000000100041694
- (id)firstOptionButtonFooterViewForView:(id)arg1;	// IMP=0x000000010004167c
- (id)secondOptionButtonTextForView:(id)arg1;	// IMP=0x00000001000415fc
- (id)firstOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004157c
- (id)subtitleTextForView:(id)arg1;	// IMP=0x00000001000414d4
- (id)titleTextForView:(id)arg1;	// IMP=0x0000000100041454
- (id)preferredFocusEnvironments;	// IMP=0x00000001000413a8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100041280
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100041230
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000411bc
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100040ff8
- (void)viewDidLoad;	// IMP=0x0000000100040ed0
- (void)dealloc;	// IMP=0x0000000100040e84
- (id)init;	// IMP=0x0000000100040dc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

