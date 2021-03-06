//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, PBOverlayLayoutRectMap;

@interface PBOverlayLayoutElementMap : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    PBOverlayLayoutRectMap *_fixedRectMap;	// 16 = 0x10
    NSMutableSet *_fixedElementIdentifiers;	// 24 = 0x18
    NSMutableSet *_flexibleElementIdentifiers;	// 32 = 0x20
    NSMutableArray *_fixedElements;	// 40 = 0x28
    NSMutableArray *_flexibleElements;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010013a4d0
@property(readonly, nonatomic) NSMutableArray *flexibleElements; // @synthesize flexibleElements=_flexibleElements;
@property(readonly, nonatomic) NSMutableArray *fixedElements; // @synthesize fixedElements=_fixedElements;
@property(readonly, nonatomic) NSMutableSet *flexibleElementIdentifiers; // @synthesize flexibleElementIdentifiers=_flexibleElementIdentifiers;
@property(readonly, nonatomic) NSMutableSet *fixedElementIdentifiers; // @synthesize fixedElementIdentifiers=_fixedElementIdentifiers;
@property(readonly, nonatomic) PBOverlayLayoutRectMap *fixedRectMap; // @synthesize fixedRectMap=_fixedRectMap;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (id)_lock_elementChangeSetForUpdatedIndexSet:(id)arg1 insertedIndex:(unsigned long long)arg2;	// IMP=0x000000010013a20c
- (id)_lock_repositionFlexibleElementsFromIndex:(unsigned long long)arg1;	// IMP=0x0000000100139614
- (unsigned long long)_lock_removeFlexibleElementForIdentifier:(id)arg1;	// IMP=0x0000000100139550
- (_Bool)_lock_removeFixedElementForIdentifier:(id)arg1;	// IMP=0x0000000100139248
- (id)_lock_removeElementsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000100138ae0
- (id)_lock_removeElementWithIdentifier:(id)arg1;	// IMP=0x00000001001387a4
- (id)_lock_addFlexibleElement:(id)arg1;	// IMP=0x0000000100138484
- (id)_lock_addFixedElement:(id)arg1;	// IMP=0x000000010013803c
- (id)state;	// IMP=0x0000000100137c04
- (id)removeLayoutElementsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000001001378ec
- (id)removeLayoutElementWithIdentifier:(id)arg1;	// IMP=0x0000000100137598
- (id)addLayoutElement:(id)arg1;	// IMP=0x0000000100137148
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x0000000100136f28

@end

