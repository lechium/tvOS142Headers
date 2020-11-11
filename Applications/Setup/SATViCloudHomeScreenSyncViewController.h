//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVChooseOptionViewDataSource-Protocol.h"
#import "SATVChooseOptionViewDelegate-Protocol.h"

@class NSString, SATVChooseOptionView, SATViCloudServicesManager, TVSKActivityIndicatorViewController, UIActivityIndicatorView, UIView;

@interface SATViCloudHomeScreenSyncViewController : TVSKViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    UIView *_activityIndicatorContainerView;	// 24 = 0x18
    SATViCloudServicesManager *_iCloudServicesManager;	// 32 = 0x20
    SATVChooseOptionView *_chooseOptionView;	// 40 = 0x28
    TVSKActivityIndicatorViewController *_activityIndicatorViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000439b0
@property(retain, nonatomic) TVSKActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) SATVChooseOptionView *chooseOptionView; // @synthesize chooseOptionView=_chooseOptionView;
@property(retain, nonatomic) SATViCloudServicesManager *iCloudServicesManager; // @synthesize iCloudServicesManager=_iCloudServicesManager;
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)_footerText;	// IMP=0x00000001000437b0
- (void)_showOptionsView;	// IMP=0x00000001000436cc
- (void)_dismissActivityIndicatorView;	// IMP=0x0000000100043644
- (void)_showActivityIndicatorView;	// IMP=0x0000000100043380
- (void)didSelectSecondOptionForView:(id)arg1;	// IMP=0x00000001000432c8
- (void)didSelectFirstOptionForView:(id)arg1;	// IMP=0x0000000100043224
- (id)secondOptionButtonFooterTextForView:(id)arg1;	// IMP=0x0000000100043218
- (id)firstOptionButtonFooterTextForView:(id)arg1;	// IMP=0x000000010004320c
- (id)secondOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004318c
- (id)firstOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004310c
- (id)subtitleTextForView:(id)arg1;	// IMP=0x000000010004308c
- (id)titleTextForView:(id)arg1;	// IMP=0x000000010004300c
- (void)_enableOrDisableHomeScreenSync:(_Bool)arg1;	// IMP=0x0000000100042f70
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100042dc8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100042d54
- (void)viewDidLoad;	// IMP=0x0000000100042c8c
- (void)reset;	// IMP=0x0000000100042c74
- (void)autoAdvance;	// IMP=0x0000000100042b6c
- (id)init;	// IMP=0x0000000100042af0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
