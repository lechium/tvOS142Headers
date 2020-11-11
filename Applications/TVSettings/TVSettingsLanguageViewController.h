//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKPreviewViewController;

@interface TVSettingsLanguageViewController : TSKViewController
{
    TSKPreviewViewController *_languagePreviewViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100099b4c
@property(readonly, nonatomic) TSKPreviewViewController *languagePreviewViewController; // @synthesize languagePreviewViewController=_languagePreviewViewController;
- (id)_localizedLanguageFormatter;	// IMP=0x0000000100099a8c
- (id)_languageFormatter;	// IMP=0x00000001000999b8
- (void)_warnAboutSiriInLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100098cf4
- (void)setLanguage:(id)arg1;	// IMP=0x00000001000985e0
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000984a0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100098334
- (void)viewDidLoad;	// IMP=0x0000000100098280
- (id)loadSettingGroups;	// IMP=0x0000000100097eb0

@end
