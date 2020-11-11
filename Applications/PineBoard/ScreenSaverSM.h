//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PBAttentionMonitorStateMachine.h"

#import "PBScreenSaverManagerObserver-Protocol.h"

@class NSString;

@interface ScreenSaverSM : PBAttentionMonitorStateMachine <PBScreenSaverManagerObserver>
{
}

- (void)screenSaverManagerDidDismissScreenSaver:(id)arg1;	// IMP=0x00000001000159a0
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x0000000100015934
- (void)screenSaverManagerWillPresentScreenSaver:(id)arg1;	// IMP=0x00000001000158d0
- (void)_enterOffStateForced;	// IMP=0x00000001000158bc
- (void)_enterOnStateForced;	// IMP=0x0000000100015848
- (void)_enterOffStateAutomatically;	// IMP=0x00000001000157e4
- (void)_enterOnStateAutomatically;	// IMP=0x00000001000155b4
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x0000000100014de0
- (id)init;	// IMP=0x00000001000147b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
