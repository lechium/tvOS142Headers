//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockSetupCreateSecret : PBCodable <NSCopying>
{
    unsigned int _sessionID;	// 8 = 0x8
    NSData *_token;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_6358cc24 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000010003992c
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003984c
- (unsigned long long)hash;	// IMP=0x00000001000397c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000396c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000395fc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100039560
- (void)writeTo:(id)arg1;	// IMP=0x00000001000394c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000394c0
- (id)dictionaryRepresentation;	// IMP=0x000000010003908c
- (id)description;	// IMP=0x0000000100038fd8
@property(readonly, nonatomic) _Bool hasToken;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

