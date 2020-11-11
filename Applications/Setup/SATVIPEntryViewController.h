//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SATVIPEntryViewDelegate-Protocol.h"

@class NSString, SATVHeaderView, SATVIPEntryView, UILabel;
@protocol SATVIPEntryViewControllerDelegate;

@interface SATVIPEntryViewController : UIViewController <SATVIPEntryViewDelegate>
{
    SATVHeaderView *_titleView;	// 8 = 0x8
    UILabel *_promptLabel;	// 16 = 0x10
    SATVIPEntryView *_ipEntryView;	// 24 = 0x18
    NSString *_prompt;	// 32 = 0x20
    id <SATVIPEntryViewControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002c494
@property(nonatomic) __weak id <SATVIPEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void)_didSelectMenu;	// IMP=0x000000010002c44c
- (id)_ipEntryView;	// IMP=0x000000010002c3dc
- (void)ipEntryViewDidFinishEditing:(id)arg1;	// IMP=0x000000010002c378
@property(copy, nonatomic) NSString *ipAddress;
- (void)setTitle:(id)arg1;	// IMP=0x000000010002c1d0
- (id)preferredFocusEnvironments;	// IMP=0x000000010002c118
- (_Bool)becomeFirstResponder;	// IMP=0x000000010002c100
- (void)viewDidLayoutSubviews;	// IMP=0x000000010002bf10
- (void)loadView;	// IMP=0x000000010002bb3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
