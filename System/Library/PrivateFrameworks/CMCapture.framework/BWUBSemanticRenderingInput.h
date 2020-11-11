/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorSemanticRenderingInput.h>

@class NSArray, NSString;

@interface BWUBSemanticRenderingInput : NSObject <BWNoiseReductionAndFusionProcessorSemanticRenderingInput> {

	CVBufferRef _skinMask;
	CVBufferRef _lowResPersonMask;
	NSArray* _faceObservations;
	CVBufferRef _skyMask;

}

@property (nonatomic,readonly) CVBufferRef skinMask;                      //@synthesize skinMask=_skinMask - In the implementation block
@property (nonatomic,readonly) CVBufferRef skyMask;                       //@synthesize skyMask=_skyMask - In the implementation block
@property (nonatomic,readonly) CVBufferRef lowResPersonMask;              //@synthesize lowResPersonMask=_lowResPersonMask - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                //@synthesize faceObservations=_faceObservations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSArray *)faceObservations;
-(id)initWithSkinMask:(CVBufferRef)arg1 skyMask:(CVBufferRef)arg2 lowResPersonMask:(CVBufferRef)arg3 faceObservations:(id)arg4 ;
-(CVBufferRef)skinMask;
-(CVBufferRef)skyMask;
-(CVBufferRef)lowResPersonMask;
@end

