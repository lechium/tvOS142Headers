//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableOrderedSet, UIView;
@protocol SRSiriStackableContent;

@interface SRSiriViewStack : NSObject <NSCopying>
{
    NSMutableOrderedSet *_mutableViews;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100009418
@property(retain, nonatomic) NSMutableOrderedSet *mutableViews; // @synthesize mutableViews=_mutableViews;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100009398
@property(readonly, nonatomic) UIView<SRSiriStackableContent> *mostRecentlyAddedView;
- (void)reset;	// IMP=0x00000001000092d0
- (id)previousViewBeforeContentView:(id)arg1;	// IMP=0x0000000100009270
- (id)viewAtIndex:(long long)arg1;	// IMP=0x0000000100009210
- (id)nextViewAfterContentView:(id)arg1;	// IMP=0x00000001000091b4
- (_Bool)containsContentView:(id)arg1;	// IMP=0x00000001000091a4
- (void)removeContentView:(id)arg1;	// IMP=0x000000010000910c
- (void)addContentView:(id)arg1;	// IMP=0x0000000100009078
@property(readonly, nonatomic) NSArray *contentViews;
- (void)setContentViews:(id)arg1;	// IMP=0x0000000100009004
- (id)initWithContentViews:(id)arg1;	// IMP=0x0000000100008f74

@end
