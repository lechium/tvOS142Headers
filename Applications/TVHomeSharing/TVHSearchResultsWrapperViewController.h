//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TVHSearchResultsViewController;

@interface TVHSearchResultsWrapperViewController : UIViewController
{
    TVHSearchResultsViewController *_searchResultsViewController;	// 8 = 0x8
    UIViewController *_defaultResultsViewController;	// 16 = 0x10
}

+ (id)new;	// IMP=0x0000000100055164
- (void).cxx_destruct;	// IMP=0x00000001000559b0
@property(retain, nonatomic) UIViewController *defaultResultsViewController; // @synthesize defaultResultsViewController=_defaultResultsViewController;
@property(readonly, nonatomic) TVHSearchResultsViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
- (id)UIFocusEnvironment;	// IMP=0x0000000100055890
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000556b8
- (void)viewDidLoad;	// IMP=0x0000000100055514
- (id)initWithSearchResultsViewController:(id)arg1;	// IMP=0x0000000100055338
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000552b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100055228
- (id)init;	// IMP=0x00000001000551a0

@end

