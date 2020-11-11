//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MISystemAppState : NSObject
{
    NSObject<OS_dispatch_queue> *_appStateQueue;	// 8 = 0x8
    NSMutableDictionary *_systemAppStateList;	// 16 = 0x10
}

+ (id)sharedList;	// IMP=0x0000000100006cf8
- (void).cxx_destruct;	// IMP=0x00000001000076ec
@property(retain, nonatomic) NSMutableDictionary *systemAppStateList; // @synthesize systemAppStateList=_systemAppStateList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *appStateQueue; // @synthesize appStateQueue=_appStateQueue;
- (void)removeIdentifiers:(id)arg1;	// IMP=0x000000010000758c
- (void)addIdentifier:(id)arg1 withState:(int)arg2;	// IMP=0x00000001000073f0
- (id)systemAppStateDictionaryRestoringBackedUpState:(_Bool)arg1;	// IMP=0x0000000100007244
- (void)_onQueue_setSystemAppStateList:(id)arg1;	// IMP=0x0000000100007008
- (id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:(_Bool)arg1;	// IMP=0x0000000100006ed4
- (id)_onQueue_systemAppStateList;	// IMP=0x0000000100006da0
- (id)init;	// IMP=0x0000000100006c70

@end
