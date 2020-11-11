/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPAVRoutingControllerDelegate <NSObject>
@optional
-(void)routingControllerAvailableRoutesDidChange:(id)arg1;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
-(void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(/*^block*/id)arg6;
-(void)routingController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;

@end

