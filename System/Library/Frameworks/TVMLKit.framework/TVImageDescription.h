/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVViewDescription.h>

@class UIImage, NSString;

@interface TVImageDescription : TVViewDescription {

	BOOL _configureForMetrics;
	BOOL _needsRoomBannerImageDecorator;
	BOOL _isInBackgroundOrBanner;
	BOOL _hasGradient;
	id _imageProxy;
	UIImage* _placeholderImage;
	long long _semanticContentAttribute;
	NSString* _accessibilityText;
	NSString* _siriData;

}

@property (assign,nonatomic) BOOL needsRoomBannerImageDecorator;              //@synthesize needsRoomBannerImageDecorator=_needsRoomBannerImageDecorator - In the implementation block
@property (assign,nonatomic) BOOL isInBackgroundOrBanner;                     //@synthesize isInBackgroundOrBanner=_isInBackgroundOrBanner - In the implementation block
@property (assign,nonatomic) BOOL hasGradient;                                //@synthesize hasGradient=_hasGradient - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                      //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (nonatomic,copy) NSString * siriData;                               //@synthesize siriData=_siriData - In the implementation block
@property (nonatomic,retain) id imageProxy;                                   //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL configureForMetrics;                        //@synthesize configureForMetrics=_configureForMetrics - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) long long semanticContentAttribute;              //@synthesize semanticContentAttribute=_semanticContentAttribute - In the implementation block
-(NSString *)accessibilityText;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(long long)semanticContentAttribute;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)imageProxy;
-(void)setImageProxy:(id)arg1 ;
-(BOOL)hasGradient;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(BOOL)configureForMetrics;
-(BOOL)isInBackgroundOrBanner;
-(BOOL)needsRoomBannerImageDecorator;
-(NSString *)siriData;
-(void)setConfigureForMetrics:(BOOL)arg1 ;
-(void)setSiriData:(NSString *)arg1 ;
-(void)setIsInBackgroundOrBanner:(BOOL)arg1 ;
-(void)setNeedsRoomBannerImageDecorator:(BOOL)arg1 ;
-(void)setHasGradient:(BOOL)arg1 ;
-(id)initWithProxy:(id)arg1 andPlaceHolderImage:(id)arg2 ;
@end

