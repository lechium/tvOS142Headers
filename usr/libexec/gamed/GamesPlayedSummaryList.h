//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSOrderedSet, NSString;

@interface GamesPlayedSummaryList : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00000001001ddfd0

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;
@property(copy, nonatomic) NSNumber *withinSecs; // @dynamic withinSecs;

@end

