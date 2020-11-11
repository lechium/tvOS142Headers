//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MTPlaylist, UIImageView;

@interface MTTVStationPlaceholderViewController : UIViewController
{
    MTPlaylist *_station;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000f8cc0
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTPlaylist *station; // @synthesize station=_station;
- (id)_fetchArtwork;	// IMP=0x00000001000f8be8
- (_Bool)_isDarkBackground;	// IMP=0x00000001000f8b98
- (void)_updateColors;	// IMP=0x00000001000f8b14
- (void)_update;	// IMP=0x00000001000f8a70
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000f893c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000f8868
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000f8818
- (void)viewDidLoad;	// IMP=0x00000001000f87c8
- (void)loadView;	// IMP=0x00000001000f872c
- (id)initWithStation:(id)arg1;	// IMP=0x00000001000f86b8

@end

