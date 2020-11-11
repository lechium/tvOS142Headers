/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOWiFiQualityServiceProxy.h>

@protocol GEOWiFiQualityServiceProxy;
@class NSString;

@interface GEOWiFiQualityServiceManager : NSObject <GEOWiFiQualityServiceProxy> {

	id<GEOWiFiQualityServiceProxy> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)useProxyClass:(Class)arg1 ;
-(id)init;
-(void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelRequestId:(id)arg1 ;
-(void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

