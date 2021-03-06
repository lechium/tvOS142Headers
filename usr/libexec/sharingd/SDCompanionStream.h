//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSStreamDelegate-Protocol.h"
#import "SDStreamHandlerDelegate-Protocol.h"

@class NSData, NSFileHandle, NSInputStream, NSMutableData, NSNetServiceBrowser, NSOutputStream, NSString, SDStreamHandler;
@protocol OS_dispatch_queue, SDCompanionStreamDelegate;

__attribute__((visibility("hidden")))
@interface SDCompanionStream : NSObject <NSStreamDelegate, NSNetServiceBrowserDelegate, SDStreamHandlerDelegate>
{
    _Bool _initiator;	// 8 = 0x8
    _Bool _shouldStop;	// 9 = 0x9
    _Bool _clientSent;	// 10 = 0xa
    _Bool _clientReceived;	// 11 = 0xb
    _Bool _networkBufferSpaceAvailable;	// 12 = 0xc
    NSFileHandle *_fileHandle;	// 16 = 0x10
    id <SDCompanionStreamDelegate> _delegate;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    SDStreamHandler *_streamHandler;	// 40 = 0x28
    NSData *_authorData;	// 48 = 0x30
    NSNetServiceBrowser *_netServiceBrowser;	// 56 = 0x38
    NSInputStream *_clientInputStream;	// 64 = 0x40
    NSOutputStream *_clientOutputStream;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_writeQueue;	// 80 = 0x50
    NSMutableData *_networkStreamData;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_readQueue;	// 96 = 0x60
    NSMutableData *_clientStreamData;	// 104 = 0x68
    long long _readFromClient;	// 112 = 0x70
    long long _wroteToClient;	// 120 = 0x78
    CDUnknownBlockType _streamsRequestHandler;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000010017a828
@property(copy) CDUnknownBlockType streamsRequestHandler; // @synthesize streamsRequestHandler=_streamsRequestHandler;
@property long long wroteToClient; // @synthesize wroteToClient=_wroteToClient;
@property long long readFromClient; // @synthesize readFromClient=_readFromClient;
@property(retain) NSMutableData *clientStreamData; // @synthesize clientStreamData=_clientStreamData;
@property(retain) NSObject<OS_dispatch_queue> *readQueue; // @synthesize readQueue=_readQueue;
@property(retain) NSMutableData *networkStreamData; // @synthesize networkStreamData=_networkStreamData;
@property(retain) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain) NSOutputStream *clientOutputStream; // @synthesize clientOutputStream=_clientOutputStream;
@property(retain) NSInputStream *clientInputStream; // @synthesize clientInputStream=_clientInputStream;
@property(retain) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property _Bool networkBufferSpaceAvailable; // @synthesize networkBufferSpaceAvailable=_networkBufferSpaceAvailable;
@property _Bool clientReceived; // @synthesize clientReceived=_clientReceived;
@property _Bool clientSent; // @synthesize clientSent=_clientSent;
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property _Bool initiator; // @synthesize initiator=_initiator;
@property(retain) NSData *authorData; // @synthesize authorData=_authorData;
@property(retain) SDStreamHandler *streamHandler; // @synthesize streamHandler=_streamHandler;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property __weak id <SDCompanionStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logClientReceived;	// IMP=0x000000010017a630
- (void)logClientSent;	// IMP=0x000000010017a5bc
- (void)writeNetworkStream;	// IMP=0x000000010017a4b0
- (void)readClientStream;	// IMP=0x000000010017a288
- (void)writeClientStream;	// IMP=0x0000000100179f48
- (void)handleOpenedStream;	// IMP=0x0000000100179ea8
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000100179ce0
- (void)streamHandlerDidClose:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100179a64
- (void)streamHandler:(id)arg1 didReceiveStreamData:(id)arg2;	// IMP=0x00000001001799f0
- (void)streamHandler:(id)arg1 bufferSpaceChanged:(_Bool)arg2;	// IMP=0x000000010017996c
- (void)handleStreamResponse:(id)arg1;	// IMP=0x000000010017976c
- (void)handleStreamRequest:(id)arg1;	// IMP=0x00000001001794f4
- (void)streamHandler:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000100179350
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000100179298
- (int)setBufferSize:(int)arg1 socket:(int)arg2;	// IMP=0x0000000100179234
@property(readonly) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (void)notifyStreamRequestWithError:(id)arg1;	// IMP=0x0000000100178d00
- (void)switchToStreaming;	// IMP=0x0000000100178c6c
- (void)sendInitialResponse:(_Bool)arg1;	// IMP=0x0000000100178984
- (void)sendInitialRequest;	// IMP=0x0000000100178644
- (void)startBrowser;	// IMP=0x0000000100178568
- (void)getStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100178504
- (void)setBundleID:(id)arg1;	// IMP=0x0000000100178450
- (void)stopIfReady;	// IMP=0x0000000100178400
- (void)stop;	// IMP=0x000000010017823c
- (void)start;	// IMP=0x0000000100178200
- (void)dealloc;	// IMP=0x00000001001781b4
- (id)initWithAuthorData:(id)arg1 streamHandler:(id)arg2;	// IMP=0x000000010017808c
- (id)initWithStreamHandler:(id)arg1;	// IMP=0x0000000100178078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

