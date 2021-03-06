//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVGenericSettingsViewController.h"

#import "MTPodcastInfoViewDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class MTDefaultsChangeNotifier, MTOptionSetting, MTRadioGroupDescription, MTSetting, MTSettingsGroup, NSString;
@protocol MTShowSettingsViewControllerDelegate;

@interface MTShowSettingsViewController : MTTVGenericSettingsViewController <MTPodcastInfoViewDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _descriptionViewIsExpanded;	// 8 = 0x8
    id <MTShowSettingsViewControllerDelegate> _delegate;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    MTSettingsGroup *_showSettingsGroup;	// 32 = 0x20
    MTSetting *_subscribedSetting;	// 40 = 0x28
    MTSettingsGroup *_presetSettingsGroup;	// 48 = 0x30
    MTOptionSetting *_showTypeSetting;	// 56 = 0x38
    MTRadioGroupDescription *_showTypeRadioGroup;	// 64 = 0x40
    MTSettingsGroup *_customSettingsGroup;	// 72 = 0x48
    MTSetting *_episodeOrderSetting;	// 80 = 0x50
    MTOptionSetting *_deletePlayedEpisodesSetting;	// 88 = 0x58
    MTOptionSetting *_episodesToKeepSetting;	// 96 = 0x60
    MTOptionSetting *_refreshIntervalSetting;	// 104 = 0x68
    MTSettingsGroup *_timelySettingsGroup;	// 112 = 0x70
    MTRadioGroupDescription *_episodeLimitRadioGroup;	// 120 = 0x78
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 128 = 0x80
}

