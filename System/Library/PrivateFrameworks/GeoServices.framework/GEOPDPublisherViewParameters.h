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

@class PBDataReader, PBUnknownFields, GEOPDMapsIdentifier, GEOPDPublisherViewResultFilter, GEOPDViewportInfo;

@interface GEOPDPublisherViewParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDMapsIdentifier* _publisherId;
	GEOPDPublisherViewResultFilter* _resultFilter;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _numClientizedResults;
	struct {
		unsigned has_numClientizedResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_publisherId : 1;
		unsigned read_resultFilter : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPublisherId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * publisherId; 
@property (assign,nonatomic) BOOL hasNumClientizedResults; 
@property (assign,nonatomic) unsigned numClientizedResults; 
@property (nonatomic,readonly) BOOL hasResultFilter; 
@property (nonatomic,retain) GEOPDPublisherViewResultFilter * resultFilter; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(GEOPDPublisherViewResultFilter *)resultFilter;
-(void)setNumClientizedResults:(unsigned)arg1 ;
-(void)setResultFilter:(GEOPDPublisherViewResultFilter *)arg1 ;
-(unsigned)numClientizedResults;
-(void)setHasNumClientizedResults:(BOOL)arg1 ;
-(BOOL)hasNumClientizedResults;
-(BOOL)hasResultFilter;
-(GEOPDMapsIdentifier *)publisherId;
-(void)setPublisherId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasPublisherId;
@end

