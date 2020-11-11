//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMContainerPathHasComponents-Protocol.h"

@class MCMContainerClassPath, MCMPOSIXUser, NSString, NSURL;

@interface MCMContainerPath : NSObject <MCMContainerPathHasComponents>
{
    unsigned short _rootPOSIXMode;	// 8 = 0x8
    unsigned short _dataPOSIXMode;	// 10 = 0xa
    unsigned short _schemaPOSIXMode;	// 12 = 0xc
    NSURL *_containerDataURL;	// 16 = 0x10
    NSURL *_containerRootURL;	// 24 = 0x18
    NSString *_containerPathIdentifier;	// 32 = 0x20
    MCMContainerClassPath *_containerClassPath;	// 40 = 0x28
    MCMPOSIXUser *_rootPOSIXOwner;	// 48 = 0x30
    MCMPOSIXUser *_dataPOSIXOwner;	// 56 = 0x38
    MCMPOSIXUser *_schemaPOSIXOwner;	// 64 = 0x40
    NSString *_containerRootComponent;	// 72 = 0x48
    NSString *_containerDataComponent;	// 80 = 0x50
}

+ (id)_posixOwnerForContainerSubdirectories:(unsigned long long)arg1 user:(id)arg2;	// IMP=0x00000001000897c0
+ (Class)_containerClassPathClass;	// IMP=0x00000001000897b4
+ (id)containerPathFromURL:(id)arg1 containerClassPath:(id)arg2 relativePath:(id *)arg3;	// IMP=0x0000000100089558
+ (id)containerPathIdentifierForCodeSignIdentifier:(id)arg1;	// IMP=0x0000000100089430
+ (id)containerPathForContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2;	// IMP=0x00000001000892f8
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 containerPathIdentifier:(id)arg3;	// IMP=0x0000000100089204
+ (id)containerPathForContainerIdentity:(id)arg1 containerPathIdentifier:(id)arg2;	// IMP=0x0000000100089144
- (void).cxx_destruct;	// IMP=0x0000000100088e6c
@property(readonly, nonatomic) NSString *containerDataComponent; // @synthesize containerDataComponent=_containerDataComponent;
@property(readonly, nonatomic) NSString *containerRootComponent; // @synthesize containerRootComponent=_containerRootComponent;
@property(readonly, nonatomic) unsigned short schemaPOSIXMode; // @synthesize schemaPOSIXMode=_schemaPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *schemaPOSIXOwner; // @synthesize schemaPOSIXOwner=_schemaPOSIXOwner;
@property(readonly, nonatomic) unsigned short dataPOSIXMode; // @synthesize dataPOSIXMode=_dataPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *dataPOSIXOwner; // @synthesize dataPOSIXOwner=_dataPOSIXOwner;
@property(readonly, nonatomic) unsigned short rootPOSIXMode; // @synthesize rootPOSIXMode=_rootPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *rootPOSIXOwner; // @synthesize rootPOSIXOwner=_rootPOSIXOwner;
@property(readonly, nonatomic) MCMContainerClassPath *containerClassPath; // @synthesize containerClassPath=_containerClassPath;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
@property(readonly, nonatomic) NSURL *containerRootURL; // @synthesize containerRootURL=_containerRootURL;
@property(readonly, nonatomic) NSURL *containerDataURL; // @synthesize containerDataURL=_containerDataURL;
- (_Bool)_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 error:(id *)arg5;	// IMP=0x0000000100088c80
- (_Bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;	// IMP=0x0000000100088c1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100088b60
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100088ae8
- (_Bool)isEqualToContainerPath:(id)arg1;	// IMP=0x0000000100088a54
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2 containerRootComponent:(id)arg3 containerDataComponent:(id)arg4;	// IMP=0x00000001000886a8
@property(readonly, nonatomic) NSURL *classURL;
@property(readonly, nonatomic) NSURL *categoryURL;
@property(readonly, nonatomic) NSURL *baseURL;
- (_Bool)createDataURLIfNecessaryWithDataProtectionClass:(int)arg1 error:(id *)arg2;	// IMP=0x0000000100088444
- (_Bool)createIfNecessaryWithDataProtectionClass:(int)arg1 error:(id *)arg2;	// IMP=0x00000001000882a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

