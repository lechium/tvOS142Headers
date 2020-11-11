/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <NSCopying> {

	unsigned long long _addressComponentMatches;
	double _distanceFromTruth;
	double _uncertainty;
	unsigned _efficacy;
	unsigned _previousType;
	unsigned _source;
	unsigned _truthSource;
	unsigned _truthType;
	unsigned _type;
	BOOL _isRotted;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasEfficacy; 
@property (assign,nonatomic) unsigned efficacy;                                       //@synthesize efficacy=_efficacy - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) unsigned source;                                         //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) double uncertainty;                                      //@synthesize uncertainty=_uncertainty - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromTruth; 
@property (assign,nonatomic) double distanceFromTruth;                                //@synthesize distanceFromTruth=_distanceFromTruth - In the implementation block
@property (assign,nonatomic) BOOL hasAddressComponentMatches; 
@property (assign,nonatomic) unsigned long long addressComponentMatches;              //@synthesize addressComponentMatches=_addressComponentMatches - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousType; 
@property (assign,nonatomic) unsigned previousType;                                   //@synthesize previousType=_previousType - In the implementation block
@property (assign,nonatomic) BOOL hasTruthType; 
@property (assign,nonatomic) unsigned truthType;                                      //@synthesize truthType=_truthType - In the implementation block
@property (assign,nonatomic) BOOL hasTruthSource; 
@property (assign,nonatomic) unsigned truthSource;                                    //@synthesize truthSource=_truthSource - In the implementation block
@property (assign,nonatomic) BOOL hasIsRotted; 
@property (assign,nonatomic) BOOL isRotted;                                           //@synthesize isRotted=_isRotted - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(unsigned)source;
-(void)setSource:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)efficacy;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setEfficacy:(unsigned)arg1 ;
-(void)setHasEfficacy:(BOOL)arg1 ;
-(BOOL)hasEfficacy;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)hasSource;
-(void)setUncertainty:(double)arg1 ;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(BOOL)hasUncertainty;
-(void)setDistanceFromTruth:(double)arg1 ;
-(void)setHasDistanceFromTruth:(BOOL)arg1 ;
-(BOOL)hasDistanceFromTruth;
-(void)setAddressComponentMatches:(unsigned long long)arg1 ;
-(void)setHasAddressComponentMatches:(BOOL)arg1 ;
-(BOOL)hasAddressComponentMatches;
-(void)setPreviousType:(unsigned)arg1 ;
-(void)setHasPreviousType:(BOOL)arg1 ;
-(BOOL)hasPreviousType;
-(void)setTruthType:(unsigned)arg1 ;
-(void)setHasTruthType:(BOOL)arg1 ;
-(BOOL)hasTruthType;
-(void)setTruthSource:(unsigned)arg1 ;
-(void)setHasTruthSource:(BOOL)arg1 ;
-(BOOL)hasTruthSource;
-(void)setIsRotted:(BOOL)arg1 ;
-(void)setHasIsRotted:(BOOL)arg1 ;
-(BOOL)hasIsRotted;
-(double)uncertainty;
-(double)distanceFromTruth;
-(unsigned long long)addressComponentMatches;
-(unsigned)previousType;
-(unsigned)truthType;
-(unsigned)truthSource;
-(BOOL)isRotted;
@end
