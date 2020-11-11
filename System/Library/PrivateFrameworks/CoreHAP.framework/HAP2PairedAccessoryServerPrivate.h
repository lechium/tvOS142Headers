/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAP2PairedAccessoryServerPrivate <HAP2AccessoryServerPrivate,HAP2PairedAccessoryServer>
@required
-(void)pollAccessory;
-(void)becomeUnpairedWithAccessoryServer:(id)arg1;
-(void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id)arg1;
-(id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3;
-(id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3;
-(id)enableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2;
-(id)disableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleEvents:(id)arg1;
-(void)handleUpdatedCharacteristicValues:(id)arg1;
-(void)handleReestablishedSession;
-(void)handleLostDiscoveryAdvertisement;
-(void)verifyConnection;
-(void)clearAccessories;

@end
