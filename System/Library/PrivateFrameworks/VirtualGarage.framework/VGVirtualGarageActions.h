/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VGVirtualGarageActions
@required
-(void)virtualGarageAddVehicle:(id)arg1;
-(void)virtualGarageRemoveVehicle:(id)arg1;
-(void)virtualGarageSaveVehicle:(id)arg1;
-(void)virtualGarageSelectVehicle:(id)arg1;
-(void)virtualGarageOnboardVehicle:(id)arg1;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;
-(void)virtualGarageEndContinuousUpdates;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg1;
-(void)virtualGarageGetGarageWithReply:(/*^block*/id)arg1;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(/*^block*/id)arg1;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(BOOL)arg2 withReply:(/*^block*/id)arg3;

@end
