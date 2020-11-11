//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMapTable, SRCompactDeviceMotionEffectView;
@protocol SRCompactServerUtteranceViewDelegate;

@interface SRCompactServerUtteranceView : UIView
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    UIView *_labelsContainerView;	// 40 = 0x28
    NSMapTable *_emojiLabels;	// 48 = 0x30
    id <SRCompactServerUtteranceViewDelegate> _delegate;	// 56 = 0x38
    SRCompactDeviceMotionEffectView *_deviceMotionEffectView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100023b44
@property(readonly, nonatomic) SRCompactDeviceMotionEffectView *deviceMotionEffectView; // @synthesize deviceMotionEffectView=_deviceMotionEffectView;
@property(nonatomic) __weak id <SRCompactServerUtteranceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000100023aa8
- (id)_fontForUtteranceLabel;	// IMP=0x0000000100023a84
- (double)_scaledSpacingBetweenLabels;	// IMP=0x0000000100023a28
- (id)_createLabel;	// IMP=0x0000000100023944
- (id)_createEmojiLabelForString:(id)arg1 containingEmojisAtRanges:(id)arg2;	// IMP=0x00000001000236a0
- (id)_createLabelForUtterance:(id)arg1;	// IMP=0x0000000100023560
- (void)layoutSubviews;	// IMP=0x0000000100023154
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100022e00
- (void)setUtterances:(id)arg1;	// IMP=0x0000000100022864
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000010002284c
- (id)initWithContentInsets:(struct UIEdgeInsets)arg1 delegate:(id)arg2;	// IMP=0x00000001000226d8

@end
