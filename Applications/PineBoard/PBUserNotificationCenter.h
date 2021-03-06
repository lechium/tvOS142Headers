//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSErrorHandlerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SSErrorHandler;
@protocol PBUserNotificationDelegate;

@interface PBUserNotificationCenter : NSObject <SSErrorHandlerDelegate>
{
    _Bool _connected;	// 8 = 0x8
    id <PBUserNotificationDelegate> _delegate;	// 16 = 0x10
    SSErrorHandler *_errorHandler;	// 24 = 0x18
    NSMutableDictionary *_registeredOperationClasses;	// 32 = 0x20
}

+ (void)initializeNotificationCenterWithDelegate:(id)arg1;	// IMP=0x0000000100115a00
+ (id)sharedInstance;	// IMP=0x00000001001159d0
- (void).cxx_destruct;	// IMP=0x0000000100117e6c
@property(retain, nonatomic) NSMutableDictionary *registeredOperationClasses; // @synthesize registeredOperationClasses=_registeredOperationClasses;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) SSErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) __weak id <PBUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleCarMCheck:(id)arg1;	// IMP=0x000000010011799c
- (void)_handle2SVCheck:(id)arg1;	// IMP=0x0000000100117614
- (void)_handleCVVCheck:(id)arg1;	// IMP=0x0000000100117240
- (void)errorHandler:(id)arg1 handleSession:(id)arg2;	// IMP=0x0000000100116f2c
- (void)errorHandlerDidDisconnect:(id)arg1;	// IMP=0x0000000100116d9c
- (void)stopErrorHandler;	// IMP=0x0000000100116bd0
- (void)startErrorHandler;	// IMP=0x0000000100116940
- (void)initializeStoreErrorHandler;	// IMP=0x00000001001167b8
- (void)registerOperationClass:(Class)arg1 forFailureType:(long long)arg2;	// IMP=0x0000000100116704
- (void)_didHandleCFUserNotification:(id)arg1;	// IMP=0x0000000100116698
- (id)cfUserNotificationForToken:(int)arg1;	// IMP=0x0000000100116490
- (void)startUserNotificationCenter;	// IMP=0x0000000100115bcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

