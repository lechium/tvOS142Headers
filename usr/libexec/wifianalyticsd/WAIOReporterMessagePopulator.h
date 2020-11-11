//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WAIOReporterPersistenceDelegate, WAIOReporterPopulatorMessageDelegate;

@interface WAIOReporterMessagePopulator : NSObject <NSSecureCoding>
{
    _Bool _ioReportersCacheNeedsUpdating;	// 8 = 0x8
    _Bool _interfaceNameCacheNeedsUpdating;	// 9 = 0x9
    id <WAIOReporterPopulatorMessageDelegate> _messageDelegate;	// 16 = 0x10
    id <WAIOReporterPersistenceDelegate> _persistenceDelegate;	// 24 = 0x18
    NSMutableDictionary *_cachedAvailabilityStatusPerIORPopulatable;	// 32 = 0x20
    NSMutableDictionary *_cachedIOPopAvailableChannels;	// 40 = 0x28
    NSMutableDictionary *_cachedChannelsCountPerIORPopulatable;	// 48 = 0x30
    NSString *_cachedInterfaceName;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100017f28
+ (id)getInterfaceNameTempFile;	// IMP=0x0000000100017acc
+ (id)getIORPopAvailabeIOReportersTempFile;	// IMP=0x0000000100017a60
- (void).cxx_destruct;	// IMP=0x0000000100018a3c
@property(retain, nonatomic) NSString *cachedInterfaceName; // @synthesize cachedInterfaceName=_cachedInterfaceName;
@property _Bool interfaceNameCacheNeedsUpdating; // @synthesize interfaceNameCacheNeedsUpdating=_interfaceNameCacheNeedsUpdating;
@property _Bool ioReportersCacheNeedsUpdating; // @synthesize ioReportersCacheNeedsUpdating=_ioReportersCacheNeedsUpdating;
@property(retain, nonatomic) NSMutableDictionary *cachedChannelsCountPerIORPopulatable; // @synthesize cachedChannelsCountPerIORPopulatable=_cachedChannelsCountPerIORPopulatable;
@property(retain, nonatomic) NSMutableDictionary *cachedIOPopAvailableChannels; // @synthesize cachedIOPopAvailableChannels=_cachedIOPopAvailableChannels;
@property(retain, nonatomic) NSMutableDictionary *cachedAvailabilityStatusPerIORPopulatable; // @synthesize cachedAvailabilityStatusPerIORPopulatable=_cachedAvailabilityStatusPerIORPopulatable;
@property(nonatomic) __weak id <WAIOReporterPersistenceDelegate> persistenceDelegate; // @synthesize persistenceDelegate=_persistenceDelegate;
@property(nonatomic) __weak id <WAIOReporterPopulatorMessageDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
- (void)persistCachedMessage;	// IMP=0x000000010001828c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001804c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100017f30
- (void)_clearIOReporterCache;	// IMP=0x0000000100017ddc
- (void)_removePersistenceFile;	// IMP=0x0000000100017b44
- (id)getInfraInterfaceName;	// IMP=0x0000000100017b38
- (void)_prepopulateMessage:(id)arg1 forProcess:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4 isResubscribe:(_Bool)arg5;	// IMP=0x0000000100014dbc
- (void)prepopulateMessage:(id)arg1 forProcess:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100014d3c
- (_Bool)doesMessageNeedPrepopulation:(id)arg1;	// IMP=0x0000000100014cf8
- (id)determineChannelsPerIORPopulatable;	// IMP=0x0000000100013144
- (id)_getDriverServiceDictionary;	// IMP=0x0000000100013128
- (id)init;	// IMP=0x0000000100013070

@end
