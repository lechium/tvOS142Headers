/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOComposedRouteETAUPosition : NSObject {

	SCD_Struct_GE83 _routeCoordinate;
	double _timeSinceLastUpdate;

}

@property (nonatomic,readonly) SCD_Struct_GE83 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate;                   //@synthesize timeSinceLastUpdate=_timeSinceLastUpdate - In the implementation block
-(long long)compare:(id)arg1 ;
-(SCD_Struct_GE83)routeCoordinate;
-(id)initWithComposedRoute:(id)arg1 andUpdateLocation:(id)arg2 offset:(double)arg3 ;
-(double)timeSinceLastUpdate;
@end

