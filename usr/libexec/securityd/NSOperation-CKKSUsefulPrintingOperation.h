//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface NSOperation (CKKSUsefulPrintingOperation)
- (void)removeDependenciesUponCompletion;	// IMP=0x0000000100123524
- (void)addNullableDependency:(id)arg1;	// IMP=0x0000000100123510
- (_Bool)isPending;	// IMP=0x00000001001234b4
- (id)debugDescription;	// IMP=0x0000000100123360
- (id)description;	// IMP=0x0000000100123214
- (id)pendingDependenciesString:(id)arg1;	// IMP=0x00000001001230c4
- (void)linearDependenciesWithSelfFirst:(id)arg1;	// IMP=0x0000000100122ed0
- (void)linearDependencies:(id)arg1;	// IMP=0x0000000100122d44
- (id)selfname;	// IMP=0x0000000100122c64
@end

