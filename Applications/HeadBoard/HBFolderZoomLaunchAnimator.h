//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class HBFolderCell, NSString, _UIStackedImageConfiguration;

@interface HBFolderZoomLaunchAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    HBFolderCell *_folderCell;	// 8 = 0x8
    _UIStackedImageConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004629c
@property(retain, nonatomic) _UIStackedImageConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000100045e40
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100045e38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

