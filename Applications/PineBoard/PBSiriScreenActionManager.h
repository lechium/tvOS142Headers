//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"

@class AXElement, NSString, PBSiriScreenActionApplication;
@protocol PBSiriScreenActionManagerDelegate;

@interface PBSiriScreenActionManager : NSObject <PBInstanceDependable>
{
    _Bool _enabled;	// 8 = 0x8
    id <PBSiriScreenActionManagerDelegate> _delegate;	// 16 = 0x10
    AXElement *_systemApplicationElement;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001001df508
+ (id)dependencyDescription;	// IMP=0x00000001001df450
- (void).cxx_destruct;	// IMP=0x00000001001dfc40
@property(retain, nonatomic) AXElement *systemApplicationElement; // @synthesize systemApplicationElement=_systemApplicationElement;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PBSiriScreenActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AXElement *currentApplicationElement;
@property(readonly, nonatomic) PBSiriScreenActionApplication *currentScreenActionApplication;
- (id)_init;	// IMP=0x00000001001df670
- (id)init;	// IMP=0x00000001001df618

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

