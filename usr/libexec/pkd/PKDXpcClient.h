//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKBundle, PKDServer;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PKDXpcClient : NSObject
{
    _Bool _acceptWork;	// 8 = 0x8
    _Bool _sandboxed;	// 9 = 0x9
    unsigned int _requestCount;	// 12 = 0xc
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    PKDServer *_server;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_clientid;	// 40 = 0x28
    PKBundle *_bundle;	// 48 = 0x30
    struct __SecTask *__task;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    CDStruct_4c969caf _auditToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100020ae8
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount=_requestCount;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property struct __SecTask *_task; // @synthesize _task=__task;
@property(readonly, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property _Bool acceptWork; // @synthesize acceptWork=_acceptWork;
@property(retain) PKBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly) NSString *clientid; // @synthesize clientid=_clientid;
@property(retain) NSString *path; // @synthesize path=_path;
@property(readonly) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(retain) PKDServer *server; // @synthesize server=_server;
@property __weak NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x00000001000208fc
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000100020898
- (id)entitlementValueForKey:(id)arg1;	// IMP=0x00000001000207e4
@property(readonly) int pid;
- (void)dead;	// IMP=0x0000000100020704
- (void)dying;	// IMP=0x00000001000206b0
- (void)dealloc;	// IMP=0x0000000100020664
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x000000010001fe44

@end

