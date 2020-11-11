//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDataTransport, NSString;

@interface GKDelayedRequestsNetworkWriter : NSObject <GKDataWriter>
{
    NSString *_bagKey;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
}

+ (id)writerWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x00000001001274e0
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001275f0
- (void)dealloc;	// IMP=0x00000001001275a0
- (id)initWithTransport:(id)arg1 forBagKey:(id)arg2;	// IMP=0x0000000100127520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

