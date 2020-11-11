/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVISAssetService <NSObject>
@required
-(id)purgeableInfoForUrgency:(long long)arg1;
-(void)setUpService;
-(BOOL)serviceNeedsUpdateForContext:(unsigned long long)arg1;
-(void)runServiceUpdatesWithContext:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)forceDownloadAssetsWithIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runStateChangeUpdatesIfNeeded;

@end
