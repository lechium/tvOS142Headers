/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVVideoCompositionInternal, NSString, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {

	AVVideoCompositionInternal* _videoComposition;

}

@property (nonatomic,readonly) NSString * colorPrimaries; 
@property (nonatomic,readonly) NSString * colorYCbCrMatrix; 
@property (nonatomic,readonly) NSString * colorTransferFunction; 
@property (nonatomic,readonly) Class customVideoCompositorClass; 
@property (nonatomic,readonly) SCD_Struct_AV6 frameDuration; 
@property (nonatomic,readonly) int sourceTrackIDForFrameTiming; 
@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,copy,readonly) NSArray * instructions; 
@property (nonatomic,retain,readonly) AVVideoCompositionCoreAnimationTool * animationTool; 
+(void)initialize;
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
+(id)_mutableVideoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
-(id)konaSerializeVideoComposition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(SCD_Struct_AV6)frameDuration;
-(void)setFrameDuration:(SCD_Struct_AV6)arg1 ;
-(float)renderScale;
-(void)setRenderScale:(float)arg1 ;
-(void)setColorYCbCrMatrix:(NSString *)arg1 ;
-(void)setColorTransferFunction:(NSString *)arg1 ;
-(void)setColorPrimaries:(NSString *)arg1 ;
-(void)setSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(CGSize)renderSize;
-(id)_deepCopy;
-(NSString *)colorPrimaries;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(BOOL)_isValidReturningExceptionReason:(id*)arg1 ;
-(BOOL)_copyFigVideoCompositor:(const void*)arg1 andSession:(id*)arg2 recyclingSession:(id)arg3 forFigRemaker:(BOOL)arg4 error:(id*)arg5 ;
-(int)sourceTrackIDForFrameTiming;
-(id)_serializableInstructions;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(unsigned long long)_changeSeed;
-(void)videoCompositionOutputColorPropertiesWithCustomCompositor:(id)arg1 formatDescriptions:(id)arg2 colorPrimaries:(id*)arg3 transferFunction:(id*)arg4 yCbCrMatrix:(id*)arg5 ;
-(BOOL)isValidForAsset:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 validationDelegate:(id)arg3 ;
-(BOOL)_hasLayerAsAuxiliaryTrack;
-(id)_auxiliaryTrackLayer;
-(BOOL)_hasPostProcessingLayers;
-(id)_postProcessingRootLayer;
-(int)_auxiliaryTrackID;
-(id)_postProcessingVideoLayers;
-(id)builtInCompositorName;
-(NSString *)colorYCbCrMatrix;
-(NSString *)colorTransferFunction;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
-(void)_bumpChangeSeed;
-(id)_postProcessingVideoLayer;
-(id)instructionForFigInstruction:(void*)arg1 ;
-(void)_setFrameDurationForFrameRate:(float)arg1 sourceTrackIDForFrameTiming:(int)arg2 ;
@end

