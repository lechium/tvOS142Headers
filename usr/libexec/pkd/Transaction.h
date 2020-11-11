//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKDServer, PKDXpcClient;
@protocol OS_xpc_object;

@interface Transaction : NSObject
{
    const char *_type;	// 8 = 0x8
    unsigned long long _interval;	// 16 = 0x10
    PKDXpcClient *_client;	// 24 = 0x18
    NSObject<OS_xpc_object> *_request;	// 32 = 0x20
    NSObject<OS_xpc_object> *_reply;	// 40 = 0x28
    unsigned long long _version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100012a64
@property unsigned long long version; // @synthesize version=_version;
@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) PKDXpcClient *client; // @synthesize client=_client;
- (void)fail:(long long)arg1 error:(id)arg2;	// IMP=0x00000001000128f4
- (void)fail:(long long)arg1 message:(id)arg2;	// IMP=0x000000010001281c
- (void)done;	// IMP=0x00000001000126b0
- (void)addAnnotationForPlugIn:(id)arg1 in:(id)arg2;	// IMP=0x000000010001253c
- (_Bool)pluginShouldBeAutoEnabled:(id)arg1;	// IMP=0x0000000100012534
- (void)matchPlugIns;	// IMP=0x000000010000f164
- (void)findPlugIn;	// IMP=0x000000010000ed34
- (id)findPlugInByPathURL:(id)arg1;	// IMP=0x000000010000ec40
- (id)findPlugInByUUID:(id)arg1;	// IMP=0x000000010000eb64
- (void)fetchAppStoreReceipt;	// IMP=0x000000010000e8a0
- (void)lockDownPlugIns;	// IMP=0x000000010000de20
- (void)bulkAnnotatePlugIns;	// IMP=0x000000010000d880
- (void)annotatePlugIns;	// IMP=0x000000010000d32c
- (void)accessPlugIns;	// IMP=0x000000010000d0b0
- (void)readyPlugIns;	// IMP=0x000000010000c510
- (_Bool)processUuidList:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bd8c
- (void)bulkPlugIns;	// IMP=0x000000010000bcf0
- (void)removePlugIns;	// IMP=0x000000010000bac8
- (void)addPlugIns;	// IMP=0x000000010000b7fc
- (_Bool)processPaths:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b734
- (_Bool)marshalPaths:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b4a4
- (void)dispatch;	// IMP=0x000000010000b180
- (CDStruct_4c969caf)auditToken;	// IMP=0x000000010000b124
@property(readonly) NSObject<OS_xpc_object> *connection;
@property(readonly) PKDServer *server;
- (id)initWithRequest:(id)arg1 forClient:(id)arg2;	// IMP=0x000000010000ad7c

@end

