/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _shieldColor;
	NSString* _shieldText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _shieldEnumValue;
	struct {
		unsigned has_shieldEnumValue : 1;
		unsigned read_unknownFields : 1;
		unsigned read_shieldColor : 1;
		unsigned read_shieldText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasShieldText; 
@property (nonatomic,retain) NSString * shieldText; 
@property (assign,nonatomic) BOOL hasShieldEnumValue; 
@property (assign,nonatomic) unsigned shieldEnumValue; 
@property (nonatomic,readonly) BOOL hasShieldColor; 
@property (nonatomic,retain) NSString * shieldColor; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
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
-(long long)shieldType;
-(NSString *)shieldText;
-(NSString *)shieldColorString;
-(NSString *)shieldColor;
-(void)setShieldText:(NSString *)arg1 ;
-(void)setShieldEnumValue:(unsigned)arg1 ;
-(void)setShieldColor:(NSString *)arg1 ;
-(BOOL)hasShieldText;
-(unsigned)shieldEnumValue;
-(void)setHasShieldEnumValue:(BOOL)arg1 ;
-(BOOL)hasShieldEnumValue;
-(BOOL)hasShieldColor;
@end

