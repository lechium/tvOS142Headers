//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (GKCachingAdditions)
- (void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2;	// IMP=0x0000000100086394
- (double)_gkExpirationIntervalOfFileAtPath:(id)arg1;	// IMP=0x0000000100086338
- (void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2;	// IMP=0x00000001000862ec
- (void)_gkWriteXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;	// IMP=0x0000000100086284
- (long long)_gkReadXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;	// IMP=0x00000001000860dc
@end

