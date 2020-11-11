//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HBSiriRemoteAnalyticsEventLogger : NSObject
{
    long long _trackingTouchesCount;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100025bc4
- (void).cxx_destruct;	// IMP=0x00000001000265a8
@property(readonly, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) long long trackingTouchesCount; // @synthesize trackingTouchesCount=_trackingTouchesCount;
- (void)_logSelectEventWithVendorInfo:(CDStruct_912cb5d2)arg1;	// IMP=0x000000010002612c
- (void)_logEvent:(CDStruct_7f320dbc)arg1;	// IMP=0x0000000100025ff8
- (void)_focusDidUpdate;	// IMP=0x0000000100025f38
- (void)receiveEvent:(id)arg1;	// IMP=0x0000000100025c3c
- (id)_init;	// IMP=0x0000000100025b2c

@end

