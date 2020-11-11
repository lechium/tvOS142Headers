/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool, NSMutableDictionary;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	BOOL _blackFillingRequired;
	NSMutableDictionary* _mainImageDownscalingFactorByAttachedMediaKey;
	NSMutableDictionary* _pixelBufferPoolByAttachedMediaKey;
	OpaqueVTPixelTransferSessionRef _attachedMediaScalingSession;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)_purgeResources;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(id)initWithPoolCapacity:(int)arg1 ;
-(int)_resolveScalerModeAndUpdatePoolWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaleFactor:(float)arg3 stillImageScalerModeOut:(int*)arg4 scaledDenormalizedInputCropRectOut:(CGRect*)arg5 ;
-(int)_blackenBorderAttachedMediasOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 normalizedInputCropRect:(CGRect)arg2 requestedSettings:(id)arg3 scaleFactor:(float)arg4 ;
-(int)_zoomAttachedMediasOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 normalizedInputCropRect:(CGRect)arg2 requestedSettings:(id)arg3 scaleFactor:(float)arg4 ;
-(BOOL)_decompressionRequiredWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_buildScalingSession;
-(int)_removeUnmodifiedAttachedMedias:(opaqueCMSampleBufferRef)arg1 ;
-(void)setBlackFillingRequired:(BOOL)arg1 ;
-(BOOL)blackFillingRequired;
-(void)setMainImageDownscalingFactorByAttachedMediaKey:(id)arg1 ;
-(id)mainImageDownscalingFactorByAttachedMediaKey;
@end

