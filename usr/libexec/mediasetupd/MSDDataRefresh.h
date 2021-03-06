//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDDataRefresh : NSObject
{
    _Bool _usingCloudKit;	// 8 = 0x8
    unsigned long long _refreshReason;	// 16 = 0x10
    double _delay;	// 24 = 0x18
}

+ (void)cacheLastRefreshforHomes:(id)arg1;	// IMP=0x0000000100029900
+ (void)clearLastRefreshTSForHomes;	// IMP=0x000000010002987c
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) _Bool usingCloudKit; // @synthesize usingCloudKit=_usingCloudKit;
@property(readonly, nonatomic) unsigned long long refreshReason; // @synthesize refreshReason=_refreshReason;
- (void)_handleCKShareError:(id)arg1 home:(id)arg2;	// IMP=0x000000010002c548
- (id)_containsFatalError:(id)arg1;	// IMP=0x000000010002c3e0
- (_Bool)_shouldPreformRefresh:(id)arg1;	// IMP=0x000000010002c148
- (void)_setupShareForParticipant:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002be24
- (void)_saveMediaServiceConfigInfo:(id)arg1 record:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002bb84
- (void)_updateDefaultService:(id)arg1 record:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b78c
- (void)_shareThisRecordIfApplicable:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b3a0
- (void)_createAndSaveAppleMusicRecord:(id)arg1 publicDBInfo:(id)arg2 home:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002acfc
- (_Bool)_shouldProceedWithExecution:(id)arg1;	// IMP=0x000000010002ac30
- (void)_checkDataSanity:(id)arg1 publicDBInfo:(id)arg2 home:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002a300
- (void)_initializeCKAndServiceInfoForHome:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029db0
- (void)refreshDataAfterDelay;	// IMP=0x0000000100029aa8
- (void)_refreshDatabases:(CDUnknownBlockType)arg1;	// IMP=0x00000001000291b4
- (void)_deleteRecordZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028f58
- (void)_deleteZombieRecordZonesIfAny:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027f58
- (void)_checkZoneAndDefaultRecordInEachHome:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027814
- (void)_performDataRefresh:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026d8c
- (void)performRefreshWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000269b0
- (id)initWithReason:(unsigned long long)arg1 withDelay:(double)arg2;	// IMP=0x0000000100026950
- (id)initWithReason:(unsigned long long)arg1 usingCloudKit:(_Bool)arg2;	// IMP=0x0000000100026900

@end

