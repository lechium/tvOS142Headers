//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SATVTermsDetailsViewController, UIFocusGuide, UIView;

@interface SATVTermsViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSMutableDictionary *_termsDictionary;	// 16 = 0x10
    SATVTermsDetailsViewController *_termsDetailsViewController;	// 24 = 0x18
    UIFocusGuide *_choiceFocusGuide;	// 32 = 0x20
    UIView *_choiceView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100054668
@property(retain, nonatomic) UIView *choiceView; // @synthesize choiceView=_choiceView;
@property(retain, nonatomic) UIFocusGuide *choiceFocusGuide; // @synthesize choiceFocusGuide=_choiceFocusGuide;
@property(retain, nonatomic) SATVTermsDetailsViewController *termsDetailsViewController; // @synthesize termsDetailsViewController=_termsDetailsViewController;
@property(retain, nonatomic) NSMutableDictionary *termsDictionary; // @synthesize termsDictionary=_termsDictionary;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_callCompletionHandlerWithConsent:(_Bool)arg1;	// IMP=0x0000000100054538
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000544b4
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100054430
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x00000001000543b0
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100054330
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000542b0
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100054230
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x00000001000541b0
- (void)_freezeTerms:(id)arg1 withName:(id)arg2;	// IMP=0x0000000100053d2c
- (void)_getFallbackTermsAndFreeze;	// IMP=0x0000000100053960
- (void)_decodeTermsData:(id)arg1;	// IMP=0x00000001000536fc
- (id)_termsRequest;	// IMP=0x00000001000533f0
- (void)_downloadTerms;	// IMP=0x0000000100053030
- (void)downloadCompleted;	// IMP=0x0000000100052aa0
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000527b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100052744
- (void)viewDidLoad;	// IMP=0x0000000100052344
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000522ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

