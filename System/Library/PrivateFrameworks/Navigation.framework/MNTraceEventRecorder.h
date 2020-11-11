/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class MNTraceRecorder, NSMutableArray, GEOComposedRoute, MNLocation, NSArray, NSString, NSUUID;

@interface MNTraceEventRecorder : NSObject <MNNavigationSessionObserver> {

	MNTraceRecorder* _traceRecorder;
	NSMutableArray* _eventHistory;
	NSMutableArray* _events;
	GEOComposedRoute* _route;
	unsigned long long _lastTrackedStepIndex;
	MNLocation* _lastTrackedLocation;
	double _timeAtStartOfRoute;
	NSArray* _lastInstructions;
	NSString* _lastAnnouncement;
	BOOL _isShowingSecondarySign;
	unsigned long long _numPendingAnnouncements;
	unsigned long long _announcementStage;
	double _distanceToManeuver;
	NSUUID* _lastPrimarySignID;
	NSUUID* _lastSecondarySignID;

}

@property (nonatomic,readonly) NSArray * eventHistory;              //@synthesize eventHistory=_eventHistory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationSessionDidStart:(id)arg1 isReconnecting:(BOOL)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5 ;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSessionBeginGuidanceUpdate:(id)arg1 ;
-(void)navigationSessionEndGuidanceUpdate:(id)arg1 ;
-(void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(void)navigationSession:(id)arg1 showLaneDirections:(id)arg2 ;
-(void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2 ;
-(void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2 ;
-(double)timeSinceStartOfRoute;
-(id)initWithTraceRecorder:(id)arg1 ;
-(NSArray *)eventHistory;
@end

