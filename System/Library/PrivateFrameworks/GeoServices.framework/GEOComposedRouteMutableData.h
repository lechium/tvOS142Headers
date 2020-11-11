/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOComposedRouteTraffic, NSMutableDictionary;

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding> {

	GEOComposedRouteTraffic* _traffic;
	NSMutableDictionary* _stepsIDToEVInfos;
	NSMutableDictionary* _legIndexToChargingStationInfos;

}

@property (nonatomic,retain) GEOComposedRouteTraffic * traffic;              //@synthesize traffic=_traffic - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedRouteTraffic *)traffic;
-(void)setTraffic:(GEOComposedRouteTraffic *)arg1 ;
-(id)evInfoForStepID:(unsigned long long)arg1 ;
-(void)updateForRoute:(id)arg1 ;
-(id)chargingStationInfoForLegIndex:(unsigned long long)arg1 ;
-(void)updateForRoute:(id)arg1 etaRoute:(id)arg2 ;
@end
