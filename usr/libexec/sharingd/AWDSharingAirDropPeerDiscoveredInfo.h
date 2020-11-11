//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface AWDSharingAirDropPeerDiscoveredInfo : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _awdlVersion;	// 16 = 0x10
    unsigned int _bluetoothDiscovery;	// 20 = 0x14
    unsigned int _bonjourDiscovery;	// 24 = 0x18
    unsigned int _bonjourResolveComplete;	// 28 = 0x1c
    unsigned int _bonjourTXTRecordDiscovery;	// 32 = 0x20
    NSString *_browserID;	// 40 = 0x28
    int _errorCode;	// 48 = 0x30
    NSString *_errorDomain;	// 56 = 0x38
    unsigned int _identityQueryComplete;	// 64 = 0x40
    NSString *_modelCode;	// 72 = 0x48
    NSString *_modelName;	// 80 = 0x50
    unsigned int _platform;	// 88 = 0x58
    int _rssi;	// 92 = 0x5c
    NSString *_sessionID;	// 96 = 0x60
    unsigned int _tcpConnectionComplete;	// 104 = 0x68
    unsigned int _tlsHandshakeComplete;	// 108 = 0x6c
    unsigned int _totalDiscovery;	// 112 = 0x70
    _Bool _verifiableIdentity;	// 116 = 0x74
    struct {
        unsigned int timestamp:1;
        unsigned int awdlVersion:1;
        unsigned int bluetoothDiscovery:1;
        unsigned int bonjourDiscovery:1;
        unsigned int bonjourResolveComplete:1;
        unsigned int bonjourTXTRecordDiscovery:1;
        unsigned int errorCode:1;
        unsigned int identityQueryComplete:1;
        unsigned int platform:1;
        unsigned int rssi:1;
        unsigned int tcpConnectionComplete:1;
        unsigned int tlsHandshakeComplete:1;
        unsigned int totalDiscovery:1;
        unsigned int verifiableIdentity:1;
    } _has;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010016fb20
@property(retain, nonatomic) NSString *browserID; // @synthesize browserID=_browserID;
@property(nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned int awdlVersion; // @synthesize awdlVersion=_awdlVersion;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) _Bool verifiableIdentity; // @synthesize verifiableIdentity=_verifiableIdentity;
@property(nonatomic) unsigned int totalDiscovery; // @synthesize totalDiscovery=_totalDiscovery;
@property(nonatomic) unsigned int identityQueryComplete; // @synthesize identityQueryComplete=_identityQueryComplete;
@property(nonatomic) unsigned int tlsHandshakeComplete; // @synthesize tlsHandshakeComplete=_tlsHandshakeComplete;
@property(nonatomic) unsigned int tcpConnectionComplete; // @synthesize tcpConnectionComplete=_tcpConnectionComplete;
@property(nonatomic) unsigned int bonjourResolveComplete; // @synthesize bonjourResolveComplete=_bonjourResolveComplete;
@property(nonatomic) unsigned int bonjourTXTRecordDiscovery; // @synthesize bonjourTXTRecordDiscovery=_bonjourTXTRecordDiscovery;
@property(nonatomic) unsigned int bonjourDiscovery; // @synthesize bonjourDiscovery=_bonjourDiscovery;
@property(nonatomic) unsigned int bluetoothDiscovery; // @synthesize bluetoothDiscovery=_bluetoothDiscovery;
@property(retain, nonatomic) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010016f684
- (unsigned long long)hash;	// IMP=0x000000010016f400
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016f050
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010016ecf4
- (void)copyTo:(id)arg1;	// IMP=0x000000010016e9ec
- (void)writeTo:(id)arg1;	// IMP=0x000000010016e730
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010016e728
- (id)dictionaryRepresentation;	// IMP=0x000000010016d62c
- (id)description;	// IMP=0x000000010016d578
@property(readonly, nonatomic) _Bool hasBrowserID;
@property(nonatomic) _Bool hasPlatform;
@property(nonatomic) _Bool hasAwdlVersion;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasRssi;
@property(nonatomic) _Bool hasVerifiableIdentity;
@property(nonatomic) _Bool hasTotalDiscovery;
@property(nonatomic) _Bool hasIdentityQueryComplete;
@property(nonatomic) _Bool hasTlsHandshakeComplete;
@property(nonatomic) _Bool hasTcpConnectionComplete;
@property(nonatomic) _Bool hasBonjourResolveComplete;
@property(nonatomic) _Bool hasBonjourTXTRecordDiscovery;
@property(nonatomic) _Bool hasBonjourDiscovery;
@property(nonatomic) _Bool hasBluetoothDiscovery;
@property(readonly, nonatomic) _Bool hasModelCode;
@property(readonly, nonatomic) _Bool hasModelName;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end

