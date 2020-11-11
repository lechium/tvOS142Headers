//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RateLimiter.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PeerRateLimiter : RateLimiter
{
    NSString *peerID;	// 8 = 0x8
    NSMutableDictionary *_accessGroupRateLimitState;	// 16 = 0x10
    NSMutableDictionary *_accessGroupToTimer;	// 24 = 0x18
    NSMutableDictionary *_accessGroupToNextMessageToSend;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001dafa4
@property(retain) NSMutableDictionary *accessGroupToNextMessageToSend; // @synthesize accessGroupToNextMessageToSend=_accessGroupToNextMessageToSend;
@property(retain) NSMutableDictionary *accessGroupToTimer; // @synthesize accessGroupToTimer=_accessGroupToTimer;
@property(retain) NSMutableDictionary *accessGroupRateLimitState; // @synthesize accessGroupRateLimitState=_accessGroupRateLimitState;
@property(retain) NSString *peerID; // @synthesize peerID;
- (int)stateForAccessGroup:(id)arg1;	// IMP=0x00000001001dae28
- (id)initWithPeer:(struct __OpaqueSOSPeer *)arg1;	// IMP=0x00000001001dad1c
- (id)setUpConfigForPeer;	// IMP=0x00000001001dac98

@end

