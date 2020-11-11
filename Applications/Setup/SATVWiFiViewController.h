//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

#import "TVCSWiFiNetworkDelegate-Protocol.h"

@class NSString, TVCSWiFiNetworkViewController, UILabel;

@interface SATVWiFiViewController : SATVTableViewController <TVCSWiFiNetworkDelegate>
{
    CDUnknownBlockType _completionBlock;	// 8 = 0x8
    TVCSWiFiNetworkViewController *_networkViewController;	// 16 = 0x10
    UILabel *_wifiAddressLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000cf88
@property(retain, nonatomic) UILabel *wifiAddressLabel; // @synthesize wifiAddressLabel=_wifiAddressLabel;
@property(retain, nonatomic) TVCSWiFiNetworkViewController *networkViewController; // @synthesize networkViewController=_networkViewController;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)viewController:(id)arg1 connectedToNetwork:(id)arg2;	// IMP=0x000000010000cea4
- (void)_didSelectMenu;	// IMP=0x000000010000ce24
- (void)viewDidLoad;	// IMP=0x000000010000cc54
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000cbe0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000cb6c
- (void)viewDidLayoutSubviews;	// IMP=0x000000010000c9a0
- (void)loadView;	// IMP=0x000000010000c524

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
