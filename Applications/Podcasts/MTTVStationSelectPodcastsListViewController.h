//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSpecialIndexPathTableViewController.h"

@class NSMutableSet, NSString;
@protocol MTPlaylistSelectPodcastListViewControllerSaveDelegate;

@interface MTTVStationSelectPodcastsListViewController : MTSpecialIndexPathTableViewController
{
    _Bool _allPodcastsSelected;	// 8 = 0x8
    NSString *_playlistName;	// 16 = 0x10
    NSMutableSet *_podcastUuids;	// 24 = 0x18
    NSString *_playlistUuid;	// 32 = 0x20
    id <MTPlaylistSelectPodcastListViewControllerSaveDelegate> _saveDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100051428
@property(nonatomic) __weak id <MTPlaylistSelectPodcastListViewControllerSaveDelegate> saveDelegate; // @synthesize saveDelegate=_saveDelegate;
@property(retain, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
@property(nonatomic) _Bool allPodcastsSelected; // @synthesize allPodcastsSelected=_allPodcastsSelected;
@property(retain, nonatomic) NSMutableSet *podcastUuids; // @synthesize podcastUuids=_podcastUuids;
@property(retain, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void)main_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010005121c
- (_Bool)main_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000001000511fc
- (double)main_tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000511f0
- (void)main_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;	// IMP=0x000000010005107c
- (id)main_tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100051020
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100051018
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100050fa8
- (void)save;	// IMP=0x0000000100050da8
- (_Bool)toggleUuid:(id)arg1;	// IMP=0x0000000100050c94
- (void)toggleAllPodcastsSelected;	// IMP=0x0000000100050c2c
- (void)setupIncludeAllCell;	// IMP=0x0000000100050848
- (void)setupFRC;	// IMP=0x0000000100050678
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000503c0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100050370
- (void)viewDidLoad;	// IMP=0x0000000100050288

@end

