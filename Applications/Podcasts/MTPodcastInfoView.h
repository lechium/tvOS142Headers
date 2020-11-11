//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMExpandingLabel, NSString, UIButton, UIImageView, UILabel;
@protocol MTPodcastInfoViewDelegate;

@interface MTPodcastInfoView : UIView <UIGestureRecognizerDelegate>
{
    id <MTPodcastInfoViewDelegate> _delegate;	// 8 = 0x8
    NSString *_podcastUuid;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_authorLabel;	// 40 = 0x28
    UIView *_separatorBelowAuthor;	// 48 = 0x30
    UIButton *_settingsButton;	// 56 = 0x38
    UIButton *_shareButton;	// 64 = 0x40
    IMExpandingLabel *_descriptionView;	// 72 = 0x48
    UIView *_bottomSeparator;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010015b1ec
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) IMExpandingLabel *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) UIView *separatorBelowAuthor; // @synthesize separatorBelowAuthor=_separatorBelowAuthor;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
@property(nonatomic) __weak id <MTPodcastInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)metricsContentIdentifier;	// IMP=0x000000010015af9c
- (id)metricsName;	// IMP=0x000000010015af90
- (void)descriptionViewTapped:(id)arg1;	// IMP=0x000000010015aee8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010015aee0
- (void)update;	// IMP=0x000000010015ad0c
- (void)_updateFonts;	// IMP=0x000000010015ab40
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010015aafc
- (void)layoutSubviews;	// IMP=0x000000010015a6d4
- (void)addSubviews;	// IMP=0x000000010015a1b4
- (void)dealloc;	// IMP=0x000000010015a13c
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x000000010015a00c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

