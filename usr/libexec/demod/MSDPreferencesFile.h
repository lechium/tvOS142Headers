//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

+ (id)preferencesFileUrl;	// IMP=0x00000001000232c0
+ (_Bool)preferencesFileExists;	// IMP=0x0000000100022708
+ (id)preferencesFilePath;	// IMP=0x00000001000226ac
+ (id)sharedInstance;	// IMP=0x00000001000225e8
- (void).cxx_destruct;	// IMP=0x00000001000233b8
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1;	// IMP=0x0000000100023174
- (_Bool)saveCache;	// IMP=0x0000000100022fec
- (void)populateCache;	// IMP=0x0000000100022de8
- (_Bool)removeObjectsForKeys:(id)arg1;	// IMP=0x0000000100022c94
- (_Bool)removeObjectForKey:(id)arg1;	// IMP=0x0000000100022b40
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100022934
- (id)objectForKey:(id)arg1;	// IMP=0x00000001000227ec
- (void)reload;	// IMP=0x0000000100022794
- (id)init;	// IMP=0x0000000100022654

@end

