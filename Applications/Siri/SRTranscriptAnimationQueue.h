//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFQueue.h>

@interface SRTranscriptAnimationQueue : AFQueue
{
}

- (id)nextNonPinningAnimationForTranscriptItem:(id)arg1;	// IMP=0x000000010002255c
- (id)dequeueAllAnimations;	// IMP=0x0000000100022550
- (id)dequeNextAnimation;	// IMP=0x0000000100022544
- (id)nextAnimation;	// IMP=0x0000000100022538
- (void)enqueueAnimations:(id)arg1;	// IMP=0x000000010002252c
- (void)enqueueAnimation:(id)arg1;	// IMP=0x0000000100022520

@end

