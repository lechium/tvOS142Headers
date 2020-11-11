//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAContext, NSString;

@interface BKDisplayRenderOverlayImage : BKDisplayRenderOverlay <CAAnimationDelegate>
{
    CAContext *_context;	// 8 = 0x8
    struct CGImage *_imageRef;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100017b70
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x000000010001783c
- (id)_animationForKeyPath:(id)arg1 withSettings:(id)arg2;	// IMP=0x000000010001778c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000176a0
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100017694
- (void)_cleanup;	// IMP=0x00000001000175e8
- (id)_persistenceData;	// IMP=0x0000000100017580
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x00000001000173f0
- (void)_freeze;	// IMP=0x0000000100017398
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x0000000100016840
- (_Bool)disablesDisplayUpdates;	// IMP=0x0000000100016804
@property(readonly, nonatomic) struct CGImage *image;
- (void)dealloc;	// IMP=0x000000010001678c
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x00000001000166d8
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x000000010001667c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

