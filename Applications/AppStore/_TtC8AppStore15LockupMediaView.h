//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore15LockupMediaView : UIView
{
    MISSING_TYPE *imageView;	// 8 = 0x8
    MISSING_TYPE *handlerKeys;	// 16 = 0x10
    MISSING_TYPE *currentScreenshotIndex;	// 24 = 0x18
    MISSING_TYPE *images;	// 40 = 0x28
    MISSING_TYPE *animationTimer;	// 48 = 0x30
    MISSING_TYPE *state;	// 56 = 0x38
    MISSING_TYPE *videoContainer;	// 64 = 0x40
    MISSING_TYPE *roundedCorners;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010009a488
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100099cec
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000100099a8c
- (void)layoutSubviews;	// IMP=0x0000000100099a60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100099848
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100099828

@end

