/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, AVGradientView;

@interface AVNowPlayingDimmingView : UIView {

	BOOL _dimsEntireBounds;
	UIView* _flatBackdrop;
	AVGradientView* _gradientBackdrop;

}

@property (nonatomic,retain) UIView * flatBackdrop;                          //@synthesize flatBackdrop=_flatBackdrop - In the implementation block
@property (nonatomic,retain) AVGradientView * gradientBackdrop;              //@synthesize gradientBackdrop=_gradientBackdrop - In the implementation block
@property (assign,nonatomic) BOOL dimsEntireBounds;                          //@synthesize dimsEntireBounds=_dimsEntireBounds - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDimsEntireBounds:(BOOL)arg1 ;
-(BOOL)dimsEntireBounds;
-(UIView *)flatBackdrop;
-(void)setFlatBackdrop:(UIView *)arg1 ;
-(AVGradientView *)gradientBackdrop;
-(void)setGradientBackdrop:(AVGradientView *)arg1 ;
@end

