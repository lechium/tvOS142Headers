//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MICodeSigningInfo, MIExecutableBundle;

@interface MICodeSigningVerifier : NSObject
{
    _Bool _allowAdhocSigning;	// 8 = 0x8
    _Bool _logResourceVerificationErrors;	// 9 = 0x9
    _Bool _validateResources;	// 10 = 0xa
    _Bool _performOnlineAuthorization;	// 11 = 0xb
    _Bool _validateUsingDetachedSignature;	// 12 = 0xc
    _Bool _verifyTrustCachePresence;	// 13 = 0xd
    _Bool _skipProfileIDValidation;	// 14 = 0xe
    MICodeSigningInfo *_signingInfo;	// 16 = 0x10
    MIExecutableBundle *_bundle;	// 24 = 0x18
}

+ (_Bool)_validateStubSignature:(id)arg1 withSigningID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000583ec
+ (_Bool)_validateBundleExecutable:(id)arg1 againstStubAt:(id)arg2 trustedHashes:(id)arg3 sectionName:(id)arg4 signingIdentifier:(id)arg5 error:(id *)arg6;	// IMP=0x0000000100057ac0
+ (_Bool)validateWatchKitV2StubExecutableBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100057854
+ (_Bool)validateWatchKitV1StubExecutableBundle:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000575e8
+ (id)_validateSignatureAndCopyInfoForURL:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005606c
+ (id)codeSigningVerifierForBundle:(id)arg1;	// IMP=0x0000000100056018
- (void).cxx_destruct;	// IMP=0x0000000100058798
@property(readonly, nonatomic) MIExecutableBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) MICodeSigningInfo *signingInfo; // @synthesize signingInfo=_signingInfo;
@property(nonatomic) _Bool skipProfileIDValidation; // @synthesize skipProfileIDValidation=_skipProfileIDValidation;
@property(nonatomic) _Bool verifyTrustCachePresence; // @synthesize verifyTrustCachePresence=_verifyTrustCachePresence;
@property(nonatomic) _Bool validateUsingDetachedSignature; // @synthesize validateUsingDetachedSignature=_validateUsingDetachedSignature;
@property(nonatomic) _Bool performOnlineAuthorization; // @synthesize performOnlineAuthorization=_performOnlineAuthorization;
@property(nonatomic) _Bool validateResources; // @synthesize validateResources=_validateResources;
@property(nonatomic) _Bool logResourceVerificationErrors; // @synthesize logResourceVerificationErrors=_logResourceVerificationErrors;
@property(nonatomic) _Bool allowAdhocSigning; // @synthesize allowAdhocSigning=_allowAdhocSigning;
- (_Bool)performValidationWithError:(id *)arg1;	// IMP=0x0000000100056514
- (id)_loadSystemDetachedSignatureForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005637c
- (id)initWithBundle:(id)arg1;	// IMP=0x0000000100055f98

@end

