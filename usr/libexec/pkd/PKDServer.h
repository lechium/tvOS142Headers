//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PKDatabase.h"

#import "PKDatabaseDelegate-Protocol.h"

@class NSMutableArray, NSObject, PKDUserPrefs;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PKDServer : PKDatabase <PKDatabaseDelegate>
{
    unsigned int _verbose;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_mainQueue;	// 24 = 0x18
    NSObject<OS_xpc_object> *_service;	// 32 = 0x20
    PKDUserPrefs *_userPrefs;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigSource;	// 48 = 0x30
    NSMutableArray *_holds;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_syncQueue;	// 64 = 0x40
}

+ (id)server;	// IMP=0x0000000100003fe0
- (void).cxx_destruct;	// IMP=0x0000000100005598
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain) NSMutableArray *holds; // @synthesize holds=_holds;
@property(retain) NSObject<OS_dispatch_source> *sigSource; // @synthesize sigSource=_sigSource;
@property(retain) PKDUserPrefs *userPrefs; // @synthesize userPrefs=_userPrefs;
@property(retain) NSObject<OS_xpc_object> *service; // @synthesize service=_service;
@property(retain) NSObject<OS_dispatch_queue> *mainQueue; // @synthesize mainQueue=_mainQueue;
@property(retain) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property unsigned int verbose; // @synthesize verbose=_verbose;
- (void)stop;	// IMP=0x0000000100005204
- (void)unholdClient:(id)arg1;	// IMP=0x0000000100004e9c
- (void)unholdToken:(id)arg1 silent:(_Bool)arg2;	// IMP=0x0000000100004b94
- (void)addHold:(id)arg1 silent:(_Bool)arg2;	// IMP=0x0000000100004a84
- (id)holdOnPlugIn:(id)arg1;	// IMP=0x0000000100004754
- (void)terminatePlugIns:(id)arg1 synchronously:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000412c
- (void)removedPlugIns:(id)arg1;	// IMP=0x000000010000403c
- (void)run;	// IMP=0x0000000100003fec
- (id)initForService:(const char *)arg1 database:(const char *)arg2;	// IMP=0x0000000100003b1c

@end

