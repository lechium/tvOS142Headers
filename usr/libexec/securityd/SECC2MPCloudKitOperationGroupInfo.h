//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPCloudKitOperationGroupInfo : PBCodable <NSCopying>
{
    NSString *_operationGroupId;	// 8 = 0x8
    NSString *_operationGroupName;	// 16 = 0x10
    _Bool _operationGroupTriggered;	// 24 = 0x18
    struct {
        unsigned int operationGroupTriggered:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000010017a794
@property(nonatomic) _Bool operationGroupTriggered; // @synthesize operationGroupTriggered=_operationGroupTriggered;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *operationGroupId; // @synthesize operationGroupId=_operationGroupId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010017a6a4
- (unsigned long long)hash;	// IMP=0x000000010017a614
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010017a504
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010017a428
- (void)copyTo:(id)arg1;	// IMP=0x000000010017a390
- (void)writeTo:(id)arg1;	// IMP=0x000000010017a304
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010017a2fc
- (id)dictionaryRepresentation;	// IMP=0x000000010017a20c
- (id)description;	// IMP=0x000000010017a158
@property(nonatomic) _Bool hasOperationGroupTriggered;
@property(readonly, nonatomic) _Bool hasOperationGroupName;
@property(readonly, nonatomic) _Bool hasOperationGroupId;

@end

