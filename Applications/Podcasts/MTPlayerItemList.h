//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMetricsDataSource-Protocol.h"

@class NSArray, NSString;

@interface MTPlayerItemList : NSObject <IMMetricsDataSource>
{
    NSArray *_playerItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010010a0d8
@property(retain, nonatomic) NSArray *playerItems; // @synthesize playerItems=_playerItems;
- (id)metricsContentIdentifier;	// IMP=0x0000000100109ef0
- (id)initWithPlayerItems:(id)arg1;	// IMP=0x0000000100109e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

