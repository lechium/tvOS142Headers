//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRecommendationEntryCacheObject.h"

@class NSNumber, NSString;

@interface GKFriendRecommendationListEntryCacheObject : GKRecommendationEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x00000001000574bc
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00000001000574c8
- (id)internalRepresentation;	// IMP=0x0000000100057294

// Remaining properties
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *reason2; // @dynamic reason2;
@property(retain, nonatomic) NSString *reasonID; // @dynamic reasonID;
@property(retain, nonatomic) NSNumber *rid; // @dynamic rid;
@property(retain, nonatomic) NSNumber *source; // @dynamic source;

@end