+ (void)promptToTurnOnRemovePlayedEpisodesForPodcast:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cbdec
- (void).cxx_destruct;	// IMP=0x00000001000cde88
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) MTRadioGroupDescription *episodeLimitRadioGroup; // @synthesize episodeLimitRadioGroup=_episodeLimitRadioGroup;
@property(retain, nonatomic) MTSettingsGroup *timelySettingsGroup; // @synthesize timelySettingsGroup=_timelySettingsGroup;
@property(retain, nonatomic) MTOptionSetting *refreshIntervalSetting; // @synthesize refreshIntervalSetting=_refreshIntervalSetting;
@property(retain, nonatomic) MTOptionSetting *episodesToKeepSetting; // @synthesize episodesToKeepSetting=_episodesToKeepSetting;
@property(retain, nonatomic) MTOptionSetting *deletePlayedEpisodesSetting; // @synthesize deletePlayedEpisodesSetting=_deletePlayedEpisodesSetting;
@property(retain, nonatomic) MTSetting *episodeOrderSetting; // @synthesize episodeOrderSetting=_episodeOrderSetting;
@property(retain, nonatomic) MTSettingsGroup *customSettingsGroup; // @synthesize customSettingsGroup=_customSettingsGroup;
@property(retain, nonatomic) MTRadioGroupDescription *showTypeRadioGroup; // @synthesize showTypeRadioGroup=_showTypeRadioGroup;
@property(retain, nonatomic) MTOptionSetting *showTypeSetting; // @synthesize showTypeSetting=_showTypeSetting;
@property(retain, nonatomic) MTSettingsGroup *presetSettingsGroup; // @synthesize presetSettingsGroup=_presetSettingsGroup;
@property(retain, nonatomic) MTSetting *subscribedSetting; // @synthesize subscribedSetting=_subscribedSetting;
@property(retain, nonatomic) MTSettingsGroup *showSettingsGroup; // @synthesize showSettingsGroup=_showSettingsGroup;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool descriptionViewIsExpanded; // @synthesize descriptionViewIsExpanded=_descriptionViewIsExpanded;
@property(nonatomic) __weak id <MTShowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncControllerOperationCompleted:(id)arg1;	// IMP=0x00000001000cdbe8
- (_Bool)_hideGroupName:(id)arg1;	// IMP=0x00000001000cda28
- (_Bool)_showGroup:(id)arg1 name:(id)arg2;	// IMP=0x00000001000cd83c
- (_Bool)_isShowingGroup:(id)arg1;	// IMP=0x00000001000cd728
- (_Bool)isShowingTimelySettings;	// IMP=0x00000001000cd714
- (_Bool)hideTimleySettings;	// IMP=0x00000001000cd700
- (_Bool)showTimleySettings;	// IMP=0x00000001000cd6a0
- (_Bool)isShowingCustomSettings;	// IMP=0x00000001000cd68c
- (_Bool)hideCustomSettings;	// IMP=0x00000001000cd678
- (_Bool)showCustomSettings;	// IMP=0x00000001000cd618
- (_Bool)updateTimleySettingsVisibility;	// IMP=0x00000001000cd5a4
- (_Bool)updateCustomSettingsVisibility;	// IMP=0x00000001000cd530
- (void)addPodcastInfoViewHeader;	// IMP=0x00000001000cd52c
- (void)podcastInfoViewWasTapped:(id)arg1;	// IMP=0x00000001000cd51c
- (void)podcastInfoViewDidExpand:(id)arg1;	// IMP=0x00000001000cd490
- (id)metricDataSource;	// IMP=0x00000001000cd3dc
- (id)metricsName;	// IMP=0x00000001000cd3d0
- (void)updateShowPresetSetting:(unsigned long long)arg1;	// IMP=0x00000001000cd164
- (void)updateIntervalSettingChanged:(unsigned long long)arg1;	// IMP=0x00000001000cd010
- (void)updateEpisodeOrder:(_Bool)arg1;	// IMP=0x00000001000cce70
- (void)updateNotifications:(_Bool)arg1;	// IMP=0x00000001000cccd4
- (void)updateNotificationSettingsToMatchSubscription:(_Bool)arg1;	// IMP=0x00000001000cccd0
- (void)updateSubscription:(_Bool)arg1;	// IMP=0x00000001000cc994
- (void)updateDeletePlayedEpisodes:(long long)arg1;	// IMP=0x00000001000cc7ec
- (void)updateEpisodeLimit:(long long)arg1;	// IMP=0x00000001000cbc50
- (id)updateIntervalOptionValues;	// IMP=0x00000001000cbc34
- (id)updateIntervalOptionArray:(_Bool)arg1 defaultValue:(long long)arg2;	// IMP=0x00000001000cba6c
- (id)stringForUpdateInterval:(long long)arg1 short:(_Bool)arg2 defaultValue:(long long)arg3;	// IMP=0x00000001000cb7d0
- (id)optionsForDownloadEpisodes;	// IMP=0x00000001000cb30c
- (id)deletePlayedText:(long long)arg1;	// IMP=0x00000001000cb264
- (id)optionsForDeletePlayedEpisodes;	// IMP=0x00000001000caeb8
- (id)optionsForLimitSetting;	// IMP=0x00000001000ca9d0
- (id)optionsForRefreshInterval;	// IMP=0x00000001000ca8d4
- (id)headerForOnThisDevice;	// IMP=0x00000001000ca864
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000ca858
- (id)footerTextForDefaultGloablSettings;	// IMP=0x00000001000ca6dc
- (id)footerTextForShowType:(long long)arg1;	// IMP=0x00000001000ca58c
- (void)refreshSettings;	// IMP=0x00000001000c9a08
- (id)settingsForCustomGroup;	// IMP=0x00000001000c98e0
- (id)settingsForEpisodesGroup;	// IMP=0x00000001000c9844
- (id)settingsForShowGroup;	// IMP=0x00000001000c97a8
- (void)setupView;	// IMP=0x00000001000c7dcc
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000c7ca8
- (void)viewDidLoad;	// IMP=0x00000001000c7c58
- (void)dealloc;	// IMP=0x00000001000c7bd8
- (id)initWithPodcastUuid:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000c7b2c
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x00000001000c7b1c
- (id)init;	// IMP=0x00000001000c7adc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

