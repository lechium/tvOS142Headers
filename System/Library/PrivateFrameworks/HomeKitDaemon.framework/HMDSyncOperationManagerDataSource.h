/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDSyncOperationManagerDataSource
@property (readonly) BOOL legacyZoneHasRecordsAvaliable; 
@property (readonly) BOOL isCloudAccountActive; 
@property (readonly) BOOL zoneFetchFailed; 
@property (readonly) BOOL isNetworkConnectionAvailable; 
@required
-(BOOL)legacyZoneHasRecordsAvaliable;
-(BOOL)isCloudAccountActive;
-(BOOL)zoneFetchFailed;
-(BOOL)isNetworkConnectionAvailable;
-(void)forceCloudFetch;

@end

