//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVImageProxy, TVPImageView, UIActivityIndicatorView, UIVisualEffectView;

@interface TVPSharedPSOneupItemView : UIView
{
    _Bool _isVideoItem;	// 8 = 0x8
    TVImageProxy *_imageProxy;	// 16 = 0x10
    TVPImageView *_oneUpItemView;	// 24 = 0x18
    unsigned long long _oneupMode;	// 32 = 0x20
    UIVisualEffectView *_backdropView;	// 40 = 0x28
    TVPImageView *_playImageView;	// 48 = 0x30
    TVPImageView *_videoBadgeView;	// 56 = 0x38
    UIActivityIndicatorView *_spinnerView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010008cd7c
@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) TVPImageView *videoBadgeView; // @synthesize videoBadgeView=_videoBadgeView;
@property(retain, nonatomic) TVPImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) _Bool isVideoItem; // @synthesize isVideoItem=_isVideoItem;
@property(nonatomic) unsigned long long oneupMode; // @synthesize oneupMode=_oneupMode;
@property(readonly, nonatomic) TVPImageView *oneUpItemView; // @synthesize oneUpItemView=_oneUpItemView;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (void)_configureVideoBadgeView;	// IMP=0x000000010008caa0
- (void)layoutSubviews;	// IMP=0x000000010008c87c
- (void)didAnimateToFullScreenMode;	// IMP=0x000000010008c82c
- (void)willAnimateToFullScreenMode;	// IMP=0x000000010008c810
- (void)didAnimateToCaptionMode;	// IMP=0x000000010008c7cc
- (void)willAnimateToCaptionMode;	// IMP=0x000000010008c77c

@end

