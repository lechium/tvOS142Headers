/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffect.h>

@class NSString, NSDictionary;

@interface UIColorEffect : UIVisualEffect {

	NSString* _filterType;
	NSDictionary* _configurationValues;
	NSDictionary* _identityValues;
	NSDictionary* _requestedValues;
	BOOL _disableInPlaceFiltering;

}
+(BOOL)supportsSecureCoding;
+(id)colorEffectSaturate:(double)arg1 ;
+(id)colorEffectAdd:(id)arg1 ;
+(id)colorEffectMatrix:(SCD_Struct_UI17)arg1 ;
+(id)_colorEffectCAMatrix:(CAColorMatrix)arg1 ;
+(id)colorEffectColor:(id)arg1 ;
+(id)colorEffectMultiply:(id)arg1 ;
+(id)colorEffectSubtract:(id)arg1 ;
+(id)_colorEffectSourceOver:(UIEdgeInsets)arg1 ;
+(id)colorEffectBrightness:(double)arg1 ;
+(id)colorEffectContrast:(double)arg1 ;
+(id)colorEffectInvert;
+(id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3 ;
+(id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2 ;
+(id)colorEffectLuminanceCurveMap:(id)arg1 blendingAmount:(double)arg2 ;
+(id)colorEffectCurvesRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4 ;
+(id)colorEffectAverageColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(long long)_expectedUsage;
-(id)_filterEntry;
@end

