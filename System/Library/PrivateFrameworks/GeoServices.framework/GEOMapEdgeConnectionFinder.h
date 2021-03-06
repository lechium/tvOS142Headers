/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableArray, GEOVectorTile;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {

	GEOMapAccess* _map;
	GEOMapTileFinder* _tileFinder;
	NSMutableArray* _builders;
	GEOVectorTile* _tile;
	SCD_Struct_GE130* _junction;
	GEOCoarseLocationLatLng _coordinate;

}
-(void)cancel;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(id)initWithMap:(id)arg1 tile:(id)arg2 junction:(SCD_Struct_GE130*)arg3 coordinate:(GEOCoarseLocationLatLng)arg4 ;
-(void)findConnectionsOut:(/*^block*/id)arg1 ;
-(void)findConnectionsIn:(/*^block*/id)arg1 ;
@end

