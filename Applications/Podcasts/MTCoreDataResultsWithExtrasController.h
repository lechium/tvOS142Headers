//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTCoreDataResultsController.h"

#import "MTResultsChangeGeneratorDelegate-Protocol.h"

@class MTResultsChangeGenerator, NSString;

@interface MTCoreDataResultsWithExtrasController : MTCoreDataResultsController <MTResultsChangeGeneratorDelegate>
{
    unsigned long long _numberOfExtraObjects;	// 8 = 0x8
    MTResultsChangeGenerator *_changeGenerator;	// 16 = 0x10
    unsigned long long _numberOfResults;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100131bdc
@property(nonatomic) unsigned long long numberOfResults; // @synthesize numberOfResults=_numberOfResults;
@property(retain, nonatomic) MTResultsChangeGenerator *changeGenerator; // @synthesize changeGenerator=_changeGenerator;
@property(nonatomic) unsigned long long numberOfExtraObjects; // @synthesize numberOfExtraObjects=_numberOfExtraObjects;
- (void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100131a38
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010013187c
- (_Bool)_hasResults;	// IMP=0x00000001001317fc
- (id)_extraObjects;	// IMP=0x000000010013173c
- (id)allObjects;	// IMP=0x000000010013166c
- (void)_initializeFrc;	// IMP=0x00000001001315c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
