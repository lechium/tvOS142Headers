//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSServiceConnectionListenerDelegate-Protocol.h"
#import "UVXcodeToShellProtocol-Protocol.h"

@class MISSING_TYPE;

@interface _TtC14Xcode_Previews11XcodeServer : NSObject <BSServiceConnectionListenerDelegate, UVXcodeToShellProtocol>
{
    MISSING_TYPE *messageReceiver;	// 8 = 0x8
    MISSING_TYPE *listener;	// 16 = 0x10
    MISSING_TYPE *connections;	// 24 = 0x18
    MISSING_TYPE *connectHandlers;	// 32 = 0x20
    MISSING_TYPE *disconnectHandlers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000090cc
- (void)sendMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008fc4
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000100008b14
- (id)init;	// IMP=0x0000000100008708

@end
