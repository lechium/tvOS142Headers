//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPRequestViewController.h"

@class UIControl;

@interface TVMusicLibraryRecentlyAddedViewController : TVMusicMPRequestViewController
{
    UIControl *_playButton;	// 8 = 0x8
    UIControl *_shuffleAllButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000b24f4
@property(retain, nonatomic) UIControl *shuffleAllButton; // @synthesize shuffleAllButton=_shuffleAllButton;
@property(retain, nonatomic) UIControl *playButton; // @synthesize playButton=_playButton;
- (void)handlePlayPauseCommand;	// IMP=0x00000001000b2158
- (id)_placeholderImageForObjectType:(long long)arg1;	// IMP=0x00000001000b2068
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000b1e60
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000b1e58
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000b1514
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000b0df0
- (double)collectionViewTop;	// IMP=0x00000001000b0de4
- (void)viewDidLoad;	// IMP=0x00000001000b0d74
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000b0c64

@end

