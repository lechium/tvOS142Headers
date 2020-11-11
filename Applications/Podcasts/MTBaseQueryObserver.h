//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTQueryObserver-Protocol.h"
#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSMutableDictionary, NSString;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate, MTQueryObserver>
{
    NSFetchedResultsController *_frc;	// 8 = 0x8
    _Bool _isObserving;	// 16 = 0x10
    _Bool _stopCalled;	// 17 = 0x11
    NSString *_identifier;	// 24 = 0x18
    NSMutableDictionary *_handlers;	// 32 = 0x20
}

+ (Class)fetchedResultsControllerClass;	// IMP=0x000000010010ba24
- (void).cxx_destruct;	// IMP=0x000000010010c67c
@property(nonatomic) _Bool stopCalled; // @synthesize stopCalled=_stopCalled;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeAllResultsChangedHandlers;	// IMP=0x000000010010c5dc
- (void)stop;	// IMP=0x000000010010c494
- (void)removeResultsChangedHandler:(id)arg1;	// IMP=0x000000010010c414
- (id)addResultsChangedHandler:(id)arg1;	// IMP=0x000000010010c33c
- (id)uuids;	// IMP=0x000000010010c174
- (void)results:(CDUnknownBlockType)arg1;	// IMP=0x000000010010c030
- (void)refetch:(CDUnknownBlockType)arg1;	// IMP=0x000000010010be30
- (void)startObserving;	// IMP=0x000000010010bc40
- (id)sortDescriptors;	// IMP=0x000000010010bbe8
- (id)predicate;	// IMP=0x000000010010bb90
- (void)setPredicate:(id)arg1;	// IMP=0x000000010010ba48
- (id)managedObjectContext;	// IMP=0x000000010010ba38
- (id)_frc;	// IMP=0x000000010010ba30
- (void)dealloc;	// IMP=0x000000010010b92c
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x000000010010b834
- (id)initWithFetchRequest:(id)arg1;	// IMP=0x000000010010b78c
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 propertiesToFetch:(id)arg6 managedObjectContext:(id)arg7;	// IMP=0x000000010010b5dc
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 propertiesToFetch:(id)arg6;	// IMP=0x000000010010b4b0
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 returnObjectsAsFaults:(_Bool)arg5;	// IMP=0x000000010010b390
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4;	// IMP=0x000000010010b304
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x000000010010b288
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3;	// IMP=0x000000010010b198
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 background:(_Bool)arg3;	// IMP=0x000000010010b0b4
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010010b04c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

