//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateDisposing : NESMVPNSessionState
{
    int _pendingDisposeCount;	// 40 = 0x28
}

@property int pendingDisposeCount; // @synthesize pendingDisposeCount=_pendingDisposeCount;
- (void)handleEstablishIPC;	// IMP=0x000000010006be5c
- (void)handleTimeout;	// IMP=0x000000010006bd6c
- (void)handlePluginDisposeComplete:(id)arg1;	// IMP=0x000000010006bae8
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010006b7c4
- (id)init;	// IMP=0x000000010006b788

@end

