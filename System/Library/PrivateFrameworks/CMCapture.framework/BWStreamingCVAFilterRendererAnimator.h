/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {

	SCD_Struct_BW90 _currentFrame;
	int _mostRecentEffectStatus;
	BWRamp* _simulatedApertureRamp;
	float _defaultSimulatedAperture;

}

@property (getter=isDepthAvailable,nonatomic,readonly) BOOL depthAvailable; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)initWithEffectStatus:(int)arg1 ;
-(void)_resetSimulatedApertureRampWithEffectStatus:(int)arg1 clientSuppliedSimulatedAperture:(float)arg2 ;
-(SCD_Struct_BW90*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 clientSuppliedSimulatedAperture:(float)arg3 ;
-(BOOL)isDepthAvailable;
@end

