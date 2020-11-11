//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKScreenSaverThemePreviewViewController, TVSettingsScreenSaverFacade;

@interface TVSettingsScreenSaverThemesViewController : TSKViewController
{
    TVSettingsScreenSaverFacade *_facade;	// 8 = 0x8
    TSKScreenSaverThemePreviewViewController *_themePreviewViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000b1f18
@property(retain, nonatomic) TSKScreenSaverThemePreviewViewController *themePreviewViewController; // @synthesize themePreviewViewController=_themePreviewViewController;
@property(readonly, nonatomic) TVSettingsScreenSaverFacade *facade; // @synthesize facade=_facade;
- (void)_didSelectThemeItem:(id)arg1;	// IMP=0x00000001000b1e48
- (id)_themes;	// IMP=0x00000001000b1a6c
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000b1844
- (id)loadSettingGroups;	// IMP=0x00000001000b17a8
- (id)initWithFacade:(id)arg1;	// IMP=0x00000001000b16b8

@end
