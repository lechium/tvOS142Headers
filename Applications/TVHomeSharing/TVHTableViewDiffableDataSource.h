//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHDiffableDataSourceContentProviderDelegate-Protocol.h"
#import "_TVHTableViewDiffableDataSourceOverriding-Protocol.h"

@class NSString, UITableView, _TVHTableViewDiffableDataSource;
@protocol TVHDiffableDataSourceContentProvider;

@interface TVHTableViewDiffableDataSource : NSObject <_TVHTableViewDiffableDataSourceOverriding, TVHDiffableDataSourceContentProviderDelegate>
{
    id <TVHDiffableDataSourceContentProvider> _contentProvider;	// 8 = 0x8
    _TVHTableViewDiffableDataSource *_diffableDataSource;	// 16 = 0x10
    CDUnknownBlockType _cellConfigurator;	// 24 = 0x18
}

+ (id)new;	// IMP=0x0000000100069444
- (void).cxx_destruct;	// IMP=0x0000000100069d40
@property(readonly, copy, nonatomic) CDUnknownBlockType cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(readonly, nonatomic) _TVHTableViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) id <TVHDiffableDataSourceContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (void)_updateCell:(id)arg1 withItemIdentifier:(id)arg2;	// IMP=0x0000000100069ca0
- (id)_updateVisibleCellsWithItemIdentifiers:(id)arg1;	// IMP=0x0000000100069a8c
- (void)_dataSourceContentDidChangeWithAnimateChanges:(_Bool)arg1 itemIdentifiersOfAmendedItems:(id)arg2;	// IMP=0x00000001000698c4
- (void)diffableDataSourceContentProvider:(id)arg1 contentDidChangeWithAnimateChanges:(_Bool)arg2 itemIdentifiersOfAmendedItems:(id)arg3;	// IMP=0x00000001000698b0
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x0000000100069854
@property(readonly, nonatomic) __weak UITableView *tableView;
- (id)initWithTableView:(id)arg1 contentProvider:(id)arg2 cellReuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurator:(CDUnknownBlockType)arg4;	// IMP=0x0000000100069508
- (id)init;	// IMP=0x0000000100069480

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

