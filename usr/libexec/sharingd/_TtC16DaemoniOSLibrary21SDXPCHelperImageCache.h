//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC16DaemoniOSLibrary21SDXPCHelperImageCache : NSObject
{
}

+ (long long)cacheCount;	// IMP=0x00000001001fd970
+ (struct CGImage *)imageForKey:(id)arg1 contactIDs:(id)arg2;	// IMP=0x00000001001fd0c8
+ (_Bool)cacheIsEmpty;	// IMP=0x00000001001fcb6c
+ (void)setImage:(struct CGImage *)arg1 forKey:(id)arg2 contactIDs:(id)arg3;	// IMP=0x00000001001fc9f0
+ (void)evictWithContactIdentifier:(id)arg1;	// IMP=0x00000001001fc544
+ (void)purgeAvatars;	// IMP=0x00000001001fb77c
+ (void)clearCacheWithSync:(_Bool)arg1;	// IMP=0x00000001001fb4c0
- (id)init;	// IMP=0x00000001001fda28

@end
