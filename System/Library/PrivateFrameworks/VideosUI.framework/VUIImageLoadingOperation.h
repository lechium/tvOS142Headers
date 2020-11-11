/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class TVImage, NSError;


@protocol VUIImageLoadingOperation <NSObject>
@property (nonatomic,readonly) CGSize scaleToSize; 
@property (nonatomic,readonly) BOOL cropToFit; 
@property (nonatomic,readonly) TVImage * image; 
@property (nonatomic,readonly) unsigned long long scalingResult; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(TVImage *)image;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(unsigned long long)scalingResult;

@end

