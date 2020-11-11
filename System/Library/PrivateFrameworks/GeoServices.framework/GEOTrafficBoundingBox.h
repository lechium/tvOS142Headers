/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTrafficBoundingBox : PBCodable <NSCopying> {

	double _east;
	double _north;
	double _south;
	double _west;
	struct {
		unsigned has_east : 1;
		unsigned has_north : 1;
		unsigned has_south : 1;
		unsigned has_west : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSouth; 
@property (assign,nonatomic) double south; 
@property (assign,nonatomic) BOOL hasWest; 
@property (assign,nonatomic) double west; 
@property (assign,nonatomic) BOOL hasNorth; 
@property (assign,nonatomic) double north; 
@property (assign,nonatomic) BOOL hasEast; 
@property (assign,nonatomic) double east; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setSouth:(double)arg1 ;
-(void)setWest:(double)arg1 ;
-(void)setNorth:(double)arg1 ;
-(void)setEast:(double)arg1 ;
-(double)south;
-(void)setHasSouth:(BOOL)arg1 ;
-(BOOL)hasSouth;
-(double)west;
-(void)setHasWest:(BOOL)arg1 ;
-(BOOL)hasWest;
-(double)north;
-(void)setHasNorth:(BOOL)arg1 ;
-(BOOL)hasNorth;
-(double)east;
-(void)setHasEast:(BOOL)arg1 ;
-(BOOL)hasEast;
@end
