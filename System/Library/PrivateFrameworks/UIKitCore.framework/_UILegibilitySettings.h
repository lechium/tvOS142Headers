/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class UIColor, NSString;

@interface _UILegibilitySettings : NSObject <NSSecureCoding, NSCopying, BSXPCCoding> {

	long long _style;
	UIColor* _contentColor;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _shadowColor;
	double _shadowRadius;
	double _shadowAlpha;
	double _imageOutset;
	double _minFillHeight;
	NSString* _shadowCompositingFilterName;

}

@property (assign,nonatomic) long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * shadowCompositingFilterName;              //@synthesize shadowCompositingFilterName=_shadowCompositingFilterName - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                            //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                          //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                             //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIColor * contentColor;                            //@synthesize contentColor=_contentColor - In the implementation block
@property (assign,nonatomic) double shadowRadius;                               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) double imageOutset;                                //@synthesize imageOutset=_imageOutset - In the implementation block
@property (assign,nonatomic) double minFillHeight;                              //@synthesize minFillHeight=_minFillHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sharedInstanceForStyle:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(double)shadowAlpha;
-(id)initWithContentColor:(id)arg1 ;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
-(void)setShadowAlpha:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 contentColor:(id)arg2 ;
-(void)setMinFillHeight:(double)arg1 ;
-(void)setPropertiesForStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4 ;
-(double)imageOutset;
-(double)minFillHeight;
-(NSString *)shadowCompositingFilterName;
-(void)setImageOutset:(double)arg1 ;
-(void)setShadowCompositingFilterName:(NSString *)arg1 ;
-(id)initWithContentColor:(id)arg1 contrast:(double)arg2 ;
@end

