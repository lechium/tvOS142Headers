//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTableViewCell.h"

#import "MTCellProtocol-Protocol.h"

@class MTArtworkView, MTLabelStackView, NSString, UIView;

@interface MTGenericCell : MTTableViewCell <MTCellProtocol>
{
    _Bool _hidesSideViewWhenEditing;	// 24 = 0x18
    _Bool _sideViewHidden;	// 25 = 0x19
    _Bool _showsArtwork;	// 26 = 0x1a
    UIView *_sideView;	// 32 = 0x20
    MTArtworkView *_artworkView;	// 40 = 0x28
    MTLabelStackView *_textStackView;	// 48 = 0x30
}

+ (id)reuseIdentifier;	// IMP=0x0000000100058870
+ (Class)textStackViewClass;	// IMP=0x00000001000584fc
+ (_Bool)showsArtwork;	// IMP=0x00000001000584f4
+ (struct CGSize)artworkSizeForViewWidth:(double)arg1;	// IMP=0x0000000100058494
+ (double)maxHeight;	// IMP=0x0000000100058480
+ (double)heightForWidth:(double)arg1;	// IMP=0x0000000100058318
- (void).cxx_destruct;	// IMP=0x00000001000595e4
@property(nonatomic) _Bool showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property(nonatomic, getter=_isSideViewHidden, setter=_setSideViewHidden:) _Bool sideViewHidden; // @synthesize sideViewHidden=_sideViewHidden;
@property(retain, nonatomic) MTLabelStackView *textStackView; // @synthesize textStackView=_textStackView;
@property(retain, nonatomic) MTArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) _Bool hidesSideViewWhenEditing; // @synthesize hidesSideViewWhenEditing=_hidesSideViewWhenEditing;
@property(retain, nonatomic) UIView *sideView; // @synthesize sideView=_sideView;
- (void)_updateSideViewHiddenForState:(unsigned long long)arg1;	// IMP=0x0000000100059434
- (void)_updateSideViewHiddenForCurrentState;	// IMP=0x00000001000593fc
- (double)textViewMaxXForArtworkFrame:(struct CGRect)arg1 sideViewFrame:(struct CGRect)arg2;	// IMP=0x000000010005934c
- (double)textViewMinXForArtworkFrame:(struct CGRect)arg1 sideViewFrame:(struct CGRect)arg2;	// IMP=0x000000010005929c
- (struct CGRect)textStackFrameForContentViewSize:(struct CGSize)arg1 artworkFrame:(struct CGRect)arg2 sideViewFrame:(struct CGRect)arg3;	// IMP=0x0000000100059174
- (struct CGRect)sideViewFrameForContentViewSize:(struct CGSize)arg1;	// IMP=0x000000010005908c
- (struct CGRect)artworkFrameForContentViewSize:(struct CGSize)arg1;	// IMP=0x0000000100058fe0
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100058f1c
- (void)willTransitionToState:(unsigned long long)arg1;	// IMP=0x0000000100058ec8
- (void)prepareForReuse;	// IMP=0x0000000100058e40
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100058e08
- (void)layoutSubviews;	// IMP=0x0000000100058ba8
- (void)updateFonts;	// IMP=0x00000001000589c4
- (void)updateColors;	// IMP=0x00000001000589c0
- (void)configureSubviews;	// IMP=0x0000000100058874
@property(retain, nonatomic) NSString *artworkKey;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)updateWithObject:(id)arg1;	// IMP=0x00000001000585a8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100058540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

