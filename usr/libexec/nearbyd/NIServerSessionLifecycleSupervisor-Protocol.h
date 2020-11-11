//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIDiscoveryToken, NSArray;

@protocol NIServerSessionLifecycleSupervisor <NSObject>
- (_Bool)isSessionInvalidated;
- (_Bool)isTrackingPeer:(NIDiscoveryToken *)arg1;
- (_Bool)isTracking;
- (_Bool)isPostioningSensorActive;
- (_Bool)doesClientWantSessionToRun;
- (_Bool)isDiscoveryActive;
- (void)peerHangupReceived:(NIDiscoveryToken *)arg1;
- (void)measurementReceivedForToken:(NIDiscoveryToken *)arg1 contTimestamp:(double)arg2;
- (void)positioningSensorSessionStopped;
- (void)positioningSensorSessionStarted;
- (void)peerLostCallbackReceived:(NIDiscoveryToken *)arg1;
- (void)stoppedDiscoveringAllPeers;
- (void)stoppedDiscoveringPeersWithTokens:(NSArray *)arg1;
- (void)startedDiscoveringPeersWithTokens:(NSArray *)arg1;
- (void)failedToRemoveRegionPredicate;
- (void)failedToAddRegionPredicate;
- (void)failedToRemovePeer;
- (void)failedToAddPeer;
- (void)invalidateCalled;
- (void)pauseCalled;
- (void)runWithConfigurationCalled;
@end

