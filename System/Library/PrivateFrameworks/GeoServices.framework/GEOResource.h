/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, NSString, NSMutableArray;

@interface GEOResource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSData* _checksum;
	NSString* _filename;
	NSMutableArray* _filters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _alternateResourceURLIndex;
	int _connectionType;
	unsigned _preferWiFiAllowedStaleThreshold;
	int _resourceType;
	unsigned _timeToLiveSeconds;
	int _updateMethod;
	int _validationMethod;
	struct {
		unsigned has_alternateResourceURLIndex : 1;
		unsigned has_connectionType : 1;
		unsigned has_preferWiFiAllowedStaleThreshold : 1;
		unsigned has_resourceType : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned has_updateMethod : 1;
		unsigned has_validationMethod : 1;
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_checksum : 1;
		unsigned read_filename : 1;
		unsigned read_filters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType; 
@property (nonatomic,readonly) BOOL hasFilename; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,readonly) BOOL hasChecksum; 
@property (nonatomic,retain) NSData * checksum; 
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (nonatomic,retain) NSMutableArray * filters; 
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType; 
@property (assign,nonatomic) BOOL hasPreferWiFiAllowedStaleThreshold; 
@property (assign,nonatomic) unsigned preferWiFiAllowedStaleThreshold; 
@property (assign,nonatomic) BOOL hasValidationMethod; 
@property (assign,nonatomic) int validationMethod; 
@property (assign,nonatomic) BOOL hasAlternateResourceURLIndex; 
@property (assign,nonatomic) unsigned alternateResourceURLIndex; 
@property (assign,nonatomic) BOOL hasUpdateMethod; 
@property (assign,nonatomic) int updateMethod; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)filterType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(int)connectionType;
-(NSMutableArray *)filters;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(GEOTileSetRegion*)regions;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)resourceType;
-(NSData *)checksum;
-(void)setResourceType:(int)arg1 ;
-(void)setChecksum:(NSData *)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)setPreferWiFiAllowedStaleThreshold:(unsigned)arg1 ;
-(void)setValidationMethod:(int)arg1 ;
-(void)setAlternateResourceURLIndex:(unsigned)arg1 ;
-(void)setUpdateMethod:(int)arg1 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)setHasResourceType:(BOOL)arg1 ;
-(BOOL)hasResourceType;
-(id)resourceTypeAsString:(int)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(BOOL)hasFilename;
-(BOOL)hasChecksum;
-(id)connectionTypeAsString:(int)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(unsigned)preferWiFiAllowedStaleThreshold;
-(void)setHasPreferWiFiAllowedStaleThreshold:(BOOL)arg1 ;
-(BOOL)hasPreferWiFiAllowedStaleThreshold;
-(int)validationMethod;
-(void)setHasValidationMethod:(BOOL)arg1 ;
-(BOOL)hasValidationMethod;
-(id)validationMethodAsString:(int)arg1 ;
-(int)StringAsValidationMethod:(id)arg1 ;
-(unsigned)alternateResourceURLIndex;
-(void)setHasAlternateResourceURLIndex:(BOOL)arg1 ;
-(BOOL)hasAlternateResourceURLIndex;
-(int)updateMethod;
-(void)setHasUpdateMethod:(BOOL)arg1 ;
-(BOOL)hasUpdateMethod;
-(id)updateMethodAsString:(int)arg1 ;
-(int)StringAsUpdateMethod:(id)arg1 ;
-(unsigned)timeToLiveSeconds;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(BOOL)hasTimeToLiveSeconds;
-(BOOL)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2 ;
@end

