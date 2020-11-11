//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewController;

@interface _PBSystemUIPresentationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    UIViewController *_parentViewController;	// 24 = 0x18
    CDUnknownBlockType _transitionBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010019879c
@property(readonly, copy, nonatomic) CDUnknownBlockType transitionBlock; // @synthesize transitionBlock=_transitionBlock;
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (_Bool)_canBeInterrupted;	// IMP=0x00000001001986b0
- (void)_begin;	// IMP=0x00000001001982a0
- (id)initWithViewController:(id)arg1 parentViewController:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001001980e0

@end

