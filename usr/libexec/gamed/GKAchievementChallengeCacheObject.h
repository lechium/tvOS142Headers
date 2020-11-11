//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeCacheObject.h"

@class NSDate, NSNumber, NSString;

@interface GKAchievementChallengeCacheObject : GKChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100061480
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00000001000618f4
- (id)internalRepresentation;	// IMP=0x0000000100061600
- (Class)classForInternalRepresentation;	// IMP=0x00000001000615f4
- (_Bool)hasDetails;	// IMP=0x000000010006148c

// Remaining properties
@property(retain, nonatomic) NSString *achievedDescription; // @dynamic achievedDescription;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(retain, nonatomic) NSNumber *maximumPoints; // @dynamic maximumPoints;
@property(nonatomic) float percentComplete; // @dynamic percentComplete;
@property(nonatomic) _Bool replayable; // @dynamic replayable;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *unachievedDescription; // @dynamic unachievedDescription;

@end

