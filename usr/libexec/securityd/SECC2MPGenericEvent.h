//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPGenericEvent : PBCodable <NSCopying>
{
    unsigned long long _timestampEnd;	// 8 = 0x8
    unsigned long long _timestampStart;	// 16 = 0x10
    NSMutableArray *_metrics;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    int _type;	// 40 = 0x28
    struct {
        unsigned int timestampEnd:1;
        unsigned int timestampStart:1;
        unsigned int type:1;
    } _has;	// 44 = 0x2c
}

+ (Class)metricType;	// IMP=0x000000010009a204
- (void).cxx_destruct;	// IMP=0x0000000100099d7c
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) unsigned long long timestampEnd; // @synthesize timestampEnd=_timestampEnd;
@property(nonatomic) unsigned long long timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100099b44
- (unsigned long long)hash;	// IMP=0x0000000100099a6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100099904
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000996f0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100099588
- (void)writeTo:(id)arg1;	// IMP=0x00000001000993d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000993d0
- (id)dictionaryRepresentation;	// IMP=0x0000000100099060
- (id)description;	// IMP=0x0000000100098fac
- (id)metricAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100098f94
- (unsigned long long)metricsCount;	// IMP=0x0000000100098f7c
- (void)addMetric:(id)arg1;	// IMP=0x0000000100098f08
- (void)clearMetrics;	// IMP=0x0000000100098ef0
@property(nonatomic) _Bool hasTimestampEnd;
@property(nonatomic) _Bool hasTimestampStart;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000100098d64
- (id)typeAsString:(int)arg1;	// IMP=0x0000000100098cd0
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
