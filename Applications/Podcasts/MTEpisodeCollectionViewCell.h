//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTCollectionViewCell.h"

#import "MTEpisodeLockupDelegate-Protocol.h"

@class MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeLockup, NSString, UIView;
@protocol MTEpisodeCollectionViewCellDelegate;

@interface MTEpisodeCollectionViewCell : MTCollectionViewCell <MTEpisodeLockupDelegate>
{
    UIView *_lockupContainer;	// 8 = 0x8
    MTEpisodeLockup *_episodeLockup;	// 16 = 0x10
}

+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x00000001000925c8
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x00000001000925b4
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x00000001000924dc
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x0000000100092494
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x0000000100092480
- (void).cxx_destruct;	// IMP=0x0000000100093d10
@property(retain, nonatomic) MTEpisodeLockup *episodeLockup; // @synthesize episodeLockup=_episodeLockup;
@property(retain, nonatomic) UIView *lockupContainer; // @synthesize lockupContainer=_lockupContainer;
- (void)clearLayer:(id)arg1;	// IMP=0x0000000100093c84
- (void)lockupDidChangeSize:(id)arg1;	// IMP=0x0000000100093b98
- (void)lockup:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x0000000100093b28
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100093a90
- (void)moreButtonTapped:(id)arg1;	// IMP=0x0000000100093a8c
- (void)updateOverlayForSelectedOrIsNew;	// IMP=0x0000000100093540
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100093468
- (void)layoutSubviews;	// IMP=0x0000000100093308
- (void)prepareForReuse;	// IMP=0x0000000100093260
- (void)fixEmptyTextContainers;	// IMP=0x0000000100093220
- (void)invalidateLayoutMargins;	// IMP=0x00000001000931e0
- (void)invalidateSizeMetrics;	// IMP=0x00000001000931a0
- (void)updateActionSheetsAndPopovers;	// IMP=0x0000000100093160
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100093120
@property(readonly, nonatomic) MTEpisodeActionController *actionController;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(retain, nonatomic) MTColorTheme *colorTheme;
@property(retain, nonatomic) MTEpisode *episode;
- (void)updateCurrentRowHeight;	// IMP=0x0000000100092d7c
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100092c80
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100092c30
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100092b10
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100092b04
@property(nonatomic) _Bool showsPlayState;
@property(nonatomic) _Bool showsPubDate;
@property(nonatomic) unsigned long long style;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000100092864
- (void)dealloc;	// IMP=0x00000001000927f0
- (void)setupCell;	// IMP=0x0000000100092634
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000925dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTEpisodeCollectionViewCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
