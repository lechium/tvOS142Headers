//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class XBDisplayEdgeInsetsWrapper;

@interface _XBWrapperWindow : UIWindow
{
    XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets;	// 8 = 0x8
}

+ (_Bool)_isSecure;	// IMP=0x00000001000032cc
- (void).cxx_destruct;	// IMP=0x00000001000032f8
@property(retain, nonatomic, getter=_customSafeAreaInsets, setter=_setCustomSafeAreaInsets:) XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets; // @synthesize _customSafeAreaInsets;
- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x0000000100003270
- (long long)_orientationForRootTransform;	// IMP=0x0000000100003268
- (long long)_orientationForViewTransform;	// IMP=0x0000000100003260
- (_Bool)_shouldResizeWithScene;	// IMP=0x0000000100003258
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000100003250
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x0000000100003248
- (_Bool)_shouldUseRemoteContext;	// IMP=0x0000000100003240

@end
