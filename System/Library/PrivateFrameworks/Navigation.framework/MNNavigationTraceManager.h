/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MNTracePlayerObserver.h>
#import <libobjc.A.dylib/MNLocationProvider.h>
#import <libobjc.A.dylib/GEOMotionContextProvider.h>

@protocol MNNavigationTraceManagerDelegate, MNLocationProviderDelegate, GEOMotionContextProviderDelegate;
@class NSBundle, NSString, MNTracePlayer, MNTraceRecorder, MNTraceEventRecorder;

@interface MNNavigationTraceManager : NSObject <MNTracePlayerObserver, MNLocationProvider, GEOMotionContextProvider> {

	MNTracePlayer* _tracePlayer;
	MNTraceRecorder* _traceRecorder;
	MNTraceEventRecorder* _traceEventRecorder;
	int _navigationType;
	id<MNNavigationTraceManagerDelegate> _traceManagerDelegate;
	id<MNLocationProviderDelegate> _locationProviderDelegate;
	id<GEOMotionContextProviderDelegate> _motionContextProviderDelegate;

}

@property (assign,nonatomic,__weak) id<MNNavigationTraceManagerDelegate> traceManagerDelegate;                                             //@synthesize traceManagerDelegate=_traceManagerDelegate - In the implementation block
@property (nonatomic,readonly) MNTracePlayer * tracePlayer;                                                                                //@synthesize tracePlayer=_tracePlayer - In the implementation block
@property (nonatomic,readonly) MNTraceRecorder * traceRecorder;                                                                            //@synthesize traceRecorder=_traceRecorder - In the implementation block
@property (nonatomic,readonly) MNTraceEventRecorder * traceEventRecorder;                                                                  //@synthesize traceEventRecorder=_traceEventRecorder - In the implementation block
@property (assign,nonatomic) int navigationType;                                                                                           //@synthesize navigationType=_navigationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize locationProviderDelegate=_locationProviderDelegate - In the implementation block
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
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;                                                   //@synthesize motionContextProviderDelegate=_motionContextProviderDelegate - In the implementation block
-(void)dealloc;
-(void)close;
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(int)authorizationStatus;
-(void)setNavigationType:(int)arg1 ;
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(void)startMotionUpdates;
-(int)navigationType;
-(BOOL)isSimulation;
-(BOOL)_isNavigating;
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
-(MNTraceRecorder *)traceRecorder;
-(MNTracePlayer *)tracePlayer;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(id)_defaultTraceNameForDestination:(id)arg1 isSimulation:(BOOL)arg2 ;
-(id)_tracePathForTraceName:(id)arg1 ;
-(void)_recordEnvironmentInfo:(id)arg1 ;
-(void)_recordStylesheet:(id)arg1 ;
-(id)_validFilenameForTraceName:(id)arg1 ;
-(id)_defaultTraceExtension;
-(unsigned long long)_startIndexForNavigation;
-(BOOL)usesCLMapCorrection;
-(void)tracePlayerDidStart:(id)arg1 ;
-(void)tracePlayerDidStop:(id)arg1 ;
-(void)tracePlayerDidPause:(id)arg1 ;
-(void)tracePlayerDidResume:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2 ;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4 ;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 ;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 ;
-(void)tracePlayerDidStayOnRoute:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2 ;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg1 ;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
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
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
-(void)openForPlaybackWithTracePath:(id)arg1 ;
-(void)openForRecordingWithTraceRecordingData:(id)arg1 traceName:(id)arg2 isReconnecting:(BOOL)arg3 isSimulation:(BOOL)arg4 ;
-(void)openForSimulationWithRoute:(id)arg1 traceRecordingData:(id)arg2 traceNameOverride:(id)arg3 ;
-(id<MNNavigationTraceManagerDelegate>)traceManagerDelegate;
-(void)setTraceManagerDelegate:(id<MNNavigationTraceManagerDelegate>)arg1 ;
-(MNTraceEventRecorder *)traceEventRecorder;
@end

