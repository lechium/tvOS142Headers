//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray;

@interface TVSettingsRestrictionsRegionViewController : TSKViewController
{
    NSArray *_filteredSectionIndexTitles;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100036f1c
@property(copy, nonatomic) NSArray *filteredSectionIndexTitles; // @synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles;
- (id)_contentFilterRegionFormatter;	// IMP=0x0000000100036e40
- (void)setCountryCode:(id)arg1;	// IMP=0x0000000100036d70
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100036d68
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000100036d58
- (id)loadSettingGroups;	// IMP=0x00000001000364d0

@end
