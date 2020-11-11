/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage;

@interface StockGraphImageSet : NSObject {

	UIImage* _lineGraphImage;
	UIImage* _highlightOverlayImage;
	UIImage* _volumeGraphImage;

}

@property (nonatomic,retain) UIImage * lineGraphImage;                     //@synthesize lineGraphImage=_lineGraphImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightOverlayImage;              //@synthesize highlightOverlayImage=_highlightOverlayImage - In the implementation block
@property (nonatomic,retain) UIImage * volumeGraphImage;                   //@synthesize volumeGraphImage=_volumeGraphImage - In the implementation block
-(UIImage *)lineGraphImage;
-(void)setLineGraphImage:(UIImage *)arg1 ;
-(UIImage *)highlightOverlayImage;
-(void)setHighlightOverlayImage:(UIImage *)arg1 ;
-(UIImage *)volumeGraphImage;
-(void)setVolumeGraphImage:(UIImage *)arg1 ;
@end
