//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"
#import "PBOverlayLayoutControllerDelegate-Protocol.h"
#import "PBSOverlayLayoutServiceInterface-Protocol.h"

@class NSString, PBOverlayLayoutController, PBSystemServiceConnection;
@protocol PBSOverlayLayoutDelegateServiceInterface;

@interface PBOverlayLayoutService : NSObject <PBOverlayLayoutControllerDelegate, PBSOverlayLayoutServiceInterface, BSInvalidatable>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    id <PBSOverlayLayoutDelegateServiceInterface> _serviceDelegate;	// 16 = 0x10
    PBOverlayLayoutController *_controller;	// 24 = 0x18
}

+ (_Bool)_connection:(id)arg1 hasValidEntitlementWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b6b38
- (void).cxx_destruct;	// IMP=0x00000001001b6e90
@property(readonly, nonatomic) PBOverlayLayoutController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) id <PBSOverlayLayoutDelegateServiceInterface> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (_Bool)_hasValidEntitlementWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b6a8c
- (_Bool)_hasValidEntitlement;	// IMP=0x00000001001b6a48
- (void)removeLayoutElementsWithIdentifiers:(id)arg1 withTransitionContext:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b6208
- (void)addLayoutElements:(id)arg1 withTransitionContext:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b5a18
- (void)layoutController:(id)arg1 didUpdateHints:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x00000001001b58d4
- (void)invalidate;	// IMP=0x00000001001b5888
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001001b5710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
