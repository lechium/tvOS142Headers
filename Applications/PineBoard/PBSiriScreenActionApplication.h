//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXElement, NSArray, NSDictionary, NSString;

@interface PBSiriScreenActionApplication : NSObject
{
    AXElement *_accessibilityElement;	// 8 = 0x8
    NSDictionary *_semanticContext;	// 16 = 0x10
    NSArray *_commandScreenActionItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000be044
@property(copy, nonatomic) NSArray *commandScreenActionItems; // @synthesize commandScreenActionItems=_commandScreenActionItems;
@property(retain, nonatomic) NSDictionary *semanticContext; // @synthesize semanticContext=_semanticContext;
@property(retain, nonatomic) AXElement *accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;
- (id)_filteredScreenActionItems:(id)arg1 applicationScreenActionItems:(id)arg2 screenActionItemsWithSemanticContext:(id)arg3;	// IMP=0x00000001000bd748
- (id)_screenActionItemsFromAccessibilityElements:(id)arg1;	// IMP=0x00000001000bd4e8
- (id)_focusableScreenActionItems;	// IMP=0x00000001000bd334
- (id)_visibleScreenActionItemsWithSemanticContext;	// IMP=0x00000001000bd180
- (id)screenActionItemForIdentifier:(id)arg1;	// IMP=0x00000001000bcf00
@property(readonly, copy, nonatomic) NSArray *currentScreenActionItems;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)initWithAccessibilityElement:(id)arg1;	// IMP=0x00000001000bc444

@end

