/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSBundle, NSString;


@protocol MNLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate; 
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
@optional
-(id)initWithEffectiveBundleIdentifier:(id)arg1;
-(id)initWithEffectiveBundle:(id)arg1;
-(void)setCLParameters:(id)arg1;

@required
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(int)authorizationStatus;
-(BOOL)isSimulation;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1;
-(void)startUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(BOOL)usesCLMapCorrection;
-(void)resetForActiveTileGroupChanged;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(id)arg1;
-(NSString *)effectiveBundleIdentifier;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(/*^block*/id)arg1;
-(BOOL)coarseModeEnabled;
-(BOOL)isTracePlayer;
-(unsigned long long)traceVersion;
-(double)timeScale;

@end

