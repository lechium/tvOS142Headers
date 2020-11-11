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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDViewportInfo;

@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _requestLocalTimestamp;
	NSMutableArray* _suggestionEntryMetadatas;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResults;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned has_maxResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_suggestionEntryMetadatas : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)suggestionEntryMetadataType;
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
-(GEOPDViewportInfo *)viewportInfo;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(unsigned)maxResults;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)hasViewportInfo;
-(NSMutableArray *)suggestionEntryMetadatas;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)addSuggestionEntryMetadata:(id)arg1 ;
-(unsigned long long)suggestionEntryMetadatasCount;
-(void)clearSuggestionEntryMetadatas;
-(id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1 ;
-(double)requestLocalTimestamp;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(void)setSuggestionEntryMetadatas:(NSMutableArray *)arg1 ;
@end
