//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SOSAccountConfiguration : PBCodable <NSCopying>
{
    NSMutableArray *_pendingBackupPeers;	// 8 = 0x8
    _Bool _ringUpdateFlag;	// 16 = 0x10
    struct {
        unsigned int ringUpdateFlag:1;
    } _has;	// 20 = 0x14
}

+ (Class)pendingBackupPeersType;	// IMP=0x000000010019e608
- (void).cxx_destruct;	// IMP=0x000000010019e5f4
@property(nonatomic) _Bool ringUpdateFlag; // @synthesize ringUpdateFlag=_ringUpdateFlag;
@property(retain, nonatomic) NSMutableArray *pendingBackupPeers; // @synthesize pendingBackupPeers=_pendingBackupPeers;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010019e458
- (unsigned long long)hash;	// IMP=0x000000010019e3f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010019e30c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010019e160
- (void)copyTo:(id)arg1;	// IMP=0x000000010019e060
- (void)writeTo:(id)arg1;	// IMP=0x000000010019df0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010019dc9c
- (id)dictionaryRepresentation;	// IMP=0x000000010019dbd0
- (id)description;	// IMP=0x000000010019db1c
@property(nonatomic) _Bool hasRingUpdateFlag;
- (id)pendingBackupPeersAtIndex:(unsigned long long)arg1;	// IMP=0x000000010019dab0
- (unsigned long long)pendingBackupPeersCount;	// IMP=0x000000010019da98
- (void)addPendingBackupPeers:(id)arg1;	// IMP=0x000000010019da24
- (void)clearPendingBackupPeers;	// IMP=0x000000010019da0c

@end
