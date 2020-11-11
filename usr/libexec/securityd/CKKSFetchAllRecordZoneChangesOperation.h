//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

@class CKContainer, CKDatabaseOperation, CKKSResultOperation, CKOperationGroup, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;
@protocol CKKSFetchRecordZoneChangesOperation;

__attribute__((visibility("hidden")))
@interface CKKSFetchAllRecordZoneChangesOperation : CKKSGroupOperation
{
    _Bool _resync;	// 10 = 0xa
    _Bool _forceResync;	// 11 = 0xb
    _Bool _moreComing;	// 12 = 0xc
    Class _fetchRecordZoneChangesOperationClass;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    NSMutableArray *_fetchedZoneIDs;	// 32 = 0x20
    NSSet *_fetchReasons;	// 40 = 0x28
    NSSet *_apnsPushes;	// 48 = 0x30
    NSMutableDictionary *_modifications;	// 56 = 0x38
    NSMutableDictionary *_deletions;	// 64 = 0x40
    NSMutableDictionary *_changeTokens;	// 72 = 0x48
    CKDatabaseOperation<CKKSFetchRecordZoneChangesOperation> *_fetchRecordZoneChangesOperation;	// 80 = 0x50
    NSMutableDictionary *_allClientOptions;	// 88 = 0x58
    NSMutableDictionary *_clientMap;	// 96 = 0x60
    CKOperationGroup *_ckoperationGroup;	// 104 = 0x68
    unsigned long long _fetchedItems;	// 112 = 0x70
    unsigned long long _totalModifications;	// 120 = 0x78
    unsigned long long _totalDeletions;	// 128 = 0x80
    NSMutableSet *_resyncingZones;	// 136 = 0x88
    CKKSResultOperation *_fetchCompletedOperation;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000001000aa934
@property(retain) CKKSResultOperation *fetchCompletedOperation; // @synthesize fetchCompletedOperation=_fetchCompletedOperation;
@property(retain) NSMutableSet *resyncingZones; // @synthesize resyncingZones=_resyncingZones;
@property unsigned long long totalDeletions; // @synthesize totalDeletions=_totalDeletions;
@property unsigned long long totalModifications; // @synthesize totalModifications=_totalModifications;
@property _Bool moreComing; // @synthesize moreComing=_moreComing;
@property _Bool forceResync; // @synthesize forceResync=_forceResync;
@property unsigned long long fetchedItems; // @synthesize fetchedItems=_fetchedItems;
@property(retain) CKOperationGroup *ckoperationGroup; // @synthesize ckoperationGroup=_ckoperationGroup;
@property(retain) NSMutableDictionary *clientMap; // @synthesize clientMap=_clientMap;
@property(retain) NSMutableDictionary *allClientOptions; // @synthesize allClientOptions=_allClientOptions;
@property(retain) CKDatabaseOperation<CKKSFetchRecordZoneChangesOperation> *fetchRecordZoneChangesOperation; // @synthesize fetchRecordZoneChangesOperation=_fetchRecordZoneChangesOperation;
@property(retain) NSMutableDictionary *changeTokens; // @synthesize changeTokens=_changeTokens;
@property(retain) NSMutableDictionary *deletions; // @synthesize deletions=_deletions;
@property(retain) NSMutableDictionary *modifications; // @synthesize modifications=_modifications;
@property(retain) NSSet *apnsPushes; // @synthesize apnsPushes=_apnsPushes;
@property(retain) NSSet *fetchReasons; // @synthesize fetchReasons=_fetchReasons;
@property(retain) NSMutableArray *fetchedZoneIDs; // @synthesize fetchedZoneIDs=_fetchedZoneIDs;
@property _Bool resync; // @synthesize resync=_resync;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property(readonly) Class fetchRecordZoneChangesOperationClass; // @synthesize fetchRecordZoneChangesOperationClass=_fetchRecordZoneChangesOperationClass;
- (void)cancel;	// IMP=0x00000001000aa684
- (void)sendChangesToClient:(id)arg1 moreComing:(_Bool)arg2;	// IMP=0x00000001000aa11c
- (void)performFetch;	// IMP=0x00000001000a9a38
- (void)groupStart;	// IMP=0x00000001000a9810
- (void)queryClientsForChangeTokens;	// IMP=0x00000001000a9348
- (id)initWithContainer:(id)arg1 fetchClass:(Class)arg2 clients:(id)arg3 fetchReasons:(id)arg4 apnsPushes:(id)arg5 forceResync:(_Bool)arg6 ckoperationGroup:(id)arg7;	// IMP=0x00000001000a8f88
- (id)init;	// IMP=0x00000001000a8f70

@end

