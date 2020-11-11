/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIImage;


@protocol TVPMusicNowPlayingImage <NSObject,NSCopying>
@property (assign,nonatomic) CGSize desiredImageSize; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) UIImage * image; 
@required
-(UIImage *)image;
-(BOOL)isLoading;
-(CGSize)desiredImageSize;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDesiredImageSize:(CGSize)arg1;

@end
