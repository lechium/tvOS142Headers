/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDevice.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceControlRequestQueue, AVWeakReference, NSMutableArray, NSMutableDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _fcsAttributes;
	NSObject*<OS_dispatch_queue> _devicePropsQueue;
	NSString* _fcsUID;
	long long _position;
	NSString* _localizedName;
	NSArray* _formats;
	AVCaptureDeviceFormat* _activeFormat;
	AVCaptureDeviceFormat* _activeDepthDataFormat;
	NSString* _activeSessionPreset;
	SCD_Struct_AV0 _activeDepthDataMinFrameDuration;
	SCD_Struct_AV0 _activeMinFrameDuration;
	BOOL _activeMinFrameDurationSetByClient;
	SCD_Struct_AV0 _activeMaxFrameDuration;
	BOOL _activeMaxFrameDurationSetByClient;
	BOOL _cachesFigCaptureSourceConfigurationChanges;
	long long _focusMode;
	CGPoint _focusPointOfInterest;
	float _lensPositionKVO;
	BOOL _adjustingFocus;
	long long _autoFocusRangeRestriction;
	BOOL _smoothAutoFocusEnabled;
	BOOL _cameraOption9;
	BOOL _cameraOption10;
	CGRect _cameraFaceResult29;
	BOOL _cameraFaceResult30;
	long long _exposureMode;
	SCD_Struct_AV0 _exposureDurationKVO;
	float _ISOKVO;
	float _exposureTargetBias;
	float _exposureTargetOffsetKVO;
	CGPoint _exposurePointOfInterest;
	BOOL _adjustingExposure;
	BOOL _waitingForExposureAdjustmentBeforeLocking;
	long long _wbMode;
	SCD_Struct_AV32 _deviceWhiteBalanceGainsKVO;
	SCD_Struct_AV32 _grayWorldDeviceWhiteBalanceGainsKVO;
	BOOL _adjustingWB;
	unsigned long long _wbCalibrationCount;
	SCD_Struct_AV23* _wbCalibrationTemperatures;
	double* _wbCalibrationMatrices;
	double _wbLastPredictedTemp;
	double _wbSeedTemp;
	BOOL _wbSeedEnabled;
	unsigned long long _wbTemperatureIterations;
	BOOL _providesStortorgetMetadata;
	BOOL _automaticallyAdjustsImageControlMode;
	AVCaptureDeviceControlRequestQueue* _manualFocusControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _biasedExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualWhiteBalanceControlRequests;
	SCD_Struct_AV0 _lastCustomExposureDuration;
	float _lastCustomExposureISO;
	long long _imageControlMode;
	long long _flashMode;
	BOOL _avcaptureDeviceAutoFlashEnabled;
	BOOL _photoOutputFlashSceneEnabled;
	BOOL _flashActive;
	BOOL _flashSceneDetectedForPhotoOutput;
	BOOL _flashAvailable;
	long long _torchMode;
	BOOL _torchActive;
	float _torchLevel;
	BOOL _torchAvailable;
	BOOL _isConnected;
	BOOL _isSuspended;
	BOOL _subjectMonitoringEnabled;
	BOOL _faceDetectionDrivenImageProcessingEnabled;
	CGRect _faceRectangle;
	int _faceRectangleAngle;
	BOOL _automaticallyAdjustsVideoHDREnabled;
	BOOL _videoHDREnabled;
	BOOL _HDRSceneDetectedForPhotoOutput;
	BOOL _isStillImageStabilizationScene;
	long long _activeColorSpace;
	float _videoZoomFactor;
	float _videoZoomRampTarget;
	int _videoZoomRampCounter;
	float _videoZoomRampAcceleration;
	double _minAvailableVideoZoomFactor;
	double _maxAvailableVideoZoomFactor;
	BOOL _depthDataDeliveryEnabled;
	NSString* _bravoCameraSelectionBehavior;
	AVWeakReference* _weakReference;
	NSMutableArray* _captureSourceSupportedMetadata;
	NSDictionary* _supportedOptionalFaceDetectionFeatures;
	BOOL _eyeDetectionEnabled;
	BOOL _eyeClosedDetectionEnabled;
	BOOL _smileDetectionEnabled;
	NSArray* _availableBoxedMetadataFormatDescriptions;
	NSDictionary* _sessionPresetCompressionSettings;
	NSDictionary* _h264EncoderLimitations;
	NSDictionary* _hevcEncoderSettings;
	NSObject*<OS_dispatch_queue> _observedHighFrequencyPropertiesQueue;
	NSMutableDictionary* _observedHighFrequencyPropertyCounts;
	NSMutableDictionary* _propertyToFigCaptureSourcePropertyMap;
	NSMutableDictionary* _cachedFigCaptureSourceProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_devices;
