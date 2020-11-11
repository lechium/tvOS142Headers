/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOTransitDecoderData, NSString, GEOMapItemStorage, NSData, GEOTransitSuggestedRoute, GEODirectionsRequest, GEODirectionsResponse, NSMutableArray, GEOComposedWaypoint, GEOCompanionWaypoint;

@interface GEOCompanionRouteDetails : PBCodable <GEOCompanionCompatibility, NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE92* _coordinates;
	SCD_Struct_GE17* _trafficColorOffsets;
	SCD_Struct_GE17* _trafficColors;
	GEOTransitDecoderData* _decoderData;
	NSString* _destinationName;
	GEOMapItemStorage* _destination;
	NSString* _name;
	NSData* _originalRouteID;
	GEOTransitSuggestedRoute* _originalSuggestedRoute;
	GEOMapItemStorage* _origin;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	NSData* _revisionID;
	NSMutableArray* _routeDescriptions;
	NSData* _routeID;
	NSMutableArray* _steps;
	NSString* _trafficDescription;
	NSMutableArray* _waypoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distance;
	unsigned _historicalDuration;
	unsigned _originalDuration;
	unsigned _routeIndex;
	int _transportType;
	BOOL _canNavigate;
	BOOL _isTrace;
	BOOL _showTransitSchedules;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicalDuration : 1;
		unsigned has_originalDuration : 1;
		unsigned has_routeIndex : 1;
		unsigned has_transportType : 1;
		unsigned has_canNavigate : 1;
		unsigned has_isTrace : 1;
		unsigned has_showTransitSchedules : 1;
		unsigned read_coordinates : 1;
		unsigned read_trafficColorOffsets : 1;
		unsigned read_trafficColors : 1;
		unsigned read_decoderData : 1;
		unsigned read_destinationName : 1;
		unsigned read_destination : 1;
		unsigned read_name : 1;
		unsigned read_originalRouteID : 1;
		unsigned read_originalSuggestedRoute : 1;
		unsigned read_origin : 1;
		unsigned read_request : 1;
		unsigned read_response : 1;
		unsigned read_revisionID : 1;
		unsigned read_routeDescriptions : 1;
		unsigned read_routeID : 1;
		unsigned read_steps : 1;
		unsigned read_trafficDescription : 1;
		unsigned read_waypoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOComposedWaypoint * composedOrigin; 
