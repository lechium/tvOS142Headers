//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface TVMTLabel : UILabel
{
    long long _previousNumberOfLines;	// 8 = 0x8
    struct CGSize _cachedSizeThatFits;	// 16 = 0x10
    struct CGSize _previousTargetSize;	// 32 = 0x20
    struct CGRect _cachedTextRectForBounds;	// 48 = 0x30
    struct CGRect _previousBounds;	// 80 = 0x50
}

@property(nonatomic) struct CGSize previousTargetSize; // @synthesize previousTargetSize=_previousTargetSize;
@property(nonatomic) struct CGSize cachedSizeThatFits; // @synthesize cachedSizeThatFits=_cachedSizeThatFits;
@property(nonatomic) long long previousNumberOfLines; // @synthesize previousNumberOfLines=_previousNumberOfLines;
@property(nonatomic) struct CGRect previousBounds; // @synthesize previousBounds=_previousBounds;
@property(nonatomic) struct CGRect cachedTextRectForBounds; // @synthesize cachedTextRectForBounds=_cachedTextRectForBounds;
- (void)_clearCachedValues;	// IMP=0x00000001000727bc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000726ec
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;	// IMP=0x00000001000725b0
- (void)setBaselineAdjustment:(long long)arg1;	// IMP=0x0000000100072560
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;	// IMP=0x0000000100072510
- (void)setNumberOfLines:(long long)arg1;	// IMP=0x00000001000724c0
- (void)setLineBreakMode:(long long)arg1;	// IMP=0x0000000100072470
- (void)setFont:(id)arg1;	// IMP=0x0000000100072420
- (void)setText:(id)arg1;	// IMP=0x00000001000723d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100072308

@end

