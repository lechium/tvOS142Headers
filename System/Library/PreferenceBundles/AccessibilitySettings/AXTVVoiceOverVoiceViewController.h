//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "AXSettingsVoiceAssetManagerDelegate-Protocol.h"

@class NSString, UIBarButtonItem;

@interface AXTVVoiceOverVoiceViewController : TSKViewController <AXSettingsVoiceAssetManagerDelegate>
{
    UIBarButtonItem *_editButtonItem;	// 8 = 0x8
    UIBarButtonItem *_doneButtonItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000bbf0
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
- (id)navigationItem;	// IMP=0x000000000000b9bc
- (_Bool)_isEditable;	// IMP=0x000000000000b740
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000b634
- (void)toggleEditMode:(id)arg1;	// IMP=0x000000000000b598
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000000ad98
- (void)_voiceSelected:(id)arg1;	// IMP=0x000000000000a7b0
- (id)loadSettingGroups;	// IMP=0x000000000000a75c
- (void)_addLanguageGroups:(id)arg1;	// IMP=0x000000000000a220
- (void)assetManagerFinishedDownloadingAsset:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x0000000000009ff0
- (void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 progress:(float)arg2 storageSize:(long long)arg3 requiredDiskSpace:(_Bool)arg4 versionId:(id)arg5;	// IMP=0x0000000000009d60
- (void)assetManagerError:(id)arg1 voiceId:(id)arg2;	// IMP=0x00000000000099c4
- (id)_settingItemForVoiceId:(id)arg1;	// IMP=0x00000000000096f0
- (void)updateInformationForSettingsItem:(id)arg1;	// IMP=0x0000000000008f58
- (void)_speakSample:(id)arg1;	// IMP=0x0000000000008ea4
- (void)addVoiceFootprintsToGroup:(id)arg1 dialect:(id)arg2 isPrimaryDialect:(_Bool)arg3;	// IMP=0x00000000000083bc
- (id)_voicesForLanguage:(id)arg1 selectedVoiceId:(id)arg2;	// IMP=0x0000000000007c6c
- (void)assetManagerUpdateToDownloadAvailabilityChanged;	// IMP=0x0000000000007c60
- (void)_voiceServicesAssetStateChanged;	// IMP=0x0000000000007be0
- (id)language;	// IMP=0x0000000000007ba4
- (void)dealloc;	// IMP=0x0000000000007b20
- (void)viewDidLoad;	// IMP=0x00000000000078fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
