//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _PBPresentationElementView : UIView
{
    _Bool _containedInVisibleWindow;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isContainedInVisibleWindow) _Bool containedInVisibleWindow; // @synthesize containedInVisibleWindow=_containedInVisibleWindow;
- (void)_updateStateForWindow:(id)arg1;	// IMP=0x00000001000cbd34
- (void)_updateObserversForWindow:(id)arg1;	// IMP=0x00000001000cbb7c
- (void)_windowDidBecomeHidden:(id)arg1;	// IMP=0x00000001000cbadc
- (void)_windowDidBecomeVisible:(id)arg1;	// IMP=0x00000001000cba3c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000001000cb9c0
- (void)didMoveToWindow;	// IMP=0x00000001000cb938
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000cb84c

@end
