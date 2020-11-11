//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSString, PBSystemOverlayController, TVSUIBlackScreenRecoveryIterator;

@interface PBBlackScreenRecoveryManager : NSObject <PBSystemOverlayControllerDelegate, PBSystemUIManaging, PBInstanceDependable>
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
    TVSUIBlackScreenRecoveryIterator *_recoveryIterator;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000b4d7c
+ (id)dependencyDescription;	// IMP=0x00000001000b4bd4
- (void).cxx_destruct;	// IMP=0x00000001000b656c
@property(readonly, nonatomic) TVSUIBlackScreenRecoveryIterator *recoveryIterator; // @synthesize recoveryIterator=_recoveryIterator;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)dismiss;	// IMP=0x00000001000b6420
- (void)presentForDisplayModes:(id)arg1 selectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b5174
@property(readonly, nonatomic, getter=isIterating) _Bool iterating;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x00000001000b4e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

