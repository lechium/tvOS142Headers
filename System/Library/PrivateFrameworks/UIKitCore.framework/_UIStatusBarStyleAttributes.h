/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection, UIFont, UIColor, NSArray;

@interface _UIStatusBarStyleAttributes : NSObject <NSSecureCoding, NSCopying> {

	BOOL _scaledFixedWidthBar;
	long long _style;
	long long _mode;
	UITraitCollection* _traitCollection;
	long long _effectiveLayoutDirection;
	double _iconScale;
	long long _symbolScale;
	long long _iconSize;
	UIFont* _font;
	UIFont* _emphasizedFont;
	UIFont* _smallFont;
	UIColor* _textColor;
	UIColor* _imageTintColor;
	UIColor* _imageDimmedTintColor;
	NSArray* _imageNamePrefixes;

}

@property (nonatomic,copy) UITraitCollection * traitCollection;                                  //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,getter=isScaledFixedWidthBar,nonatomic) BOOL scaledFixedWidthBar;              //@synthesize scaledFixedWidthBar=_scaledFixedWidthBar - In the implementation block
@property (nonatomic,readonly) long long style;                                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) long long effectiveLayoutDirection;                               //@synthesize effectiveLayoutDirection=_effectiveLayoutDirection - In the implementation block
@property (assign,nonatomic) double iconScale;                                                   //@synthesize iconScale=_iconScale - In the implementation block
@property (assign,nonatomic) long long symbolScale;                                              //@synthesize symbolScale=_symbolScale - In the implementation block
@property (assign,nonatomic) long long iconSize;                                                 //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,copy) UIFont * font;                                                        //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) UIFont * emphasizedFont;                                              //@synthesize emphasizedFont=_emphasizedFont - In the implementation block
@property (nonatomic,copy) UIFont * smallFont;                                                   //@synthesize smallFont=_smallFont - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIColor * imageTintColor;                                             //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (nonatomic,copy) UIColor * imageDimmedTintColor;                                       //@synthesize imageDimmedTintColor=_imageDimmedTintColor - In the implementation block
@property (nonatomic,copy) NSArray * imageNamePrefixes;                                          //@synthesize imageNamePrefixes=_imageNamePrefixes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)overriddenStyleAttributes;
+(id)styleAttributesForStatusBar:(id)arg1 style:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)mode;
-(long long)style;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(double)iconScale;
-(UITraitCollection *)traitCollection;
-(void)setImageTintColor:(UIColor *)arg1 ;
-(UIColor *)imageTintColor;
-(void)setIconSize:(long long)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(long long)iconSize;
-(id)styleAttributesWithOverrides:(id)arg1 ;
-(UIFont *)smallFont;
-(long long)effectiveLayoutDirection;
-(UIColor *)imageDimmedTintColor;
-(id)fontForStyle:(long long)arg1 ;
-(NSArray *)imageNamePrefixes;
-(BOOL)isScaledFixedWidthBar;
-(void)setIconScale:(double)arg1 ;
-(long long)symbolScale;
-(void)setSmallFont:(UIFont *)arg1 ;
-(void)setEmphasizedFont:(UIFont *)arg1 ;
-(void)setImageDimmedTintColor:(UIColor *)arg1 ;
-(void)setImageNamePrefixes:(NSArray *)arg1 ;
-(void)setSymbolScale:(long long)arg1 ;
-(UIFont *)emphasizedFont;
-(void)setScaledFixedWidthBar:(BOOL)arg1 ;
@end

