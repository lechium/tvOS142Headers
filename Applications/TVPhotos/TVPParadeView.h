//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSString, TVPImageLoaderQueue;

@interface TVPParadeView : UIView <CAAnimationDelegate>
{
    _Bool _pausedForResignActive;	// 8 = 0x8
    _Bool _paused;	// 9 = 0x9
    _Bool _shuffled;	// 10 = 0xa
    _Bool _inOrder;	// 11 = 0xb
    NSArray *_imageProxies;	// 16 = 0x10
    TVPImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_shuffledImageProxies;	// 32 = 0x20
    NSArray *_positionKeyframes;	// 40 = 0x28
    NSArray *_depthKeyframes;	// 48 = 0x30
    NSArray *_transformKeyframes;	// 56 = 0x38
    struct CGRect _animationBounds;	// 64 = 0x40
    struct CGRect _maximumImageBounds;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010000d590
@property(retain, nonatomic) NSArray *transformKeyframes; // @synthesize transformKeyframes=_transformKeyframes;
@property(retain, nonatomic) NSArray *depthKeyframes; // @synthesize depthKeyframes=_depthKeyframes;
@property(retain, nonatomic) NSArray *positionKeyframes; // @synthesize positionKeyframes=_positionKeyframes;
@property(nonatomic) struct CGRect maximumImageBounds; // @synthesize maximumImageBounds=_maximumImageBounds;
@property(nonatomic) struct CGRect animationBounds; // @synthesize animationBounds=_animationBounds;
@property(copy, nonatomic) NSArray *shuffledImageProxies; // @synthesize shuffledImageProxies=_shuffledImageProxies;
@property(retain, nonatomic) TVPImageLoaderQueue *loaderQueue; // @synthesize loaderQueue=_loaderQueue;
@property(nonatomic, getter=isInOrder) _Bool inOrder; // @synthesize inOrder=_inOrder;
@property(nonatomic, getter=isShuffled) _Bool shuffled; // @synthesize shuffled=_shuffled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (id)_sublayerWithAnimation:(id)arg1;	// IMP=0x000000010000d2c8
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010000d14c
- (void)_stopAnimations;	// IMP=0x000000010000cff8
- (void)_updateAnimationForLayer:(id)arg1 timeOffset:(double)arg2;	// IMP=0x000000010000c928
- (void)_updateAnimations;	// IMP=0x000000010000c79c
- (void)_updateKeyframes;	// IMP=0x000000010000c470
- (id)_createLayerForImage:(struct CGImage *)arg1;	// IMP=0x000000010000c3e4
- (id)_imageProxiesToLoad;	// IMP=0x000000010000c3b4
- (long long)_maximumImageCount;	// IMP=0x000000010000c3ac
- (_Bool)isPreviewPaused;	// IMP=0x000000010000c2d8
- (void)setPreviewPaused:(_Bool)arg1;	// IMP=0x000000010000c2cc
- (void)_applicationDidFinishSuspensionNotification:(id)arg1;	// IMP=0x000000010000bdd0
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000010000bd7c
- (void)didMoveToSuperview;	// IMP=0x000000010000bd28
- (void)layoutSubviews;	// IMP=0x000000010000bc80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000ba34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
