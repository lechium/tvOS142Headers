//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol TVDAMeasurement;

@protocol TVDAMeasurable <NSObject, NSCopying>
@property(readonly, nonatomic) id <TVDAMeasurement> measurement;
- (id)copy;
@end

