//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

@class NSDate, NSString;

@interface GKPlayerEntryCacheObject : GKListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010005f754
- (id)internalRepresentation;	// IMP=0x000000010005f74c
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010005f598

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;

@end

