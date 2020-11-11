/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAutomobileOptions, GEOCyclingOptions, GEODestinationInfo, NSString, GEOTransitOptions, GEOWalkingOptions;

@interface GEORouteAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _additionalTransportTypes;
	SCD_Struct_GE85* _uiContexts;
	GEOTimepoint _timepoint;
	GEOAutomobileOptions* _automobileOptions;
	GEOCyclingOptions* _cyclingOptions;
	GEODestinationInfo* _destinationInfo;
	NSString* _phoneticLocaleIdentifier;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _basicPointsToBeIncluded;
	int _destinationType;
	int _mainTransportType;
	int _trafficType;
	unsigned _walkingLimitMeters;
	BOOL _directZilchByLaneFlowlines;
	BOOL _enableExperimentalMode;
	BOOL _includeContingencyRoutes;
	BOOL _includeHistoricTravelTime;
	BOOL _includeLaneGuidance;
	BOOL _includeManeuverIcons;
	BOOL _includePhonetics;
	BOOL _includeTrafficAlongRoute;
	BOOL _includeTrafficIncidents;
	BOOL _includeZilchPoints;
	BOOL _includeCrossLanguagePhonetics;
	BOOL _includeLaneWidths;
	BOOL _useMetricThreshold;
	struct {
		unsigned has_timepoint : 1;
		unsigned has_basicPointsToBeIncluded : 1;
		unsigned has_destinationType : 1;
		unsigned has_mainTransportType : 1;
		unsigned has_trafficType : 1;
		unsigned has_walkingLimitMeters : 1;
		unsigned has_directZilchByLaneFlowlines : 1;
		unsigned has_enableExperimentalMode : 1;
		unsigned has_includeContingencyRoutes : 1;
		unsigned has_includeHistoricTravelTime : 1;
		unsigned has_includeLaneGuidance : 1;
		unsigned has_includeManeuverIcons : 1;
		unsigned has_includePhonetics : 1;
		unsigned has_includeTrafficAlongRoute : 1;
		unsigned has_includeTrafficIncidents : 1;
		unsigned has_includeZilchPoints : 1;
		unsigned has_includeCrossLanguagePhonetics : 1;
		unsigned has_includeLaneWidths : 1;
		unsigned has_useMetricThreshold : 1;
		unsigned read_unknownFields : 1;
		unsigned read_additionalTransportTypes : 1;
		unsigned read_uiContexts : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_cyclingOptions : 1;
		unsigned read_destinationInfo : 1;
		unsigned read_phoneticLocaleIdentifier : 1;
		unsigned read_transitOptions : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMainTransportType; 
@property (assign,nonatomic) int mainTransportType; 
@property (assign,nonatomic) BOOL hasIncludePhonetics; 
@property (assign,nonatomic) BOOL includePhonetics; 
@property (assign,nonatomic) BOOL hasIncludeManeuverIcons; 
@property (assign,nonatomic) BOOL includeManeuverIcons; 
@property (assign,nonatomic) BOOL hasIncludeZilchPoints; 
@property (assign,nonatomic) BOOL includeZilchPoints; 
@property (assign,nonatomic) BOOL hasIncludeContingencyRoutes; 
@property (assign,nonatomic) BOOL includeContingencyRoutes; 
@property (assign,nonatomic) BOOL hasIncludeLaneGuidance; 
@property (assign,nonatomic) BOOL includeLaneGuidance; 
@property (assign,nonatomic) BOOL hasBasicPointsToBeIncluded; 
@property (assign,nonatomic) int basicPointsToBeIncluded; 
@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) int trafficType; 
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier; 
@property (assign,nonatomic) BOOL hasIncludeTrafficAlongRoute; 
@property (assign,nonatomic) BOOL includeTrafficAlongRoute; 
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) GEOTimepoint timepoint; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasIncludeTrafficIncidents; 
@property (assign,nonatomic) BOOL includeTrafficIncidents; 
@property (assign,nonatomic) BOOL hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters; 
@property (nonatomic,readonly) unsigned long long additionalTransportTypesCount; 
@property (nonatomic,readonly) int* additionalTransportTypes; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasCyclingOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (nonatomic,readonly) unsigned long long uiContextsCount; 
@property (nonatomic,readonly) int* uiContexts; 
@property (assign,nonatomic) BOOL hasUseMetricThreshold; 
@property (assign,nonatomic) BOOL useMetricThreshold; 
@property (assign,nonatomic) BOOL hasEnableExperimentalMode; 
@property (assign,nonatomic) BOOL enableExperimentalMode; 
@property (nonatomic,readonly) BOOL hasDestinationInfo; 
@property (nonatomic,retain) GEODestinationInfo * destinationInfo; 
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType; 
@property (assign,nonatomic) BOOL hasIncludeCrossLanguagePhonetics; 
@property (assign,nonatomic) BOOL includeCrossLanguagePhonetics; 
@property (assign,nonatomic) BOOL hasDirectZilchByLaneFlowlines; 
@property (assign,nonatomic) BOOL directZilchByLaneFlowlines; 
@property (assign,nonatomic) BOOL hasIncludeLaneWidths; 
@property (assign,nonatomic) BOOL includeLaneWidths; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)defaultRouteAttributes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)destinationType;
-(void)setDestinationType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(void)setTrafficType:(int)arg1 ;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(int)trafficType;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMainTransportType;
-(int)mainTransportType;
-(GEOAutomobileOptions *)automobileOptions;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)hasCyclingOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(void)setMainTransportType:(int)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(id)trafficTypeAsString:(int)arg1 ;
-(int)StringAsTrafficType:(id)arg1 ;
-(NSString *)phoneticLocaleIdentifier;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(GEODestinationInfo *)destinationInfo;
-(void)setIncludePhonetics:(BOOL)arg1 ;
-(void)setIncludeManeuverIcons:(BOOL)arg1 ;
-(void)setIncludeZilchPoints:(BOOL)arg1 ;
-(void)setIncludeContingencyRoutes:(BOOL)arg1 ;
-(void)setIncludeLaneGuidance:(BOOL)arg1 ;
-(void)setBasicPointsToBeIncluded:(int)arg1 ;
-(void)setIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(void)setTimepoint:(GEOTimepoint)arg1 ;
-(void)setIncludeTrafficIncidents:(BOOL)arg1 ;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(void)addAdditionalTransportType:(int)arg1 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(void)addUiContext:(int)arg1 ;
-(void)setUseMetricThreshold:(BOOL)arg1 ;
-(void)setEnableExperimentalMode:(BOOL)arg1 ;
-(void)setDestinationInfo:(GEODestinationInfo *)arg1 ;
-(void)setIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(void)setDirectZilchByLaneFlowlines:(BOOL)arg1 ;
-(void)setIncludeLaneWidths:(BOOL)arg1 ;
-(unsigned long long)additionalTransportTypesCount;
-(void)clearAdditionalTransportTypes;
-(int)additionalTransportTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)uiContextsCount;
-(void)clearUiContexts;
-(int)uiContextAtIndex:(unsigned long long)arg1 ;
-(void)setHasMainTransportType:(BOOL)arg1 ;
-(id)mainTransportTypeAsString:(int)arg1 ;
-(int)StringAsMainTransportType:(id)arg1 ;
-(BOOL)includePhonetics;
-(void)setHasIncludePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludePhonetics;
-(BOOL)includeManeuverIcons;
-(void)setHasIncludeManeuverIcons:(BOOL)arg1 ;
-(BOOL)hasIncludeManeuverIcons;
-(BOOL)includeZilchPoints;
-(void)setHasIncludeZilchPoints:(BOOL)arg1 ;
-(BOOL)hasIncludeZilchPoints;
-(BOOL)includeContingencyRoutes;
-(void)setHasIncludeContingencyRoutes:(BOOL)arg1 ;
-(BOOL)hasIncludeContingencyRoutes;
-(BOOL)includeLaneGuidance;
-(void)setHasIncludeLaneGuidance:(BOOL)arg1 ;
-(BOOL)hasIncludeLaneGuidance;
-(int)basicPointsToBeIncluded;
-(void)setHasBasicPointsToBeIncluded:(BOOL)arg1 ;
-(BOOL)hasBasicPointsToBeIncluded;
-(id)basicPointsToBeIncludedAsString:(int)arg1 ;
-(int)StringAsBasicPointsToBeIncluded:(id)arg1 ;
-(BOOL)hasPhoneticLocaleIdentifier;
-(BOOL)includeTrafficAlongRoute;
-(void)setHasIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(BOOL)hasIncludeTrafficAlongRoute;
-(GEOTimepoint)timepoint;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(BOOL)hasTimepoint;
-(BOOL)includeTrafficIncidents;
-(void)setHasIncludeTrafficIncidents:(BOOL)arg1 ;
-(BOOL)hasIncludeTrafficIncidents;
-(unsigned)walkingLimitMeters;
-(void)setHasWalkingLimitMeters:(BOOL)arg1 ;
-(BOOL)hasWalkingLimitMeters;
-(int*)additionalTransportTypes;
-(void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalTransportTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalTransportTypes:(id)arg1 ;
-(int*)uiContexts;
-(void)setUiContexts:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)uiContextsAsString:(int)arg1 ;
-(int)StringAsUiContexts:(id)arg1 ;
-(BOOL)useMetricThreshold;
-(void)setHasUseMetricThreshold:(BOOL)arg1 ;
-(BOOL)hasUseMetricThreshold;
-(BOOL)enableExperimentalMode;
-(void)setHasEnableExperimentalMode:(BOOL)arg1 ;
-(BOOL)hasEnableExperimentalMode;
-(BOOL)hasDestinationInfo;
-(id)destinationTypeAsString:(int)arg1 ;
-(int)StringAsDestinationType:(id)arg1 ;
-(BOOL)includeCrossLanguagePhonetics;
-(void)setHasIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludeCrossLanguagePhonetics;
-(BOOL)directZilchByLaneFlowlines;
-(void)setHasDirectZilchByLaneFlowlines:(BOOL)arg1 ;
-(BOOL)hasDirectZilchByLaneFlowlines;
-(BOOL)includeLaneWidths;
-(void)setHasIncludeLaneWidths:(BOOL)arg1 ;
-(BOOL)hasIncludeLaneWidths;
-(void)buildRouteAttributes:(id)arg1 result:(/*^block*/id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(/*^block*/id)arg3 ;
@end
