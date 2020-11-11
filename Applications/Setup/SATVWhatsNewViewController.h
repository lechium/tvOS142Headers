//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

@class UIViewController;

@interface SATVWhatsNewViewController : TVSKViewController
{
    _Bool _didFetchWhatsNewStatus;	// 8 = 0x8
    CDUnknownBlockType completionHandler;	// 16 = 0x10
    UIViewController *_whatsNewController;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000010004ec08
- (void).cxx_destruct;	// IMP=0x000000010004f348
@property(nonatomic) _Bool didFetchWhatsNewStatus; // @synthesize didFetchWhatsNewStatus=_didFetchWhatsNewStatus;
@property(retain, nonatomic) UIViewController *whatsNewController; // @synthesize whatsNewController=_whatsNewController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void)_callCompletionHandler;	// IMP=0x000000010004f26c
- (void)_updateDisplayPostFetchWithStatus:(_Bool)arg1 viewController:(id)arg2 error:(id)arg3;	// IMP=0x000000010004f054
- (void)_beginWhatsNewTask;	// IMP=0x000000010004ed8c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004ed18
- (void)viewDidLoad;	// IMP=0x000000010004ecc8
@property(readonly, nonatomic) _Bool shouldSkipShowingWhatsNew;

@end

