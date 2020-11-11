//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "PBSViewServiceInterface-Protocol.h"

@class BSSimpleAssertion, BSWatchdog, NSString;
@protocol PBSimpleRemoteViewControllerDelegate;

@interface PBSimpleRemoteViewController : _UIRemoteViewController <PBSViewServiceInterface>
{
    _Bool _terminated;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    id <PBSimpleRemoteViewControllerDelegate> _delegate;	// 24 = 0x18
    BSSimpleAssertion *_dismissalAssertion;	// 32 = 0x20
    BSWatchdog *_dismissalWatchdog;	// 40 = 0x28
}

+ (id)exportedInterface;	// IMP=0x00000001001b83f4
+ (id)serviceViewControllerInterface;	// IMP=0x00000001001b8064
- (void).cxx_destruct;	// IMP=0x00000001001b8864
@property(readonly, nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) BSWatchdog *dismissalWatchdog; // @synthesize dismissalWatchdog=_dismissalWatchdog;
@property(readonly, nonatomic) BSSimpleAssertion *dismissalAssertion; // @synthesize dismissalAssertion=_dismissalAssertion;
@property(nonatomic) __weak id <PBSimpleRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)dealloc;	// IMP=0x00000001001b7fec
- (void)_dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 dismissalResult:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b79b0
- (void)dismissWithResult:(id)arg1;	// IMP=0x00000001001b75b8
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000001001b7424
- (void)dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b7374
- (void)messageViewServiceWithMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b7190
- (void)prepareViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b6eec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

