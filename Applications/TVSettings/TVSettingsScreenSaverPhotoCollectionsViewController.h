//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TVSettingsScreenSaverRadioSettingGroupDelegate-Protocol.h"

@class NSString, TVPhotoCollectionGroup, TVSettingsPhotoCollectionPreviewViewController, UIVisualEffectView;

@interface TVSettingsScreenSaverPhotoCollectionsViewController : TSKViewController <TVSettingsScreenSaverRadioSettingGroupDelegate>
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    TVPhotoCollectionGroup *_photoCollectionsGroup;	// 16 = 0x10
    TVSettingsPhotoCollectionPreviewViewController *_photoPreviewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000cbdf4
- (void)_updatePhotoCollectionWithIndexPath:(id)arg1;	// IMP=0x00000001000cbcdc
- (id)_photoCollectionTitleFormatter;	// IMP=0x00000001000cbb64
- (void)radioSettingsGroup:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x00000001000cba94
- (_Bool)hasFullscreenPreview;	// IMP=0x00000001000cba8c
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000cb9f4
- (id)title;	// IMP=0x00000001000cb9ec
- (id)loadSettingGroups;	// IMP=0x00000001000cb510
- (void)viewDidLoad;	// IMP=0x00000001000cad9c
- (id)initWithPhotoCollectionGroup:(id)arg1;	// IMP=0x00000001000cacbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

