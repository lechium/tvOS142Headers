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

@class PBDataReader, GEOTrafficPath;

@interface GEOTrafficPredictedPaces : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _encodedPaces;
	SCD_Struct_GE17* _secondsInFutures;
	GEOTrafficPath* _path;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_encodedPaces : 1;
		unsigned read_secondsInFutures : 1;
		unsigned read_path : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long secondsInFuturesCount; 
@property (nonatomic,readonly) unsigned* secondsInFutures; 
@property (nonatomic,readonly) unsigned long long encodedPacesCount; 
@property (nonatomic,readonly) unsigned* encodedPaces; 
@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) GEOTrafficPath * path; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOTrafficPath *)path;
-(void)setPath:(GEOTrafficPath *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addSecondsInFuture:(unsigned)arg1 ;
-(void)addEncodedPace:(unsigned)arg1 ;
-(unsigned long long)secondsInFuturesCount;
-(void)clearSecondsInFutures;
-(unsigned)secondsInFutureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)encodedPacesCount;
-(void)clearEncodedPaces;
-(unsigned)encodedPaceAtIndex:(unsigned long long)arg1 ;
-(unsigned*)secondsInFutures;
-(void)setSecondsInFutures:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)encodedPaces;
-(void)setEncodedPaces:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasPath;
@end

