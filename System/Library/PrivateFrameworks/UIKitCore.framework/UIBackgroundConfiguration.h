/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBackgroundConfigurationInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIView, UIColor, UIVisualEffect, NSString;

@interface UIBackgroundConfiguration : NSObject <_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedCustomView : 1;
		unsigned hasCustomizedCornerRadius : 1;
		unsigned hasCustomizedBackgroundInsets : 1;
		unsigned hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets : 1;
		unsigned hasCustomizedBackgroundColor : 1;
		unsigned hasCustomizedBackgroundColorTransformer : 1;
		unsigned hasCustomizedVisualEffect : 1;
		unsigned hasCustomizedStrokeColor : 1;
		unsigned hasCustomizedStrokeColorTransformer : 1;
		unsigned hasCustomizedStrokeWidth : 1;
		unsigned hasCustomizedStrokeOutset : 1;
	}  _configurationFlags;
	UIView* _customView;
	double _cornerRadius;
	unsigned long long _edgesAddingLayoutMarginsToBackgroundInsets;
	UIColor* _backgroundColor;
	/*^block*/id _backgroundColorTransformer;
	UIVisualEffect* _visualEffect;
	UIColor* _strokeColor;
	/*^block*/id _strokeColorTransformer;
	double _strokeWidth;
	double _strokeOutset;
	long long _defaultStyle;
	long long _backgroundColorTransformerIdentifier;
	long long _strokeColorTransformerIdentifier;
	unsigned long long _maskedCorners;
	long long _shadowType;
	NSDirectionalEdgeInsets _backgroundInsets;

}

