/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORestrictionZoneInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _restrictedZoneIds;
	int _environmentalCongestionZoneImpact;
	int _licensePlateRestrictionImpact;
	int _tollCongestionZoneImpact;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * restrictedZoneIds; 
@property (assign,nonatomic) BOOL hasLicensePlateRestrictionImpact; 
@property (assign,nonatomic) int licensePlateRestrictionImpact; 
@property (assign,nonatomic) BOOL hasEnvironmentalCongestionZoneImpact; 
@property (assign,nonatomic) int environmentalCongestionZoneImpact; 
@property (assign,nonatomic) BOOL hasTollCongestionZoneImpact; 
@property (assign,nonatomic) int tollCongestionZoneImpact; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)restrictedZoneIdsType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)restrictedZoneIds;
-(void)addRestrictedZoneIds:(id)arg1 ;
-(void)setLicensePlateRestrictionImpact:(int)arg1 ;
-(void)setEnvironmentalCongestionZoneImpact:(int)arg1 ;
-(void)setTollCongestionZoneImpact:(int)arg1 ;
-(unsigned long long)restrictedZoneIdsCount;
-(void)clearRestrictedZoneIds;
-(id)restrictedZoneIdsAtIndex:(unsigned long long)arg1 ;
-(void)setRestrictedZoneIds:(NSMutableArray *)arg1 ;
-(int)licensePlateRestrictionImpact;
-(void)setHasLicensePlateRestrictionImpact:(BOOL)arg1 ;
-(BOOL)hasLicensePlateRestrictionImpact;
-(id)licensePlateRestrictionImpactAsString:(int)arg1 ;
-(int)StringAsLicensePlateRestrictionImpact:(id)arg1 ;
-(int)environmentalCongestionZoneImpact;
-(void)setHasEnvironmentalCongestionZoneImpact:(BOOL)arg1 ;
-(BOOL)hasEnvironmentalCongestionZoneImpact;
-(id)environmentalCongestionZoneImpactAsString:(int)arg1 ;
-(int)StringAsEnvironmentalCongestionZoneImpact:(id)arg1 ;
-(int)tollCongestionZoneImpact;
-(void)setHasTollCongestionZoneImpact:(BOOL)arg1 ;
-(BOOL)hasTollCongestionZoneImpact;
-(id)tollCongestionZoneImpactAsString:(int)arg1 ;
-(int)StringAsTollCongestionZoneImpact:(id)arg1 ;
@end
