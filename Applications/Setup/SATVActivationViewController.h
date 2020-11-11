//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

@class SATVHeaderView, UIActivityIndicatorView, UIView;

@interface SATVActivationViewController : TVSKViewController
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    SATVHeaderView *_headerView;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicatorView;	// 24 = 0x18
    UIView *_activityIndicatorContainerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100040958
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_presentDateAndTimeErrorController;	// IMP=0x00000001000402d8
- (void)_presentActivationErrorController;	// IMP=0x000000010003fce0
- (id)_localizedMacAddressDescription;	// IMP=0x000000010003fb74
- (void)_forgetCurrentWiFiNetworkIfNeeded;	// IMP=0x000000010003fad0
- (void)_attemptActivation;	// IMP=0x000000010003f868
- (void)_beginProcess;	// IMP=0x000000010003f66c
- (void)viewDidLayoutSubviews;	// IMP=0x000000010003f360
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010003f2b0
- (void)loadView;	// IMP=0x000000010003edd8

@end

