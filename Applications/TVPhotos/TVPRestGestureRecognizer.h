//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface TVPRestGestureRecognizer : UIGestureRecognizer
{
    _Bool _selectButtonDepressed;	// 8 = 0x8
    int _touchCount;	// 12 = 0xc
    long long _stateToEnter;	// 16 = 0x10
    double _minimumPressDuration;	// 24 = 0x18
    NSTimer *_pressDurationTimer;	// 32 = 0x20
    struct CGPoint _digitizerStartLocation;	// 40 = 0x28
    struct CGPoint _digitizerLocation;	// 56 = 0x38
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x0000000100030164
- (void).cxx_destruct;	// IMP=0x00000001000309f0
@property(nonatomic) __weak NSTimer *pressDurationTimer; // @synthesize pressDurationTimer=_pressDurationTimer;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(readonly, nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
@property(readonly, nonatomic) struct CGPoint digitizerStartLocation; // @synthesize digitizerStartLocation=_digitizerStartLocation;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100030970
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100030718
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100030714
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100030598
- (void)recognizeFingerRest;	// IMP=0x0000000100030524
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100030444
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100030364
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000302e4
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003016c
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000100030108

@end

