//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMHomeManager, NSArray;
@protocol OS_dispatch_queue;

@interface RPHomeKitManager : NSObject
{
    _Bool _invalidateCalled;	// 8 = 0x8
    CDUnknownBlockType _mediaGroupsChangedHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    HMHomeManager *_homeManager;	// 32 = 0x20
    NSArray *_homeKitCurrentUserIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000090c4
@property(nonatomic) _Bool invalidateCalled; // @synthesize invalidateCalled=_invalidateCalled;
@property(retain, nonatomic) NSArray *homeKitCurrentUserIDs; // @synthesize homeKitCurrentUserIDs=_homeKitCurrentUserIDs;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType mediaGroupsChangedHandler; // @synthesize mediaGroupsChangedHandler=_mediaGroupsChangedHandler;
- (void)resetHomeKitUserIdentifiers;	// IMP=0x0000000100009038
- (id)filterHomeKitUserIdentifiers:(id)arg1;	// IMP=0x0000000100008bd4
- (id)homeKitUserIdentifiers;	// IMP=0x0000000100008960
- (void)invalidate;	// IMP=0x00000001000088ac
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000087d4

@end

