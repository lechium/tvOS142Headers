/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPSecureKeyDeliveryCoordinatorDelegate
@optional
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1 forKeyRequest:(id)arg2;
-(void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;

@required
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1;
-(void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2;
-(void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;

@end

