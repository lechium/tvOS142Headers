//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveData : PBCodable <NSCopying>
{
    NSData *_receivedData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100030c08
@property(retain, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100030b3c
- (unsigned long long)hash;	// IMP=0x0000000100030ae0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100030a0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003095c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000308f0
- (void)writeTo:(id)arg1;	// IMP=0x000000010003088c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100030678
- (id)dictionaryRepresentation;	// IMP=0x00000001000305c0
- (id)description;	// IMP=0x000000010003050c
@property(readonly, nonatomic) _Bool hasReceivedData;
@property(readonly, nonatomic) _Bool hasTask;

@end

