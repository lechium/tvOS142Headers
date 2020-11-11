//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSProcessDelegate-Protocol.h"

@class BKSProcess, NSDictionary, NSString;
@protocol BKAlternateSystemAppDelegate, OS_dispatch_queue;

@interface BKAlternateSystemApp : NSObject <BKSProcessDelegate>
{
    NSString *_bundleID;	// 8 = 0x8
    id <BKAlternateSystemAppDelegate> _delegate;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    BKSProcess *_process;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)bundleInfoOverrides;	// IMP=0x000000010001bd38
- (void).cxx_destruct;	// IMP=0x000000010001b9c8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BKSProcess *process; // @synthesize process=_process;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) __weak id <BKAlternateSystemAppDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)process:(id)arg1 didExitWithContext:(id)arg2;	// IMP=0x000000010001b8d0
@property(readonly, copy) NSString *description;
- (void)_noteExitedWithContext:(id)arg1;	// IMP=0x000000010001b6cc
- (void)_noteLaunchSucceeded;	// IMP=0x000000010001b5c0
- (void)_noteLaunchFailed;	// IMP=0x000000010001b4a0
- (_Bool)terminate;	// IMP=0x000000010001b270
- (_Bool)launch;	// IMP=0x000000010001a810
- (void)dealloc;	// IMP=0x000000010001a7c0
- (id)initWithBundleId:(id)arg1 options:(id)arg2 queue:(id)arg3;	// IMP=0x000000010001a6ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
