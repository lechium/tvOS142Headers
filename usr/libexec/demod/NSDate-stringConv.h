//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (stringConv)
+ (id)dateFromString:(id)arg1;	// IMP=0x0000000100078e44
- (id)timeZoneFromISO8601DateString:(id)arg1;	// IMP=0x0000000100078fd8
- (id)toString;	// IMP=0x0000000100078eb4
- (_Bool)isEarlierDateThan:(id)arg1;	// IMP=0x000000010007a248
- (_Bool)isLaterDateThan:(id)arg1;	// IMP=0x000000010007a1f4
- (id)newDateByAddingOneDay;	// IMP=0x000000010007a184
- (id)newDateByAddingOneWeek;	// IMP=0x000000010007a114
- (id)endOfDay;	// IMP=0x000000010007a0a0
- (id)startOfDay;	// IMP=0x000000010007a03c
@end
