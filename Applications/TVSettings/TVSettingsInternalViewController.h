//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSMutableSet;

@interface TVSettingsInternalViewController : TSKViewController
{
    NSMutableSet *_loadedBundleNames;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100031674
@property(retain) NSMutableSet *loadedBundleNames; // @synthesize loadedBundleNames=_loadedBundleNames;
- (id)_loadSettingGroupWithBundlesInDirectory:(id)arg1;	// IMP=0x00000001000311c4
- (id)loadSettingGroups;	// IMP=0x00000001000310b4

@end

