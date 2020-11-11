//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDAutoUnlockAWDLInfo : PBCodable <NSCopying>
{
    NSString *_appName;	// 8 = 0x8
    NSData *_awdlInfo;	// 16 = 0x10
    unsigned int _errorCode;	// 24 = 0x18
    NSData *_keyData;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
    _Bool _authPrompt;	// 44 = 0x2c
    _Bool _supportsConfirmationACK;	// 45 = 0x2d
    _Bool _useToken;	// 46 = 0x2e
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int authPrompt:1;
        unsigned int supportsConfirmationACK:1;
        unsigned int useToken:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000c4354
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool supportsConfirmationACK; // @synthesize supportsConfirmationACK=_supportsConfirmationACK;
@property(nonatomic) _Bool authPrompt; // @synthesize authPrompt=_authPrompt;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) _Bool useToken; // @synthesize useToken=_useToken;
@property(retain, nonatomic) NSData *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c413c
- (unsigned long long)hash;	// IMP=0x00000001000c4008
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c3e08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c3c68
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c3b0c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c39d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c39c8
- (id)dictionaryRepresentation;	// IMP=0x00000001000c31f8
- (id)description;	// IMP=0x00000001000c3144
@property(readonly, nonatomic) _Bool hasAppName;
@property(nonatomic) _Bool hasSupportsConfirmationACK;
@property(nonatomic) _Bool hasAuthPrompt;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasKeyData;
@property(nonatomic) _Bool hasUseToken;
@property(readonly, nonatomic) _Bool hasAwdlInfo;
@property(nonatomic) _Bool hasVersion;

@end

