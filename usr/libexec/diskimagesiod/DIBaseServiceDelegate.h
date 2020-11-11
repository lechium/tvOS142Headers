//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface DIBaseServiceDelegate : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000238d0
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)enterSandboxWithError:(id *)arg1;	// IMP=0x00000001000238ac
- (void)startXPClistener;	// IMP=0x000000010002381c
- (void)createListener;	// IMP=0x00000001000237c8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000235f8
- (id)sandboxProfile;	// IMP=0x00000001000235ec
- (id)serviceName;	// IMP=0x00000001000235e4
- (void)validateConnection;	// IMP=0x00000001000235e0
- (_Bool)setupNewConnection:(id)arg1;	// IMP=0x00000001000235d8
- (id)init;	// IMP=0x000000010002347c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
