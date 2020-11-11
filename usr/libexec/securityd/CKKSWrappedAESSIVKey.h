//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSBaseAESSIVKey.h"

#import "NSSecureCoding-Protocol.h"

__attribute__((visibility("hidden")))
@interface CKKSWrappedAESSIVKey : CKKSBaseAESSIVKey <NSSecureCoding>
{
}

+ (id)zeroedKey;	// IMP=0x000000010017748c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100177484
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001773e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001773bc
- (id)base64WrappedKey;	// IMP=0x0000000100177364
- (id)wrappedData;	// IMP=0x0000000100177328
- (id)initWithData:(id)arg1;	// IMP=0x00000001001771f4
- (id)initWithBase64:(id)arg1;	// IMP=0x000000010017710c
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x0000000100177050
- (id)init;	// IMP=0x0000000100177010

@end

