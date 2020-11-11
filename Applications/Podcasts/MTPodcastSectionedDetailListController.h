//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVEpisodeListViewController.h"

#import "MTPodcastDetailDataSourceDelegate-Protocol.h"

@class MTPodcastDetailDataSource, NSString;

@interface MTPodcastSectionedDetailListController : MTTVEpisodeListViewController <MTPodcastDetailDataSourceDelegate>
{
    NSString *_podcastUUID;	// 8 = 0x8
    MTPodcastDetailDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100098860
@property(retain, nonatomic) MTPodcastDetailDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSString *podcastUUID; // @synthesize podcastUUID=_podcastUUID;
- (void)reloadSectionHeaderForSection:(id)arg1;	// IMP=0x00000001000986a8
- (void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100098398
- (void)sectionDidChangeContent:(id)arg1;	// IMP=0x00000001000981a4
- (void)reloadSectionForDarkPlacardIfNeeded;	// IMP=0x00000001000980f8
- (void)reloadSectionForEmptyOverlayIfNeeded;	// IMP=0x000000010009804c
- (void)sectionWillChangeContent:(id)arg1;	// IMP=0x0000000100097fe8
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100097eb4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100097e5c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100097db0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100097d64
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000100097d5c
- (id)indexPathsForEpisode:(id)arg1;	// IMP=0x0000000100097bb8
- (unsigned long long)sectionTypeForIndex:(unsigned long long)arg1;	// IMP=0x0000000100097b5c
- (unsigned long long)sectionIndexForType:(unsigned long long)arg1;	// IMP=0x0000000100097b04
- (unsigned long long)indexForSection:(id)arg1;	// IMP=0x0000000100097a8c
- (id)sectionForType:(unsigned long long)arg1;	// IMP=0x0000000100097940
- (id)sectionForIndex:(long long)arg1;	// IMP=0x000000010009788c
- (unsigned long long)sectionTypeForIndexPath:(id)arg1;	// IMP=0x0000000100097824
- (id)messageForEmptySection;	// IMP=0x00000001000977b4
- (id)createEmptySectionCell;	// IMP=0x0000000100097738
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x00000001000976a4
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x00000001000975e0
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010009758c
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100097480
- (_Bool)hasEpisodesInTheFeed;	// IMP=0x0000000100097404
- (_Bool)hasEpisodesToBeDeleted;	// IMP=0x0000000100097368
- (_Bool)hasUnplayedEpisodes;	// IMP=0x0000000100097204
- (_Bool)hasOnlyToBeDeletedItems;	// IMP=0x00000001000971b8
- (_Bool)hasEmptySection;	// IMP=0x0000000100097170
- (_Bool)hasItems;	// IMP=0x0000000100097004
- (void)_updateTableAnimated;	// IMP=0x0000000100097000
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100096ffc
- (void)initializeFrc;	// IMP=0x0000000100096ff8
- (id)frc;	// IMP=0x0000000100096ff0
- (id)sections;	// IMP=0x0000000100096f9c
- (void)switchToTab:(unsigned long long)arg1;	// IMP=0x0000000100096f38
- (unsigned long long)selectedTab;	// IMP=0x0000000100096eec
- (void)playEpisodeAtIndexPath:(id)arg1;	// IMP=0x0000000100096e24
- (void)reloadData;	// IMP=0x0000000100096d34
- (id)initWithPodcastUUID:(id)arg1;	// IMP=0x0000000100096c68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

