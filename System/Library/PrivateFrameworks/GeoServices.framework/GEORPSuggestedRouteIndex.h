/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {

	SCD_Struct_GE17* _clusteredRouteRideSelections;
	unsigned _directionsResponseIndex;
	unsigned _directionsResponseSuggestedRoutesIndex;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasDirectionsResponseIndex; 
@property (assign,nonatomic) unsigned directionsResponseIndex; 
@property (assign,nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex; 
@property (assign,nonatomic) unsigned directionsResponseSuggestedRoutesIndex; 
@property (nonatomic,readonly) unsigned long long clusteredRouteRideSelectionsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteRideSelections; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setDirectionsResponseIndex:(unsigned)arg1 ;
-(void)setDirectionsResponseSuggestedRoutesIndex:(unsigned)arg1 ;
-(void)addClusteredRouteRideSelections:(unsigned)arg1 ;
-(unsigned long long)clusteredRouteRideSelectionsCount;
-(void)clearClusteredRouteRideSelections;
-(unsigned)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1 ;
-(unsigned)directionsResponseIndex;
-(void)setHasDirectionsResponseIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseIndex;
-(unsigned)directionsResponseSuggestedRoutesIndex;
-(void)setHasDirectionsResponseSuggestedRoutesIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseSuggestedRoutesIndex;
-(unsigned*)clusteredRouteRideSelections;
-(void)setClusteredRouteRideSelections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

