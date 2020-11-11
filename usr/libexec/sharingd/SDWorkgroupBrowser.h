//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDBonjourBrowserDelegate-Protocol.h"

@class NSArray, NSSet, NSString, SDBonjourBrowser;

__attribute__((visibility("hidden")))
@interface SDWorkgroupBrowser : NSObject <SDBonjourBrowserDelegate>
{
    int _clientCount;	// 8 = 0x8
    SDBonjourBrowser *_browser;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x00000001000c9ef4
- (void).cxx_destruct;	// IMP=0x00000001000ca32c
- (void)stop;	// IMP=0x00000001000ca2c8
- (void)start;	// IMP=0x00000001000ca1b8
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x00000001000ca160
@property(readonly, copy) NSSet *workgroups;
@property(readonly, copy) NSArray *nodes;
- (id)init;	// IMP=0x00000001000c9f60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

