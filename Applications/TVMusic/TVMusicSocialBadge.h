//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface TVMusicSocialBadge : UIView
{
    NSMutableArray *_unloadedImageViews;	// 8 = 0x8
    NSArray *_imageViews;	// 16 = 0x10
    double _minimumInteritemSpacing;	// 24 = 0x18
}

+ (id)socialBadgeFromElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000b2a54
- (void).cxx_destruct;	// IMP=0x00000001000b3fe4
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void)_checkReadyToDisplay;	// IMP=0x00000001000b3e80
- (void)_didLoadImageForImageView:(id)arg1;	// IMP=0x00000001000b3dc8
- (void)layoutSubviews;	// IMP=0x00000001000b3a98
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000b3898
- (void)dealloc;	// IMP=0x00000001000b3510
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b34b4

@end