+(id)_devicesWithPriorRegisteredDevices:(id)arg1 ;
+(void)_reconnectDevices:(id)arg1 ;
+(id)_newFigCaptureSources;
+(BOOL)_cameraAccessIsEnabled;
-(id)init;
-(void)dealloc;
-(id)localizedName;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(long long)position;
-(id)uniqueID;
-(BOOL)isConnected;
-(id)deviceType;
-(id)manufacturer;
-(void)setExposureMode:(long long)arg1 ;
-(long long)exposureMode;
-(id)modelID;
-(double)videoZoomFactor;
-(BOOL)isAdjustingFocus;
-(BOOL)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(BOOL)hasFlash;
-(SCD_Struct_AV0)activeVideoMaxFrameDuration;
-(id)activeFormat;
-(BOOL)lockForConfiguration:(id*)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)unlockForConfiguration;
-(void)setVideoZoomFactor:(double)arg1 ;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(void)setActiveDepthDataFormat:(id)arg1 ;
-(void)setActiveDepthDataMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(SCD_Struct_AV0)activeDepthDataMinFrameDuration;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(id)formats;
-(void)setActiveFormat:(id)arg1 ;
-(BOOL)isFaceDetectionSupported;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(BOOL)isVideoStabilizationSupported;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(id)activeDepthDataFormat;
-(BOOL)isWideColorSupported;
-(BOOL)isSISSupported;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV0)activeVideoMinFrameDuration;
-(SCD_Struct_AV18)maxH264PhotoDimensions;
-(SCD_Struct_AV18)maxH264VideoDimensions;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(int)minMacroblocksForHighProfileAbove30fps;
-(BOOL)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(int)hevcTurboModeVersion;
-(BOOL)hevcAllowBFramesForHighCTUCountAndHighResolution;
-(BOOL)hevcAllowBFramesForHighCTUCount;
-(BOOL)isHEVCMemoryUsageMinimizationSupported;
-(BOOL)isHEVCRelaxedAverageBitRateTargetSupported;
-(BOOL)isHEVCSupported;
-(BOOL)isHEVCPreferred;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)hasMediaType:(id)arg1 ;
-(id)availableBoxedMetadataFormatDescriptions;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)isSubjectAreaChangeMonitoringEnabled;
-(void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isFaceDetectionDuringVideoPreviewSupported;
-(BOOL)isFaceDetectionDrivenImageProcessingEnabled;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(BOOL)providesStortorgetMetadata;
-(void)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1 ;
-(BOOL)cachesFigCaptureSourceConfigurationChanges;
-(void)_setVideoHDREnabled:(BOOL)arg1 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(BOOL)isLensStabilizationSupported;
-(BOOL)isMachineReadableCodeDetectionSupported;
-(BOOL)isActiveVideoMinFrameDurationSet;
-(BOOL)isActiveVideoMaxFrameDurationSet;
-(BOOL)isLockedForConfiguration;
-(BOOL)isFlashAvailable;
-(BOOL)isFlashActive;
-(BOOL)isFlashModeSupported:(long long)arg1 ;
-(BOOL)_isFlashScene;
-(BOOL)isFlashSceneDetectedForPhotoOutput;
-(BOOL)hasTorch;
-(float)torchLevel;
-(BOOL)isTorchModeSupported:(long long)arg1 ;
-(BOOL)isTorchAvailable;
-(BOOL)isTorchActive;
-(BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(BOOL)isHDRSceneDetectedForPhotoOutput;
-(BOOL)isFocusModeSupported:(long long)arg1 ;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(BOOL)isAutoFocusRangeRestrictionSupported;
-(long long)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(BOOL)isSmoothAutoFocusSupported;
-(BOOL)isSmoothAutoFocusEnabled;
-(void)setSmoothAutoFocusEnabled:(BOOL)arg1 ;
-(float)lensPosition;
-(BOOL)isLockingFocusWithCustomLensPositionSupported;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(float)lensAperture;
-(BOOL)isExposureModeSupported:(long long)arg1 ;
-(BOOL)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(SCD_Struct_AV0)exposureDuration;
-(float)ISO;
-(float)ISODigitalThreshold;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(float)exposureTargetOffset;
-(float)exposureTargetBias;
-(float)minExposureTargetBias;
-(float)maxExposureTargetBias;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAdjustingExposure;
-(BOOL)isWhiteBalanceModeSupported:(long long)arg1 ;
-(BOOL)isAdjustingWhiteBalance;
-(SCD_Struct_AV32)deviceWhiteBalanceGains;
-(SCD_Struct_AV32)grayWorldDeviceWhiteBalanceGains;
-(float)maxWhiteBalanceGain;
-(BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV32)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SCD_Struct_AV23)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV32)arg1 ;
-(SCD_Struct_AV32)deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV23)arg1 ;
-(SCD_Struct_AV23)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV32)arg1 ;
-(SCD_Struct_AV32)deviceWhiteBalanceGainsForTemperatureAndTintValues:(SCD_Struct_AV23)arg1 ;
-(BOOL)isImageControlModeSupported:(long long)arg1 ;
-(BOOL)automaticallyAdjustsImageControlMode;
-(void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(long long)imageControlMode;
-(void)setImageControlMode:(long long)arg1 ;
-(BOOL)automaticallyAdjustsVideoHDREnabled;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1 ;
-(BOOL)isVideoHDREnabled;
-(void)setVideoHDREnabled:(BOOL)arg1 ;
-(long long)activeColorSpace;
-(void)setActiveColorSpace:(long long)arg1 ;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(BOOL)isRampingVideoZoom;
-(void)cancelVideoZoomRamp;
-(double)dualCameraSwitchOverVideoZoomFactor;
-(double)minAvailableVideoZoomFactor;
-(double)maxAvailableVideoZoomFactor;
-(id)supportedMetadataObjectIdentifiers;
-(BOOL)isEyeDetectionSupported;
-(BOOL)isEyeClosedDetectionSupported;
-(BOOL)isSmileDetectionSupported;
-(void)setEyeDetectionEnabled:(BOOL)arg1 ;
-(void)setEyeClosedDetectionEnabled:(BOOL)arg1 ;
-(void)setSmileDetectionEnabled:(BOOL)arg1 ;
-(BOOL)eyeDetectionEnabled;
-(BOOL)eyeClosedDetectionEnabled;
-(BOOL)smileDetectionEnabled;
-(BOOL)isHEIFSupported;
-(id)bravoCameraSelectionBehavior;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 allowSendingWorkToMainThread:(BOOL)arg2 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(id)_copyFormatsArray;
-(void)_incrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_decrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_updateFigCaptureSourceObserverCounts;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 ;
-(void)_drainManualControlRequestQueues;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)_setActiveFormat:(id)arg1 resetVideoZoomFactorAndMinMaxFrameDurations:(BOOL)arg2 sessionPreset:(id)arg3 ;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 cacheOnly:(BOOL)arg3 ;
-(int)_setActiveVideoMinFrameDurationInternal:(SCD_Struct_AV0)arg1 ;
-(int)_setActiveVideoMaxFrameDurationInternal:(SCD_Struct_AV0)arg1 ;
-(int)_setFocusWithMode:(long long)arg1 lensPosition:(float)arg2 requestID:(int)arg3 ;
-(BOOL)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1 ;
-(void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2 ;
-(int)_setExposureWithMode:(long long)arg1 duration:(SCD_Struct_AV0)arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(SCD_Struct_AV0*)arg5 ;
-(int)_setWhiteBalanceWithMode:(long long)arg1 gains:(SCD_Struct_AV32)arg2 requestID:(int)arg3 ;
-(BOOL)_ensureWhiteBalanceCalibrationUnpacked;
-(double)_whiteBalanceMixingFactorForTemperature:(double)arg1 ;
-(double)_predictedTempForGains:(SCD_Struct_AV32)arg1 ;
-(SCD_Struct_AV23)_chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV32)arg1 atMix:(double)arg2 ;
-(SCD_Struct_AV32)_deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV23)arg1 temperature:(double)arg2 ;
-(void)_setFlashActive:(BOOL)arg1 ;
-(int)_setTorchMode:(long long)arg1 withLevel:(float)arg2 ;
-(BOOL)isDiagnosticsTestSupported:(id)arg1 ;
-(void)_rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 duration:(double)arg3 rampType:(int)arg4 ;
-(void)_setVideoZoomFactor:(double)arg1 ;
-(id)_supportedOptionalFaceDetectionFeaturesDictionary;
-(int)_setFaceDetectionFeatureEnabled:(BOOL)arg1 enabledState:(BOOL*)arg2 ;
-(id)_faceDetectionConfigurationDictionary;
-(void)_restoreFigCaptureSourceProperties;
-(void)_drainManualControlRequestQueue:(id)arg1 ;
-(int)_orderInDevicesArray;
-(BOOL)_isAppleManufacturer;
-(int)figCaptureSourceDeviceType;
-(void)_setAdjustingFocus:(BOOL)arg1 ;
-(void)_setAdjustingExposure:(BOOL)arg1 ;
-(void)_setAdjustingWhiteBalance:(BOOL)arg1 ;
-(double)_whiteBalanceTemperatureForMixingFactor:(double)arg1 ;
-(BOOL)_isWBSeedEnabled;
-(void)_setWBSeedEnabled:(BOOL)arg1 ;
-(unsigned long long)_wbTemperatureIterations;
-(void)_setFlashSceneDetectedForPhotoOutput:(BOOL)arg1 ;
-(void)_setFlashAvailable:(BOOL)arg1 ;
-(void)_setTorchActive:(BOOL)arg1 ;
-(void)_setTorchLevel:(float)arg1 ;
-(void)_setTorchAvailable:(BOOL)arg1 ;
-(void)_setImageControlMode:(long long)arg1 ;
-(id)runDiagnosticsWithTestType:(id)arg1 ;
-(BOOL)isObjectDetectionSupported;
-(BOOL)_isHighDynamicRangeScene;
-(void)_setHDRSceneDetectedForPhotoOutput:(BOOL)arg1 ;
-(BOOL)isStillImageStabilizationScene;
-(BOOL)_isStillImageStabilizationScene;
-(void)_setIsStillImageStabilizationScene:(BOOL)arg1 ;
-(float)videoZoomRampAcceleration;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(void)_setMinAvailableVideoZoomFactor:(double)arg1 ;
-(void)_setMaxAvailableVideoZoomFactor:(double)arg1 ;
-(BOOL)isPreviewQualityAdjustedPhotoFilterRenderingSupported;
-(id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(unsigned)arg2 ;
-(void)_setBravoCameraSelectionBehavior:(id)arg1 ;
-(id)_getFigCaptureSourceProperty:(CFStringRef)arg1 ;
@end

