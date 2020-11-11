/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
@required
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1;

@end

