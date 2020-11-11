//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface PBOverlayLayoutRectMap : NSObject <NSCopying>
{
    NSMutableArray *_nodes;	// 8 = 0x8
    struct CGRect _bounds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010011eda4
@property(readonly, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010011ecf8
- (long long)calculateLayoutSuggestionsForFittingRect:(struct CGRect)arg1 withStickiness:(struct CGVector)arg2 suggestionSet:(out id *)arg3 validSuggestionIndexSet:(out id *)arg4;	// IMP=0x000000010011e628
- (id)state;	// IMP=0x000000010011e47c
- (id)layoutSuggestionForFittingRect:(struct CGRect)arg1 withStickiness:(struct CGVector)arg2;	// IMP=0x000000010011e278
- (id)layoutSuggestionsForFittingRect:(struct CGRect)arg1 withStickiness:(struct CGVector)arg2;	// IMP=0x000000010011e02c
- (_Bool)intersectsRect:(struct CGRect)arg1;	// IMP=0x000000010011de3c
- (void)removeRectForKey:(id)arg1;	// IMP=0x000000010011dc70
- (void)addRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x000000010011dafc
- (id)initWithMap:(id)arg1;	// IMP=0x000000010011d968
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x000000010011d870
- (id)init;	// IMP=0x000000010011d7ec

@end
