//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVEpisodeGenericCell.h"

@class MTEpisodeArtworkView, UIImageView, UILabel;

@interface MTTVEpisodeCell : MTTVEpisodeGenericCell
{
    _Bool _showsPlayState;	// 8 = 0x8
    _Bool _showsArtwork;	// 9 = 0x9
    MTEpisodeArtworkView *_artworkView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_metadataLabel;	// 32 = 0x20
    UIImageView *_explicitIconView;	// 40 = 0x28
    UIImageView *_videoIconView;	// 48 = 0x30
}

+ (id)imageForTreatment:(unsigned long long)arg1;	// IMP=0x0000000100047a44
+ (double)capHeightToTop;	// IMP=0x0000000100046bc0
+ (id)metadataFont;	// IMP=0x0000000100046ba0
+ (id)titleFont;	// IMP=0x0000000100046b80
+ (double)height;	// IMP=0x0000000100046b74
- (void).cxx_destruct;	// IMP=0x000000010004902c
@property(retain, nonatomic) UIImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) UIImageView *explicitIconView; // @synthesize explicitIconView=_explicitIconView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MTEpisodeArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) _Bool showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property(nonatomic) _Bool showsPlayState; // @synthesize showsPlayState=_showsPlayState;
- (void)updatePlayStatusViewImage;	// IMP=0x0000000100048efc
- (void)updateColors;	// IMP=0x0000000100048da8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010004885c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100048790
- (void)layoutSubviews;	// IMP=0x0000000100047e4c
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100047dd4
- (void)updatePlayStatusForCurrentPlayerItemDidChange;	// IMP=0x0000000100047d48
- (void)setCurrentPlayerItem:(_Bool)arg1;	// IMP=0x0000000100047cf8
- (void)configureSubviews;	// IMP=0x0000000100047ac4
- (id)_fetchMetadataText;	// IMP=0x0000000100047748
- (void)updateArtworkNowPlayingIndicator;	// IMP=0x00000001000476ec
- (void)updateArtworkAsync;	// IMP=0x000000010004740c
- (void)artworkDidChange:(id)arg1;	// IMP=0x000000010004734c
- (void)setExplicitTreatment:(unsigned long long)arg1;	// IMP=0x0000000100047228
- (void)setEpisode:(id)arg1;	// IMP=0x0000000100046ce0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100046c84

@end

