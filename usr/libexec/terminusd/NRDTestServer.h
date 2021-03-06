//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_service_connector;

@interface NRDTestServer : NSObject
{
    _Bool _started;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_nw_service_connector> *_serviceConnector;	// 24 = 0x18
    NSObject<OS_nw_service_connector> *_cloudServiceConnector;	// 32 = 0x20
    NSMutableDictionary *_allConnections;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_udpInputSource;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_udpInputSourceCloud;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002e9fc
@property(retain, nonatomic) NSObject<OS_dispatch_source> *udpInputSourceCloud; // @synthesize udpInputSourceCloud=_udpInputSourceCloud;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *udpInputSource; // @synthesize udpInputSource=_udpInputSource;
@property(retain, nonatomic) NSMutableDictionary *allConnections; // @synthesize allConnections=_allConnections;
@property(retain, nonatomic) NSObject<OS_nw_service_connector> *cloudServiceConnector; // @synthesize cloudServiceConnector=_cloudServiceConnector;
@property(retain, nonatomic) NSObject<OS_nw_service_connector> *serviceConnector; // @synthesize serviceConnector=_serviceConnector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool started; // @synthesize started=_started;
- (void)sendTokenOnConnection:(id)arg1 connection:(id)arg2;	// IMP=0x000000010002e718
- (void)pushDownloadOnConnection:(id)arg1;	// IMP=0x000000010002e704
- (void)setReadHandlerOnConnection:(id)arg1 forService:(id)arg2;	// IMP=0x000000010002e63c
- (void)handleNewConnection:(id)arg1 forPeerEndpoint:(id)arg2 forService:(id)arg3 forServiceConnector:(id)arg4;	// IMP=0x000000010002e3ec
- (void)setupTestServer;	// IMP=0x000000010002e308
- (id)createServiceConnector:(_Bool)arg1;	// IMP=0x000000010002e208
- (void)cancel;	// IMP=0x000000010002e1b4
- (id)copyStatusString;	// IMP=0x000000010002e090
- (void)start;	// IMP=0x000000010002e000
- (void)dealloc;	// IMP=0x000000010002dec8
- (id)initTestServerWithQueue:(id)arg1;	// IMP=0x000000010002dcb0

@end

