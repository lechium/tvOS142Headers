//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerOwnedListCacheObject.h"

@interface GKFriendListCacheObject : GKPlayerOwnedListCacheObject
{
}

+ (id)cacheFriendList:(id)arg1 withTimeToLive:(double)arg2 forProfile:(id)arg3 managedObjectContext:(id)arg4 commonFriends:(_Bool)arg5;	// IMP=0x000000010005440c
+ (id)entityName;	// IMP=0x00000001000542cc
+ (Class)entryClass;	// IMP=0x00000001000542c0
- (id)internalRepresentation;	// IMP=0x00000001000555c8
- (void)populateFriendNamesFromServerRepresentationDictionary:(id)arg1;	// IMP=0x0000000100054b78
- (id)playerIDs;	// IMP=0x00000001000542d8

// Remaining properties
@property(nonatomic) _Bool common; // @dynamic common;

@end
