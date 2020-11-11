//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PBVolumeSlider, PBVolumeSliderWrapperView;

@interface PBVolumeHUDViewController : UIViewController
{
    _Bool _volumeUpButtonIsDown;	// 8 = 0x8
    _Bool _volumeDownButtonIsDown;	// 9 = 0x9
    PBVolumeSlider *_volumeSlider;	// 16 = 0x10
    PBVolumeSliderWrapperView *_wrapperView;	// 24 = 0x18
    long long _state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000a974c
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) PBVolumeSliderWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) PBVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
- (_Bool)stretchVolumeSliderForMinimumVolumeUpdateIfNeeded;	// IMP=0x00000001000a94bc
- (_Bool)stretchVolumeSliderForMaximumVolumeUpdateIfNeeded;	// IMP=0x00000001000a93c4
- (void)noteVolumeDownWasHit:(_Bool)arg1;	// IMP=0x00000001000a9034
- (void)noteVolumeUpWasHit:(_Bool)arg1;	// IMP=0x00000001000a8f24
- (void)dismissVolumeHUDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a89a8
- (void)stretchVolumeHUDWithLevel:(id)arg1;	// IMP=0x00000001000a84a4
- (void)updateVolumeHUDWithLevel:(id)arg1;	// IMP=0x00000001000a7ff4
- (void)initializeVolumeHUDWithImage:(id)arg1 level:(id)arg2;	// IMP=0x00000001000a7908

@end
