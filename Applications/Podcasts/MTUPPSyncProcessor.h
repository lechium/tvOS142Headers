//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTUPPSyncProcessor : MTBaseProcessor
{
}

- (void)playerPaused;	// IMP=0x0000000100147dc4
- (_Bool)shouldSync:(id)arg1;	// IMP=0x0000000100147c88
- (void)processResults;	// IMP=0x0000000100147ae4
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x0000000100147ad8
- (void)updatePredicate;	// IMP=0x0000000100147a48
- (id)predicate;	// IMP=0x00000001001479ac
- (id)entityName;	// IMP=0x000000010014799c

@end
