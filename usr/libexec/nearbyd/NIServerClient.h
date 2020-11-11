//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UWBSessionDelegateProxyProtocol-Protocol.h"

@class NSString, NSXPCConnection, PRNSXPCConnection;
@protocol UWBSessionDelegateProxyProtocol;

@interface NIServerClient : NSObject <UWBSessionDelegateProxyProtocol>
{
    PRNSXPCConnection<UWBSessionDelegateProxyProtocol> *_connWrapper;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (id)delegateProxyWithConnection:(id)arg1;	// IMP=0x000000010001bad8
- (void).cxx_destruct;	// IMP=0x000000010001c640
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)objectDidExit:(id)arg1 region:(id)arg2;	// IMP=0x000000010001c518
- (void)objectDidEnter:(id)arg1 region:(id)arg2;	// IMP=0x000000010001c3a8
- (void)didDiscoverNearbyObject:(id)arg1;	// IMP=0x000000010001c2c0
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;	// IMP=0x000000010001c20c
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;	// IMP=0x000000010001c158
- (void)uwbSystemDidChangeState:(unsigned long long)arg1;	// IMP=0x000000010001c0ac
- (void)didUpdateNearbyObjects:(id)arg1;	// IMP=0x000000010001bfc4
- (void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x000000010001bed8
- (void)uwbSessionDidInvalidateWithError:(id)arg1;	// IMP=0x000000010001bdf0
- (void)uwbSessionDidFailWithError:(id)arg1;	// IMP=0x000000010001bcf8
- (void)dealloc;	// IMP=0x000000010001bc40
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010001bb2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

