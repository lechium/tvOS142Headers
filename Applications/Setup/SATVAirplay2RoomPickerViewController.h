//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVTableViewController.h"

#import "SATVAirplay2DataSourceObserver-Protocol.h"
#import "TVCSTableViewDiffableDataSourceProxy-Protocol.h"

@class NSArray, NSString, TVCSTableViewDiffableDataSource;
@protocol SATVAirplay2DataSource, SATVAirplay2DataSourceObject, SATVAirplay2RoomPickerViewControllerDelegate;

@interface SATVAirplay2RoomPickerViewController : SATVTableViewController <SATVAirplay2DataSourceObserver, TVCSTableViewDiffableDataSourceProxy>
{
    id <SATVAirplay2DataSource> _dataSource;	// 8 = 0x8
    id <SATVAirplay2DataSourceObject> _home;	// 16 = 0x10
    id <SATVAirplay2RoomPickerViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_suggestedRooms;	// 32 = 0x20
    TVCSTableViewDiffableDataSource *_diffableDataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100032e44
@property(retain, nonatomic) TVCSTableViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) NSArray *suggestedRooms; // @synthesize suggestedRooms=_suggestedRooms;
@property(nonatomic) __weak id <SATVAirplay2RoomPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SATVAirplay2DataSourceObject> home; // @synthesize home=_home;
@property(readonly, nonatomic) id <SATVAirplay2DataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateTableViewAndAnimateChanges:(_Bool)arg1;	// IMP=0x000000010003291c
- (id)_cellForRowAtIndexPath:(id)arg1 itemIdentifier:(id)arg2;	// IMP=0x0000000100032684
- (id)_suggestedRoomAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100032608
- (id)_existingRoomAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100032530
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100032340
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000320d8
- (void)airplay2DataSourceDidUpdate:(id)arg1;	// IMP=0x0000000100031f08
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100031e94
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100031e20
- (void)viewDidLoad;	// IMP=0x0000000100031bf0
- (id)initWithDataSource:(id)arg1 home:(id)arg2;	// IMP=0x0000000100031b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

