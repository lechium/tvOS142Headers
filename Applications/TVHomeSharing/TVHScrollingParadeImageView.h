//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "TVHPauseable-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, TVHImageProxyQueueLoader;
@protocol OS_dispatch_group;

@interface TVHScrollingParadeImageView : UIView <CAAnimationDelegate, TVHPauseable>
{
    _Bool _paused;	// 8 = 0x8
    _Bool _animating;	// 9 = 0x9
    NSArray *_imageProxies;	// 16 = 0x10
    unsigned long long _additionalImageViewCount;	// 24 = 0x18
    NSMutableArray *_imageViews;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_animationGroup;	// 40 = 0x28
    TVHImageProxyQueueLoader *_imageProxyLoader;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100009c0c
@property(retain, nonatomic) TVHImageProxyQueueLoader *imageProxyLoader; // @synthesize imageProxyLoader=_imageProxyLoader;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) unsigned long long additionalImageViewCount; // @synthesize additionalImageViewCount=_additionalImageViewCount;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void)_stopAnimations;	// IMP=0x0000000100009970
- (void)_startAnimations;	// IMP=0x0000000100008f20
- (void)_addImage:(id)arg1;	// IMP=0x0000000100008c70
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100008c38
- (void)layoutSubviews;	// IMP=0x0000000100008a88
- (void)didMoveToWindow;	// IMP=0x00000001000089b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000827c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
