//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface MIHelperServiceClient : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010003f86c
- (void).cxx_destruct;	// IMP=0x000000010004082c
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)createSafeHarborWithIdentifier:(id)arg1 containerType:(long long)arg2 andMigrateDataFrom:(id)arg3 withError:(id *)arg4;	// IMP=0x0000000100040614
- (id)stageItemAtURL:(id)arg1 options:(id)arg2 containedSymlink:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000100040270
- (_Bool)wipeStagingRootWithError:(id *)arg1;	// IMP=0x00000001000400b8
- (_Bool)migrateMobileContentWithError:(id *)arg1;	// IMP=0x000000010003fee8
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003fe08
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003fd28
- (id)_sharedConnection;	// IMP=0x000000010003f9e4
- (void)dealloc;	// IMP=0x000000010003f998
- (void)_invalidateObject;	// IMP=0x000000010003f90c

@end
