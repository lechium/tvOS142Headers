//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AWDSharingSheetActivityType : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_activityType;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010012aebc
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010012adcc
- (unsigned long long)hash;	// IMP=0x000000010012ad40
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010012ac34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010012ab58
- (void)copyTo:(id)arg1;	// IMP=0x000000010012aac0
- (void)writeTo:(id)arg1;	// IMP=0x000000010012aa34
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010012aa2c
- (id)dictionaryRepresentation;	// IMP=0x000000010012a6c0
- (id)description;	// IMP=0x000000010012a60c
@property(readonly, nonatomic) _Bool hasActivityType;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end

