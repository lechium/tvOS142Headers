//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CCDError : NSObject
{
}

+ (id)_cloudConfigErrorResponses;	// IMP=0x000000010000ddd8
+ (id)cloudConfigErrorInResponse:(id)arg1;	// IMP=0x000000010000dd50
+ (id)_errorStringForResponse:(id)arg1;	// IMP=0x000000010000dc08
+ (id)nonceExpiredError;	// IMP=0x000000010000db3c
+ (id)deviceNotEnrolledError;	// IMP=0x000000010000da70
+ (id)deviceAlreadyEnrolledError;	// IMP=0x000000010000d9a4
+ (id)deviceNotFoundError;	// IMP=0x000000010000d8d8
+ (id)profileNotFoundError;	// IMP=0x000000010000d80c
+ (id)profileNotActiveError;	// IMP=0x000000010000d740
+ (id)invalidProfileError;	// IMP=0x000000010000d674
+ (id)invalidSignatureError;	// IMP=0x000000010000d5a8
+ (id)serverTrustError;	// IMP=0x000000010000d4dc
+ (id)serviceBusyError;	// IMP=0x000000010000d410
+ (id)teslaServiceDownError;	// IMP=0x000000010000d344
+ (id)invalidDeviceError;	// IMP=0x000000010000d278
+ (id)maxRetriesExceededError;	// IMP=0x000000010000d1ac
+ (id)badFormatError;	// IMP=0x000000010000d0e0
+ (id)internalErrorWithCode:(long long)arg1;	// IMP=0x000000010000d010
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 errorType:(id)arg4;	// IMP=0x000000010000ce60

@end

