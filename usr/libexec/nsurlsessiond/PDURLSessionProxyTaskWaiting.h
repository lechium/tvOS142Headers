//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWaiting : PBCodable <NSCopying>
{
    unsigned int _reason;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003cc68
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003cba4
- (unsigned long long)hash;	// IMP=0x000000010003cb3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003ca60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003c9b8
- (void)copyTo:(id)arg1;	// IMP=0x000000010003c940
- (void)writeTo:(id)arg1;	// IMP=0x000000010003c8d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003c630
- (id)dictionaryRepresentation;	// IMP=0x000000010003c540
- (id)description;	// IMP=0x000000010003c48c
@property(nonatomic) _Bool hasReason;
@property(readonly, nonatomic) _Bool hasTask;

@end

