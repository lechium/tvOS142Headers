//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKRadioSettingGroup.h>

@protocol TVSettingsScreenSaverRadioSettingGroupDelegate;

@interface TVSettingsScreenSaverRadioSettingGroup : TSKRadioSettingGroup
{
    id <TVSettingsScreenSaverRadioSettingGroupDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001e11c
@property(nonatomic) __weak id <TVSettingsScreenSaverRadioSettingGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_itemSelected:(id)arg1;	// IMP=0x000000010001e044

@end
