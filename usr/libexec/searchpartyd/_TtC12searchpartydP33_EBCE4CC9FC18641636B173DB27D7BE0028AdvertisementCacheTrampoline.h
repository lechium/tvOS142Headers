//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12searchpartydP33_EBCE4CC9FC18641636B173DB27D7BE0028AdvertisementCacheTrampoline : NSObject
{
    MISSING_TYPE *implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100041f78
- (id)init;	// IMP=0x0000000100041f88
- (void)clearCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041e60
- (void)advertisementCacheSimulation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041d68
- (void)advertisementsForSearchCriteria:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041cdc
- (void)markAdvertisementsProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041530
- (void)saveAdvertisements:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041310
- (void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100040ca4
- (void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040b3c
- (void)markFilesProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004060c
- (void)saveBeaconPayloads:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000404c0

@end

