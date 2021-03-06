//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVSiriAndDictationViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x00000001000195a4
- (void).cxx_destruct;	// IMP=0x0000000100019c50
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_enableSiriAndDictation:(_Bool)arg1;	// IMP=0x0000000100019b8c
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x0000000100019b14
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100019a9c
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x0000000100019a84
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100019a04
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100019984
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100019904
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100019884
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100019810
- (void)viewDidLoad;	// IMP=0x0000000100019708
- (void)dealloc;	// IMP=0x0000000100019690
- (id)init;	// IMP=0x0000000100019608

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

