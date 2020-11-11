//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVImageLoader-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TVMusicPlaylistImageLoader : NSObject <TVImageLoader>
{
    NSMutableArray *_pendingQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialProcessingQueue;	// 16 = 0x10
    unsigned long long _maxConcurrentCount;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010004b2b0
+ (id)_playlistImageWithImages:(id)arg1 size:(struct CGSize)arg2 upscaleAdjustment:(double)arg3 cornerRadius:(double)arg4;	// IMP=0x000000010004af40
- (void).cxx_destruct;	// IMP=0x000000010004bbe8
- (void)_executeRequest:(id)arg1;	// IMP=0x000000010004b794
- (void)_processFirstRequest:(id)arg1;	// IMP=0x000000010004b714
- (void)cancelLoad:(id)arg1;	// IMP=0x000000010004b51c
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010004b3b8
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000010004b3a8
- (id)init;	// IMP=0x000000010004b31c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

