//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeCacheObject.h"

@class NSDate, NSNumber, NSString;

@interface GKScoreChallengeCacheObject : GKChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100060d78
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100061124
- (id)internalRepresentation;	// IMP=0x0000000100060dec
- (Class)classForInternalRepresentation;	// IMP=0x0000000100060de0
- (_Bool)hasDetails;	// IMP=0x0000000100060d84

// Remaining properties
@property(retain, nonatomic) NSNumber *context; // @dynamic context;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(nonatomic) int rank; // @dynamic rank;
@property(retain, nonatomic) NSNumber *value; // @dynamic value;

@end

