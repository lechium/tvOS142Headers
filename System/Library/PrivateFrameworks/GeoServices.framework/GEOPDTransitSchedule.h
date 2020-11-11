/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDDeparturePredicate, NSMutableArray;

@interface GEOPDTransitSchedule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	NSMutableArray* _departureSequences;
	GEOPDTimeRange _operatingHoursRange;
	unsigned long long _ttlSeconds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_operatingHoursRange : 1;
		unsigned has_ttlSeconds : 1;
		unsigned read_unknownFields : 1;
		unsigned read_departurePredicateCountdown : 1;
		unsigned read_departurePredicateStamp : 1;
		unsigned read_departureSequences : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * departureSequences; 
@property (nonatomic,readonly) BOOL hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown; 
@property (nonatomic,readonly) BOOL hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp; 
@property (assign,nonatomic) BOOL hasOperatingHoursRange; 
@property (assign,nonatomic) GEOPDTimeRange operatingHoursRange; 
@property (assign,nonatomic) BOOL hasTtlSeconds; 
@property (assign,nonatomic) unsigned long long ttlSeconds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)transitScheduleForPlaceData:(id)arg1 ;
+(Class)departureSequenceType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
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
-(BOOL)hasTtlSeconds;
-(unsigned long long)ttlSeconds;
-(void)setTtlSeconds:(unsigned long long)arg1 ;
-(void)setHasTtlSeconds:(BOOL)arg1 ;
-(void)setOperatingHoursRange:(GEOPDTimeRange)arg1 ;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(void)addDepartureSequence:(id)arg1 ;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
-(unsigned long long)departureSequencesCount;
-(void)clearDepartureSequences;
-(id)departureSequenceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)departureSequences;
-(void)setDepartureSequences:(NSMutableArray *)arg1 ;
-(BOOL)hasDeparturePredicateCountdown;
-(BOOL)hasDeparturePredicateStamp;
-(GEOPDTimeRange)operatingHoursRange;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
@end

