/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying> {

	double _distanceFromOrigin;
	double _timeFromOrigin;
	int _transportMode;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasTransportMode; 
@property (assign,nonatomic) int transportMode; 
@property (assign,nonatomic) BOOL hasDistanceFromOrigin; 
@property (assign,nonatomic) double distanceFromOrigin; 
@property (assign,nonatomic) BOOL hasTimeFromOrigin; 
@property (assign,nonatomic) double timeFromOrigin; 
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
-(void)setTransportMode:(int)arg1 ;
-(void)setDistanceFromOrigin:(double)arg1 ;
-(void)setTimeFromOrigin:(double)arg1 ;
-(int)transportMode;
-(void)setHasTransportMode:(BOOL)arg1 ;
-(BOOL)hasTransportMode;
-(id)transportModeAsString:(int)arg1 ;
-(int)StringAsTransportMode:(id)arg1 ;
-(double)distanceFromOrigin;
-(void)setHasDistanceFromOrigin:(BOOL)arg1 ;
-(BOOL)hasDistanceFromOrigin;
-(double)timeFromOrigin;
-(void)setHasTimeFromOrigin:(BOOL)arg1 ;
-(BOOL)hasTimeFromOrigin;
@end

