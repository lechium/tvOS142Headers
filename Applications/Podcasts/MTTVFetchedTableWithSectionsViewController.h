//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "MTResultsControllerDelegate-Protocol.h"

@class MTCompositeResultsController, MTCoreDataResultsController, NSString;

@interface MTTVFetchedTableWithSectionsViewController : UITableViewController <MTResultsControllerDelegate>
{
    long long _userDrivenCounter;	// 8 = 0x8
    _Bool _inSwipeToDeleteMode;	// 16 = 0x10
    MTCompositeResultsController *_compositeResultsController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010006cc3c
@property(retain, nonatomic) MTCompositeResultsController *compositeResultsController; // @synthesize compositeResultsController=_compositeResultsController;
@property(nonatomic) _Bool inSwipeToDeleteMode; // @synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode;
- (void)_updateTableAnimated:(_Bool)arg1;	// IMP=0x000000010006c618
- (void)refetchWithPredicate:(id)arg1;	// IMP=0x000000010006c598
- (void)refetchWithSortDescriptors:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010006c500
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010006c418
@property(readonly, nonatomic) MTCoreDataResultsController *frc;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010006c0d8
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010006be10
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000010006bdac
- (_Bool)hideHeaderForEmptySection:(long long)arg1;	// IMP=0x000000010006bda4
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010006bd64
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010006bd60
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x000000010006bd08
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x000000010006bcf4
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010006bc80
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010006bba8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010006ba94
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010006b9f4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010006b9a0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010006b92c
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000010006b8f0
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000010006b8cc
- (unsigned long long)_sectionForController:(id)arg1;	// IMP=0x000000010006b854
- (id)_controllerForSection:(unsigned long long)arg1;	// IMP=0x000000010006b7f8
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010006b6e4
- (id)indexPathsForObject:(id)arg1;	// IMP=0x000000010006b664
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010006b5e4
@property(nonatomic) _Bool changeIsUserDriven;
- (void)viewDidLoad;	// IMP=0x000000010006b4cc
- (void)dealloc;	// IMP=0x000000010006b454
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010006b444
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010006b434
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010006b424
- (id)initWithCompositeFetchedResultsController:(id)arg1;	// IMP=0x000000010006b388
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertyKeys:(id)arg4;	// IMP=0x000000010006b20c
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x000000010006b190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

