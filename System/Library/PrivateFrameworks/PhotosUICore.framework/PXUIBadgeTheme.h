/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIImageSymbolConfiguration, UIColor, CAFilter, UIFont, UIBlurEffect;


@protocol PXUIBadgeTheme <NSObject>
@property (nonatomic,readonly) UIImageSymbolConfiguration * imageConfiguration; 
@property (nonatomic,readonly) double imageAlpha; 
@property (nonatomic,readonly) UIColor * imageTintColor; 
@property (nonatomic,readonly) CAFilter * imageCompositingFilter; 
@property (nonatomic,readonly) UIFont * labelFont; 
@property (nonatomic,readonly) double labelAlpha; 
@property (nonatomic,readonly) UIColor * labelTextColor; 
@property (nonatomic,readonly) CAFilter * labelCompositingFilter; 
@property (nonatomic,readonly) Class backgroundViewClass; 
@property (nonatomic,readonly) double backgroundCornerRadius; 
@property (nonatomic,readonly) double backgroundBorderWidth; 
@property (nonatomic,readonly) double backgroundAlpha; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * backgroundBorderColor; 
@property (nonatomic,readonly) UIBlurEffect * backgroundBlurEffect; 
@required
-(UIColor *)backgroundColor;
-(UIColor *)labelTextColor;
-(UIColor *)imageTintColor;
-(UIImageSymbolConfiguration *)imageConfiguration;
-(double)imageAlpha;
-(CAFilter *)imageCompositingFilter;
-(UIFont *)labelFont;
-(double)labelAlpha;
-(CAFilter *)labelCompositingFilter;
-(Class)backgroundViewClass;
-(double)backgroundCornerRadius;
-(double)backgroundBorderWidth;
-(double)backgroundAlpha;
-(UIColor *)backgroundBorderColor;
-(UIBlurEffect *)backgroundBlurEffect;

@end

