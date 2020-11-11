//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class NSString;
@protocol SecCKKSKeyClass;

__attribute__((visibility("hidden")))
@interface CKKSCurrentKeyPointer : CKKSCKRecordHolder
{
    NSString<SecCKKSKeyClass> *_keyclass;	// 8 = 0x8
    NSString *_currentKeyUUID;	// 16 = 0x10
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010008d5c8
+ (id)sqlColumns;	// IMP=0x000000010008d5bc
+ (id)sqlTable;	// IMP=0x000000010008d5b0
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008d478
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008d38c
+ (id)forKeyClass:(id)arg1 withKeyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x000000010008d248
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008d130
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008d018
- (void).cxx_destruct;	// IMP=0x000000010008cfd8
@property(retain) NSString *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
- (id)sqlValues;	// IMP=0x000000010008cd58
- (id)whereClauseToFindSelf;	// IMP=0x000000010008cc50
- (void)setFromCKRecord:(id)arg1;	// IMP=0x000000010008c98c
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x000000010008c7cc
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000010008c474
- (id)CKRecordName;	// IMP=0x000000010008c468
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008c188
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008c088
- (id)description;	// IMP=0x000000010008bf94
- (id)initForClass:(id)arg1 currentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4;	// IMP=0x000000010008be30

@end

