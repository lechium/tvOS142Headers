//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WiFiAwarePublishDatapathServiceSpecificInfo, WiFiMACAddress;

@protocol WiFiAwareDatapathXPCDelegate <NSObject>
- (void)datapathTerminatedWithReason:(long long)arg1;
- (void)datapathReceivedControlDataAddress:(WiFiMACAddress *)arg1 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg2 onInterfaceIndex:(unsigned int)arg3;
- (void)datapathConfirmedForPeerDataAddress:(WiFiMACAddress *)arg1 serviceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg2;
- (void)datapathFailedToStartWithError:(long long)arg1;
- (void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(WiFiMACAddress *)arg2 localInterfaceIndex:(unsigned int)arg3;
@end

