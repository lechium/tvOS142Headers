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

@class PBUnknownFields, GEOLatLng;

@interface GEOPDShardedId : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _basemapId;
	GEOLatLng* _center;
	unsigned long long _muid;
	int _mapsResultType;
	int _resultProviderId;
	struct {
		unsigned has_basemapId : 1;
		unsigned has_muid : 1;
		unsigned has_mapsResultType : 1;
		unsigned has_resultProviderId : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (assign,nonatomic) BOOL hasBasemapId; 
@property (assign,nonatomic) unsigned long long basemapId; 
@property (assign,nonatomic) BOOL hasMapsResultType; 
@property (assign,nonatomic) int mapsResultType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(BOOL)hasBasemapId;
-(unsigned long long)basemapId;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasCenter;
-(void)setResultProviderId:(int)arg1 ;
-(int)resultProviderId;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(int)mapsResultType;
-(void)setBasemapId:(unsigned long long)arg1 ;
-(void)setMapsResultType:(int)arg1 ;
-(void)setHasBasemapId:(BOOL)arg1 ;
-(void)setHasMapsResultType:(BOOL)arg1 ;
-(BOOL)hasMapsResultType;
-(id)mapsResultTypeAsString:(int)arg1 ;
-(int)StringAsMapsResultType:(id)arg1 ;
@end

