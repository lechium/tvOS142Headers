/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class _AVSimplePlayerLayerView, AVPlayerLayer;

@interface AVPictureInPicturePlayerLayerView : UIView {

	_AVSimplePlayerLayerView* _simplePlayerLayerView;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
-(AVPlayerLayer *)playerLayer;
-(void)attachPlayerLayer;
-(void)detachPlayerLayer;
@end

