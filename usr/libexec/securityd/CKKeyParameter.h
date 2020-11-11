//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOSAccount;

__attribute__((visibility("hidden")))
@interface CKKeyParameter : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001c55d8
@property(retain) SOSAccount *account; // @synthesize account;
- (_Bool)SOSTransportKeyParameterPublishCloudParameters:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c52ec
- (_Bool)SOSTransportKeyParameterKVSAppendKeyInterests:(id)arg1 ak:(struct __CFArray *)arg2 firstUnLock:(struct __CFArray *)arg3 unlocked:(struct __CFArray *)arg4 err:(struct __CFError **)arg5;	// IMP=0x00000001001c52c4
- (id)initWithAccount:(id)arg1;	// IMP=0x00000001001c5228
- (void)SOSTransportKeyParameterHandleNewAccount:(id)arg1 acct:(id)arg2;	// IMP=0x00000001001c5220
- (long long)SOSTransportKeyParameterGetTransportType:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c5218
- (id)SOSTransportKeyParameterGetAccount:(id)arg1;	// IMP=0x00000001001c5210
- (_Bool)SOSTransportKeyParameterHandleKeyParameterChanges:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError *)arg3;	// IMP=0x00000001001c4b74

@end
