//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MTTVAudioPlaybackProgressBarView : UIView
{
    double _progress;	// 8 = 0x8
    UIView *_completedView;	// 16 = 0x10
    UIView *_remainingView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d16ec
@property(retain, nonatomic) UIView *remainingView; // @synthesize remainingView=_remainingView;
@property(retain, nonatomic) UIView *completedView; // @synthesize completedView=_completedView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)layoutSubviews;	// IMP=0x00000001000d15c4
- (struct CGRect)_remainingFrame;	// IMP=0x00000001000d1558
- (struct CGRect)_completedFrame;	// IMP=0x00000001000d14e8
- (void)setProgress:(double)arg1 withAnimationDuration:(double)arg2;	// IMP=0x00000001000d1408
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000d11d8

@end
