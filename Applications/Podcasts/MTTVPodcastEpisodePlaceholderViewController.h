//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MTPodcast, UIImageView;

@interface MTTVPodcastEpisodePlaceholderViewController : UIViewController
{
    MTPodcast *_podcast;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100031a70
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (id)_fetchArtwork;	// IMP=0x00000001000318b8
- (_Bool)_isDarkBackground;	// IMP=0x0000000100031868
- (void)_updateColors;	// IMP=0x00000001000317a4
- (void)_update;	// IMP=0x0000000100031700
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000315cc
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000314f8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000314a8
- (void)viewDidLoad;	// IMP=0x0000000100031458
- (void)loadView;	// IMP=0x00000001000313bc
- (id)initWithPodcast:(id)arg1;	// IMP=0x0000000100031348

@end

