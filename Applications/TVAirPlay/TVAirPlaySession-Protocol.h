//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TVAirPlaySession <NSObject>
@property(readonly, nonatomic) long long sessionType;
- (void)userStop;

@optional
- (void)wasDeregistered;
- (void)wasRegistered;
@end
