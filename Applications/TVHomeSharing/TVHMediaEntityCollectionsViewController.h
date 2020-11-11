//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHCollectionViewDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesListViewControllerDelegate-Protocol.h"

@class NSArray, NSString, TVHCollectionViewDiffableDataSource, TVHKMediaLibrary, TVHMediaEntitiesDataSource, TVHMediaEntitiesGridViewController, TVHMediaEntitiesListViewController, TVHSimpleHeaderView, TVHSortOption;
@protocol TVHMediaEntityCollectionsViewControllerDelegate;

@interface TVHMediaEntityCollectionsViewController : UIViewController <TVHCollectionViewDelegate, TVHMediaEntitiesListViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    CDStruct_78dcb04e _delegateFlags;	// 8 = 0x8
    id <TVHMediaEntityCollectionsViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_mediaEntitySortOptions;	// 24 = 0x18
    TVHMediaEntitiesListViewController *_listViewController;	// 32 = 0x20
    TVHSimpleHeaderView *_listHeaderView;	// 40 = 0x28
    TVHMediaEntitiesDataSource *_listDataSource;	// 48 = 0x30
    TVHMediaEntitiesGridViewController *_gridViewController;	// 56 = 0x38
    TVHCollectionViewDiffableDataSource *_listDiffableDataSource;	// 64 = 0x40
}

+ (id)new;	// IMP=0x0000000100051aac
- (void).cxx_destruct;	// IMP=0x0000000100053694
@property(retain, nonatomic) TVHCollectionViewDiffableDataSource *listDiffableDataSource; // @synthesize listDiffableDataSource=_listDiffableDataSource;
@property(readonly, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(readonly, nonatomic) TVHMediaEntitiesDataSource *listDataSource; // @synthesize listDataSource=_listDataSource;
@property(readonly, nonatomic) TVHSimpleHeaderView *listHeaderView; // @synthesize listHeaderView=_listHeaderView;
@property(readonly, nonatomic) TVHMediaEntitiesListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(readonly, copy, nonatomic) NSArray *mediaEntitySortOptions; // @synthesize mediaEntitySortOptions=_mediaEntitySortOptions;
@property(nonatomic) __weak id <TVHMediaEntityCollectionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sortButtonSelected;	// IMP=0x00000001000534d8
- (void)_configureListCell:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001000533e8
- (id)_mediaEntityCollectionForItemIdentifier:(id)arg1;	// IMP=0x0000000100053368
- (id)_mediaEntityCollectionAtIndexPath:(id)arg1;	// IMP=0x00000001000532e8
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x00000001000531b8
- (void)mediaEntitiesGridViewController:(id)arg1 didLongPressMediaEntity:(id)arg2;	// IMP=0x0000000100053088
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x0000000100052f58
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x0000000100052ecc
- (void)mediaEntitiesListViewController:(id)arg1 updatePreviewViewController:(id)arg2 latestMediaEntitiesFetchResult:(id)arg3 previousMediaEntitiesFetchResult:(id)arg4 changeSet:(id)arg5 context:(id)arg6;	// IMP=0x0000000100052cd8
- (id)mediaEntitiesListViewController:(id)arg1 previewViewControllerForIndexPath:(id)arg2;	// IMP=0x0000000100052ccc
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchDescriptorForIdentifier:(id)arg2;	// IMP=0x0000000100052ba8
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchIdentifierForIndexPath:(id)arg2;	// IMP=0x0000000100052b28
- (void)viewDidLoad;	// IMP=0x000000010005277c
- (void)loadView;	// IMP=0x00000001000526c8
- (id)mediaEntitiesFetchControllerIdentifierAtIndexPath:(id)arg1;	// IMP=0x0000000100052600
- (id)sortOptions;	// IMP=0x00000001000525ac
@property(readonly, copy, nonatomic) NSArray *headerControls;
- (void)setHeaderControls:(id)arg1 andMediaEntitySortOptions:(id)arg2;	// IMP=0x00000001000524cc
@property(copy, nonatomic) NSString *headerTitle;
@property(retain, nonatomic) TVHSortOption *currentMediaEntitySortOption;
@property(readonly, copy, nonatomic) NSArray *indexBarItems;
@property(readonly, copy, nonatomic) NSArray *gridMediaEntities;
@property(readonly, copy, nonatomic) NSArray *mediaEntityCollections;
- (void)setMediaEntityCollections:(id)arg1 andIndexBarItems:(id)arg2;	// IMP=0x0000000100052140
@property(retain, nonatomic) Class gridLockupClass;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary;
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000100051c80
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100051bf8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100051b70
- (id)init;	// IMP=0x0000000100051ae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

