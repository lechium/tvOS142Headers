//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSUUID, TVSMHomeCameraContentView, TVSMHomeFullScreenCameraCollectionViewController;

@protocol TVSMHomeFullScreenCameraViewControllerDelegate <NSObject>
- (void)viewControllerDidRequestDismissal:(TVSMHomeFullScreenCameraCollectionViewController *)arg1 focusedIdentifier:(NSUUID *)arg2 focusedContentView:(TVSMHomeCameraContentView *)arg3 completion:(void (^)(void))arg4;
@end
