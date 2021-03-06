//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFQueueDelegate-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "SRTranscriptItemGroupDelegate-Protocol.h"

@class AFQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol SRTranscriptDataSource, SRTranscriptDelegate;

@interface SRTranscript : NSObject <AFQueueDelegate, SRTranscriptItemGroupDelegate, NSFastEnumeration>
{
    id <SRTranscriptDataSource> _dataSource;	// 8 = 0x8
    id <SRTranscriptDelegate> _delegate;	// 16 = 0x10
    NSMutableArray *_allTranscriptItems;	// 24 = 0x18
    NSMutableArray *_exposedTranscriptItems;	// 32 = 0x20
    NSMutableArray *_waitingTranscriptItems;	// 40 = 0x28
    NSMutableDictionary *_exposedIdToWaitingIdMap;	// 48 = 0x30
    NSMutableDictionary *_waitingIdToExposedIdMap;	// 56 = 0x38
    AFQueue *_loadingTranscriptItemGroupQueue;	// 64 = 0x40
    long long _discardedItemCount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100021bbc
@property(readonly, nonatomic) long long discardedItemCount; // @synthesize discardedItemCount=_discardedItemCount;
@property(readonly, nonatomic, getter=_loadingTranscriptItemGroupQueue) AFQueue *loadingTranscriptItemGroupQueue; // @synthesize loadingTranscriptItemGroupQueue=_loadingTranscriptItemGroupQueue;
@property(retain, nonatomic) NSMutableDictionary *waitingIdToExposedIdMap; // @synthesize waitingIdToExposedIdMap=_waitingIdToExposedIdMap;
@property(retain, nonatomic) NSMutableDictionary *exposedIdToWaitingIdMap; // @synthesize exposedIdToWaitingIdMap=_exposedIdToWaitingIdMap;
@property(retain, nonatomic) NSMutableArray *waitingTranscriptItems; // @synthesize waitingTranscriptItems=_waitingTranscriptItems;
@property(readonly, nonatomic, getter=_exposedTranscriptItems) NSMutableArray *exposedTranscriptItems; // @synthesize exposedTranscriptItems=_exposedTranscriptItems;
@property(readonly, nonatomic, getter=_allTranscriptItems) NSMutableArray *allTranscriptItems; // @synthesize allTranscriptItems=_allTranscriptItems;
@property(nonatomic) __weak id <SRTranscriptDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRTranscriptDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_transcriptHasProvisionalItems;	// IMP=0x00000001000219c4
- (id)_aceObjectForItemAtIndex:(long long)arg1;	// IMP=0x0000000100021958
- (id)_transcriptItemsForDataSourceItemsAtIndexes:(id)arg1;	// IMP=0x00000001000218d8
- (id)_transcriptItemForDataSourceItemAtIndex:(long long)arg1;	// IMP=0x00000001000217e8
- (long long)conversationIndexForTranscriptLevelModelItemAtIndex:(long long)arg1;	// IMP=0x0000000100021718
- (unsigned long long)_waitingIndexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x0000000100021560
- (unsigned long long)_conversationIndexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x0000000100021380
- (unsigned long long)_conversationIndexForTranscriptItem:(id)arg1;	// IMP=0x0000000100021308
- (id)conversationIndexesForTranscriptLevelModelItemsAtIndexes:(id)arg1;	// IMP=0x0000000100021114
- (long long)_conversationIndexForWaitingTranscriptItem:(id)arg1;	// IMP=0x0000000100021048
- (void)_clearViewControllerDelegateForTranscriptItem:(id)arg1;	// IMP=0x0000000100020fc4
- (void)_notifyThatViewControllerWillBeRemoved:(id)arg1;	// IMP=0x0000000100020f38
- (void)clearTranscriptItemViewControllerDelegates;	// IMP=0x0000000100020e0c
- (id)transcriptItemForViewController:(id)arg1;	// IMP=0x0000000100020c80
- (id)_createTranscriptItemForAceObject:(id)arg1 itemIndex:(long long)arg2;	// IMP=0x0000000100020abc
- (id)_createErrorSnippetViewControllerWithAceObject:(id)arg1 itemIndex:(long long)arg2;	// IMP=0x00000001000209f0
- (void)_configureViewController:(id)arg1 withAceObject:(id)arg2 itemIndex:(long long)arg3;	// IMP=0x0000000100020798
- (void)enumerateTranscriptItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020784
- (void)enumerateTranscriptItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020710
- (unsigned long long)_indexOfTranscriptItemWithAceObjectAceId:(id)arg1;	// IMP=0x0000000100020530
- (unsigned long long)indexOfTranscriptItem:(id)arg1;	// IMP=0x00000001000204b8
- (id)lastItem;	// IMP=0x0000000100020464
- (id)transcriptItemForConversationItemWithIdentifier:(id)arg1;	// IMP=0x00000001000202a0
- (id)transcriptItemsAtIndexes:(id)arg1;	// IMP=0x0000000100020220
- (id)transcriptItemAtIndex:(long long)arg1;	// IMP=0x0000000100020160
@property(readonly, nonatomic) long long transcriptItemCount;
- (id)conversationItemIdentifierForViewController:(id)arg1;	// IMP=0x000000010001ff48
- (void)transcriptItemDidBecomeReadyToAppear:(id)arg1;	// IMP=0x000000010001ff3c
- (void)_processLoadingTranscriptItemGroupQueue;	// IMP=0x000000010001ea3c
- (void)setErrorViewControllerForTranscriptItem:(id)arg1;	// IMP=0x000000010001e990
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;	// IMP=0x000000010001e7e0
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000010001e060
- (void)reloadItemsAtIndexes:(id)arg1;	// IMP=0x000000010001d6b8
- (void)reloadViewControllerAtIndex:(long long)arg1;	// IMP=0x000000010001d4c4
- (void)unloadViewControllerAtIndex:(long long)arg1;	// IMP=0x000000010001d454
- (void)insertItemsAtIndexes:(id)arg1;	// IMP=0x000000010001cadc
- (void)reloadData;	// IMP=0x000000010001c480
- (void)transcriptItemGroupPresentationEligibilityDidChange:(id)arg1;	// IMP=0x000000010001c440
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x000000010001c434
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010001c3c8
- (void)dealloc;	// IMP=0x000000010001c2f8
- (id)init;	// IMP=0x000000010001c1a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

