//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class NSOrderedSet, NSString;

@interface GKListCacheObject : GKExpiringCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0000000100053280
+ (Class)entryClass;	// IMP=0x0000000100053274
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000100054134
- (id)entryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053fa8
- (id)findEntry:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053db8
- (void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(CDUnknownBlockType)arg2 reuseEntriesByIndex:(_Bool)arg3;	// IMP=0x0000000100053894
- (void)removeEntriesMatchingPredicate:(id)arg1;	// IMP=0x00000001000536ec
- (void)reorderEntry:(id)arg1 toIndex:(long long)arg2;	// IMP=0x000000010005355c
- (id)internalRepresentation;	// IMP=0x0000000100053304
- (void)updateSeed;	// IMP=0x00000001000532b8

// Remaining properties
@property(nonatomic) _Bool detailsLoaded; // @dynamic detailsLoaded;
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *seed; // @dynamic seed;

@end

