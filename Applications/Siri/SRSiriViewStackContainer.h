//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SRSiriStackableContentDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, SRSiriViewStack;

@interface SRSiriViewStackContainer : UIView <SRSiriStackableContentDelegate>
{
    double _bottomPadding;	// 8 = 0x8
    UIView *_containingView;	// 16 = 0x10
    SRSiriViewStack *_customConstraintsViewStack;	// 24 = 0x18
    SRSiriViewStack *_bottomViewStack;	// 32 = 0x20
    SRSiriViewStack *_topViewStack;	// 40 = 0x28
    NSLayoutConstraint *_topContainerConstraint;	// 48 = 0x30
    NSLayoutConstraint *_trailingContainerConstraint;	// 56 = 0x38
    NSLayoutConstraint *_bottomContainerConstraint;	// 64 = 0x40
    NSLayoutConstraint *_temporaryTopConstraintForBottomViewStack;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002e52c
@property(retain, nonatomic) NSLayoutConstraint *temporaryTopConstraintForBottomViewStack; // @synthesize temporaryTopConstraintForBottomViewStack=_temporaryTopConstraintForBottomViewStack;
@property(retain, nonatomic) NSLayoutConstraint *bottomContainerConstraint; // @synthesize bottomContainerConstraint=_bottomContainerConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingContainerConstraint; // @synthesize trailingContainerConstraint=_trailingContainerConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topContainerConstraint; // @synthesize topContainerConstraint=_topContainerConstraint;
@property(retain, nonatomic) SRSiriViewStack *topViewStack; // @synthesize topViewStack=_topViewStack;
@property(retain, nonatomic) SRSiriViewStack *bottomViewStack; // @synthesize bottomViewStack=_bottomViewStack;
@property(retain, nonatomic) SRSiriViewStack *customConstraintsViewStack; // @synthesize customConstraintsViewStack=_customConstraintsViewStack;
@property(retain, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
- (double)stackableContentMaximumContainerWidth;	// IMP=0x000000010002e3d0
- (void)stackableContentWillUpdateLayout:(id)arg1 withUpdatedContentSize:(struct CGSize)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002dfd0
- (void)didDismissModalContent;	// IMP=0x000000010002df30
- (void)willDismissModalContent;	// IMP=0x000000010002de14
- (void)willPresentModalContent;	// IMP=0x000000010002dc50
- (void)relayout;	// IMP=0x000000010002db04
- (void)_attachContentView:(id)arg1;	// IMP=0x000000010002d384
- (void)removeContentView:(id)arg1;	// IMP=0x000000010002cf40
- (void)addContentView:(id)arg1;	// IMP=0x000000010002ce40
- (void)bringSubviewToFront:(id)arg1;	// IMP=0x000000010002ce20
@property(readonly, nonatomic) NSArray *contentViews;
@property(readonly, nonatomic) double topPadding;
- (id)_stackContainingContentView:(id)arg1;	// IMP=0x000000010002cbe8
- (id)_mostRecentTopStackViewAnchor;	// IMP=0x000000010002cb40
- (id)_mostRecentBottomStackViewAnchor;	// IMP=0x000000010002ca98
- (void)_configureCustomTopAndBottomViews:(id)arg1;	// IMP=0x000000010002c8cc
- (void)_setContentViews:(id)arg1;	// IMP=0x000000010002c8c0
- (void)_updateContainingViewTopConstraint;	// IMP=0x000000010002c7e0
- (void)_updateContainingViewTrailingConstraint;	// IMP=0x000000010002c6f4
- (void)didMoveToWindow;	// IMP=0x000000010002c6e8
- (void)updateConstraints;	// IMP=0x000000010002c69c
- (void)_updateContainingViewConstraints;	// IMP=0x000000010002c668
- (void)_configureContainingView;	// IMP=0x000000010002c2d8
- (id)initWithFrame:(struct CGRect)arg1 contentViews:(id)arg2;	// IMP=0x000000010002c224

@end

