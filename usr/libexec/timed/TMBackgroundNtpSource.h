//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TMDaemonCore, TMPreferences;
@protocol OS_dispatch_queue, OS_os_transaction, TMMonotonicClock;

@interface TMBackgroundNtpSource : NSObject
{
    struct __SCNetworkReachability *_reachabilityTarget;	// 8 = 0x8
    NSObject<OS_os_transaction> *_reachabilityTransaction;	// 16 = 0x10
    NSObject<OS_os_transaction> *_fetchingTransaction;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_ntpQueue;	// 32 = 0x20
    _Bool _fetchingTime;	// 40 = 0x28
    double lastFetchAttempt;	// 48 = 0x30
    double schedulingInterval;	// 56 = 0x38
    long long burstRetryCount;	// 64 = 0x40
    TMPreferences *_preferences;	// 72 = 0x48
    TMDaemonCore *_daemonCore;	// 80 = 0x50
    id <TMMonotonicClock> _clock;	// 88 = 0x58
    long long _servicePortRetryCount;	// 96 = 0x60
    NSString *_address;	// 104 = 0x68
}

@property(copy) NSString *address; // @synthesize address=_address;
@property(nonatomic, getter=isFetchingTime) _Bool fetchingTime; // @synthesize fetchingTime=_fetchingTime;
@property long long servicePortRetryCount; // @synthesize servicePortRetryCount=_servicePortRetryCount;
@property(retain, nonatomic) id <TMMonotonicClock> clock; // @synthesize clock=_clock;
@property(nonatomic) TMDaemonCore *daemonCore; // @synthesize daemonCore=_daemonCore;
@property(retain, nonatomic) TMPreferences *preferences; // @synthesize preferences=_preferences;
@property long long burstRetryCount; // @synthesize burstRetryCount;
@property double schedulingInterval; // @synthesize schedulingInterval;
@property double lastFetchAttempt; // @synthesize lastFetchAttempt;
- (void)setWantedTime:(double)arg1;	// IMP=0x0000000100014ba8
- (void)dealloc;	// IMP=0x0000000100014b18
- (id)init;	// IMP=0x0000000100014abc
- (void)fetchTime;	// IMP=0x0000000100014a58

@end
