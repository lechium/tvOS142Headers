/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _spatialEventLookupResults;
	NSMutableArray* _spatialPlaceLookupResults;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCode;
	struct {
		unsigned has_statusCode : 1;
		unsigned read_unknownFields : 1;
		unsigned read_spatialEventLookupResults : 1;
		unsigned read_spatialPlaceLookupResults : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * spatialPlaceLookupResults; 
@property (nonatomic,retain) NSMutableArray * spatialEventLookupResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spatialPlaceLookupResultType;
+(Class)spatialEventLookupResultType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)addSpatialPlaceLookupResult:(id)arg1 ;
-(void)addSpatialEventLookupResult:(id)arg1 ;
-(unsigned long long)spatialPlaceLookupResultsCount;
-(void)clearSpatialPlaceLookupResults;
-(id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spatialEventLookupResultsCount;
-(void)clearSpatialEventLookupResults;
-(id)spatialEventLookupResultAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)spatialPlaceLookupResults;
-(void)setSpatialPlaceLookupResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spatialEventLookupResults;
-(void)setSpatialEventLookupResults:(NSMutableArray *)arg1 ;
@end

