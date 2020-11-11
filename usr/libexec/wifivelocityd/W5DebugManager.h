//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface W5DebugManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (void)__airplayLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c628
+ (void)__setAirPlayLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c5f8
+ (void)__disableAirPlayLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c5d0
+ (void)__enableAirPlayLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c498
+ (void)__ios_setBluetoothLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c2cc
+ (void)__ios_bluetoothLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c130
+ (void)__setValue:(id)arg1 key:(id)arg2 domain:(id)arg3;	// IMP=0x000000010001c100
+ (id)__valueForKey:(id)arg1 domain:(id)arg2;	// IMP=0x000000010001c0d8
+ (void)__setOpenDirectoryLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c014
+ (void)__openDirectoryLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bde4
+ (void)__mostRecentLogWithSuffix:(id)arg1 logPath:(id)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010001b980
+ (void)__setDHCPLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b8a4
+ (void)__setDNSLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b7b8
+ (void)__dnsLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b614
+ (void)__toggleDNSLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b5ec
+ (void)__setEAPOLLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b464
+ (void)__eapolLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b340
+ (_Bool)__getEAPOLDebugFlagsEnabled;	// IMP=0x000000010001b2b0
+ (_Bool)__setEAPOLDebugFlagsEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010001b17c
+ (void)__ios__setWiFiLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b074
+ (void)__ios_wifiLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001af60
+ (void)setOSLogPreferenceLevel:(id)arg1 enableOvserizeMessages:(_Bool)arg2 subsystem:(id)arg3;	// IMP=0x000000010001ad6c
- (void)__setNoLoggingWiFiProfileInstalled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cb38
- (void)__queryNoLoggingWiFiProfileInstalledAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ca1c
- (void)__setMegaWiFiProfileInstalled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c89c
- (void)__queryMegaWiFiProfileInstalledAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c780
- (void)setOpenDirectoryDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad50
- (void)queryOpenDirectoryDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ad34
- (void)setAirPlayDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad18
- (void)queryAirPlayDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001acfc
- (void)setDNSDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ace0
- (void)queryDNSDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001acc4
- (void)setDHCPDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aca8
- (void)setEAPOLDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ac8c
- (void)queryEAPOLDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ac70
- (void)setBluetoothDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ac54
- (void)queryBluetoothDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ac38
- (void)setWiFiDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ac1c
- (void)queryWiFiDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ac00
- (void)setDebugConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a4d0
- (id)queryDebugConfigurationAndReturnError:(out id *)arg1;	// IMP=0x000000010001a280
- (void)queryDebugConfigurationAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019a6c
- (void)dealloc;	// IMP=0x0000000100019a20
- (id)init;	// IMP=0x00000001000199b4

@end
