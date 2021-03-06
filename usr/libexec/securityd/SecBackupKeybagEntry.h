//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSSQLDatabaseObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecBackupKeybagEntry : CKKSSQLDatabaseObject
{
    NSData *_publickeyHash;	// 8 = 0x8
    NSData *_publickey;	// 16 = 0x10
    NSData *_musr;	// 24 = 0x18
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010016631c
+ (id)sqlColumns;	// IMP=0x0000000100166310
+ (id)sqlTable;	// IMP=0x0000000100166304
+ (id)tryFromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016621c
+ (id)fromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100166134
+ (id)state:(id)arg1;	// IMP=0x0000000100165fe8
- (void).cxx_destruct;	// IMP=0x0000000100165f94
@property(retain) NSData *musr; // @synthesize musr=_musr;
@property(retain) NSData *publickey; // @synthesize publickey=_publickey;
@property(retain) NSData *publickeyHash; // @synthesize publickeyHash=_publickeyHash;
- (id)sqlValues;	// IMP=0x0000000100165da8
- (id)whereClauseToFindSelf;	// IMP=0x0000000100165cfc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100165c20
- (id)initWithPublicKey:(id)arg1 publickeyHash:(id)arg2 user:(id)arg3;	// IMP=0x0000000100165b38

@end

