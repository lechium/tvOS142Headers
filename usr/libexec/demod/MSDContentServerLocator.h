//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDContentServerLocatorDelegate-Protocol.h"
#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class MSDTargetDevice, NSMutableSet, NSNetServiceBrowser, NSString;

@interface MSDContentServerLocator : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, MSDContentServerLocatorDelegate>
{
    MSDTargetDevice *_device;	// 8 = 0x8
    NSMutableSet *_delegates;	// 16 = 0x10
    NSMutableSet *_netServices;	// 24 = 0x18
    NSNetServiceBrowser *_browser;	// 32 = 0x20
    NSString *_bonjourName;	// 40 = 0x28
    unsigned long long _pingFailCount;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010005ac3c
- (void).cxx_destruct;	// IMP=0x000000010005cefc
@property unsigned long long pingFailCount; // @synthesize pingFailCount=_pingFailCount;
@property(retain) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property(retain) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(retain) NSMutableSet *netServices; // @synthesize netServices=_netServices;
@property(retain) NSMutableSet *delegates; // @synthesize delegates=_delegates;
@property(retain) MSDTargetDevice *device; // @synthesize device=_device;
- (void)netServiceDidResolveAddress:(id)arg1;	// IMP=0x000000010005cb6c
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x000000010005c94c
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x000000010005c870
- (void)contentServerDidDisappear;	// IMP=0x000000010005c7a4
- (void)contentServerDidAppear:(id)arg1 port:(id)arg2;	// IMP=0x000000010005c59c
- (void)updateHubHostNameFromHostName:(id)arg1 port:(long long)arg2 addresses:(id)arg3;	// IMP=0x000000010005bfbc
- (void)triggerLogicSyncingWithDemoUnit;	// IMP=0x000000010005bbf4
- (_Bool)tryAlternativeHubHostNameToRecoverConnection;	// IMP=0x000000010005ba3c
- (void)startLogicSyncingIfTimeIsUp;	// IMP=0x000000010005b910
- (void)incrementPingFailCountAndScheduleLogicSyncIfNeeded;	// IMP=0x000000010005b650
- (void)resetPingFailCountAndSaveHubLastOnlineTime;	// IMP=0x000000010005b580
- (void)startLocatingContentServerIfNeeded;	// IMP=0x000000010005b280
- (void)unregisterContentServerLocatorDelegate:(id)arg1;	// IMP=0x000000010005b064
- (void)registerContentServerLocatorDelegate:(id)arg1;	// IMP=0x000000010005add4
- (id)init;	// IMP=0x000000010005aca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

