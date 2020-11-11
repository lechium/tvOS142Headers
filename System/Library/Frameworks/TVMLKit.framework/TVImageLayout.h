/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class UIColor, IKColor, NSShadow, NSString, UIImageSymbolConfiguration, IKFourTuple;

@interface TVImageLayout : TVViewLayout {

	BOOL _continuousBorder;
	BOOL _allowsNonOpaqueShadows;
	BOOL _useInSearchPartial;
	double _upscaleFactor;
	double _aspectRatio;
	long long _scaleMode;
	UIColor* _borderColor;
	IKColor* _ikTintColor;
	IKColor* _ikDarkTintColor;
	NSShadow* _shadow;
	NSString* _placeholderArtworkName;
	NSString* _cropCode;
	UIImageSymbolConfiguration* _imageSymbolConfiguration;
	NSString* _imageTreatment;
	IKFourTuple* _ikBorderRadius;
	NSString* _inlineTitle;
	CGSize _imageSize;
	TVCornerRadii _borderRadii;
	UIEdgeInsets _borderWidth;

}

@property (nonatomic,copy) NSString * imageTreatment;                                            //@synthesize imageTreatment=_imageTreatment - In the implementation block
@property (nonatomic,retain) IKFourTuple * ikBorderRadius;                                       //@synthesize ikBorderRadius=_ikBorderRadius - In the implementation block
@property (nonatomic,copy) NSString * inlineTitle;                                               //@synthesize inlineTitle=_inlineTitle - In the implementation block
@property (assign,nonatomic) BOOL allowsNonOpaqueShadows;                                        //@synthesize allowsNonOpaqueShadows=_allowsNonOpaqueShadows - In the implementation block
@property (assign,nonatomic) BOOL useInSearchPartial;                                            //@synthesize useInSearchPartial=_useInSearchPartial - In the implementation block
@property (nonatomic,readonly) CGSize decoratorSize; 
@property (assign,nonatomic) CGSize imageSize;                                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double upscaleFactor;                                               //@synthesize upscaleFactor=_upscaleFactor - In the implementation block
@property (assign,nonatomic) double aspectRatio;                                                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                                //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                                          //@synthesize borderRadii=_borderRadii - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidth;                                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL continuousBorder;                                              //@synthesize continuousBorder=_continuousBorder - In the implementation block
@property (nonatomic,retain) IKColor * ikTintColor;                                              //@synthesize ikTintColor=_ikTintColor - In the implementation block
@property (nonatomic,retain) IKColor * ikDarkTintColor;                                          //@synthesize ikDarkTintColor=_ikDarkTintColor - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                                  //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,copy) NSString * placeholderArtworkName;                                    //@synthesize placeholderArtworkName=_placeholderArtworkName - In the implementation block
@property (nonatomic,copy) NSString * cropCode;                                                  //@synthesize cropCode=_cropCode - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * imageSymbolConfiguration;              //@synthesize imageSymbolConfiguration=_imageSymbolConfiguration - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIColor *)borderColor;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIEdgeInsets)borderWidth;
-(void)setBorderWidth:(UIEdgeInsets)arg1 ;
-(CGSize)imageSize;
-(NSShadow *)shadow;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(NSString *)inlineTitle;
-(void)setInlineTitle:(NSString *)arg1 ;
-(TVCornerRadii)borderRadii;
-(void)setImageSize:(CGSize)arg1 ;
-(NSString *)imageTreatment;
-(void)setScaleMode:(long long)arg1 ;
-(long long)scaleMode;
-(UIImageSymbolConfiguration *)imageSymbolConfiguration;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setCropCode:(NSString *)arg1 ;
-(NSString *)cropCode;
-(CGSize)decoratorSize;
-(BOOL)allowsNonOpaqueShadows;
-(IKColor *)ikTintColor;
-(BOOL)continuousBorder;
-(IKFourTuple *)ikBorderRadius;
-(NSString *)placeholderArtworkName;
-(double)defaultFocusSizeIncrease;
-(void)setImageSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(void)setUpscaleFactor:(double)arg1 ;
-(void)setIkTintColor:(IKColor *)arg1 ;
-(void)setIkDarkTintColor:(IKColor *)arg1 ;
-(void)setImageTreatment:(NSString *)arg1 ;
-(void)setPlaceholderArtworkName:(NSString *)arg1 ;
-(void)setIkBorderRadius:(IKFourTuple *)arg1 ;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(void)setContinuousBorder:(BOOL)arg1 ;
-(void)setAllowsNonOpaqueShadows:(BOOL)arg1 ;
-(void)setUseInSearchPartial:(BOOL)arg1 ;
-(CGSize)_aspectFitToSize:(CGSize)arg1 scaleToSize:(CGSize)arg2 aspectRatio:(double)arg3 ;
-(double)upscaleFactor;
-(IKColor *)ikDarkTintColor;
-(BOOL)useInSearchPartial;
@end

