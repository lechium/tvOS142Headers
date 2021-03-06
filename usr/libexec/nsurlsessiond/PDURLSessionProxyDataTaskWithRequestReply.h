//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDataTaskWithRequestReply : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSData *_taskInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000aad8
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000aa0c
- (unsigned long long)hash;	// IMP=0x000000010000a9b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a8dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000a82c
- (void)copyTo:(id)arg1;	// IMP=0x000000010000a7c0
- (void)writeTo:(id)arg1;	// IMP=0x000000010000a75c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000a548
- (id)dictionaryRepresentation;	// IMP=0x000000010000a490
- (id)description;	// IMP=0x000000010000a3dc
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasTask;

@end

