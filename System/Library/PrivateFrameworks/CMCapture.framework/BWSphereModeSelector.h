/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWSphereModeSelector : NSObject {

	CFStringRef _currentSphereMode;
	float _maximumFrameRate;
	BOOL _sphereVideoSupported;
	BOOL _sphereVideoEnabled;
	BOOL _avoidsSphereRecentering;
	BOOL _enablesSphereWhenAvailable;
	BOOL _motionDataInvalid;
	BOOL _lowPowerSphereModeEnabled;
	BOOL _stillPreviewActiveSupported;
	BOOL _zeroShutterLagEnabled;
	int _sphereThermalLevel;
	BOOL _tripodModeEnabled;
	BOOL _depthDataDeliveryEnabled;
	BOOL _overCaptureEnabled;
	BOOL _variableFrameRateVideoEnabled;

}

@property (assign,nonatomic) float maximumFrameRate; 
@property (nonatomic,readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled; 
@property (assign,nonatomic) BOOL avoidsSphereRecentering; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (assign,nonatomic) BOOL zeroShutterLagEnabled; 
@property (assign,nonatomic) BOOL lowPowerSphereModeEnabled; 
@property (assign,nonatomic) int systemThermalLevel; 
@property (assign,nonatomic) BOOL tripodModeEnabled; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL overCaptureEnabled; 
@property (assign,nonatomic) BOOL variableFrameRateVideoEnabled; 
@property (readonly) CFStringRef currentSphereMode; 
+(void)initialize;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)overCaptureEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(id)initWithStillActivePreviewSupported:(BOOL)arg1 sphereVideoSupported:(BOOL)arg2 ;
-(void)_updateSphereMode;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(BOOL)enablesSphereWhenAvailable;
-(CFStringRef)currentSphereMode;
-(BOOL)sphereVideoSupported;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(BOOL)avoidsSphereRecentering;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(BOOL)sphereVideoEnabled;
-(void)setSystemThermalLevel:(int)arg1 ;
-(int)systemThermalLevel;
-(BOOL)tripodModeEnabled;
-(void)setTripodModeEnabled:(BOOL)arg1 ;
-(BOOL)lowPowerSphereModeEnabled;
-(void)setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(void)setVariableFrameRateVideoEnabled:(BOOL)arg1 ;
-(BOOL)variableFrameRateVideoEnabled;
@end

