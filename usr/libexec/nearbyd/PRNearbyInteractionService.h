//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRService-Protocol.h"

@class NIServerSessionManager, NSString;
@protocol OS_dispatch_queue;

@interface PRNearbyInteractionService : NSObject <PRService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NIServerSessionManager *_sessionManager;	// 16 = 0x10
    NSString *machServiceName;	// 24 = 0x18
}

+ (id)serviceWithQueue:(id)arg1;	// IMP=0x000000010001c838
- (void).cxx_destruct;	// IMP=0x000000010001c8cc
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x000000010001c8ac
@property(readonly) NSString *machServiceName; // @synthesize machServiceName;
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010001c6e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

