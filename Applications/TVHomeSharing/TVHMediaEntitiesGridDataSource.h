//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHDiffableDataSourceContentProvider-Protocol.h"
#import "TVHMediaEntitiesDataSourceDelegate-Protocol.h"

@class NSArray, NSDictionary, NSOrderedSet, NSString, TVHSortOption;
@protocol TVHDiffableDataSourceContentProviderDelegate, TVHMediaEntitiesGridDataSourceDelegate;

@interface TVHMediaEntitiesGridDataSource : NSObject <TVHMediaEntitiesDataSourceDelegate, TVHDiffableDataSourceContentProvider>
{
    id <TVHDiffableDataSourceContentProviderDelegate> _diffableDataSourceContentProviderDelegate;	// 8 = 0x8
    NSArray *_mediaEntitiesDataSources;	// 16 = 0x10
    id <TVHMediaEntitiesGridDataSourceDelegate> _delegate;	// 24 = 0x18
    TVHSortOption *_currentSortOption;	// 32 = 0x20
    NSDictionary *_mediaEntitiesDataSourceByIdentifier;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00000001000a5550
- (void).cxx_destruct;	// IMP=0x00000001000a72c0
@property(retain, nonatomic) NSDictionary *mediaEntitiesDataSourceByIdentifier; // @synthesize mediaEntitiesDataSourceByIdentifier=_mediaEntitiesDataSourceByIdentifier;
@property(retain, nonatomic) TVHSortOption *currentSortOption; // @synthesize currentSortOption=_currentSortOption;
@property(nonatomic) __weak id <TVHMediaEntitiesGridDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *mediaEntitiesDataSources; // @synthesize mediaEntitiesDataSources=_mediaEntitiesDataSources;
@property(nonatomic) __weak id <TVHDiffableDataSourceContentProviderDelegate> diffableDataSourceContentProviderDelegate; // @synthesize diffableDataSourceContentProviderDelegate=_diffableDataSourceContentProviderDelegate;
- (id)_mediaEntitiesDataSourceForIndexPath:(id)arg1 updatedIndexPath:(id *)arg2;	// IMP=0x00000001000a7174
- (id)_mediaEntitiesDataSourceForSectionIndex:(unsigned long long)arg1 sectionOffset:(unsigned long long *)arg2;	// IMP=0x00000001000a6fdc
- (id)_mediaEntitiesDataSourceForSectionIndex:(unsigned long long)arg1;	// IMP=0x00000001000a6fcc
- (id)_mediaEntitiesDataSourceForIndexTitles;	// IMP=0x00000001000a6f58
- (_Bool)_canProvideIndexBarTitles;	// IMP=0x00000001000a6ec4
- (void)_notfiyDelegatesMediaEntitiesDidChangeWithAnimateChanges:(_Bool)arg1 changeSets:(id)arg2 itemIdentifiersOfAmendedItems:(id)arg3;	// IMP=0x00000001000a6e5c
- (void)_notifyDelegateMediaEntitiesDidChangeWithChangeSets:(id)arg1;	// IMP=0x00000001000a6ddc
- (void)_notifyDelegateCurrentSortDidChange:(id)arg1;	// IMP=0x00000001000a6d5c
- (void)_notfiyDiffableDataSourceContentProviderDelegateMediaEntitiesDidChangeWithAnimateChanges:(_Bool)arg1 itemIdentifiersOfAmendedItems:(id)arg2;	// IMP=0x00000001000a6ce4
- (void)mediaEntitiesDataSource:(id)arg1 mediaEntitiesDidChange:(id)arg2 changeSet:(id)arg3 itemIdentifiersOfAmendedItems:(id)arg4;	// IMP=0x00000001000a6bbc
- (id)indexPathForIndexTitle:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000001000a6b34
@property(readonly, copy, nonatomic) NSArray *indexTitles;
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000001000a6a4c
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000001000a68ec
- (id)sectionTitleAIndex:(unsigned long long)arg1;	// IMP=0x00000001000a6890
@property(readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;
- (void)removeAll;	// IMP=0x00000001000a6690
- (void)updateWithMediaEntitiesDataSourceFetchResults:(id)arg1;	// IMP=0x00000001000a6324
- (id)mediaItemAtIndexPath:(id)arg1;	// IMP=0x00000001000a6290
- (id)mediaEntityCollectionAtIndexPath:(id)arg1;	// IMP=0x00000001000a61fc
- (id)mediaEntityAtIndexPath:(id)arg1;	// IMP=0x00000001000a6168
- (id)mediaItemForItemIdentifier:(id)arg1;	// IMP=0x00000001000a6008
- (id)mediaEntityCollectionForItemIdentifier:(id)arg1;	// IMP=0x00000001000a5ea8
- (id)mediaEntityForItemIdentifier:(id)arg1;	// IMP=0x00000001000a5d48
@property(readonly, nonatomic) unsigned long long totalMediaEntitiesCount;
@property(readonly, copy, nonatomic) NSArray *totalMediaEntities;
- (id)mediaEntitiesDataSourceForSectionIndex:(unsigned long long)arg1;	// IMP=0x00000001000a5a70
- (id)mediaEntitiesDataSourceForIdentifier:(id)arg1;	// IMP=0x00000001000a59f0
- (id)initWithMediaEntitiesDataSources:(id)arg1 initialSortOption:(id)arg2;	// IMP=0x00000001000a5624
- (id)initWithMediaEntitiesDataSources:(id)arg1;	// IMP=0x00000001000a5614
- (id)init;	// IMP=0x00000001000a558c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