@property (setter=_setCustomView:,nonatomic,retain) UIView * _customView;                                                                                        //@synthesize customView=_customView - In the implementation block
@property (assign,setter=_setBackgroundInsets:,nonatomic) NSDirectionalEdgeInsets _backgroundInsets;                                                             //@synthesize backgroundInsets=_backgroundInsets - In the implementation block
@property (assign,setter=_setEdgesAddingLayoutMarginsToBackgroundInsets:,nonatomic) unsigned long long _edgesAddingLayoutMarginsToBackgroundInsets;              //@synthesize edgesAddingLayoutMarginsToBackgroundInsets=_edgesAddingLayoutMarginsToBackgroundInsets - In the implementation block
@property (setter=_setBackgroundColor:,nonatomic,retain) UIColor * _backgroundColor;                                                                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (setter=_setBackgroundColorTransformer:,nonatomic,copy) id _backgroundColorTransformer;                                                                //@synthesize backgroundColorTransformer=_backgroundColorTransformer - In the implementation block
@property (setter=_setVisualEffect:,nonatomic,copy) UIVisualEffect * _visualEffect;                                                                              //@synthesize visualEffect=_visualEffect - In the implementation block
@property (setter=_setStrokeColor:,nonatomic,retain) UIColor * _strokeColor;                                                                                     //@synthesize strokeColor=_strokeColor - In the implementation block
@property (setter=_setStrokeColorTransformer:,nonatomic,copy) id _strokeColorTransformer;                                                                        //@synthesize strokeColorTransformer=_strokeColorTransformer - In the implementation block
@property (assign,setter=_setStrokeWidth:,nonatomic) double _strokeWidth;                                                                                        //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,setter=_setStrokeOutset:,nonatomic) double _strokeOutset;                                                                                      //@synthesize strokeOutset=_strokeOutset - In the implementation block
@property (assign,setter=_setBackgroundColorTransformerIdentifier:,nonatomic) long long _backgroundColorTransformerIdentifier;                                   //@synthesize backgroundColorTransformerIdentifier=_backgroundColorTransformerIdentifier - In the implementation block
@property (assign,setter=_setStrokeColorTransformerIdentifier:,nonatomic) long long _strokeColorTransformerIdentifier;                                           //@synthesize strokeColorTransformerIdentifier=_strokeColorTransformerIdentifier - In the implementation block
@property (assign,nonatomic) long long _defaultStyle;                                                                                                            //@synthesize defaultStyle=_defaultStyle - In the implementation block
@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) NSDirectionalEdgeInsets backgroundInsets; 
@property (assign,nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,copy) id backgroundColorTransformer; 
@property (nonatomic,copy) UIVisualEffect * visualEffect; 
@property (nonatomic,retain) UIColor * strokeColor; 
@property (nonatomic,copy) id strokeColorTransformer; 
@property (assign,nonatomic) double strokeWidth; 
@property (assign,nonatomic) double strokeOutset; 
@property (assign,setter=_setMaskedCorners:,getter=_maskedCorners,nonatomic) unsigned long long maskedCorners;                                                   //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,setter=_setCornerRadius:,nonatomic) double _cornerRadius;                                                                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,setter=_setShadowType:,nonatomic) long long _shadowType;                                                                                       //@synthesize shadowType=_shadowType - In the implementation block
@property (getter=_hasBackgroundColor,nonatomic,readonly) BOOL hasBackgroundColor; 
@property (getter=_hasStroke,nonatomic,readonly) BOOL hasStroke; 
@property (getter=_hasBackgroundFill,nonatomic,readonly) BOOL hasBackgroundFill; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)clearConfiguration;
+(id)listPlainCellConfiguration;
+(id)listPlainHeaderFooterConfiguration;
+(id)listGroupedCellConfiguration;
+(id)listGroupedHeaderFooterConfiguration;
+(id)_defaultListPlainCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultListPlainHeaderFooterConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultListGroupedCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultListGroupedHeaderFooterConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultListSidebarHeaderConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultListSidebarCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(BOOL)arg3 ;
+(id)_defaultConfigurationForStyle:(long long)arg1 state:(id)arg2 ;
+(id)listSidebarHeaderConfiguration;
+(id)listSidebarCellConfiguration;
+(id)listAccompaniedSidebarCellConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)strokeColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)_backgroundColor;
-(double)_cornerRadius;
-(void)setCustomView:(UIView *)arg1 ;
-(BOOL)_hasBackgroundColor;
-(UIColor *)_strokeColor;
-(double)strokeWidth;
-(double)_strokeWidth;
-(void)_setCornerRadius:(double)arg1 ;
-(id)updatedConfigurationForState:(id)arg1 ;
-(UIView *)customView;
-(NSDirectionalEdgeInsets)backgroundInsets;
-(void)setBackgroundInsets:(NSDirectionalEdgeInsets)arg1 ;
-(unsigned long long)edgesAddingLayoutMarginsToBackgroundInsets;
-(void)setEdgesAddingLayoutMarginsToBackgroundInsets:(unsigned long long)arg1 ;
-(id)backgroundColorTransformer;
-(void)setBackgroundColorTransformer:(id)arg1 ;
-(id)resolvedBackgroundColorForTintColor:(id)arg1 ;
-(UIVisualEffect *)visualEffect;
-(id)strokeColorTransformer;
-(void)setStrokeColorTransformer:(id)arg1 ;
-(id)resolvedStrokeColorForTintColor:(id)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeOutset;
-(void)setStrokeOutset:(double)arg1 ;
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
-(UIView *)_customView;
-(NSDirectionalEdgeInsets)_backgroundInsets;
-(void)_setVisualEffect:(id)arg1 ;
-(void)_setBackgroundColor:(id)arg1 ;
-(void)_setBackgroundColorMappingNilToClear:(id)arg1 ;
-(void)_setShadowType:(long long)arg1 ;
-(void)_setStrokeWidth:(double)arg1 ;
-(void)_setStrokeOutset:(double)arg1 ;
-(void)_setStrokeColor:(id)arg1 ;
-(void)_setStrokeColorMappingNilToClear:(id)arg1 ;
-(void)set_defaultStyle:(long long)arg1 ;
-(void)_setBackgroundColorTransformerIdentifier:(long long)arg1 ;
-(BOOL)_hasBackgroundFill;
-(long long)_backgroundColorTransformerIdentifier;
-(void)_setCustomView:(id)arg1 ;
-(void)_setBackgroundInsets:(NSDirectionalEdgeInsets)arg1 ;
-(unsigned long long)_edgesAddingLayoutMarginsToBackgroundInsets;
-(void)_setEdgesAddingLayoutMarginsToBackgroundInsets:(unsigned long long)arg1 ;
-(id)_backgroundColorTransformer;
-(void)_setBackgroundColorTransformer:(/*^block*/id)arg1 ;
-(UIVisualEffect *)_visualEffect;
-(id)_strokeColorTransformer;
-(void)_setStrokeColorTransformer:(/*^block*/id)arg1 ;
-(double)_strokeOutset;
-(long long)_shadowType;
-(void)_setStrokeColorTransformerIdentifier:(long long)arg1 ;
-(BOOL)_hasStroke;
-(id)_updatedConfigurationForState:(id)arg1 ;
-(BOOL)_backgroundFillIsEqual:(id)arg1 withTintColor:(id)arg2 ;
-(unsigned long long)_maskedCorners;
-(void)_setMaskedCorners:(unsigned long long)arg1 ;
-(long long)_defaultStyle;
-(long long)_strokeColorTransformerIdentifier;
@end

