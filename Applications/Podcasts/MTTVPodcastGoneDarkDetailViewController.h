//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVPodcastEpisodePlaceholderViewController.h"

@class MTAllPropertyChangesQueryObserver, NSString, UILabel;

@interface MTTVPodcastGoneDarkDetailViewController : MTTVPodcastEpisodePlaceholderViewController
{
    UILabel *_reasonLabel;	// 8 = 0x8
    NSString *_darkReason;	// 16 = 0x10
    MTAllPropertyChangesQueryObserver *_darkObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010012ced4
@property(retain, nonatomic) MTAllPropertyChangesQueryObserver *darkObserver; // @synthesize darkObserver=_darkObserver;
@property(retain, nonatomic) NSString *darkReason; // @synthesize darkReason=_darkReason;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
- (void)viewWillLayoutSubviews;	// IMP=0x000000010012ca48
- (void)viewDidLoad;	// IMP=0x000000010012c9d8
- (void)loadView;	// IMP=0x000000010012c93c
- (void)updateDarkReason;	// IMP=0x000000010012c744
- (void)_updateColors;	// IMP=0x000000010012c690
- (void)setPodcast:(id)arg1;	// IMP=0x000000010012c5a8
- (id)initWithPodcast:(id)arg1;	// IMP=0x000000010012c574

@end

