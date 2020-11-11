//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCPayload, MCProfileHandler, NSArray;

@interface MCNewPayloadHandler : NSObject
{
    MCPayload *_payload;	// 8 = 0x8
    MCProfileHandler *_profileHandler;	// 16 = 0x10
    NSArray *_userInputResponses;	// 24 = 0x18
}

+ (id)prioritizeUserInput:(id)arg1 key:(id)arg2 overField:(id)arg3;	// IMP=0x000000010001a968
+ (id)promptDictionaryForKey:(id)arg1 title:(id)arg2 description:(id)arg3 retypeDescription:(id)arg4 finePrint:(id)arg5 defaultValue:(id)arg6 placeholderValue:(id)arg7 minimumLength:(unsigned long long)arg8 fieldType:(int)arg9 flags:(int)arg10;	// IMP=0x000000010001a850
- (void).cxx_destruct;	// IMP=0x000000010001aa1c
@property(retain, nonatomic) NSArray *userInputResponses; // @synthesize userInputResponses=_userInputResponses;
@property(readonly, nonatomic) __weak MCProfileHandler *profileHandler; // @synthesize profileHandler=_profileHandler;
@property(readonly, retain, nonatomic) MCPayload *payload; // @synthesize payload=_payload;
- (id)_temporaryPersistentIDForIdentityUUID:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001a5e0
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001a4fc
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001a4a4
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001a3c0
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001a368
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001a2c8
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001a248
- (void)remove;	// IMP=0x000000010001a244
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x000000010001a238
- (void)unsetAside;	// IMP=0x000000010001a234
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x000000010001a228
- (void)setAside;	// IMP=0x000000010001a224
- (_Bool)isInstalled;	// IMP=0x000000010001a21c
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010001a218
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010001a214
- (void)unstageFromInstallationWithInstaller:(id)arg1;	// IMP=0x000000010001a210
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001a208
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010001a200
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001a1f8
- (id)userInputFields;	// IMP=0x000000010001a1e4
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x000000010001a148

@end
