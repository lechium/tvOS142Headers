/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITabularDataCellItem.h>

@class NSDictionary;

@interface SiriTVUITabularDataTextCellItem : SiriTVUITabularDataCellItem {

	BOOL _highlighted;
	NSDictionary* _attributedTexts;
	NSDictionary* _images;
	CGSize _imageSize;

}

@property (nonatomic,copy) NSDictionary * attributedTexts;                       //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (nonatomic,copy) NSDictionary * images;                                //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)init;
-(CGSize)imageSize;
-(NSDictionary *)images;
-(void)setImages:(NSDictionary *)arg1 ;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithAttributedTexts:(id)arg1 ;
-(id)initWithAttributedTexts:(id)arg1 images:(id)arg2 imageSize:(CGSize)arg3 highlighted:(BOOL)arg4 ;
-(id)initWithAttributedTexts:(id)arg1 images:(id)arg2 imageSize:(CGSize)arg3 ;
@end

