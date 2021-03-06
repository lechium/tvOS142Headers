//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID, PETConfig;

@interface PETServiceUploadAssembler : NSObject
{
    _Bool _isConfigEnabled;	// 8 = 0x8
    PETConfig *_petConfig;	// 16 = 0x10
    NSDictionary *_pet1Config;	// 24 = 0x18
    NSUUID *_deviceId;	// 32 = 0x20
}

+ (id)loadPET1Config;	// IMP=0x0000000100008a40
+ (id)loadPETConfig;	// IMP=0x0000000100008888
- (void).cxx_destruct;	// IMP=0x00000001000080e0
@property(retain) NSUUID *deviceId; // @synthesize deviceId=_deviceId;
@property _Bool isConfigEnabled; // @synthesize isConfigEnabled=_isConfigEnabled;
@property(retain) NSDictionary *pet1Config; // @synthesize pet1Config=_pet1Config;
@property(retain) PETConfig *petConfig; // @synthesize petConfig=_petConfig;
- (_Bool)_checkMessageSampling:(id)arg1;	// IMP=0x0000000100007fd4
- (_Bool)_checkSampling:(id)arg1;	// IMP=0x0000000100007dc8
- (_Bool)_canLog:(id)arg1;	// IMP=0x0000000100007d14
- (_Bool)_canLogPET1Key:(id)arg1;	// IMP=0x00000001000078e8
- (id)assembleUnaggregatedUploadWithTracker:(id)arg1 messageGroup:(id)arg2;	// IMP=0x00000001000073b8
- (id)assembleAggregatedUploadWithTracker:(id)arg1;	// IMP=0x0000000100006e2c
- (id)initWithRootDir:(id)arg1;	// IMP=0x0000000100006ad4

@end

