//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PRGlobalDebugSettings : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
}

+ (id)sharedSettings;	// IMP=0x00000001001b62d4
- (void).cxx_destruct;	// IMP=0x00000001001b65e0
- (long long)integerForKey:(id)arg1;	// IMP=0x00000001001b6548
- (_Bool)boolForKey:(id)arg1;	// IMP=0x00000001001b64b0
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000001001b6444
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000001001b6434
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001b63a4
- (id)init;	// IMP=0x00000001001b6340

@end

