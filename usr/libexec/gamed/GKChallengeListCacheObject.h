//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKPlayerProfileCacheObject;

@interface GKChallengeListCacheObject : GKListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x000000010005f76c
+ (id)entityName;	// IMP=0x000000010005f760
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010005f778

// Remaining properties
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;

@end

