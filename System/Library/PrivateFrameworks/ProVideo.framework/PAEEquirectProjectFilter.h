/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEEquirectProjectFilter : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA82)arg3 withInfo:(SCD_Struct_PA83*)arg4 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA83*)arg3 ;
-(void)getQuaternion:(/*function pointer*/void**)arg1 :(double*)arg2 :(double*)arg3 :(double*)arg4 :(double*)arg5 ;
-(double)getInitialYaw:(/*function pointer*/void**)arg1 ;
-(BOOL)getIsFrontFacing:(/*function pointer*/void**)arg1 ;
-(void)getProjectionFOVYDegrees:(float*)arg1 FOVXDegrees:(float*)arg2 withFrameAspect:(double)arg3 atTime:(/*function pointer*/void**)arg4 ;
-(PCMatrix44Tmpl<double>)composeViewMatrix:(/*function pointer*/void**)arg1 withCameraBehavior:(int)arg2 heroAngle:(double)arg3 ;
-(HGEquirectProjectParams)getParams:(SCD_Struct_PA83*)arg1 withOutputImage:(id)arg2 inputImage:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 outputWidth:(unsigned long long)arg6 outputHeight:(unsigned long long)arg7 xRotation:(double)arg8 yRotation:(double)arg9 zRotation:(double)arg10 cameraBehavior:(int)arg11 paramAPI:(id)arg12 ;
-(void)getEdgeMode:(unsigned*)arg1 withInfo:(SCD_Struct_PA83*)arg2 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA83*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(PCMatrix44Tmpl<double>)getViewMatrix:(/*function pointer*/void**)arg1 ;
-(double)convertToFOVYFromFOVX:(double)arg1 width:(double)arg2 height:(double)arg3 ;
-(double)convertToFOVXFromFOVY:(double)arg1 width:(double)arg2 height:(double)arg3 ;
-(BOOL)frameCleanup;
@end

