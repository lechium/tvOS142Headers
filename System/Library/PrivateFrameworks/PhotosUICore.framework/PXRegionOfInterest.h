/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCoordinatedRect.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXImageRequester, PXViewSpec, NSString, PXTitleSubtitleLabelSpec;

@interface PXRegionOfInterest : PXCoordinatedRect <NSCopying> {

	PXImageRequester* _imageRequester;
	PXViewSpec* _imageViewSpec;
	NSString* _title;
	NSString* _subtitle;
	PXTitleSubtitleLabelSpec* _textViewSpec;
	/*^block*/id _placeholderViewFactory;
	CGRect _imageContentsRect;

}

@property (nonatomic,retain) PXImageRequester * imageRequester;                    //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                             //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (nonatomic,retain) PXViewSpec * imageViewSpec;                           //@synthesize imageViewSpec=_imageViewSpec - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) PXTitleSubtitleLabelSpec * textViewSpec;              //@synthesize textViewSpec=_textViewSpec - In the implementation block
@property (nonatomic,copy) id placeholderViewFactory;                              //@synthesize placeholderViewFactory=_placeholderViewFactory - In the implementation block
+(CGRect)convertedImageContentsRectOfRegionOfInterest:(id)arg1 toCoordinateSpace:(id)arg2 fittingSize:(CGSize)arg3 flipped:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(id)initWithRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(CGRect)imageContentsRect;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(PXViewSpec *)imageViewSpec;
-(void)setImageViewSpec:(PXViewSpec *)arg1 ;
-(PXTitleSubtitleLabelSpec *)textViewSpec;
-(void)setTextViewSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(id)placeholderViewFactory;
-(void)setPlaceholderViewFactory:(id)arg1 ;
@end

