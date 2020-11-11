/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEKeyer : PAEFilterDefaultBase {

	OMSamples* _omSamples;
	BOOL _isMotion;
	SCD_Struct_PV21 _prevRationalTime;
	SCD_Union_PA91* _prevRectanglesFrame;
	HGBitmapLoader* _lutsBitmapLoaderCache;
	PCMutex* _cacheMutex;
	PAEKeyerMatteTools* _matteTools;
	PAEKeyerPreprocess* _preprocessTools;

}
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA83*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA83*)arg1 inputInfo:(SCD_Struct_PA82)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(void)getInputWidth:(float*)arg1 height:(float*)arg2 renderInfo:(SCD_Struct_PA83*)arg3 ;
-(double)autokeyAmountToHistoPercent:(double)arg1 ;
-(int)getColorPrimaries;
-(BOOL)use32x32Histogram;
-(BOOL)pullInitialKey:(id*)arg1 ;
-(BOOL)isSimpleKey;
-(HGRef<HGNode>*)getKeyerNode:(HGRef<HGNode>*)arg1 omKeyer:(PAEKeyerOMKeyer2D*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)isLumaKey;
-(BOOL)sampleEdge:(OMSamplesElem*)arg1 renderInfo:(SCD_Struct_PA83*)arg2 width:(float)arg3 height:(float)arg4 ;
-(BOOL)sampleRect:(OMSamplesElem*)arg1 renderInfo:(SCD_Struct_PA83*)arg2 width:(float)arg3 height:(float)arg4 ;
-(void)computeModel:(BOOL)arg1 atTime:(/*function pointer*/void**)arg2 ;
-(void)clearKey;
-(id)getBlendOptionsAtTime:(/*function pointer*/void**)arg1 ;
-(id)apiManager;
-(void)setInitialSamples:(OMSamplesElem*)arg1 ;
@end

