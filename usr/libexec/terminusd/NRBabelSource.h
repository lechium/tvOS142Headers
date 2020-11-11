//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRBabelInstance, NRBabelPrefix;
@protocol OS_dispatch_source;

@interface NRBabelSource : NSObject
{
    unsigned short _seqno;	// 8 = 0x8
    unsigned short _metric;	// 10 = 0xa
    NRBabelPrefix *_bPrefix;	// 16 = 0x10
    unsigned long long _routerID;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_gcTimer;	// 32 = 0x20
    NRBabelInstance *_instance;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010007416c
@property(nonatomic) __weak NRBabelInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcTimer; // @synthesize gcTimer=_gcTimer;
@property(nonatomic) unsigned short metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned short seqno; // @synthesize seqno=_seqno;
@property(nonatomic) unsigned long long routerID; // @synthesize routerID=_routerID;
@property(retain, nonatomic) NRBabelPrefix *bPrefix; // @synthesize bPrefix=_bPrefix;
- (void)resetGCTimer;	// IMP=0x00000001000740ac
- (void)setupGCTimer;	// IMP=0x0000000100073f68
- (void)updateFeasabilityDistanceWithSeqno:(unsigned short)arg1 metric:(unsigned short)arg2;	// IMP=0x0000000100073ee8
- (_Bool)isNewDistanceUnfeasibleWithSeqno:(unsigned short)arg1 metric:(unsigned short)arg2;	// IMP=0x0000000100073dfc
- (_Bool)isDeepEqual:(id)arg1;	// IMP=0x0000000100073d58
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100073c84
- (id)descriptionWithoutMetric;	// IMP=0x0000000100073b88
- (id)description;	// IMP=0x0000000100073a88
- (_Bool)matchesPrefix:(id)arg1 routerID:(unsigned long long)arg2;	// IMP=0x0000000100073a5c
- (void)dealloc;	// IMP=0x0000000100073a10
- (id)initWithPrefix:(id)arg1 routerID:(unsigned long long)arg2 seqno:(unsigned short)arg3 metric:(unsigned short)arg4 instance:(id)arg5;	// IMP=0x000000010007382c

@end
