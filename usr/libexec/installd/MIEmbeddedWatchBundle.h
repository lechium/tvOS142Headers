//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MIExecutableBundle.h"

@interface MIEmbeddedWatchBundle : MIExecutableBundle
{
    _Bool _isPlaceholder;	// 8 = 0x8
}

- (id)pluginKitBundlesSkippingPlatformValidation:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x00000001000422d4
- (id)pluginKitBundlesWithError:(id *)arg1;	// IMP=0x0000000100042290
- (id)initWithParentBundle:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 isPlaceholder:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000001000421f4
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) _Bool isApplicableToKnownWatchOSVersion;
- (unsigned char)bundleType;	// IMP=0x00000001000421c4

@end

