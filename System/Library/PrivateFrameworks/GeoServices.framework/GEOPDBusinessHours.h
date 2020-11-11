/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDHoursThreshold, GEOLocalizedString, NSMutableArray;

@interface GEOPDBusinessHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _end;
	GEOPDHoursThreshold* _hoursThreshold;
	GEOLocalizedString* _message;
	GEOLocalizedString* _shortMessage;
	unsigned long long _start;
	NSMutableArray* _weeklyHours;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _hoursType;
	struct {
		unsigned has_end : 1;
		unsigned has_start : 1;
		unsigned has_hoursType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_hoursThreshold : 1;
		unsigned read_message : 1;
		unsigned read_shortMessage : 1;
		unsigned read_weeklyHours : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * weeklyHours; 
@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) unsigned long long start; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) unsigned long long end; 
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) GEOLocalizedString * message; 
@property (nonatomic,readonly) BOOL hasShortMessage; 
@property (nonatomic,retain) GEOLocalizedString * shortMessage; 
@property (assign,nonatomic) BOOL hasHoursType; 
@property (assign,nonatomic) int hoursType; 
@property (nonatomic,readonly) BOOL hasHoursThreshold; 
@property (nonatomic,retain) GEOPDHoursThreshold * hoursThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)businessHoursForPlaceData:(id)arg1 ;
+(Class)weeklyHoursType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)start;
-(id)dictionaryRepresentation;
-(unsigned long long)end;
-(GEOLocalizedString *)message;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMessage:(GEOLocalizedString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEnd:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)weeklyHours;
-(void)setWeeklyHours:(NSMutableArray *)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(void)setHoursType:(int)arg1 ;
-(void)setHasStart:(BOOL)arg1 ;
-(BOOL)hasStart;
-(void)setHasEnd:(BOOL)arg1 ;
-(BOOL)hasEnd;
-(int)hoursType;
-(void)setHasHoursType:(BOOL)arg1 ;
-(BOOL)hasHoursType;
-(id)hoursTypeAsString:(int)arg1 ;
-(int)StringAsHoursType:(id)arg1 ;
-(void)setHoursThreshold:(GEOPDHoursThreshold *)arg1 ;
-(GEOLocalizedString *)shortMessage;
-(GEOPDHoursThreshold *)hoursThreshold;
-(void)addWeeklyHours:(id)arg1 ;
-(void)setShortMessage:(GEOLocalizedString *)arg1 ;
-(unsigned long long)weeklyHoursCount;
-(void)clearWeeklyHours;
-(id)weeklyHoursAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMessage;
-(BOOL)hasShortMessage;
-(BOOL)hasHoursThreshold;
@end

