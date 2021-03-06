//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDPushConsumer-Protocol.h"

@class CKAccountInfo;
@protocol OS_dispatch_queue;

@interface MSDCloudManager : NSObject <MSDPushConsumer>
{
    unsigned long long _subscriptionFailure;	// 8 = 0x8
    CKAccountInfo *_accountInfo;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
}

+ (_Bool)shouldEnablePushTopic;	// IMP=0x000000010002f01c
+ (void)handlePushNotification:(id)arg1;	// IMP=0x000000010002ec30
+ (id)pushTopic;	// IMP=0x000000010002ec14
+ (id)sharedManager;	// IMP=0x000000010002e270
- (void).cxx_destruct;	// IMP=0x000000010002f8b8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) CKAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void)_handleCKAccountStatusChanged:(id)arg1;	// IMP=0x000000010002f780
- (void)_handleDeviceSupportsEncryption:(id)arg1;	// IMP=0x000000010002f4c8
- (void)_handleAccountStatusUnsupported;	// IMP=0x000000010002f428
- (void)_checkAccountStatus;	// IMP=0x000000010002f030
- (void)isCloudKitAccessAvailable:(CDUnknownBlockType)arg1;	// IMP=0x000000010002e8f4
- (void)addSubscriptionForDatabase:(id)arg1;	// IMP=0x000000010002e30c
- (void)dealloc;	// IMP=0x000000010002e1e8
- (id)init;	// IMP=0x000000010002e0f4

@end