@property (nonatomic,readonly) GEOComposedWaypoint * composedDestination; 
@property (nonatomic,readonly) GEOCompanionWaypoint * companionOrigin; 
@property (nonatomic,readonly) GEOCompanionWaypoint * companionDestination; 
@property (nonatomic,readonly) BOOL isSyntheticRoute; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName; 
@property (assign,nonatomic) BOOL hasOriginalDuration; 
@property (assign,nonatomic) unsigned originalDuration; 
@property (nonatomic,retain) NSMutableArray * steps; 
@property (nonatomic,readonly) unsigned long long coordinatesCount; 
@property (nonatomic,readonly) double* coordinates; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOMapItemStorage * destination; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOMapItemStorage * origin; 
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (assign,nonatomic) BOOL hasHistoricalDuration; 
@property (assign,nonatomic) unsigned historicalDuration; 
@property (assign,nonatomic) BOOL hasCanNavigate; 
@property (assign,nonatomic) BOOL canNavigate; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (nonatomic,readonly) BOOL hasOriginalSuggestedRoute; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * originalSuggestedRoute; 
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData; 
@property (assign,nonatomic) BOOL hasShowTransitSchedules; 
@property (assign,nonatomic) BOOL showTransitSchedules; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEODirectionsRequest * request; 
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEODirectionsResponse * response; 
@property (nonatomic,readonly) BOOL hasTrafficDescription; 
@property (nonatomic,retain) NSString * trafficDescription; 
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID; 
@property (nonatomic,retain) NSMutableArray * routeDescriptions; 
@property (assign,nonatomic) BOOL hasIsTrace; 
@property (assign,nonatomic) BOOL isTrace; 
@property (nonatomic,readonly) BOOL hasRevisionID; 
@property (nonatomic,retain) NSData * revisionID; 
@property (nonatomic,retain) NSMutableArray * waypoints; 
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stepType;
+(Class)routeDescriptionsType;
+(Class)waypointsType;
+(id)syntheticRouteDetailsWithOrigin:(id)arg1 destination:(id)arg2 transportType:(int)arg3 destinationName:(id)arg4 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(GEODirectionsRequest *)request;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(GEODirectionsResponse *)response;
-(id)dictionaryRepresentation;
-(void)setDestination:(GEOMapItemStorage *)arg1 ;
-(GEOMapItemStorage *)destination;
-(NSString *)shortDescription;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)distance;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(BOOL)hasResponse;
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(BOOL)hasRequest;
-(NSData *)routeID;
-(GEOMapItemStorage *)origin;
-(void)setOrigin:(GEOMapItemStorage *)arg1 ;
-(NSMutableArray *)steps;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(double*)coordinates;
-(void)addCoordinates:(double)arg1 ;
-(unsigned long long)coordinatesCount;
-(void)clearCoordinates;
-(double)coordinatesAtIndex:(unsigned long long)arg1 ;
-(void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)stepsCount;
-(GEOTransitDecoderData *)decoderData;
-(BOOL)hasDestination;
-(void)setRouteID:(NSData *)arg1 ;
-(void)addStep:(id)arg1 ;
-(void)clearSteps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(NSMutableArray *)waypoints;
-(NSString *)trafficDescription;
-(NSMutableArray *)routeDescriptions;
-(BOOL)showTransitSchedules;
-(GEOTransitSuggestedRoute *)originalSuggestedRoute;
-(BOOL)hasOrigin;
-(NSString *)destinationName;
-(NSData *)originalRouteID;
-(NSData *)revisionID;
-(void)setDestinationName:(NSString *)arg1 ;
-(void)setOriginalDuration:(unsigned)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(void)setHistoricalDuration:(unsigned)arg1 ;
-(void)setCanNavigate:(BOOL)arg1 ;
-(void)setOriginalSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(void)setShowTransitSchedules:(BOOL)arg1 ;
-(void)setTrafficDescription:(NSString *)arg1 ;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(void)addRouteDescriptions:(id)arg1 ;
-(void)setIsTrace:(BOOL)arg1 ;
-(void)setRevisionID:(NSData *)arg1 ;
-(void)addWaypoints:(id)arg1 ;
-(void)setRouteIndex:(unsigned)arg1 ;
-(unsigned long long)trafficColorsCount;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficColorOffsetsCount;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)routeDescriptionsCount;
-(void)clearRouteDescriptions;
-(id)routeDescriptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDestinationName;
-(unsigned)originalDuration;
-(void)setHasOriginalDuration:(BOOL)arg1 ;
-(BOOL)hasOriginalDuration;
-(BOOL)hasRouteID;
-(unsigned*)trafficColors;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)trafficColorOffsets;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)historicalDuration;
-(void)setHasHistoricalDuration:(BOOL)arg1 ;
-(BOOL)hasHistoricalDuration;
-(BOOL)canNavigate;
-(void)setHasCanNavigate:(BOOL)arg1 ;
-(BOOL)hasCanNavigate;
-(BOOL)hasOriginalSuggestedRoute;
-(BOOL)hasDecoderData;
-(void)setHasShowTransitSchedules:(BOOL)arg1 ;
-(BOOL)hasShowTransitSchedules;
-(BOOL)hasTrafficDescription;
-(BOOL)hasOriginalRouteID;
-(void)setRouteDescriptions:(NSMutableArray *)arg1 ;
-(BOOL)isTrace;
-(void)setHasIsTrace:(BOOL)arg1 ;
-(BOOL)hasIsTrace;
-(BOOL)hasRevisionID;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
-(unsigned)routeIndex;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
-(BOOL)needsStepsRewrite;
-(BOOL)needsWaypointRemoval:(unsigned long long)arg1 ;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(void)_initForPreHunterWithRoute:(id)arg1 stringFormatter:(id)arg2 ;
-(GEOCompanionWaypoint *)companionOrigin;
-(GEOCompanionWaypoint *)companionDestination;
-(unsigned long long)stepIndexWithID:(unsigned long long)arg1 ;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 stringFormatter:(id)arg3 traffic:(id)arg4 ;
-(BOOL)isSyntheticRoute;
-(GEOComposedWaypoint *)composedOrigin;
-(GEOComposedWaypoint *)composedDestination;
-(id)stepWithID:(unsigned long long)arg1 ;
@end

