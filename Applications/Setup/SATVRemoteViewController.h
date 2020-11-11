//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

@class NSArray, NSDictionary, NSTimer, SATVCyclingFooterView, SATVCyclingHeaderView, UIActivityIndicatorView, UIView;

@interface SATVRemoteViewController : TVSKViewController
{
    _Bool _proximityPairingActive;	// 8 = 0x8
    _Bool _bluetoothScanningActivate;	// 9 = 0x9
    _Bool _ignoreDisplayConnection;	// 10 = 0xa
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    SATVCyclingHeaderView *_bannerView;	// 24 = 0x18
    SATVCyclingFooterView *_footerView;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicator;	// 40 = 0x28
    UIView *_activityIndicatorContainer;	// 48 = 0x30
    struct __IOHIDServiceClient *_appleTVIRService;	// 56 = 0x38
    struct __IOHIDEventSystemClient *_remoteHIDClient;	// 64 = 0x40
    NSDictionary *_matchingDict;	// 72 = 0x48
    NSArray *_sortedSupportedLanguages;	// 80 = 0x50
    NSTimer *_pairingHelpTimer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100022e9c
@property(nonatomic) _Bool ignoreDisplayConnection; // @synthesize ignoreDisplayConnection=_ignoreDisplayConnection;
@property(retain, nonatomic) NSTimer *pairingHelpTimer; // @synthesize pairingHelpTimer=_pairingHelpTimer;
@property(retain, nonatomic) NSArray *sortedSupportedLanguages; // @synthesize sortedSupportedLanguages=_sortedSupportedLanguages;
@property(nonatomic) _Bool bluetoothScanningActivate; // @synthesize bluetoothScanningActivate=_bluetoothScanningActivate;
@property(nonatomic) _Bool proximityPairingActive; // @synthesize proximityPairingActive=_proximityPairingActive;
@property(retain, nonatomic) NSDictionary *matchingDict; // @synthesize matchingDict=_matchingDict;
@property(nonatomic) struct __IOHIDEventSystemClient *remoteHIDClient; // @synthesize remoteHIDClient=_remoteHIDClient;
@property(nonatomic) struct __IOHIDServiceClient *appleTVIRService; // @synthesize appleTVIRService=_appleTVIRService;
@property(retain, nonatomic) UIView *activityIndicatorContainer; // @synthesize activityIndicatorContainer=_activityIndicatorContainer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) SATVCyclingFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SATVCyclingHeaderView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (_Bool)_performStealthStartup;	// IMP=0x0000000100022ba8
- (void)_startClickAnimation;	// IMP=0x0000000100022a6c
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100022930
- (void)_destroyRemoteHIDClient;	// IMP=0x0000000100022840
- (void)_setupRemoteHIDClient;	// IMP=0x0000000100022700
- (void)_bluetoothRemoteDidConnect;	// IMP=0x000000010002266c
- (void)_stopBluetoothScanning;	// IMP=0x0000000100022568
- (void)_handlePeripheralStateChange:(id)arg1;	// IMP=0x00000001000221e0
- (void)_stopProximityPairing;	// IMP=0x0000000100022020
- (void)_startProximityPairing;	// IMP=0x0000000100021d3c
- (_Bool)_isDisplayAvailable;	// IMP=0x0000000100021ca0
- (void)_animateAppearance;	// IMP=0x0000000100021a78
- (void)_showPairingSpinner:(_Bool)arg1;	// IMP=0x00000001000215d0
- (void)_onSelectRecognizer:(id)arg1;	// IMP=0x0000000100021550
- (void)_controllerDone;	// IMP=0x00000001000212dc
- (void)_showPairingHelp:(id)arg1;	// IMP=0x0000000100021268
- (void)autoAdvance;	// IMP=0x00000001000211d4
- (void)addConstraintsToBannerView:(id)arg1;	// IMP=0x0000000100020f80
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100020e18
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100020d70
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100020d00
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010002094c
- (void)tvs_bindDisplayModeToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000010002085c
- (id)DisplayMode;	// IMP=0x0000000100020804
- (void)viewDidLoad;	// IMP=0x0000000100020288
- (void)dealloc;	// IMP=0x00000001000201e4
- (id)init;	// IMP=0x000000010002016c

@end

