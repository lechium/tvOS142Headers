//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IOServiceWriter.h"

@interface IODualSPIWriter : IOServiceWriter
{
    _Bool _usesAFUH;	// 8 = 0x8
    unsigned int _spiDriverConnect;	// 12 = 0xc
    char *_regBuffer;	// 16 = 0x10
}

@property char *regBuffer; // @synthesize regBuffer=_regBuffer;
@property unsigned int spiDriverConnect; // @synthesize spiDriverConnect=_spiDriverConnect;
- (void)dealloc;	// IMP=0x000000010002efc4
- (int)_commitBytes:(char *)arg1 atOffset:(unsigned int)arg2 ofLength:(unsigned int)arg3 withError:(id *)arg4;	// IMP=0x000000010002eed4
- (int)_writeBytes:(char *)arg1 atOffset:(unsigned int)arg2 ofLength:(unsigned int)arg3 withError:(id *)arg4;	// IMP=0x000000010002ede4
@property(readonly, getter=doesUseAFUH) _Bool usesAFUH; // @synthesize usesAFUH=_usesAFUH;
- (_Bool)_checkUsesAFUH;	// IMP=0x000000010002ebe8
- (int)_commitHeader:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010002eacc
- (int)_writeFirmware:(id)arg1 toHeader:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010002e7a0
- (int)eraseBytes:(unsigned int)arg1 ofLength:(unsigned int)arg2 withError:(id *)arg3;	// IMP=0x000000010002e6c0
- (int)readDataAtOffset:(unsigned int)arg1 ofLength:(unsigned int)arg2 intoBuffer:(void *)arg3;	// IMP=0x000000010002e5dc
- (_Bool)verifyFirmwareAtIndex:(unsigned long long)arg1 againstData:(id)arg2;	// IMP=0x000000010002e4fc
- (_Bool)verifyHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x000000010002e3dc
- (id)readDataAtOffset:(unsigned int)arg1 ofLength:(unsigned int)arg2;	// IMP=0x000000010002e334
- (id)findHeaders;	// IMP=0x000000010002dea4
- (unsigned long long)findPreparedHeader;	// IMP=0x000000010002ddd8
- (int)commitPreparedHeaderWithError:(id *)arg1;	// IMP=0x000000010002dd98
- (int)commitHeaderAtIndex:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x000000010002dd24
- (int)writeFirstGenerationFirmware:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010002dacc
- (int)writeNewerGenerationFirmware:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010002d6e8
- (int)openService;	// IMP=0x000000010002d5f8
- (int)writeData:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010002d598
- (id)initWithService:(unsigned int)arg1;	// IMP=0x000000010002d524

@end

