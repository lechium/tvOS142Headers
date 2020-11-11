//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMClientIdentity, MCMCommandQueue, MCMUserIdentityCache, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCMClientConnection : NSObject
{
    NSMutableDictionary *_sanitizedLookup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_deathrowBackgroundQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_deathrowQueue;	// 32 = 0x20
    _Bool _entitled;	// 40 = 0x28
    _Bool _allowOtherIdLookup;	// 41 = 0x29
    _Bool _allowGroupIdLookup;	// 42 = 0x2a
    _Bool _unrestricted;	// 43 = 0x2b
    MCMClientIdentity *_clientIdentity;	// 48 = 0x30
    MCMCommandQueue *_commandQueue;	// 56 = 0x38
    NSString *_clientBundleIdentifier;	// 64 = 0x40
    NSArray *_entitledWipeIdentifiers;	// 72 = 0x48
    NSDictionary *_lookup;	// 80 = 0x50
    MCMUserIdentityCache *_userIdentityCache;	// 88 = 0x58
}

+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1;	// IMP=0x0000000100078778
+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x00000001000786d4
+ (id)sharedClientConnection;	// IMP=0x0000000100078694
- (void).cxx_destruct;	// IMP=0x0000000100076ef4
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) NSDictionary *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSArray *entitledWipeIdentifiers; // @synthesize entitledWipeIdentifiers=_entitledWipeIdentifiers;
@property(retain, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) MCMCommandQueue *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(nonatomic) _Bool unrestricted; // @synthesize unrestricted=_unrestricted;
@property(nonatomic) _Bool allowGroupIdLookup; // @synthesize allowGroupIdLookup=_allowGroupIdLookup;
@property(nonatomic) _Bool allowOtherIdLookup; // @synthesize allowOtherIdLookup=_allowOtherIdLookup;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
- (_Bool)_performOnDemandContainerMigrationIfNecessaryWithMetadata:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x000000010007699c
- (int)_desiredDataProtectionClassForMetadata:(id)arg1;	// IMP=0x0000000100076880
- (int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 info:(id)arg3;	// IMP=0x00000001000765f4
- (id)_setOfStringsFromArray:(id)arg1;	// IMP=0x000000010007650c
- (id)_lookupForContainerClass:(unsigned long long)arg1;	// IMP=0x00000001000760e4
- (void)flushCacheForContainerClass:(unsigned long long)arg1 transient:(_Bool)arg2;	// IMP=0x000000010007602c
- (_Bool)completeWithError:(unsigned long long *)arg1;	// IMP=0x0000000100075fd8
- (id)groupContainersForOwnerIdentifier:(id)arg1 userIdentity:(id)arg2 groupContainerClass:(unsigned long long)arg3 withError:(unsigned long long *)arg4;	// IMP=0x00000001000759c4
- (_Bool)isEntitledForLookupWithClass:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000010007582c
- (void)deleteUserManagedAssetWithContainerIdentity:(id)arg1 relativePath:(id)arg2 withError:(unsigned long long *)arg3;	// IMP=0x0000000100074bac
- (id)userManagedAssetsPathWithContainerIdentity:(id)arg1 isRelative:(_Bool)arg2 createIfNecessary:(_Bool)arg3 existed:(_Bool *)arg4 withError:(unsigned long long *)arg5;	// IMP=0x0000000100073bec
- (id)stageSharedContentForContainerIdentity:(id)arg1 sourceRelativePath:(id)arg2 destRelativePath:(id)arg3 withError:(unsigned long long *)arg4;	// IMP=0x0000000100072cf8
- (void)retryTestWithNumCrashes:(unsigned long long)arg1 withError:(unsigned long long *)arg2;	// IMP=0x00000001000722f4
- (unsigned long long)diskUsageWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100071a70
- (void)deleteDataContainerContentWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100070e7c
- (void)deleteContainerWithMetadata:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100070bcc
- (void)deleteContainerWithContainerIdentity:(id)arg1 transient:(_Bool)arg2 withError:(unsigned long long *)arg3;	// IMP=0x0000000100070a08
- (void)regenerateDirectoryUUIDWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x0000000100070078
- (void)_regenerateAllSystemContainerPaths;	// IMP=0x000000010006f9d4
- (void)recreateDefaultStructureWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x000000010006f310
- (id)metadataWithContainerIdentity:(id)arg1 withError:(unsigned long long *)arg2;	// IMP=0x000000010006f064
- (id)infoValueForKey:(id)arg1 containerIdentity:(id)arg2 useLocking:(_Bool)arg3 withError:(unsigned long long *)arg4;	// IMP=0x000000010006ec28
- (void)setInfoValue:(id)arg1 forKey:(id)arg2 containerIdentity:(id)arg3 useLocking:(_Bool)arg4 withError:(unsigned long long *)arg5;	// IMP=0x000000010006e6b0
- (void)deleteContainersOnDeathRowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006e5bc
- (void)replaceContainerIdentity:(id)arg1 withContainerIdentity:(id)arg2 preserveOldPathIdentifier:(_Bool)arg3 preserveOldInternalUUID:(_Bool)arg4 startDeletionThread:(_Bool)arg5 withError:(unsigned long long *)arg6;	// IMP=0x000000010006bfe0
- (id)containersWithClass:(unsigned long long)arg1 transient:(_Bool)arg2 withError:(unsigned long long *)arg3;	// IMP=0x000000010006bd40
- (id)createOrLookupContainerWithContainerIdentity:(id)arg1 createIfNecessary:(_Bool)arg2 transient:(_Bool)arg3 useLocking:(_Bool)arg4 withError:(unsigned long long *)arg5;	// IMP=0x0000000100069608
- (void)rebootContainerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100068e80
- (void)rebootContainerManagerSetup;	// IMP=0x0000000100067eb8
- (void)_cleanupOprhanedCodeSigningMappingData;	// IMP=0x0000000100067d64
- (void)_cleanupOrphanedDataForDirectories:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x0000000100067694
- (void)containerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000674d4
- (void)containerManagerSetup;	// IMP=0x0000000100067254
- (id)_sharedDeathrowQueue;	// IMP=0x00000001000671c0
- (id)_sharedDeathrowBackgroundQueue;	// IMP=0x0000000100067180
- (id)_sharedBackgroundQueue;	// IMP=0x0000000100067140
- (id)initWithClientIdentity:(id)arg1 entitled:(_Bool)arg2 allowOtherIdLookup:(_Bool)arg3 unrestricted:(_Bool)arg4 lookup:(id)arg5 entitledWipeIdentifiers:(id)arg6 commandQueue:(id)arg7;	// IMP=0x0000000100066f78
- (id)init;	// IMP=0x0000000100066e14
- (_Bool)_recoverFromReplaceOperationsWithError:(id *)arg1;	// IMP=0x0000000100079a84
- (_Bool)_writeToDiskReplaceAt:(id)arg1 old:(id)arg2 withNew:(id)arg3 usingStaging:(id)arg4 toDestination:(id)arg5 error:(id *)arg6;	// IMP=0x0000000100079684
- (id)_readAndValidateReplaceFileAtUrl:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100078d5c
- (_Bool)_moveItemAtURLToDeathRow:(id)arg1 isDir:(_Bool)arg2 startDeletionThread:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100078a78
- (_Bool)_removeItemOrMoveToTempAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000787b4

@end
