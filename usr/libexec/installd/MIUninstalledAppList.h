//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MIUninstalledAppList : NSObject
{
    NSObject<OS_dispatch_queue> *_listQueue;	// 8 = 0x8
    NSMutableDictionary *_uninstalledList;	// 16 = 0x10
}

+ (id)sharedList;	// IMP=0x0000000100045e44
- (void).cxx_destruct;	// IMP=0x00000001000467a4
@property(retain, nonatomic) NSMutableDictionary *uninstalledList; // @synthesize uninstalledList=_uninstalledList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue; // @synthesize listQueue=_listQueue;
- (void)removeIdentifiers:(id)arg1;	// IMP=0x0000000100046678
- (void)addIdentifier:(id)arg1;	// IMP=0x0000000100046524
@property(readonly, nonatomic) NSDictionary *uninstalledDictionary;
- (void)preflightUninstalledMap;	// IMP=0x0000000100046270
- (void)_onQueue_setUninstalledList:(id)arg1;	// IMP=0x000000010004607c
- (id)_onQueue_uninstalledList;	// IMP=0x0000000100045f74
- (id)_mapPath;	// IMP=0x0000000100045ee4
- (id)init;	// IMP=0x0000000100045dbc

@end

