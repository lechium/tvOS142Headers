/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {

	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	BOOL _mrcLowPowerModeEnabled;
	BOOL _useSceneClassifierToGateQRCodeDetection;
	SCD_Struct_BW56 _smartCameraPipelineVersion;
	BOOL _deferredPrepareEnabled;
	BOOL _previewEnabled;
	int _motionAttachmentsSource;
	BOOL _boxedMetadataEnabled;
	NSArray* _detectedObjectMovieFileOutputMetadataConnectionConfigurations;

}

@property (nonatomic,retain) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * detectedObjectMovieFileOutputMetadataConnectionConfigurations;                              //@synthesize detectedObjectMovieFileOutputMetadataConnectionConfigurations=_detectedObjectMovieFileOutputMetadataConnectionConfigurations - In the implementation block
@property (assign,nonatomic) BOOL mrcLowPowerModeEnabled;                                                                          //@synthesize mrcLowPowerModeEnabled=_mrcLowPowerModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL useSceneClassifierToGateQRCodeDetection;                                                         //@synthesize useSceneClassifierToGateQRCodeDetection=_useSceneClassifierToGateQRCodeDetection - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW56 smartCameraPipelineVersion;                                                           //@synthesize smartCameraPipelineVersion=_smartCameraPipelineVersion - In the implementation block
@property (assign,nonatomic) BOOL deferredPrepareEnabled;                                                                          //@synthesize deferredPrepareEnabled=_deferredPrepareEnabled - In the implementation block
@property (assign,nonatomic) BOOL previewEnabled;                                                                                  //@synthesize previewEnabled=_previewEnabled - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                                          //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) BOOL boxedMetadataEnabled;                                                                            //@synthesize boxedMetadataEnabled=_boxedMetadataEnabled - In the implementation block
-(void)dealloc;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(BOOL)previewEnabled;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(SCD_Struct_BW56)smartCameraPipelineVersion;
-(void)setSmartCameraPipelineVersion:(SCD_Struct_BW56)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setMetadataObjectConnectionConfiguration:(FigMetadataObjectCaptureConnectionConfiguration *)arg1 ;
-(void)setDeferredPrepareEnabled:(BOOL)arg1 ;
-(BOOL)mrcLowPowerModeEnabled;
-(void)setMrcLowPowerModeEnabled:(BOOL)arg1 ;
-(void)setUseSceneClassifierToGateQRCodeDetection:(BOOL)arg1 ;
-(void)setBoxedMetadataEnabled:(BOOL)arg1 ;
-(void)setDetectedObjectMovieFileOutputMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(BOOL)deferredPrepareEnabled;
-(BOOL)useSceneClassifierToGateQRCodeDetection;
-(NSArray *)detectedObjectMovieFileOutputMetadataConnectionConfigurations;
-(BOOL)boxedMetadataEnabled;
@end

