/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UILayoutGuide, NSString, UIImage, NSAttributedString, NSURL;

@interface TVSUIBulletinFooterView : UIView {

	UIImageView* _imageView;
	UILabel* _titleTextLabel;
	UILabel* _subtitleTextLabel;
	UILayoutGuide* _customViewLayoutGuide;
	NSString* _titleText;
	NSString* _subtitleText;
	UIImage* _image;
	unsigned long long _footerLayout;
	NSAttributedString* _attributedTitleText;
	NSAttributedString* _attributedSubtitleText;
	NSURL* _imageURL;

}

@property (nonatomic,readonly) unsigned long long footerLayout;                      //@synthesize footerLayout=_footerLayout - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                  //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitleText;                 //@synthesize attributedTitleText=_attributedTitleText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSubtitleText;              //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                         //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * customViewLayoutGuide;                //@synthesize customViewLayoutGuide=_customViewLayoutGuide - In the implementation block
+(id)bulletinFooterViewForLayout:(unsigned long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
-(id)_initWithFrame:(CGRect)arg1 layout:(unsigned long long)arg2 ;
-(void)_updateBlendModes;
-(UILayoutGuide *)customViewLayoutGuide;
-(void)setAttributedTitleText:(NSAttributedString *)arg1 ;
-(unsigned long long)footerLayout;
-(NSAttributedString *)attributedTitleText;
@end

