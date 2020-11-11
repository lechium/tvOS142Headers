//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVNPRoutingMainViewControllerDelegate-Protocol.h"
#import "TVSMModuleOverlayContentViewController-Protocol.h"

@class NSString, TVNPGroupableRoutingController, TVNPRoutingMainViewController;
@protocol TVSMModuleOverlayContentViewControllerDelegate;

@interface TVNPAirPlayRoutingModuleOverlayViewController : UIViewController <TVNPRoutingMainViewControllerDelegate, TVSMModuleOverlayContentViewController>
{
    id <TVSMModuleOverlayContentViewControllerDelegate> _delegate;	// 8 = 0x8
    TVNPGroupableRoutingController *_routingController;	// 16 = 0x10
    TVNPRoutingMainViewController *_routingViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001e974
@property(readonly, nonatomic) TVNPRoutingMainViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(readonly, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(nonatomic) __weak id <TVSMModuleOverlayContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x000000000001e8b8
- (id)preferredFocusEnvironments;	// IMP=0x000000000001e840
- (void)viewDidLoad;	// IMP=0x000000000001e74c
- (id)initWithRoutingController:(id)arg1;	// IMP=0x000000000001e674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
