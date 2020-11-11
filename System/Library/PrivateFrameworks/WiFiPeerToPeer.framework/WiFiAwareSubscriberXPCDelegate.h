/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WiFiAwareSubscriberXPCDelegate <NSObject>
@required
-(void)subscribeStartedWithInstanceID:(unsigned char)arg1;
-(void)subscribeTerminatedWithReason:(long long)arg1;
-(void)subscribeReceivedDiscoveryResult:(id)arg1;
-(void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2;
-(void)subscribeFailedToStartWithError:(long long)arg1;
-(void)subscribeReceivedMessage:(id)arg1 fromPublishID:(unsigned char)arg2 address:(id)arg3;

@end
