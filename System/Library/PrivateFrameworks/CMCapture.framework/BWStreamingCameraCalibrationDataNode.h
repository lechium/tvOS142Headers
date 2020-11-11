/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary;

@interface BWStreamingCameraCalibrationDataNode : BWNode {

	NSDictionary* _cameraInfoByPortType;
	float _pixelSizeInMicrons;
	SCD_Struct_BW95 _lensDistortionCorrectionBasePolynomial;
	SCD_Struct_BW95 _lensDistortionCorrectionDynamicPolynomial;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	int _rotationDegrees;
	BOOL _mirroringEnabled;

}

@property (assign,nonatomic) int rotationDegrees;                            //@synthesize rotationDegrees=_rotationDegrees - In the implementation block
@property (assign,nonatomic) BOOL mirroringEnabled;                          //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;              //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)nodeType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(int)rotationDegrees;
-(void)setRotationDegrees:(int)arg1 ;
-(int)horizontalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(BOOL)mirroringEnabled;
-(id)initWithCameraInfoByPortType:(id)arg1 ;
-(int)_getLensDistortionCenterWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 referenceDimensions:(CGSize)arg2 distortionCenterOut:(CGPoint*)arg3 ;
-(int)_getDistortionCoefficientsWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 lensDistortionCoefficientsOut:(id*)arg2 inverseLensDistortionCoefficientsOut:(id*)arg3 ;
-(id)_cameraCalibrationDataDictionaryFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 portType:(id)arg2 ;
@end

