/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRNearbyDeviceAdvertiserDelegate <NSObject>
@optional
-(void)nearbyDeviceAdvertiser:(id)arg1 didFailToStartAdvertisingWithError:(id)arg2;
-(void)nearbyDeviceAdvertiserDidStopAdvertising:(id)arg1;
-(void)nearbyDeviceAdvertiser:(id)arg1 didFailToStopAdvertisingWithError:(id)arg2;
-(void)nearbyDeviceAdvertiserDidStartAdvertising:(id)arg1;

@required
-(void)nearbyDeviceAdvertiser:(id)arg1 didReceiveConnectionRequestFromDevice:(id)arg2 requestHandler:(/*^block*/id)arg3;

@end
