/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVImageProxy;

@interface VUIVideoAdvisoryLogoImageDownloader : NSObject {

	TVImageProxy* _ratingImageProxy;

}

@property (nonatomic,retain) TVImageProxy * ratingImageProxy;              //@synthesize ratingImageProxy=_ratingImageProxy - In the implementation block
-(void)setRatingImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)ratingImageProxy;
-(void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

