/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyer;

@interface PAEKeyerInitialize : NSObject {

	PAEKeyer* _keyer;
	id _apiManager;

}
+(void)setInitialSamples:(vector<Vec3f, std::__1::allocator<Vec3f> >*)arg1 autokeySetupUtil:(id)arg2 sampleBoxHalfDim:(float)arg3 ;
-(void)dealloc;
-(void)calculateInitialSamples:(ColorHisto*)arg1 percentageOfBaseColorIncluded:(float)arg2 use32x32x32:(BOOL)arg3 autokeySetupUtil:(id)arg4 samples:(vector<Vec3f, std::__1::allocator<Vec3f> >*)arg5 ;
-(BOOL)calculateInitialMatteWithInfo:(SCD_Struct_PA83*)arg1 omSamples:(OMSamples*)arg2 colorPrimaries:(int)arg3 screenColor:(int*)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 histoPercentageIncluded:(float)arg11 use32x32x32:(BOOL)arg12 simpleKey:(BOOL)arg13 ;
-(id)initWithAPIManager:(id)arg1 keyer:(id)arg2 ;
-(BOOL)findSampleRectsWithInfo:(SCD_Struct_PA83*)arg1 screenColor:(int*)arg2 colorPrimaries:(int)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11 histoPercentageIncluded:(float)arg12 omSamples:(OMSamples*)arg13 viewingSetupMatte:(BOOL)arg14 use32x32Histogram:(BOOL)arg15 simpleKey:(BOOL)arg16 ;
@end

