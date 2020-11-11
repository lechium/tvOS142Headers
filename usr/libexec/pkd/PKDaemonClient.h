//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface PKDaemonClient : NSObject
{
    NSObject<OS_xpc_object> *_pkd;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    long long _protocolVersion;	// 24 = 0x18
}

+ (id)convertToXPC:(id)arg1 version:(unsigned long long)arg2;	// IMP=0x000000010001b04c
- (void).cxx_destruct;	// IMP=0x000000010001b10c
@property long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) NSObject<OS_xpc_object> *pkd; // @synthesize pkd=_pkd;
- (id)convertFromXPC:(id)arg1;	// IMP=0x000000010001b074
- (void)set:(id)arg1 uuids:(id)arg2;	// IMP=0x000000010001aec8
- (void)set:(id)arg1 plugins:(id)arg2;	// IMP=0x000000010001abec
- (void)sendSynchronously:(_Bool)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001aa48
- (void)send:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a9f4
- (id)request:(const char *)arg1 paths:(id)arg2;	// IMP=0x000000010001a968
- (id)request:(const char *)arg1;	// IMP=0x000000010001a8f4
- (void)copyReceipt:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a878
- (void)releaseHold:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a73c
- (void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a680
- (void)bulkSetPluginAnnotations:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a5bc
- (void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a4c8
- (void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010001a36c
- (void)findPlugInByPathURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a280
- (void)findPlugInByUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a18c
- (void)accessPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010001a0bc
- (void)readyPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 environment:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100019fa0
- (void)bulkPlugins:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019f10
- (void)removePlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019e78
- (void)addPlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019de0
- (id)errorInReply:(id)arg1;	// IMP=0x0000000100019c74
- (id)initWithServiceName:(const char *)arg1 user:(unsigned int)arg2;	// IMP=0x0000000100019ab0
- (id)initWithServiceName:(const char *)arg1;	// IMP=0x0000000100019aa0

@end
