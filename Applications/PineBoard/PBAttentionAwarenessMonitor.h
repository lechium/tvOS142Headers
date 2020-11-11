//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, NSHashTable;

@interface PBAttentionAwarenessMonitor : NSObject
{
    _Bool _attentionLost;	// 8 = 0x8
    AWAttentionAwarenessClient *_awarenessClient;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001540bc
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) AWAttentionAwarenessClient *awarenessClient; // @synthesize awarenessClient=_awarenessClient;
@property(readonly, nonatomic, getter=isAttentionLost) _Bool attentionLost; // @synthesize attentionLost=_attentionLost;
- (void)_notifyAttentionRegained;	// IMP=0x0000000100153e5c
- (void)_notifyAttentionLost;	// IMP=0x0000000100153cc0
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100153c58
- (void)addObserver:(id)arg1;	// IMP=0x0000000100153bf0
- (_Bool)suspendWithError:(id *)arg1;	// IMP=0x0000000100153ba8
- (_Bool)resumeWithError:(id *)arg1;	// IMP=0x0000000100153b60
@property(readonly, nonatomic) double timeout;
- (id)initWithTimeout:(double)arg1 observerQueue:(id)arg2;	// IMP=0x00000001001535ac

@end
