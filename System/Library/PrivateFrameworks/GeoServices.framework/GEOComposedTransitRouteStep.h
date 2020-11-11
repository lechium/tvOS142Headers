/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;
@class GEOTransitStep, NSArray, GEOPBTransitStop, GEOPBTransitHall, GEOTransitScheduleInfo, NSString;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {

	int _maneuver;
	unsigned _startTime;
	unsigned _duration;
	GEOTransitStep* _transitStep;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
	NSArray* _steppingArtwork;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	GEOPBTransitHall* _originHall;
	GEOPBTransitHall* _destinationHall;

}

@property (nonatomic,readonly) int maneuver;                                                                  //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) GEOComposedTransitRouteStep * previousTransitStep; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * nextTransitStep; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * originStop;                                                 //@synthesize originStop=_originStop - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * destinationStop;                                            //@synthesize destinationStop=_destinationStop - In the implementation block
@property (nonatomic,readonly) GEOPBTransitHall * originHall;                                                 //@synthesize originHall=_originHall - In the implementation block
@property (nonatomic,readonly) GEOPBTransitHall * destinationHall;                                            //@synthesize destinationHall=_destinationHall - In the implementation block
@property (nonatomic,readonly) GEOTransitStep * transitStep;                                                  //@synthesize transitStep=_transitStep - In the implementation block
@property (nonatomic,readonly) id<GEOTransitVehicleEntries> vehicleEntries; 
@property (nonatomic,readonly) GEOTransitScheduleInfo * scheduleInfo; 
@property (nonatomic,readonly) unsigned long long originTransitEntityMuid; 
@property (nonatomic,readonly) unsigned long long destinationTransitEntityMuid; 
@property (nonatomic,readonly) NSString * originStopIntermediateListName; 
@property (nonatomic,readonly) NSString * destinationStopIntermediateListName; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)startTime;
-(unsigned)duration;
-(BOOL)hasDuration;
-(double)distance;
-(id)instructions;
-(GEOTransitScheduleInfo *)scheduleInfo;
-(GEOTransitStep *)transitStep;
-(id)startingStop;
-(id)endingStop;
-(int)maneuver;
-(void)_populateIncidentsWithDecoderData:(id)arg1 ;
-(void)_populateArtworksWithDecoderData:(id)arg1 ;
-(GEOPBTransitStop *)originStop;
-(GEOPBTransitStop *)destinationStop;
-(id)previousStop;
-(id)nextStop;
-(id)nextBoardingStep;
-(id)previousBoardingStep;
-(id)nextAlightingStep;
-(id)previousAlightingStep;
-(GEOPBTransitHall *)originHall;
-(SCD_Struct_GE32)startGeoCoordinate;
-(GEOPBTransitHall *)destinationHall;
-(SCD_Struct_GE32)endGeoCoordinate;
-(unsigned long long)_muidForStop:(id)arg1 ;
-(id)_largestEntityAtStop:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)_intermediateListNameForStop:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 routeSegmentType:(long long)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 duration:(unsigned)arg6 pointRange:(NSRange)arg7 ;
-(id<GEOTransitVehicleEntries>)vehicleEntries;
-(GEOComposedTransitRouteStep *)previousTransitStep;
-(GEOComposedTransitRouteStep *)nextTransitStep;
-(BOOL)isArrivalStep;
-(unsigned long long)originTransitEntityMuid;
-(unsigned long long)destinationTransitEntityMuid;
-(NSString *)originStopIntermediateListName;
-(NSString *)destinationStopIntermediateListName;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(id)steppingArtwork;
@end

