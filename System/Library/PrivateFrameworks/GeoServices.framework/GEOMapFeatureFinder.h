/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapFeatureFinder : GEOMapRequest {

	GEOCoarseLocationLatLng _coordinate;
	GEOMapTileFinder* _tileFinder;
	/*^block*/id _roadHandler;
	/*^block*/id _pointHandler;
	/*^block*/id _polygonHandler;
	BOOL _ignoreUnnamedFeatures;

}

@property (nonatomic,copy) id roadHandler;                            //@synthesize roadHandler=_roadHandler - In the implementation block
@property (nonatomic,copy) id pointHandler;                           //@synthesize pointHandler=_pointHandler - In the implementation block
@property (nonatomic,copy) id polygonHandler;                         //@synthesize polygonHandler=_polygonHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
@property (assign,nonatomic) BOOL ignoreUnnamedFeatures;              //@synthesize ignoreUnnamedFeatures=_ignoreUnnamedFeatures - In the implementation block
-(void)cancel;
-(GEOMapAccess *)map;
-(void)setRoadHandler:(id)arg1 ;
-(void)setPointHandler:(id)arg1 ;
-(void)setPolygonHandler:(id)arg1 ;
-(id)initWithMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 ;
-(void)_pickRoadInTile:(id)arg1 tileRect:(const SCD_Struct_GE36*)arg2 localPoint:(const Matrix<float, 2, 1>*)arg3 ;
-(void)findFeatures:(/*^block*/id)arg1 pointHandler:(/*^block*/id)arg2 polygonHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)roadHandler;
-(id)pointHandler;
-(id)polygonHandler;
-(BOOL)ignoreUnnamedFeatures;
-(void)setIgnoreUnnamedFeatures:(BOOL)arg1 ;
@end

