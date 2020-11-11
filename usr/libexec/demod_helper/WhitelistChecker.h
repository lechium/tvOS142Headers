//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface WhitelistChecker : NSObject
{
    NSSet *_blackListedPaths;	// 8 = 0x8
    NSDictionary *_domains;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100020220
@property(retain, nonatomic) NSDictionary *domains; // @synthesize domains=_domains;
@property(retain, nonatomic) NSSet *blackListedPaths; // @synthesize blackListedPaths=_blackListedPaths;
- (_Bool)handleSystemContainerFiles:(id)arg1 withMetadata:(id)arg2;	// IMP=0x000000010001fef4
- (_Bool)shouldRestoreSystemContainer_WatchAndTV:(id)arg1 shared:(_Bool)arg2;	// IMP=0x000000010001fe50
- (_Bool)shouldRestoreSystemContainer_iOS:(id)arg1 shared:(_Bool)arg2;	// IMP=0x000000010001fc48
- (_Bool)file:(id)arg1 blacklisted:(id)arg2;	// IMP=0x000000010001fa2c
- (_Bool)file:(id)arg1 whitelisted:(id)arg2;	// IMP=0x000000010001f8b4
- (id)createFullPathList:(id)arg1 rootPath:(id)arg2 isAllowList:(_Bool)arg3;	// IMP=0x000000010001f600
- (_Bool)annotated:(id)arg1;	// IMP=0x000000010001f494
- (_Bool)checkFile_WatchAndTV:(id)arg1 withMetaData:(id)arg2;	// IMP=0x000000010001f308
- (_Bool)checkFile_iOS:(id)arg1 withMetaData:(id)arg2;	// IMP=0x000000010001ecec
- (_Bool)checkFile_macOS:(id)arg1 withMetaData:(id)arg2;	// IMP=0x000000010001ec78
- (_Bool)checkManifest:(id)arg1;	// IMP=0x000000010001e99c
- (_Bool)load;	// IMP=0x000000010001e664

@end

