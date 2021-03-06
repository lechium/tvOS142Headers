/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, GEOMapRegion;

@interface GEOSpatialPlaceLookupResultItem : NSObject {

	NSArray* _mapItems;
	GEOMapRegion* _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(id)initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
-(NSArray *)mapItems;
-(GEOMapRegion *)boundingRegion;
@end

