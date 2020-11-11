/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNLocationProvider.h>

@protocol MNLocationProviderDelegate;
@class NSTimer, MNLocation, MNActiveRouteInfo, NSDate, NSBundle, NSString;

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {

	id<MNLocationProviderDelegate> _delegate;
	long long _simulationType;
	NSTimer* _locationUpdateTimer;
	MNLocation* _previousLocation;
	PolylineCoordinate _previousPolylineCoordinate;
	MNActiveRouteInfo* _routeInfo;
	long long _state;
	unsigned long long _currentLegIndex;
	NSDate* _startWaitingDate;

}

@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) BOOL coarseModeEnabled; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(int)authorizationStatus;
-(BOOL)isSimulation;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(void)startUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(BOOL)usesCLMapCorrection;
-(void)resetForActiveTileGroupChanged;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(BOOL)coarseModeEnabled;
-(BOOL)isTracePlayer;
-(unsigned long long)traceVersion;
-(double)timeScale;
-(id)_stringForState:(long long)arg1 ;
-(SCD_Struct_MN16)_updateForProceedingToStartOfLegOverTimeDelta:(double)arg1 outCourse:(out double*)arg2 outSpeed:(out double*)arg3 ;
-(SCD_Struct_MN16)_updateForFollowingRouteOverTimeDelta:(double)arg1 outCourse:(out double*)arg2 outSpeed:(out double*)arg3 ;
-(SCD_Struct_MN16)_updateForProceedingToWaypointOverTimeDelta:(double)arg1 outCourse:(out double*)arg2 outSpeed:(out double*)arg3 ;
-(SCD_Struct_MN16)_updateForWaitingAtWaypointOverTimeDelta:(double)arg1 outCourse:(out double*)arg2 outSpeed:(out double*)arg3 ;
-(id)_locationWithCoordinate:(SCD_Struct_MN16)arg1 course:(double)arg2 speed:(double)arg3 ;
-(PolylineCoordinate)_simulationStartRouteCoordinate;
-(SCD_Struct_MN16)_projectedCoordinateOffRouteFrom:(SCD_Struct_MN16)arg1 toCoordinate:(SCD_Struct_MN16)arg2 overTimeDelta:(double)arg3 outCourse:(out double*)arg4 outSpeed:(out double*)arg5 ;
-(PolylineCoordinate)_projectedCoordinateOnRouteFrom:(PolylineCoordinate)arg1 overTimeDelta:(double)arg2 outSpeed:(out double*)arg3 ;
-(BOOL)_isCoordinate:(PolylineCoordinate)arg1 atEndOfLeg:(id)arg2 ;
-(double)_modifiedSpeedForSpeed:(double)arg1 ;
-(double)_courseFromCoordinate:(SCD_Struct_MN16)arg1 toCoordinate:(SCD_Struct_MN16)arg2 ;
-(void)_sendLocationUpdate:(id)arg1 ;
-(id)initWithSimulationType:(long long)arg1 routeInfo:(id)arg2 ;
-(void)updateWithRouteInfo:(id)arg1 ;
@end

