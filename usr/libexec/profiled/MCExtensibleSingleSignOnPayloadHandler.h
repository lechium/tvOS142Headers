//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCExtensibleSingleSignOnPayloadHandler : MCNewPayloadHandler
{
}

+ (_Bool)_writeConfiguration:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010007db60
+ (id)_configurationForPayloads:(id)arg1 includingPayloads:(id)arg2 excludingPayloads:(id)arg3 error:(id *)arg4;	// IMP=0x000000010007cad0
+ (_Bool)rebuildConfigurationIncludingPayloads:(id)arg1 excludingPayloads:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007c93c
- (void)unsetAside;	// IMP=0x000000010007c7d4
- (void)setAside;	// IMP=0x000000010007c638
- (void)remove;	// IMP=0x000000010007c368
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010007c18c

@end
