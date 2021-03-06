//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXTVCaptionBaseViewController.h"

@class TSKSettingItem, UIBarButtonItem;

@interface AXTVCaptionCustomStylesViewController : AXTVCaptionBaseViewController
{
    TSKSettingItem *_createNewStyleItem;	// 8 = 0x8
    UIBarButtonItem *_editButtonItem;	// 16 = 0x10
    UIBarButtonItem *_doneButtonItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002cd80
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
@property(retain, nonatomic) TSKSettingItem *createNewStyleItem; // @synthesize createNewStyleItem=_createNewStyleItem;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000002c8dc
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002c888
- (id)_editStyleControllerWithStyle:(id)arg1;	// IMP=0x000000000002c7f4
- (void)deleteExistingStyle:(id)arg1;	// IMP=0x000000000002c684
- (void)createNewStyle:(id)arg1;	// IMP=0x000000000002c5a4
- (void)toggleEditMode:(id)arg1;	// IMP=0x000000000002c508
- (id)navigationItem;	// IMP=0x000000000002c2d4
- (id)loadSettingGroups;	// IMP=0x000000000002be18

@end

