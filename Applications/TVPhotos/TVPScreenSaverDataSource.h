//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, PHAssetCollection;

@interface TVPScreenSaverDataSource : NSObject <UITableViewDataSource>
{
    NSMutableDictionary *_fetchResults;	// 8 = 0x8
    NSArray *_allowedSubtypes;	// 16 = 0x10
    NSArray *_filteredTypeArray;	// 24 = 0x18
    NSIndexPath *_selectedIndexPath;	// 32 = 0x20
    PHAssetCollection *_activityFeedAssetCollection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100061f28
@property(retain, nonatomic) PHAssetCollection *activityFeedAssetCollection; // @synthesize activityFeedAssetCollection=_activityFeedAssetCollection;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100061ef0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100061c64
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100061b28
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100061a58
- (void)_loadExistingSelection;	// IMP=0x00000001000615d0
- (void)_fetchPhotoCollections;	// IMP=0x00000001000610b8
- (id)albumForIndexPath:(id)arg1;	// IMP=0x0000000100060f1c
- (id)initWithAllowedCollectionSubtypes:(id)arg1;	// IMP=0x0000000100060e54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

