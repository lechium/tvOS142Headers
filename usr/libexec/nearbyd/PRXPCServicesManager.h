//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PRXPCServicesManager : NSObject <NSXPCListenerDelegate>
{
    NSMutableDictionary *_machServices;	// 8 = 0x8
    NSMutableArray *_listeners;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100029380
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100029214
- (void)startServices;	// IMP=0x000000010002906c
- (void)setupXPCListeners;	// IMP=0x0000000100028e6c
- (void)createServices;	// IMP=0x0000000100028c28
- (id)init;	// IMP=0x0000000100028ba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

