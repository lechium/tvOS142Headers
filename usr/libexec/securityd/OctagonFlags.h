//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OctagonFlagClearer-Protocol.h"
#import "OctagonFlagContainer-Protocol.h"
#import "OctagonFlagSetter-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OctagonFlags : NSObject <OctagonFlagContainer, OctagonFlagSetter, OctagonFlagClearer>
{
    NSMutableDictionary *_flagConditions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_flags;	// 24 = 0x18
    NSSet *_allowableFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100095858
@property(readonly) NSSet *allowableFlags; // @synthesize allowableFlags=_allowableFlags;
@property(retain) NSMutableSet *flags; // @synthesize flags=_flags;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *flagConditions; // @synthesize flagConditions=_flagConditions;
- (void)_onqueueRemoveFlag:(id)arg1;	// IMP=0x0000000100095634
- (void)setFlag:(id)arg1;	// IMP=0x0000000100095584
- (id)conditionForFlag:(id)arg1;	// IMP=0x0000000100095504
- (void)_onqueueSetFlag:(id)arg1;	// IMP=0x0000000100095470
- (_Bool)_onqueueContains:(id)arg1;	// IMP=0x00000001000953d0
- (id)dumpFlags;	// IMP=0x000000010009537c
- (id)contentsAsString;	// IMP=0x00000001000952b0
- (id)description;	// IMP=0x000000010009523c
- (id)initWithQueue:(id)arg1 flags:(id)arg2;	// IMP=0x000000010009501c

@end
