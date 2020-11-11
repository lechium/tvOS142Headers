//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, SSAccount;

@interface SATVSiriStoreFrontViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    SSAccount *_activeAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100005500
@property(retain, nonatomic) SSAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_continueWithoutSiri:(_Bool)arg1;	// IMP=0x000000010000543c
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000053b8
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100005334
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100005284
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100005204
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010000502c
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100004fac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004f38
- (void)viewDidLoad;	// IMP=0x0000000100004e30
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100004d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

