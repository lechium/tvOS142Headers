//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOServiceWriter;

@interface MSUiBootHeader : NSObject
{
    unsigned int _startLocation;	// 8 = 0x8
    unsigned int _imageAddress;	// 12 = 0xc
    unsigned int _headerGeneration;	// 16 = 0x10
    IOServiceWriter *_serviceWriter;	// 24 = 0x18
}

@property unsigned int headerGeneration; // @synthesize headerGeneration=_headerGeneration;
@property(retain) IOServiceWriter *serviceWriter; // @synthesize serviceWriter=_serviceWriter;
@property unsigned int imageAddress; // @synthesize imageAddress=_imageAddress;
@property unsigned int startLocation; // @synthesize startLocation=_startLocation;
- (void)dealloc;	// IMP=0x000000010002f258
- (void)makeValid;	// IMP=0x000000010002f254
- (_Bool)isValid;	// IMP=0x000000010002f24c
- (long long)compareTo:(id)arg1;	// IMP=0x000000010002f1b0
- (void)bumpGeneration;	// IMP=0x000000010002f158
- (unsigned int)length;	// IMP=0x000000010002f150
- (void)setAsFirstGeneration;	// IMP=0x000000010002f13c
- (void)invalidate;	// IMP=0x000000010002f128
- (void)writeHeaderToOffset:(unsigned int)arg1;	// IMP=0x000000010002f114
- (_Bool)loadHeaderAtOffset:(unsigned int)arg1;	// IMP=0x000000010002f0ec
- (id)packStructure;	// IMP=0x000000010002f0c4
- (id)initWithIOServiceWriter:(id)arg1;	// IMP=0x000000010002f06c

@end

