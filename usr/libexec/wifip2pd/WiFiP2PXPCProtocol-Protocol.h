//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WiFiAwareDatapathConfiguration, WiFiAwarePublishConfiguration, WiFiAwareSubscribeConfiguration;

@protocol WiFiP2PXPCProtocol <NSObject>
- (void)createDatapathWithConfiguration:(WiFiAwareDatapathConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createPublishWithConfiguration:(WiFiAwarePublishConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createSubscribeWithConfiguration:(WiFiAwareSubscribeConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
@end

