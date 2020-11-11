//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class PBSDisplayMode, UIViewController;

@interface TVSettingsResolutionViewController : TSKViewController
{
    PBSDisplayMode *_lastDisplayMode;	// 8 = 0x8
    UIViewController *_recoveryController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000155d0
@property(nonatomic) __weak UIViewController *recoveryController; // @synthesize recoveryController=_recoveryController;
@property(retain, nonatomic) PBSDisplayMode *lastDisplayMode; // @synthesize lastDisplayMode=_lastDisplayMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000154c0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000153d8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000151fc
- (void)_selectedItem:(id)arg1;	// IMP=0x00000001000151ac
- (CDUnknownBlockType)resolutionItemConfigurationBlock;	// IMP=0x0000000100014e90
- (id)resolutionGroupsForCommonModes:(_Bool)arg1;	// IMP=0x0000000100014a38
- (void)changeModeTo:(id)arg1;	// IMP=0x0000000100014744
- (void)viewDidLoad;	// IMP=0x0000000100014690
- (void)dealloc;	// IMP=0x00000001000145b0
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100014490

@end

