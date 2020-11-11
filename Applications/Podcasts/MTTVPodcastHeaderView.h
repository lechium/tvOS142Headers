//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTPodcast, MTTVPodcastDetailsSectionControl, UILabel;
@protocol MTTVPodcastHeaderViewDelegate;

@interface MTTVPodcastHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    MTTVPodcastDetailsSectionControl *_sectionControl;	// 16 = 0x10
    MTPodcast *_podcast;	// 24 = 0x18
    id <MTTVPodcastHeaderViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000fe500
@property(nonatomic) __weak id <MTTVPodcastHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000fe3f8
- (id)preferredFocusedView;	// IMP=0x00000001000fe3e8
- (_Bool)canBecomeFocused;	// IMP=0x00000001000fe39c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000fe230
- (void)layoutSubviews;	// IMP=0x00000001000fdfac
- (void)updateTextColors;	// IMP=0x00000001000fde70
- (void)sectionControlDidChange:(id)arg1;	// IMP=0x00000001000fde04
@property(nonatomic) unsigned long long selectedTab; // @dynamic selectedTab;
- (void)configureSubviews;	// IMP=0x00000001000fdb38
- (id)initWithPodcast:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000fda7c
- (id)init;	// IMP=0x00000001000fda68

@end
