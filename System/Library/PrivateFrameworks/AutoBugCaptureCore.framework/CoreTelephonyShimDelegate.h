/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreTelephonyShimDelegate <NSObject>
@optional
-(void)operatorNameChangedForSubscription:(id)arg1;
-(void)signalStrengthChangedForSubscription:(id)arg1;
-(void)infoLinkStateChangedForSubscription:(id)arg1;
-(void)infoLinkQualityFingeprintChangedForSubscription:(id)arg1;
-(void)infoTrafficClassChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeChangedForSubscription:(id)arg1;
-(void)infoDataTransferTimeEnabledChangedForSubscription:(id)arg1;
-(void)infoLinkPowerCostChangedForSubscription:(id)arg1;
-(void)infoDataStallChangedForSubscription:(id)arg1;
-(void)infoHighThroughputChangedForSubscription:(id)arg1;
-(void)infoNRServingCellTypeChangedForSubscription:(id)arg1;
-(void)ctDataStatusChangedForSubscription:(id)arg1;
-(void)smartDataModeChangedToUserEnabled:(BOOL)arg1;
-(void)cellInfoChangedForSubscription:(id)arg1;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2;
-(void)currentDataSIMIdentifier:(id)arg1;
-(void)ratSelectionChangedForSubscription:(id)arg1;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg1 userEnabled:(BOOL)arg2;
-(void)signalStrengthChanged:(id)arg1;

@end

