//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol DADeviceWithUIDelegate, DKBrightnessResponder, DKViewControllerDelegate, DKVolumeHUDResponder;

@protocol DADeviceWithUI
@property(nonatomic) __weak id <DADeviceWithUIDelegate> delegate;
@property(nonatomic) __weak id <DKViewControllerDelegate> viewControllerDelegate;
@property(nonatomic) __weak id <DKBrightnessResponder> brightnessResponder;
@property(nonatomic) __weak id <DKVolumeHUDResponder> volumeHUDResponder;
@end

