//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIImageView, _TVSettingsImageLoaderQueue;

@interface TVSettingsImageCrossfadeView : UIView
{
    NSTimer *_crossfadeTimer;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    _TVSettingsImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_imageProxies;	// 32 = 0x20
    double _crossfadePeriod;	// 40 = 0x28
    double _crossfadeDuration;	// 48 = 0x30
    struct UIEdgeInsets _padding;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000467bc
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void)_crossfadeToImage:(id)arg1;	// IMP=0x0000000100046564
- (void)_loadNextImage:(id)arg1;	// IMP=0x00000001000464bc
- (void)_startTimer;	// IMP=0x0000000100046404
- (void)layoutSubviews;	// IMP=0x0000000100045f70
- (void)didMoveToSuperview;	// IMP=0x0000000100045f08
- (void)dealloc;	// IMP=0x0000000100045eb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100045dd8

@end

