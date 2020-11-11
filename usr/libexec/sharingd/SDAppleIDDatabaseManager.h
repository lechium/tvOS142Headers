//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, SFAppleIDAccount;

__attribute__((visibility("hidden")))
@interface SDAppleIDDatabaseManager : NSObject
{
    NSDictionary *_metaInfo;	// 8 = 0x8
    NSDate *_lastConnectionDate;	// 16 = 0x10
    NSDate *_lastSuccessfulConnectionDate;	// 24 = 0x18
    SFAppleIDAccount *_account;	// 32 = 0x20
    NSMutableDictionary *_personInfoCache;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x00000001000ca3bc
- (void).cxx_destruct;	// IMP=0x00000001000cced4
@property(retain, nonatomic) NSMutableDictionary *personInfoCache; // @synthesize personInfoCache=_personInfoCache;
@property(retain, nonatomic) SFAppleIDAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSDate *lastSuccessfulConnectionDate; // @synthesize lastSuccessfulConnectionDate=_lastSuccessfulConnectionDate;
@property(retain, nonatomic) NSDate *lastConnectionDate; // @synthesize lastConnectionDate=_lastConnectionDate;
- (void)_postNotificationWithName:(id)arg1;	// IMP=0x00000001000ccd94
@property(copy, nonatomic) NSDictionary *metaInfo;
- (void)_setMetaInfo:(id)arg1;	// IMP=0x00000001000ccc5c
- (void)setContactInfo:(id)arg1 validationRecord:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00000001000ccb64
- (void)_setContactInfo:(id)arg1 validationRecord:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00000001000cc864
- (void)setCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00000001000cc7ac
- (void)_setCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00000001000cc3e0
- (void)setIdentityLinkedToCurrentUser:(_Bool)arg1 forAppleID:(id)arg2;	// IMP=0x00000001000cc358
- (void)_setIdentityLinkedToCurrentUser:(_Bool)arg1 forAppleID:(id)arg2;	// IMP=0x00000001000cc1c4
- (void)setIdentity:(id)arg1 forAppleID:(id)arg2;	// IMP=0x00000001000cc10c
- (void)_setIdentity:(id)arg1 forAppleID:(id)arg2;	// IMP=0x00000001000cbdd8
- (void)_setLastSuccessfulConnectionDate:(id)arg1;	// IMP=0x00000001000cbd54
- (void)_setLastConnectionDate:(id)arg1;	// IMP=0x00000001000cbcd0
- (void)clearPersonInfoCache;	// IMP=0x00000001000cbc78
- (void)_clearPersonInfoCache;	// IMP=0x00000001000cbc24
- (id)cachedPersonInfoWithEmailOrPhone:(id)arg1;	// IMP=0x00000001000cbb10
- (id)_cachedPersonInfoWithEmailOrPhone:(id)arg1;	// IMP=0x00000001000cba4c
- (void)addPersonInfoToCache:(id)arg1;	// IMP=0x00000001000cb9d4
- (void)_addPersonInfoToCache:(id)arg1;	// IMP=0x00000001000cb884
- (void)removeAppleID:(id)arg1;	// IMP=0x00000001000cb80c
- (void)_removeAppleID:(id)arg1;	// IMP=0x00000001000cb700
- (void)addAppleID:(id)arg1;	// IMP=0x00000001000cb688
- (void)_addAppleID:(id)arg1;	// IMP=0x00000001000cb564
- (void)_setAccount:(id)arg1;	// IMP=0x00000001000cb24c
- (void)_updatePersonInfoCachePrefs;	// IMP=0x00000001000cb154
- (void)_updateMetaInfoPrefs;	// IMP=0x00000001000cb07c
- (void)_updateAccountInfoPrefs;	// IMP=0x00000001000caf48
- (id)statusInfo;	// IMP=0x00000001000caedc
- (id)_statusInfo;	// IMP=0x00000001000cad84
- (id)identityForAppleID:(id)arg1;	// IMP=0x00000001000cacd8
- (id)accountForAppleID:(id)arg1;	// IMP=0x00000001000cac2c
- (id)_accountForAppleID:(id)arg1;	// IMP=0x00000001000cab64
- (id)_identityForAppleID:(id)arg1;	// IMP=0x00000001000caa78
- (void)_readPrefs;	// IMP=0x00000001000ca428
- (id)init;	// IMP=0x00000001000ca338

@end
