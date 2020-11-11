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

@class PBDataReader, GEOTrafficPath, GEOTrafficPredictedPaces, GEOTrafficProbeFlow;

@interface GEOTrafficSpeed : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOTrafficPath* _path;
	GEOTrafficPredictedPaces* _predictedPaces;
	GEOTrafficProbeFlow* _probeFlow;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _color;
	unsigned _confidence;
	float _freeFlowSpeedKph;
	float _loadFactor;
	unsigned _observationCount;
	unsigned _probeCountPerHour;
	float _speedKph;
	struct {
		unsigned has_color : 1;
		unsigned has_confidence : 1;
		unsigned has_freeFlowSpeedKph : 1;
		unsigned has_loadFactor : 1;
		unsigned has_observationCount : 1;
		unsigned has_probeCountPerHour : 1;
		unsigned has_speedKph : 1;
		unsigned read_path : 1;
		unsigned read_predictedPaces : 1;
		unsigned read_probeFlow : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) GEOTrafficPath * path; 
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) float speedKph; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) unsigned confidence; 
@property (assign,nonatomic) BOOL hasFreeFlowSpeedKph; 
@property (assign,nonatomic) float freeFlowSpeedKph; 
@property (assign,nonatomic) BOOL hasObservationCount; 
@property (assign,nonatomic) unsigned observationCount; 
@property (nonatomic,readonly) BOOL hasPredictedPaces; 
@property (nonatomic,retain) GEOTrafficPredictedPaces * predictedPaces; 
@property (assign,nonatomic) BOOL hasLoadFactor; 
@property (assign,nonatomic) float loadFactor; 
@property (assign,nonatomic) BOOL hasProbeCountPerHour; 
@property (assign,nonatomic) unsigned probeCountPerHour; 
@property (nonatomic,readonly) BOOL hasProbeFlow; 
@property (nonatomic,retain) GEOTrafficProbeFlow * probeFlow; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOTrafficPath *)path;
-(void)setPath:(GEOTrafficPath *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)confidence;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(unsigned)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(int)color;
-(void)setColor:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setSpeedKph:(float)arg1 ;
-(float)speedKph;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasSpeedKph;
-(void)setHasColor:(BOOL)arg1 ;
-(BOOL)hasColor;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(BOOL)hasPath;
-(GEOTrafficPredictedPaces *)predictedPaces;
-(GEOTrafficProbeFlow *)probeFlow;
-(void)setFreeFlowSpeedKph:(float)arg1 ;
-(void)setObservationCount:(unsigned)arg1 ;
-(void)setPredictedPaces:(GEOTrafficPredictedPaces *)arg1 ;
-(void)setLoadFactor:(float)arg1 ;
-(void)setProbeCountPerHour:(unsigned)arg1 ;
-(void)setProbeFlow:(GEOTrafficProbeFlow *)arg1 ;
-(float)freeFlowSpeedKph;
-(void)setHasFreeFlowSpeedKph:(BOOL)arg1 ;
-(BOOL)hasFreeFlowSpeedKph;
-(unsigned)observationCount;
-(void)setHasObservationCount:(BOOL)arg1 ;
-(BOOL)hasObservationCount;
-(BOOL)hasPredictedPaces;
-(float)loadFactor;
-(void)setHasLoadFactor:(BOOL)arg1 ;
-(BOOL)hasLoadFactor;
-(unsigned)probeCountPerHour;
-(void)setHasProbeCountPerHour:(BOOL)arg1 ;
-(BOOL)hasProbeCountPerHour;
-(BOOL)hasProbeFlow;
@end

