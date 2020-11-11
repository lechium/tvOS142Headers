/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDCollectionSuggestionResult, NSString, GEOPDPublisherSuggestionResult, GEOPDSearchBrowseCategorySuggestionResult;

@interface GEOPDMapsSearchHomeSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDCollectionSuggestionResult* _collectionSuggestionResult;
	NSString* _name;
	GEOPDPublisherSuggestionResult* _publisherSuggestionResult;
	GEOPDSearchBrowseCategorySuggestionResult* _searchBrowseCategorySuggestionResult;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _sectionType;
	struct {
		unsigned has_sectionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_collectionSuggestionResult : 1;
		unsigned read_name : 1;
		unsigned read_publisherSuggestionResult : 1;
		unsigned read_searchBrowseCategorySuggestionResult : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSectionType; 
@property (assign,nonatomic) int sectionType; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasSearchBrowseCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionResult * searchBrowseCategorySuggestionResult; 
@property (nonatomic,readonly) BOOL hasCollectionSuggestionResult; 
@property (nonatomic,retain) GEOPDCollectionSuggestionResult * collectionSuggestionResult; 
@property (nonatomic,readonly) BOOL hasPublisherSuggestionResult; 
@property (nonatomic,retain) GEOPDPublisherSuggestionResult * publisherSuggestionResult; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)sectionType;
-(GEOPDPublisherSuggestionResult *)publisherSuggestionResult;
-(void)setPublisherSuggestionResult:(GEOPDPublisherSuggestionResult *)arg1 ;
-(BOOL)hasPublisherSuggestionResult;
-(GEOPDSearchBrowseCategorySuggestionResult *)searchBrowseCategorySuggestionResult;
-(GEOPDCollectionSuggestionResult *)collectionSuggestionResult;
-(void)setSectionType:(int)arg1 ;
-(void)setSearchBrowseCategorySuggestionResult:(GEOPDSearchBrowseCategorySuggestionResult *)arg1 ;
-(void)setCollectionSuggestionResult:(GEOPDCollectionSuggestionResult *)arg1 ;
-(void)setHasSectionType:(BOOL)arg1 ;
-(BOOL)hasSectionType;
-(id)sectionTypeAsString:(int)arg1 ;
-(int)StringAsSectionType:(id)arg1 ;
-(BOOL)hasSearchBrowseCategorySuggestionResult;
-(BOOL)hasCollectionSuggestionResult;
@end

