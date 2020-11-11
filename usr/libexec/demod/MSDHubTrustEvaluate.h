//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDHubTrustEvaluate : NSObject
{
    NSString *_hubCertificateIdentifier;	// 8 = 0x8
}

+ (id)getTrustObject;	// IMP=0x000000010000ba70
- (void).cxx_destruct;	// IMP=0x000000010000ce24
@property(retain) NSString *hubCertificateIdentifier; // @synthesize hubCertificateIdentifier=_hubCertificateIdentifier;
- (_Bool)isHubCertificatePinnedTo:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x000000010000cd84
- (_Bool)saveHubCertificateIdentifer:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x000000010000ccd8
- (id)identifierFor:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x000000010000c9a0
- (id)hashForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000010000c858
- (_Bool)trustServer:(struct __SecTrust *)arg1 withRootCA:(struct __SecCertificate *)arg2 withHostName:(id)arg3;	// IMP=0x000000010000c55c
- (_Bool)trustServerWithAxinoePKI:(struct __SecTrust *)arg1;	// IMP=0x000000010000c390
- (_Bool)trustServerWithApplePKI:(struct __SecTrust *)arg1;	// IMP=0x000000010000c0e0
- (_Bool)trustDAServer:(struct __SecTrust *)arg1;	// IMP=0x000000010000bdf8
- (_Bool)trustServer:(struct __SecTrust *)arg1 forRequestType:(_Bool)arg2 typeOfCommand:(unsigned long long)arg3;	// IMP=0x000000010000ba8c

@end
