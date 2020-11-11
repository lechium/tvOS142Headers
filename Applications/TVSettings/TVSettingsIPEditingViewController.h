//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVSettingsIPEntryViewController.h"

#import "TSKSettingItemEditingController-Protocol.h"
#import "TVSettingsIPEntryViewControllerDelegate-Protocol.h"

@class NSString, TSKSettingItem;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsIPEditingViewController : TVSettingsIPEntryViewController <TVSettingsIPEntryViewControllerDelegate, TSKSettingItemEditingController>
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000348b8
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (void)_menuPressed;	// IMP=0x00000001000347ec
- (id)_promptText;	// IMP=0x000000010003477c
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000346f4
- (void)viewDidLoad;	// IMP=0x00000001000345ac
- (id)title;	// IMP=0x00000001000345a4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000344e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

