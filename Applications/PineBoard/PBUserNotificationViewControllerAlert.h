//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSystemUI/TVSUITextAlertController.h>

#import "PBUserNotificationViewController-Protocol.h"

@class NSString, PBCFUserNotification;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationViewControllerAlert : TVSUITextAlertController <PBUserNotificationViewController>
{
    PBCFUserNotification *_notification;	// 8 = 0x8
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010024a678
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
- (void)_didSelectButtonAtIndex:(unsigned long long)arg1;	// IMP=0x000000010024a56c
- (void)updateWithNotification:(id)arg1;	// IMP=0x0000000100249910
- (void)_handleHomeButton:(id)arg1;	// IMP=0x00000001002494d4
- (void)_handleMenuButton;	// IMP=0x00000001002493b8
- (void)viewDidLoad;	// IMP=0x0000000100249220
- (id)init;	// IMP=0x0000000100249154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
