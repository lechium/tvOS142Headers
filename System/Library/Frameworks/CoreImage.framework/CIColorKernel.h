/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
+(id)kernelWithString:(id)arg1 ;
+(id)SDOFV2MetalKernelNamed:(id)arg1 ;
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(BOOL)canReduceOutputChannels;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 constantTypes:(id)arg3 ;
-(BOOL)preservesRange;
-(BOOL)perservesAlpha;
@end

