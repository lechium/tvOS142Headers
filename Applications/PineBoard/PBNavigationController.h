//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface PBNavigationController : UINavigationController
{
    CDUnknownBlockType _dismissLastViewControllerBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100102ddc
@property(copy, nonatomic) CDUnknownBlockType dismissLastViewControllerBlock; // @synthesize dismissLastViewControllerBlock=_dismissLastViewControllerBlock;
- (id)_lastViewController;	// IMP=0x0000000100102c08
- (void)_delegateDidDismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100102a70
- (void)removeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001028c0
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001026b4

@end
