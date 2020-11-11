//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponse : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000313d8
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000312f4
- (unsigned long long)hash;	// IMP=0x0000000100031298
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000311c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100031114
- (void)copyTo:(id)arg1;	// IMP=0x00000001000310a8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100031044
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100030e0c
- (id)dictionaryRepresentation;	// IMP=0x0000000100030d2c
- (id)description;	// IMP=0x0000000100030c78
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

