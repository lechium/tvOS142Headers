/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SPOwnerSessionPrivateProtocol <SPOwnerSessionProtocol>
@required
-(oneway void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)forceDistributeKeysWithCompletion:(/*^block*/id)arg1;
-(oneway void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconStoreStatusWithCompletion:(/*^block*/id)arg1;
-(void)waitForBeaconStoreAvailableWithCompletion:(/*^block*/id)arg1;
-(void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3;

@end

