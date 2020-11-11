//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (IMTVAdditions)
- (id)im_indexPathForFocusedCell;	// IMP=0x00000001000988a0
- (_Bool)_hasRowAtIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x000000010011f6e4
- (id)_indexPathForRowBeforeIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x000000010011f6b0
- (id)_indexPathForRowAfterIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x000000010011f67c
- (id)_indexPathForClosestRowToIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x000000010011f3e4
- (unsigned long long)numberOfRowsFromIndexPath:(id)arg1 toFromIndexPath:(id)arg2;	// IMP=0x000000010011f1b0
- (id)distanceFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x000000010011f0dc
- (id)indexPathForClosestFocusableRowToIndexPath:(id)arg1;	// IMP=0x000000010011f0cc
- (id)indexPathForClosestRowToIndexPath:(id)arg1;	// IMP=0x000000010011f0bc
- (id)indexPathForFocusableRowAfterIndexPath:(id)arg1;	// IMP=0x000000010011ef3c
- (id)indexPathForRowAfterIndexPath:(id)arg1;	// IMP=0x000000010011ede0
- (id)indexPathForFocusableRowBeforeIndexPath:(id)arg1;	// IMP=0x000000010011eca4
- (id)indexPathForRowBeforeIndexPath:(id)arg1;	// IMP=0x000000010011eb4c
- (id)indexPathForFirstFocusableRow;	// IMP=0x000000010011ea3c
- (id)indexPathForLastRowInSection:(long long)arg1;	// IMP=0x000000010011e9cc
- (id)indexPathForFirstRowInSection:(long long)arg1;	// IMP=0x000000010011e960
- (id)indexPathForLastRow;	// IMP=0x000000010011e8d8
- (id)indexPathForFirstRow;	// IMP=0x000000010011e840
- (_Bool)canFocusRowAtIndexPath:(id)arg1;	// IMP=0x000000010011e760
- (_Bool)hasRowsInSectionAtIndex:(long long)arg1;	// IMP=0x000000010011e708
- (_Bool)hasRowAtIndexPath:(id)arg1;	// IMP=0x000000010011e624
@end

