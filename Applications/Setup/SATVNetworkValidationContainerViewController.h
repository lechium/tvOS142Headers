//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SATVNetworkValidationViewController, TVSKNavigationController;

@interface SATVNetworkValidationContainerViewController : UIViewController
{
    SATVNetworkValidationViewController *_networkValidationViewController;	// 8 = 0x8
    CDUnknownBlockType _menuHandler;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    TVSKNavigationController *_navController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100077294
@property(retain, nonatomic) TVSKNavigationController *navController; // @synthesize navController=_navController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType menuHandler; // @synthesize menuHandler=_menuHandler;
@property(readonly, nonatomic) SATVNetworkValidationViewController *networkValidationViewController; // @synthesize networkValidationViewController=_networkValidationViewController;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100076f6c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100076ef8
- (void)viewDidLoad;	// IMP=0x0000000100076dc4
- (void)autoAdvance;	// IMP=0x0000000100076d84

@end

