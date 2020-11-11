/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _blurredHourOfDay;
	unsigned _dayOfWeek;
	unsigned _maxCategories;
	unsigned _maxResultsPerCategory;
	struct {
		unsigned has_blurredHourOfDay : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_maxCategories : 1;
		unsigned has_maxResultsPerCategory : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxCategories; 
@property (assign,nonatomic) unsigned maxCategories; 
@property (assign,nonatomic) BOOL hasMaxResultsPerCategory; 
@property (assign,nonatomic) unsigned maxResultsPerCategory; 
@property (assign,nonatomic) BOOL hasBlurredHourOfDay; 
@property (assign,nonatomic) unsigned blurredHourOfDay; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)dayOfWeek;
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
-(void)setBlurredHourOfDay:(unsigned)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(unsigned)blurredHourOfDay;
-(void)setHasBlurredHourOfDay:(BOOL)arg1 ;
-(BOOL)hasBlurredHourOfDay;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)setMaxCategories:(unsigned)arg1 ;
-(void)setMaxResultsPerCategory:(unsigned)arg1 ;
-(unsigned)maxCategories;
-(void)setHasMaxCategories:(BOOL)arg1 ;
-(BOOL)hasMaxCategories;
-(unsigned)maxResultsPerCategory;
-(void)setHasMaxResultsPerCategory:(BOOL)arg1 ;
-(BOOL)hasMaxResultsPerCategory;
@end

