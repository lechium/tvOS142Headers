//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "SWCRedactedDescription-Protocol.h"

@class NSData, NSDate, NSError, NSNumber, NSString, _SWCApplicationIdentifier, _SWCDomain, _SWCPatternList, _SWCServiceSpecifier, _SWCSubstitutionVariableList;

@interface SWCEntry : NSObject <SWCRedactedDescription, NSSecureCoding>
{
    NSData *_lastErrorJSON;	// 8 = 0x8
    struct SWCFields _fields;	// 16 = 0x10
    _SWCApplicationIdentifier *_applicationIdentifier;	// 24 = 0x18
    NSString *_serviceType;	// 32 = 0x20
    _SWCDomain *_domain;	// 40 = 0x28
    NSString *_applicationVersion;	// 48 = 0x30
    NSData *_applicationPersistentIdentifier;	// 56 = 0x38
    _SWCPatternList *_patterns;	// 64 = 0x40
    _SWCSubstitutionVariableList *_substitutionVariables;	// 72 = 0x48
    NSDate *_lastCheckedDate;	// 80 = 0x50
    NSNumber *_retryCount;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000c5f0
+ (void)canonicalizeEntries:(id)arg1;	// IMP=0x000000010000afbc
+ (id)new;	// IMP=0x000000010000a600
+ (id)entriesForBundleRecord:(id)arg1 enterpriseContext:(id)arg2 developerModeEnabled:(_Bool)arg3;	// IMP=0x000000010000cda0
+ (void)enumerateJSONResourceURLsForDirectoryAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010000de84
+ (void)enumerateJSONResourceURLsForBundleURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dcbc
+ (id)entriesForJSONObject:(id)arg1 domain:(id)arg2;	// IMP=0x000000010000d8dc
+ (id)_associatedDomainsFromEntitlementForBundleRecord:(id)arg1 applicationIdentifier:(id)arg2 developerModeEnabled:(_Bool)arg3 enterpriseContext:(id)arg4;	// IMP=0x000000010000f3fc
+ (id)_deduplicateServicesByMode:(id)arg1;	// IMP=0x000000010000ede0
+ (_Bool)_shouldIncludeServiceWithDomain:(id)arg1 fromBundleRecord:(id)arg2 applicationIdentifier:(id)arg3 developerModeEnabled:(_Bool)arg4 enterpriseContext:(id)arg5;	// IMP=0x000000010000e9b0
+ (void)_addEntriesToOrderedSet:(id)arg1 forService:(id)arg2 fromAppsArray:(id)arg3 domain:(id)arg4;	// IMP=0x0000000100011420
+ (void)_addEntriesToOrderedSet:(id)arg1 forUniversalLinksFromDetailsDictionary:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4 defaults:(id)arg5 maximum:(unsigned long long)arg6;	// IMP=0x0000000100011080
+ (void)_addEntriesToOrderedSet:(id)arg1 forUniversalLinksFromDetailsArray:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4 defaults:(id)arg5 maximum:(unsigned long long)arg6;	// IMP=0x0000000100010e70
+ (void)_addEntryToOrderedSet:(id)arg1 forUniversalLinksFromSingleDetailsDictionary:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4 defaults:(id)arg5;	// IMP=0x00000001000106f0
+ (id)_entriesFromBuiltInJSONForBundleRecord:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x0000000100010108
+ (void)_enumerateJSONFilesForBundleRecord:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fb54
- (void).cxx_destruct;	// IMP=0x000000010000cd10
@property(copy) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(copy) NSDate *lastCheckedDate; // @synthesize lastCheckedDate=_lastCheckedDate;
@property(retain) _SWCSubstitutionVariableList *substitutionVariables; // @synthesize substitutionVariables=_substitutionVariables;
@property(retain) _SWCPatternList *patterns; // @synthesize patterns=_patterns;
@property(copy) NSData *applicationPersistentIdentifier; // @synthesize applicationPersistentIdentifier=_applicationPersistentIdentifier;
@property(copy) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, copy) _SWCDomain *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy) _SWCApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000c754
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000c5f8
- (id)redactedDescription;	// IMP=0x000000010000c3e0
- (id)debugDescription;	// IMP=0x000000010000c334
- (id)description;	// IMP=0x000000010000c084
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000be34
- (unsigned long long)hash;	// IMP=0x000000010000bd34
@property(copy, nonatomic) NSError *lastError;
@property(readonly) NSDate *nextCheckDate;
@property(readonly) _Bool needsFirstDownload;
@property(readonly, getter=isDownloadable) _Bool downloadable;
@property(readonly) struct SWCFields *fields;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 auditToken:(const CDStruct_6ad76789 *)arg2 matchingPattern:(id *)arg3;	// IMP=0x000000010000b2dc
- (void)canonicalizeWithObjectCache:(id)arg1;	// IMP=0x000000010000b238
- (void)canonicalizeObjectAtAddress:(id *)arg1 objectCache:(id)arg2;	// IMP=0x000000010000b194
@property(readonly) _SWCServiceSpecifier *serviceSpecifier;
- (void)logToFile:(struct __sFILE *)arg1 verbosity:(unsigned char)arg2;	// IMP=0x000000010000a8f4
- (id)initWithServiceSpecifier:(id)arg1;	// IMP=0x000000010000a7ac
- (id)initWithApplicationIdentifier:(id)arg1 service:(id)arg2 domain:(id)arg3;	// IMP=0x000000010000a63c
- (id)init;	// IMP=0x000000010000a60c

@end

