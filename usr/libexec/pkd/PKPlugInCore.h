//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_originalIdentifier;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSURL *_containingUrl;	// 32 = 0x20
    NSString *_containingBundleIdentifier;	// 40 = 0x28
    _Bool _onSystemVolume;	// 48 = 0x30
    NSDictionary *_bundleInfoDictionary;	// 56 = 0x38
    NSDictionary *_plugInDictionary;	// 64 = 0x40
    NSDictionary *_entitlements;	// 72 = 0x48
    unsigned long long _hubProtocolVersion;	// 80 = 0x50
    NSString *_localizedName;	// 88 = 0x58
    NSString *_localizedShortName;	// 96 = 0x60
    NSString *_localizedContainingName;	// 104 = 0x68
    NSDictionary *_localizedFileProviderActionNames;	// 112 = 0x70
    NSDictionary *_annotations;	// 120 = 0x78
    long long _lastModified;	// 128 = 0x80
    NSUUID *_uuid;	// 136 = 0x88
    NSData *_cdhash;	// 144 = 0x90
    NSString *_requirement;	// 152 = 0x98
    NSURL *_dataContainerURL;	// 160 = 0xa0
    unsigned int _extensionPointPlatform;	// 168 = 0xa8
    _Bool _isRBManaged;	// 172 = 0xac
    NSUUID *_discoveryInstanceUUID;	// 176 = 0xb0
}

+ (id)readSDKDictionary:(id)arg1 forPlatform:(unsigned int)arg2;	// IMP=0x000000010001c27c
- (void).cxx_destruct;	// IMP=0x000000010001f1c8
@property(readonly) unsigned int extensionPointPlatform; // @synthesize extensionPointPlatform=_extensionPointPlatform;
@property _Bool isRBManaged; // @synthesize isRBManaged=_isRBManaged;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(retain) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain) NSData *cdhash; // @synthesize cdhash=_cdhash;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property long long lastModified; // @synthesize lastModified=_lastModified;
@property(retain) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain) NSString *localizedContainingName; // @synthesize localizedContainingName=_localizedContainingName;
@property unsigned long long hubProtocolVersion; // @synthesize hubProtocolVersion=_hubProtocolVersion;
@property(readonly) NSUUID *discoveryInstanceUUID; // @synthesize discoveryInstanceUUID=_discoveryInstanceUUID;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSDictionary *plugInDictionary; // @synthesize plugInDictionary=_plugInDictionary;
@property(retain) NSDictionary *bundleInfoDictionary; // @synthesize bundleInfoDictionary=_bundleInfoDictionary;
@property _Bool onSystemVolume; // @synthesize onSystemVolume=_onSystemVolume;
@property(copy) NSString *containingBundleIdentifier; // @synthesize containingBundleIdentifier=_containingBundleIdentifier;
@property(copy) NSURL *containingUrl; // @synthesize containingUrl=_containingUrl;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000010001eec4
- (id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2;	// IMP=0x000000010001ec6c
- (void)_loadLocalizedFileProviderActionNames;	// IMP=0x000000010001eacc
- (void)_loadLocalizedNames;	// IMP=0x000000010001e610
- (_Bool)useBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001e608
@property(readonly) NSDictionary *localizedFileProviderActionNames; // @synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames;
@property(readonly) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(readonly) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)localizedInfoDictionaryForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ddd0
- (id)augmentInterface:(id)arg1;	// IMP=0x000000010001ddc8
- (id)attribute:(id)arg1;	// IMP=0x000000010001dd48
- (id)pluginKey:(id)arg1;	// IMP=0x000000010001dcc8
- (id)infoKey:(id)arg1;	// IMP=0x000000010001dc0c
@property(readonly) NSDate *timestamp;
@property(readonly) _Bool isData;
@property(readonly) _Bool isDedicated;
@property(readonly) _Bool isHybrid;
@property(readonly) _Bool isMultiplexed;
@property(readonly) _Bool isAppExtension;
- (id)embeddedProtocolSpec;	// IMP=0x000000010001d9f4
- (id)embeddedCodePath;	// IMP=0x000000010001d9ec
@property(readonly) NSString *sdkSpec;
@property(readonly) NSString *principalSpec;
@property(readonly) id protocolSpec;
@property(readonly) NSString *version;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSString *containingPath;
@property(readonly) NSString *path;
@property(readonly) _Bool oldStyle;
- (void)setAnnotation:(id)arg1 value:(id)arg2;	// IMP=0x000000010001d680
- (void)updateFromForm:(id)arg1;	// IMP=0x000000010001d620
- (id)diagnose;	// IMP=0x000000010001d3e8
- (id)export:(id *)arg1;	// IMP=0x000000010001cd24
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;	// IMP=0x000000010001cc98
- (id)sdkOnlyKeyPaths;	// IMP=0x000000010001cb38
- (id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2;	// IMP=0x000000010001c81c
- (id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;	// IMP=0x000000010001c6f8
- (id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;	// IMP=0x000000010001c4d4
- (void)canonicalize;	// IMP=0x000000010001c0fc
- (_Bool)setupWithForm:(id)arg1;	// IMP=0x000000010001ba30
- (id)normalizeInfoDictionary:(id)arg1;	// IMP=0x000000010001ba18
- (_Bool)setDictionaries:(id)arg1;	// IMP=0x000000010001b770
- (_Bool)setupWithName:(id)arg1 extensionPointPlatform:(unsigned int)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7;	// IMP=0x000000010001b480
- (unsigned long long)hash;	// IMP=0x000000010001b40c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001b32c
- (id)initWithForm:(id)arg1;	// IMP=0x000000010001b2bc
- (id)initWithName:(id)arg1 extensionPointPlatform:(unsigned int)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7;	// IMP=0x000000010001b198
- (id)init;	// IMP=0x000000010001b164

@end

