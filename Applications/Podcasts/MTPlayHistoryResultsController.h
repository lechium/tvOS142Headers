//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTListResultsController.h"

@interface MTPlayHistoryResultsController : MTListResultsController
{
    unsigned long long _newCount;	// 8 = 0x8
    unsigned long long _previousCount;	// 16 = 0x10
}

+ (id)fetchRequestForHistory;	// IMP=0x00000001000fd89c
+ (id)predicateForHistory;	// IMP=0x00000001000fd69c
+ (id)invertIndexPath:(id)arg1 withCount:(unsigned long long)arg2;	// IMP=0x00000001000fd5e4
+ (unsigned long long)invertIndex:(unsigned long long)arg1 withCount:(unsigned long long)arg2;	// IMP=0x00000001000fd5d8
@property(nonatomic) unsigned long long previousCount; // @synthesize previousCount=_previousCount;
@property(nonatomic) unsigned long long newCount; // @synthesize newCount=_newCount;
- (void)reloadData;	// IMP=0x00000001000fd488
- (void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000001000fd32c
- (void)setObjects:(id)arg1;	// IMP=0x00000001000fd260
- (id)indexPathForObject:(id)arg1;	// IMP=0x00000001000fd1c0
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00000001000fd108
- (void)currentItemDidChange;	// IMP=0x00000001000fd0a0
- (id)init;	// IMP=0x00000001000fcf24

@end

