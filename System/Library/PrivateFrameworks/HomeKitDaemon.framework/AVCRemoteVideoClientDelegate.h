/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVCRemoteVideoClientDelegate <NSObject>
@optional
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 videoDidSuspend:(BOOL)arg2;
-(void)remoteVideoClientDidReceiveLastFrame:(id)arg1;
-(void)remoteVideoServerDidDie:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;

@end

