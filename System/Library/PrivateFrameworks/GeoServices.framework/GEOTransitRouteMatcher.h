/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORouteMatcher.h>

@class GEOMotionContext, NSArray;

@interface GEOTransitRouteMatcher : GEORouteMatcher {

	GEOMotionContext* _motionContext;
	NSArray* _stationsOnRoute;
	NSArray* _routeMatchUpdaters;
	NSArray* _stepRanges;
	double _distanceToClosestWalkingSegment;

}

@property (nonatomic,readonly) double distanceToClosestWalkingSegment;              //@synthesize distanceToClosestWalkingSegment=_distanceToClosestWalkingSegment - In the implementation block
-(id)route;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(void)_startRouteMatch;
-(void)_considerCandidateMatch:(id)arg1 ;
-(id)_stepForPointIndex:(unsigned)arg1 previousStep:(id)arg2 ;
-(BOOL)_shouldConsiderCourseForLocation:(id)arg1 ;
-(double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2 ;
-(void)_insertUpdater:(id)arg1 into:(id)arg2 ;
-(BOOL)_stepsInSameRange:(id)arg1 nextStep:(id)arg2 ;
-(id)initWithRoute:(id)arg1 motionContext:(id)arg2 ;
-(BOOL)isStationCoordinateOnRoute:(GEOCoarseLocationLatLng)arg1 ;
-(id)motionContext;
-(double)distanceToClosestWalkingSegment;
@end

