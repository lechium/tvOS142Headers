/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _entranceNameDisplayString;
	NSMutableArray* _entranceZoomNames;
	NSString* _exitNameDisplayString;
	NSMutableArray* _exitZoomNames;
	GEOLatLng* _location;
	unsigned long long _muid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _accessPointIndex;
	unsigned _stationIndex;
	struct {
		unsigned has_muid : 1;
		unsigned has_accessPointIndex : 1;
		unsigned has_stationIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_entranceNameDisplayString : 1;
		unsigned read_entranceZoomNames : 1;
		unsigned read_exitNameDisplayString : 1;
		unsigned read_exitZoomNames : 1;
		unsigned read_location : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex; 
@property (nonatomic,retain) NSMutableArray * entranceZoomNames; 
@property (nonatomic,retain) NSMutableArray * exitZoomNames; 
@property (nonatomic,readonly) BOOL hasEntranceNameDisplayString; 
@property (nonatomic,retain) NSString * entranceNameDisplayString; 
@property (nonatomic,readonly) BOOL hasExitNameDisplayString; 
@property (nonatomic,retain) NSString * exitNameDisplayString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)entranceZoomNameType;
+(Class)exitZoomNameType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)identifier;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasLocation;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(unsigned)accessPointIndex;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(BOOL)hasAccessPointIndex;
-(BOOL)hasStationIndex;
-(unsigned)stationIndex;
-(NSString *)entranceNameDisplayString;
-(NSString *)exitNameDisplayString;
-(void)setStationIndex:(unsigned)arg1 ;
-(void)addEntranceZoomName:(id)arg1 ;
-(void)addExitZoomName:(id)arg1 ;
-(void)setEntranceNameDisplayString:(NSString *)arg1 ;
-(void)setExitNameDisplayString:(NSString *)arg1 ;
-(unsigned long long)entranceZoomNamesCount;
-(void)clearEntranceZoomNames;
-(id)entranceZoomNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)exitZoomNamesCount;
-(void)clearExitZoomNames;
-(id)exitZoomNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(NSMutableArray *)entranceZoomNames;
-(void)setEntranceZoomNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)exitZoomNames;
-(void)setExitZoomNames:(NSMutableArray *)arg1 ;
-(BOOL)hasEntranceNameDisplayString;
-(BOOL)hasExitNameDisplayString;
-(id)bestEntranceNameWithLocale:(out id*)arg1 ;
-(id)bestExitNameWithLocale:(out id*)arg1 ;
-(id)bestEntranceName;
-(id)bestExitName;
@end

