//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTGenericCell.h"

@class MTCountChevronView;

@interface MTPodcastCell : MTGenericCell
{
    MTCountChevronView *_countView;	// 24 = 0x18
}

+ (_Bool)showsArtwork;	// IMP=0x00000001000d2ffc
- (void).cxx_destruct;	// IMP=0x00000001000d38a8
@property(retain, nonatomic) MTCountChevronView *countView; // @synthesize countView=_countView;
- (void)updateColors;	// IMP=0x00000001000d3744
- (void)updateFonts;	// IMP=0x00000001000d360c
- (void)configureSubviews;	// IMP=0x00000001000d3594
- (id)_subtitleForPodcast:(id)arg1;	// IMP=0x00000001000d3204
- (void)updateWithObject:(id)arg1;	// IMP=0x00000001000d305c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000d3004

@end
