/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class UIFont, MTMPULayoutInterpolator;

@interface MTMPUFontDescriptor : NSObject <NSCopying, NSMutableCopying> {

	double _defaultPointSizeAdjustment;
	long long _leadingAdjustment;
	double _systemFontSize;
	long long _textStyle;
	BOOL _usesItalic;
	BOOL _usesCondensedMetrics;
	BOOL _wantsMonospaceNumbers;
	long long _weight;
	UIFont* _preferredFont;
	SCD_Struct_MT11 _preferredFontMetrics;
	UIFont* _defaultFont;
	SCD_Struct_MT11 _defaultFontMetrics;
	MTMPULayoutInterpolator* _customFontPointSizeLayoutInterpolator;

}

@property (nonatomic,readonly) long long textStyle;                            //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) double systemFontSize;                          //@synthesize systemFontSize=_systemFontSize - In the implementation block
@property (nonatomic,readonly) long long weight;                               //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) double defaultPointSizeAdjustment;              //@synthesize defaultPointSizeAdjustment=_defaultPointSizeAdjustment - In the implementation block
@property (nonatomic,readonly) long long leadingAdjustment;                    //@synthesize leadingAdjustment=_leadingAdjustment - In the implementation block
@property (nonatomic,readonly) BOOL usesItalic;                                //@synthesize usesItalic=_usesItalic - In the implementation block
@property (nonatomic,readonly) BOOL usesCondensedMetrics;                      //@synthesize usesCondensedMetrics=_usesCondensedMetrics - In the implementation block
@property (nonatomic,readonly) BOOL wantsMonospaceNumbers;                     //@synthesize wantsMonospaceNumbers=_wantsMonospaceNumbers - In the implementation block
@property (nonatomic,readonly) UIFont * preferredFont; 
@property (nonatomic,readonly) double preferredFontAscender; 
@property (nonatomic,readonly) double preferredFontBodyLeading; 
@property (nonatomic,readonly) double preferredFontCapHeight; 
@property (nonatomic,readonly) double preferredFontDescender; 
@property (nonatomic,readonly) double preferredFontLineHeight; 
@property (nonatomic,readonly) UIFont * defaultFont; 
@property (nonatomic,readonly) double defaultFontLineHeight; 
+(id)invalidationHandler;
+(id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 ;
+(id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 defaultPointSizeAdjustment:(double)arg4 ;
+(id)_fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 systemFontSize:(double)arg4 defaultPointSizeAdjustment:(double)arg5 ;
+(id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 ;
+(double)_layoutInterpolatorReferenceMetricForContentSizeCategory:(id)arg1 ;
+(id)_baseNativeTextStyleForTextStyle:(long long)arg1 ;
+(id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg1 forCustomTextStyle:(long long)arg2 ;
+(void)_getNativeFontDescriptorSymbolicTraits:(unsigned*)arg1 nativeTextStyleAttribute:(id*)arg2 forWeight:(long long)arg3 textStyle:(long long)arg4 ;
+(unsigned)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)arg1 ;
+(unsigned)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(BOOL)arg1 isCondensedMetrics:(BOOL)arg2 ;
+(id)_fontPointSizeLayoutInterpolatorForTextStyle:(long long)arg1 ;
+(id)fontDescriptorWithTextStyle:(long long)arg1 ;
+(id)fontDescriptorWithTextStyle:(long long)arg1 weight:(long long)arg2 ;
+(id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 ;
+(id)fontDescriptorWithSystemFontSize:(double)arg1 ;
+(id)fontDescriptorWithSystemFontSize:(double)arg1 weight:(long long)arg2 ;
+(id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)weight;
-(double)systemFontSize;
-(long long)textStyle;
-(double)scaledValueForValue:(double)arg1 ;
-(void)_resetToDefaultValues;
-(void)_handleFontDescriptorDidInvalidateCachedFontsAndMetricsNotification:(id)arg1 ;
-(id)_preferredFontDescriptorForTextStyle:(long long)arg1 ;
-(id)_fontWithBaseNativeFontDescriptorProvider:(/*^block*/id)arg1 ;
-(UIFont *)preferredFont;
-(id)_defaultFontDescriptorForTextStyle:(long long)arg1 ;
-(UIFont *)defaultFont;
-(double)preferredFontBodyLeading;
-(double)defaultFontBodyLeading;
-(void)_invalidateCachedFontsAndMetrics;
-(id)_fontPointSizeLayoutInterpolator;
-(double)preferredFontAscender;
-(double)preferredFontLineHeight;
-(double)preferredFontCapHeight;
-(double)preferredFontDescender;
-(double)defaultFontAscender;
-(double)defaultFontCapHeight;
-(double)defaultFontDescender;
-(double)defaultFontLineHeight;
-(double)defaultPointSizeAdjustment;
-(long long)leadingAdjustment;
-(BOOL)usesItalic;
-(BOOL)usesCondensedMetrics;
-(BOOL)wantsMonospaceNumbers;
-(id)typeSafeCopy;
@end

