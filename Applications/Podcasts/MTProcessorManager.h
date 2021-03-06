//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSMutableDictionary;

@interface MTProcessorManager : MTSingleton
{
    NSMutableDictionary *_classMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100089030
- (void)startProcessorsForCarPlay;	// IMP=0x0000000100088f38
- (void)startProcessorsForPlayback;	// IMP=0x0000000100088e50
- (void)startProcessorsForFeedUpdates;	// IMP=0x0000000100088d68
- (void)startAllProcessors;	// IMP=0x0000000100088c80
- (void)startProcessors:(unsigned long long)arg1;	// IMP=0x0000000100088b28
- (void)_startProcessor:(unsigned long long)arg1;	// IMP=0x0000000100088950
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x00000001000888d4
- (void)dealloc;	// IMP=0x000000010008884c
- (id)init;	// IMP=0x0000000100088688

@end

