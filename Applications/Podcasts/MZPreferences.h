//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MZPreferences : NSObject
{
}

+ (id)storeBookkeeperPreferences;	// IMP=0x0000000100079e50
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000010007a238
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000010007a1b0
- (id)objectForKey:(id)arg1 withDefaultValue:(id)arg2;	// IMP=0x000000010007a13c
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010007a0e8
- (void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010007a028
- (void)_preferencesDidChange;	// IMP=0x0000000100079fcc
- (void)dealloc;	// IMP=0x0000000100079f74
- (id)init;	// IMP=0x0000000100079ebc

@end
