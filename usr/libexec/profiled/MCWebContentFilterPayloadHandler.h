//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCWebContentFilterPayloadHandler : MCNewPayloadHandler
{
}

+ (id)internalError;	// IMP=0x0000000100082a00
- (id)_copyCertificateWithPayloadUUID:(id)arg1 intoKeychainAccessGroup:(id)arg2;	// IMP=0x0000000100083c44
- (void)remove;	// IMP=0x00000001000837dc
- (void)unsetAside;	// IMP=0x000000010008361c
- (void)setAside;	// IMP=0x000000010008345c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100082a98
- (void)_removeDependency;	// IMP=0x00000001000828e4
- (void)_installDependency;	// IMP=0x00000001000827c8

@end

