/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureConnectionInternal, NSArray, AVCaptureOutput, AVCaptureVideoPreviewLayer;

@interface AVCaptureConnection : NSObject {

	AVCaptureConnectionInternal* _internal;
	BOOL _supportsVideoFieldMode;
	long long _videoFieldMode;

}

@property (nonatomic,readonly) NSArray * inputPorts; 
@property (nonatomic,readonly) AVCaptureOutput * output; 
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) NSArray * audioChannels; 
@property (getter=isVideoMirroringSupported,nonatomic,readonly) BOOL supportsVideoMirroring; 
@property (assign,getter=isVideoMirrored,nonatomic) BOOL videoMirrored; 
@property (assign,nonatomic) BOOL automaticallyAdjustsVideoMirroring; 
@property (getter=isVideoOrientationSupported,nonatomic,readonly) BOOL supportsVideoOrientation; 
@property (assign,nonatomic) long long videoOrientation; 
@property (getter=isVideoFieldModeSupported,nonatomic,readonly) BOOL supportsVideoFieldMode;                                             //@synthesize supportsVideoFieldMode=_supportsVideoFieldMode - In the implementation block
@property (assign,nonatomic) long long videoFieldMode;                                                                                   //@synthesize videoFieldMode=_videoFieldMode - In the implementation block
@property (getter=isVideoMinFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 videoMinFrameDuration; 
@property (getter=isVideoMaxFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMaxFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 videoMaxFrameDuration; 
@property (nonatomic,readonly) double videoMaxScaleAndCropFactor; 
@property (assign,nonatomic) double videoScaleAndCropFactor; 
@property (assign,nonatomic) long long preferredVideoStabilizationMode; 
@property (nonatomic,readonly) long long activeVideoStabilizationMode; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL supportsVideoStabilization; 
@property (getter=isVideoStabilizationEnabled,nonatomic,readonly) BOOL videoStabilizationEnabled; 
@property (assign,nonatomic) BOOL enablesVideoStabilizationWhenAvailable; 
@property (getter=isCameraIntrinsicMatrixDeliverySupported,nonatomic,readonly) BOOL cameraIntrinsicMatrixDeliverySupported; 
@property (assign,getter=isCameraIntrinsicMatrixDeliveryEnabled,nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled; 
+(void)initialize;
+(id)connectionWithInputPorts:(id)arg1 output:(id)arg2 ;
+(id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)session;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isEnabled;
-(BOOL)isActive;
-(AVCaptureOutput *)output;
-(id)mediaType;
-(BOOL)isLive;
-(BOOL)isVideoMirrored;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(void)_setActive:(BOOL)arg1 ;
-(NSArray *)inputPorts;
-(long long)videoOrientation;
-(void)setVideoOrientation:(long long)arg1 ;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(void)setCameraIntrinsicMatrixDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isVideoStabilizationSupported;
-(void)setPreferredVideoStabilizationMode:(long long)arg1 ;
-(long long)preferredVideoStabilizationMode;
-(void)bumpChangeSeed;
-(id)sourceDevice;
-(int)changeSeed;
-(BOOL)sourcesFromFrontFacingCamera;
-(long long)mappedVideoOrientation;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(SCD_Struct_AV0)_videoMinFrameDuration;
-(void)_setVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(float)getAvgAudioLevelForChannel:(id)arg1 ;
-(float)getPeakAudioLevelForChannel:(id)arg1 ;
-(NSArray *)audioChannels;
-(BOOL)automaticallyAdjustsVideoMirroring;
-(SCD_Struct_AV0)videoMinFrameDuration;
-(SCD_Struct_AV0)videoMaxFrameDuration;
-(double)videoMaxScaleAndCropFactor;
-(double)videoScaleAndCropFactor;
-(int)videoRetainedBufferCountHint;
-(long long)activeVideoStabilizationMode;
-(BOOL)livePhotoMetadataWritingEnabled;
-(id)initWithInputPorts:(id)arg1 output:(id)arg2 ;
-(id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)updateAudioChannelsArray;
-(void)setupInternalStorage;
-(void)teardownObservers;
-(void)inputPortFormatDescriptionChanged:(id)arg1 ;
-(void)_updatePropertiesForFormat:(id)arg1 ;
-(void)updateAudioLevelsArray;
-(BOOL)isVideoMirroringSupported;
-(BOOL)isVideoOrientationSupported;
-(SCD_Struct_AV0)_videoMaxFrameDuration;
-(BOOL)_updateCameraIntrinsicMatrixDeliverySupported;
-(BOOL)isVideoRetainedBufferCountHintSupported;
-(BOOL)isLivePhotoMetadataWritingSupported;
-(void)setLivePhotoMetadataWritingEnabled:(BOOL)arg1 ;
-(unsigned)clientRetainedBufferCount;
-(void)_updateMaxScaleAndCropFactorForFormat:(id)arg1 ;
-(long long)_resolveActiveVideoStabilizationMode:(long long)arg1 format:(id)arg2 ;
-(void)_updateActiveVideoStabilizationMode:(long long)arg1 bumpChangeSeed:(BOOL)arg2 ;
-(void)setupObservers;
-(void)_setVideoMirrored:(BOOL)arg1 ;
-(void)setAutomaticallyAdjustsVideoMirroring:(BOOL)arg1 ;
-(BOOL)isVideoMinFrameDurationSupported;
-(BOOL)isVideoMinFrameDurationSet;
-(void)setVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)isVideoMaxFrameDurationSupported;
-(BOOL)isVideoMaxFrameDurationSet;
-(void)setVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)setVideoScaleAndCropFactor:(double)arg1 ;
-(BOOL)isVideoStabilizationEnabled;
-(BOOL)enablesVideoStabilizationWhenAvailable;
-(void)setEnablesVideoStabilizationWhenAvailable:(BOOL)arg1 ;
-(BOOL)isCameraIntrinsicMatrixDeliveryEnabled;
-(void)setVideoRetainedBufferCountHint:(int)arg1 ;
-(BOOL)isDebugMetadataSidecarFileEnabled;
-(void)setDebugMetadataSidecarFileEnabled:(BOOL)arg1 ;
-(id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1 allConnections:(id)arg2 ;
-(BOOL)isTrulyDisabled;
-(BOOL)isVideoFieldModeSupported;
-(long long)videoFieldMode;
-(void)setVideoFieldMode:(long long)arg1 ;
@end

