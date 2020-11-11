/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class VGVehicle, NSArray;


@protocol VGDataCoordinatorDelegate
@property (nonatomic,readonly) VGVehicle * selectedVehicle; 
@property (nonatomic,readonly) NSArray * vehicles; 
@required
-(NSArray *)vehicles;
-(void)dataCoordinator:(id)arg1 wantsToUpdateVehicle:(id)arg2 syncAcrossDevices:(BOOL)arg3;
-(VGVehicle *)selectedVehicle;
-(void)dataCoordinator:(id)arg1 wantsToSelectVehicle:(id)arg2;
-(void)dataCoordinator:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;
-(void)dataCoordinatorDidUpdateInstalledApps:(id)arg1;

@end

