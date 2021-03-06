//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UVShellToAgentProtocol-Protocol.h"

@class BSServiceConnection, _AgentID;

@interface UVPreviewAgentProxy : NSObject <UVShellToAgentProtocol>
{
    BSServiceConnection *_connection;	// 8 = 0x8
    _AgentID *_agentID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100006100
- (id)_invalidConnectionError;	// IMP=0x00000001000060e4
- (oneway void)sendMessage:(id)arg1 fence:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005ff8
- (oneway void)sendMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005f30
- (void)connectionInvalidated;	// IMP=0x0000000100005f20
@property(readonly, nonatomic) int pid;
- (id)initWithConnection:(id)arg1 agentID:(id)arg2;	// IMP=0x0000000100005e6c

@end

