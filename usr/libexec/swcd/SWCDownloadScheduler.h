//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SWCDatabase, SWCDownloader;

@interface SWCDownloadScheduler : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    SWCDownloader *_downloader;	// 16 = 0x10
    SWCDatabase *_database;	// 24 = 0x18
}

+ (id)new;	// IMP=0x0000000100016e68
- (void).cxx_destruct;	// IMP=0x0000000100016f2c
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly) SWCDatabase *database; // @synthesize database=_database;
@property(readonly) SWCDownloader *downloader; // @synthesize downloader=_downloader;
- (void)update;	// IMP=0x0000000100016ea4
- (id)init;	// IMP=0x0000000100016e74
- (id)initWithDownloader:(id)arg1 database:(id)arg2;	// IMP=0x0000000100016d9c
- (void)_performUpdatesWithTransaction:(id)arg1;	// IMP=0x0000000100017878
- (id)_updateableEntries;	// IMP=0x0000000100017518
- (void)_performUpdateWithActivity:(id)arg1;	// IMP=0x0000000100017170
- (void)_scheduleUpdateTimer;	// IMP=0x0000000100016fd4
- (id)_init;	// IMP=0x0000000100016f5c

@end
