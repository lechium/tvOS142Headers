//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, NSString, TVNPRoutingMusicBarsView, UIImage, UIImageView, UILabel, UIView, _UIFloatingContentView;

@interface TVNPBaseRoutingDestinationCollectionViewCell : UICollectionViewCell
{
    _Bool _isFocused;	// 8 = 0x8
    _Bool _showDeviceImage;	// 9 = 0x9
    _Bool _enabled;	// 10 = 0xa
    NSString *_titleText;	// 16 = 0x10
    NSString *_subtitleText;	// 24 = 0x18
    UIImage *_artworkImage;	// 32 = 0x20
    UIImage *_deviceImage;	// 40 = 0x28
    unsigned long long _deviceType;	// 48 = 0x30
    unsigned long long _musicBarState;	// 56 = 0x38
    _UIFloatingContentView *_floatingContentView;	// 64 = 0x40
    UIView *_backgroundColorView;	// 72 = 0x48
    UIImageView *_artworkImageView;	// 80 = 0x50
    UIImageView *_deviceImageView;	// 88 = 0x58
    UIImageView *_symbolImageView;	// 96 = 0x60
    UIView *_shadowView;	// 104 = 0x68
    UILabel *_titleLabel;	// 112 = 0x70
    UILabel *_subtitleLabel;	// 120 = 0x78
    NSMutableArray *_volatileContraints;	// 128 = 0x80
    TVNPRoutingMusicBarsView *_musicBarsView;	// 136 = 0x88
    struct CGRect _boundsUsedForArtworkShadow;	// 144 = 0x90
}

+ (void)_configureFloatingContentViewAppearance;	// IMP=0x000000000000b1b4
- (void).cxx_destruct;	// IMP=0x000000000000c840
@property(nonatomic) struct CGRect boundsUsedForArtworkShadow; // @synthesize boundsUsedForArtworkShadow=_boundsUsedForArtworkShadow;
@property(readonly, nonatomic) TVNPRoutingMusicBarsView *musicBarsView; // @synthesize musicBarsView=_musicBarsView;
@property(readonly, nonatomic) NSMutableArray *volatileContraints; // @synthesize volatileContraints=_volatileContraints;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(readonly, nonatomic) UIImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
@property(readonly, nonatomic) UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(readonly, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(nonatomic) unsigned long long musicBarState; // @synthesize musicBarState=_musicBarState;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) _Bool showDeviceImage; // @synthesize showDeviceImage=_showDeviceImage;
@property(retain, nonatomic) UIImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000000c104
- (unsigned long long)_controlStateForCell;	// IMP=0x000000000000c084
- (void)_addInitialConstraints;	// IMP=0x000000000000b310
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000000ab58
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000000aa7c
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000000aa78
- (void)updateConstraints;	// IMP=0x000000000000a4ec
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000000a400
- (void)useFocusedAppearance;	// IMP=0x000000000000a3ec
- (void)layoutSubviews;	// IMP=0x000000000000a234
- (void)prepareForReuse;	// IMP=0x000000000000a1d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000009a3c

@end
