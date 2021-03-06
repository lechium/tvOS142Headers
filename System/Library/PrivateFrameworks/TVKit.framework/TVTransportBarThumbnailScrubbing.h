/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class TVPVideoView;


@protocol TVTransportBarThumbnailScrubbing <NSObject>
@property (nonatomic,readonly) long long scrubPreviewMode; 
@property (nonatomic,readonly) TVPVideoView * scrubVideoView; 
@required
-(TVPVideoView *)scrubVideoView;
-(void)setScrubPreviewMode:(long long)arg1 animated:(BOOL)arg2;
-(void)setScrubImage:(id)arg1;
-(void)setScrubVideoPlayer:(id)arg1;
-(long long)scrubPreviewMode;

@end

