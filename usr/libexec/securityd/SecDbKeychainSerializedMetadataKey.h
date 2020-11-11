//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbKeychainSerializedMetadataKey : PBCodable <NSCopying>
{
    int _actualKeyclass;	// 8 = 0x8
    NSData *_akswrappedkey;	// 16 = 0x10
    NSData *_backupwrappedkey;	// 24 = 0x18
    NSData *_baguuid;	// 32 = 0x20
    int _keyclass;	// 40 = 0x28
    struct {
        unsigned int actualKeyclass:1;
        unsigned int keyclass:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000010013ed98
@property(retain, nonatomic) NSData *backupwrappedkey; // @synthesize backupwrappedkey=_backupwrappedkey;
@property(retain, nonatomic) NSData *akswrappedkey; // @synthesize akswrappedkey=_akswrappedkey;
@property(retain, nonatomic) NSData *baguuid; // @synthesize baguuid=_baguuid;
@property(nonatomic) int actualKeyclass; // @synthesize actualKeyclass=_actualKeyclass;
@property(nonatomic) int keyclass; // @synthesize keyclass=_keyclass;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010013ec30
- (unsigned long long)hash;	// IMP=0x000000010013eb6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010013ea0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010013e8e4
- (void)copyTo:(id)arg1;	// IMP=0x000000010013e808
- (void)writeTo:(id)arg1;	// IMP=0x000000010013e738
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010013e3ec
- (id)dictionaryRepresentation;	// IMP=0x000000010013e27c
- (id)description;	// IMP=0x000000010013e1c8
@property(readonly, nonatomic) _Bool hasBackupwrappedkey;
@property(readonly, nonatomic) _Bool hasAkswrappedkey;
@property(readonly, nonatomic) _Bool hasBaguuid;
@property(nonatomic) _Bool hasActualKeyclass;
@property(nonatomic) _Bool hasKeyclass;

@end

