/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVOutputDeviceDiscoverySessionFactory.h>

@protocol AVFigRouteDiscovererFactory;
@class NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory> {

	id<AVFigRouteDiscovererFactory> _routeDiscovererFactory;

}

@property (nonatomic,readonly) id<AVFigRouteDiscovererFactory> routeDiscovererFactory;              //@synthesize routeDiscovererFactory=_routeDiscovererFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2 ;
-(id)initWithRouteDiscovererFactory:(id)arg1 ;
-(id<AVFigRouteDiscovererFactory>)routeDiscovererFactory;
@end

