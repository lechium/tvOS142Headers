//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol OS_dispatch_queue;

@interface MIKeychainAccessGroupTracker : NSObject
{
    NSCountedSet *_refs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x0000000100016108
- (void).cxx_destruct;	// IMP=0x0000000100017fc8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSCountedSet *refs; // @synthesize refs=_refs;
- (id)_keychainAccessGroupsForApp:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100017a64
- (id)_keychainAccessGroupsForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001783c
- (_Bool)_removeGroupsWithError:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001772c
- (_Bool)removeReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100017724
- (_Bool)_onQueue_removeReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100017368
- (_Bool)updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100017360
- (_Bool)_onQueue_updateReferencesWithOldBundle:(id)arg1 newBundle:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100016d48
- (_Bool)addReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100016d40
- (_Bool)_onQueue_addReferencesForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100016ab4
- (void)invalidateCache;	// IMP=0x0000000100016ab0
- (void)reconcile;	// IMP=0x0000000100016aac
- (void)_onQueue_discoverReferences;	// IMP=0x0000000100016288
- (id)init;	// IMP=0x00000001000161a8

@end
