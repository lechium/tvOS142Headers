//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAShapeLayer, UIImageView, UIView;

@interface MTTVSettingsPodcastTableViewCell : UITableViewCell
{
    _Bool _dim;	// 8 = 0x8
    _Bool _on;	// 9 = 0x9
    UIImageView *_leftImageView;	// 16 = 0x10
    CAShapeLayer *_leftImageMaskLayer;	// 24 = 0x18
    UIView *_dimView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000ea5b4
@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) CAShapeLayer *leftImageMaskLayer; // @synthesize leftImageMaskLayer=_leftImageMaskLayer;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(nonatomic) _Bool dim; // @synthesize dim=_dim;
- (void)updateColors;	// IMP=0x00000001000ea45c
- (void)setOnOffLabel:(_Bool)arg1;	// IMP=0x00000001000ea360
- (void)updateImageForPodcast:(id)arg1;	// IMP=0x00000001000ea064
- (double)offSetHeight;	// IMP=0x00000001000ea00c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000e9f34
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000e9e68
- (void)layoutSubviews;	// IMP=0x00000001000e99d0
- (void)updateWithPodcast:(id)arg1;	// IMP=0x00000001000e976c
- (void)configureSubviews;	// IMP=0x00000001000e96d0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000e9674

@end

