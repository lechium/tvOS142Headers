//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSimpleRemoteViewControllerDelegate-Protocol.h"
#import "PBSystemOverlayContentPresenting-Protocol.h"

@class NSString, PBSimpleRemoteViewController;
@protocol PBSystemOverlayContentDelegate;

@interface PBViewServiceContentPresentingViewController : UIViewController <PBSimpleRemoteViewControllerDelegate, PBSystemOverlayContentPresenting>
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _allowsInteraction;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    PBSimpleRemoteViewController *_remoteViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001472b4
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(readonly, nonatomic) PBSimpleRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
- (void)viewServiceDidTerminate;	// IMP=0x000000010014709c
- (void)viewServiceDidDismiss:(id)arg1;	// IMP=0x0000000100146f24
- (void)viewService:(id)arg1 willDismissWithResult:(id)arg2;	// IMP=0x0000000100146e64
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100146c18
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100146a18
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)viewDidLoad;	// IMP=0x0000000100146828
- (id)initWithRemoteViewController:(id)arg1 supportsInterruption:(_Bool)arg2 allowsInteraction:(_Bool)arg3;	// IMP=0x0000000100146694
- (id)initWithRemoteViewController:(id)arg1 supportsInterruption:(_Bool)arg2;	// IMP=0x00000001001465d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

