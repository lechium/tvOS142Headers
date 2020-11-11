//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, SDStatusMonitor;
@protocol OS_dispatch_source, SDAirDropPublisherDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropPublisher : NSObject
{
    NSNumber *_port;	// 8 = 0x8
    long long _retryCount;	// 16 = 0x10
    struct __SecIdentity *_identity;	// 24 = 0x18
    struct __CFNetService *_service;	// 32 = 0x20
    SDStatusMonitor *_monitor;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_restartTimer;	// 48 = 0x30
    NSMutableDictionary *_txtRecord;	// 56 = 0x38
    NSMutableDictionary *_properties;	// 64 = 0x40
    _Bool _bonjourNameConflictDetected;	// 72 = 0x48
    id <SDAirDropPublisherDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010004c95c
@property __weak id <SDAirDropPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;	// IMP=0x000000010004c8f0
- (void)stop;	// IMP=0x000000010004c7b8
- (void)start;	// IMP=0x000000010004c750
- (void)publish;	// IMP=0x000000010004c4e0
- (void)removeObservers;	// IMP=0x000000010004c490
- (void)addObservers;	// IMP=0x000000010004c3ac
- (void)somethingChanged:(id)arg1;	// IMP=0x000000010004c3a0
- (void)updateTXTRecordAndNotify;	// IMP=0x000000010004c094
- (void)publishCallBack:(CDStruct_87dc826d *)arg1;	// IMP=0x000000010004be3c
- (void)dealloc;	// IMP=0x000000010004bde4
- (id)initWithPort:(id)arg1 identity:(struct __SecIdentity *)arg2;	// IMP=0x000000010004bc18

@end
