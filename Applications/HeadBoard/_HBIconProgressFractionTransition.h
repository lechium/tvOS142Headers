//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_HBIconProgressTransition.h"

@interface _HBIconProgressFractionTransition : _HBIconProgressTransition
{
    double _targetFraction;	// 8 = 0x8
}

+ (id)newTransitionToFraction:(double)arg1;	// IMP=0x0000000100049710
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0000000100049864
- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;	// IMP=0x00000001000497fc
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x00000001000497e4
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x0000000100049760
- (void)updateToFraction:(double)arg1;	// IMP=0x0000000100049750

@end

