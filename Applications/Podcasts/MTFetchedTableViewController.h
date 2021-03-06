//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSPredicate, NSString, UIBarButtonItem;

@interface MTFetchedTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
    long long _userDrivenCounter;	// 8 = 0x8
    UIBarButtonItem *_editButtonItem_localIvar;	// 16 = 0x10
    _Bool _inSwipeToDeleteMode;	// 24 = 0x18
    NSString *_fetchEntityName;	// 32 = 0x20
    NSPredicate *_fetchPredicate;	// 40 = 0x28
    NSArray *_sortDescriptors;	// 48 = 0x30
    NSString *_sectionName;	// 56 = 0x38
    long long _rowAnimation;	// 64 = 0x40
    NSFetchedResultsController *_frc;	// 72 = 0x48
    NSString *_sectionNameKeyPath;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100012fc4
@property(retain, nonatomic) NSString *sectionNameKeyPath; // @synthesize sectionNameKeyPath=_sectionNameKeyPath;
@property(nonatomic) _Bool inSwipeToDeleteMode; // @synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode;
@property(retain, nonatomic) NSFetchedResultsController *frc; // @synthesize frc=_frc;
@property(nonatomic) long long rowAnimation; // @synthesize rowAnimation=_rowAnimation;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *fetchPredicate; // @synthesize fetchPredicate=_fetchPredicate;
@property(retain, nonatomic) NSString *fetchEntityName; // @synthesize fetchEntityName=_fetchEntityName;
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100012e6c
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100012e38
- (void)reloadVisibleCellsWithAnimation:(long long)arg1;	// IMP=0x0000000100012d98
- (void)_updateTableAnimated:(_Bool)arg1;	// IMP=0x0000000100012564
- (_Bool)hasSectionNameKeyPathChanged;	// IMP=0x0000000100012480
- (id)fetchRequestInManagedObjectContext:(id)arg1;	// IMP=0x00000001000122e4
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;	// IMP=0x0000000100012204
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100012014
- (void)setRefreshControl:(id)arg1;	// IMP=0x0000000100011f1c
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x0000000100011eb8
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x0000000100011e54
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x0000000100011dfc
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100011df8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100011cc4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100011c24
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100011bb0
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100011b74
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100011b50
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100011a78
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x0000000100011a64
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010001193c
- (void)refetchWithPredicate:(id)arg1;	// IMP=0x0000000100011888
- (void)refetchWithSortDescriptors:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000117c8
- (void)viewDidLoad;	// IMP=0x0000000100011724
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000116f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001169c
@property(nonatomic) _Bool changeIsUserDriven; // @dynamic changeIsUserDriven;
- (void)initializeFrc;	// IMP=0x00000001000114f0
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000114bc
- (void)dealloc;	// IMP=0x0000000100011460
- (id)initWithEntityName:(id)arg1;	// IMP=0x000000010001144c
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x0000000100011328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

