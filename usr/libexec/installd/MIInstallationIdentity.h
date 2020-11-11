//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface MIInstallationIdentity : NSObject <NSCopying>
{
    NSData *_installSessionID;	// 8 = 0x8
    NSData *_uniqueInstallID;	// 16 = 0x10
}

+ (id)installationIdentityForBundle:(id)arg1 settingIfNotSet:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000369e0
+ (id)identityForUpdateOfBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100036828
+ (id)newIdentityForBundle:(id)arg1;	// IMP=0x0000000100036564
- (void).cxx_destruct;	// IMP=0x0000000100037cf4
@property(copy, nonatomic) NSData *uniqueInstallID; // @synthesize uniqueInstallID=_uniqueInstallID;
@property(copy, nonatomic) NSData *installSessionID; // @synthesize installSessionID=_installSessionID;
- (id)description;	// IMP=0x0000000100037bfc
- (_Bool)writeToBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100037ab4
- (_Bool)_writeToBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100037928
- (_Bool)_writeToBundle:(id)arg1 fd:(int)arg2 fdLocation:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100037354
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000372ac
- (unsigned long long)hash;	// IMP=0x0000000100037220
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100037040
- (id)initWithSessionID:(id)arg1 uniqueID:(id)arg2;	// IMP=0x0000000100036ed8

@end
