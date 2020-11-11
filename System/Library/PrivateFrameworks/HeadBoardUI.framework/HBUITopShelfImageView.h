/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, HBUITopShelfAsyncImage, TVImageProxy, UIImageView;

@interface HBUITopShelfImageView : UIView {

	long long _alignment;
	UIImage* _image;
	HBUITopShelfAsyncImage* _asyncImage;
	TVImageProxy* _imageProxy;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) TVImageProxy * imageProxy;                      //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long alignment;                              //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) HBUITopShelfAsyncImage * asyncImage;              //@synthesize asyncImage=_asyncImage - In the implementation block
-(id)init;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setImage:(id)arg1 ;
-(CGSize)_contentSize;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)_loadAsyncImage;
-(void)setAsyncImage:(HBUITopShelfAsyncImage *)arg1 ;
-(HBUITopShelfAsyncImage *)asyncImage;
@end

