/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVItemTitleView, TVItemSummaryView, UILabel, UIView, TVImageView, TVImageProxy;

@interface TVMetadataView : UIView {

	TVItemTitleView* _titleView;
	TVItemSummaryView* _summaryView;
	UILabel* _footnoteLabel;
	double _maxImageWidth;
	UIView* _upperMetadataView;
	TVImageView* _imageView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) TVImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy; 
@property (nonatomic,readonly) TVItemTitleView * titleView;                  //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) TVItemSummaryView * summaryView;              //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;                      //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (assign,nonatomic) double maxImageWidth;                           //@synthesize maxImageWidth=_maxImageWidth - In the implementation block
@property (nonatomic,retain) UIView * upperMetadataView;                     //@synthesize upperMetadataView=_upperMetadataView - In the implementation block
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(TVImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)footnoteLabel;
-(id)_footnoteLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setImageView:(TVImageView *)arg1 ;
-(void)_updateColors;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVItemTitleView *)titleView;
-(void)setMaxImageWidth:(double)arg1 ;
-(TVItemSummaryView *)summaryView;
-(void)setUpperMetadataView:(UIView *)arg1 ;
-(Class)_titleViewClass;
-(Class)_summaryViewClass;
-(CGSize)_maximumArtworkSize;
-(BOOL)_shouldLeftAlignArtwork;
-(double)maxImageWidth;
-(UIView *)upperMetadataView;
@end

