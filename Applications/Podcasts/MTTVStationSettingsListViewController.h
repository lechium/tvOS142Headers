//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTPlaylistSettingsViewController.h"

@class UIAlertController;

@interface MTTVStationSettingsListViewController : MTPlaylistSettingsViewController
{
    UIAlertController *_deleteStationAlertController;	// 8 = 0x8
}

+ (struct CGSize)podcastImageSize;	// IMP=0x00000001000963b0
- (void).cxx_destruct;	// IMP=0x0000000100096b88
@property(retain, nonatomic) UIAlertController *deleteStationAlertController; // @synthesize deleteStationAlertController=_deleteStationAlertController;
- (id)newSettingsController;	// IMP=0x0000000100096968
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000968a4
- (id)_newSeparatorHeaderView;	// IMP=0x00000001000965b0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010009650c
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001000964b8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100096434
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000963f4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000963c0
- (void)showDeleteStationUI;	// IMP=0x000000010009609c
- (void)viewDidLoad;	// IMP=0x0000000100095ff0

@end

