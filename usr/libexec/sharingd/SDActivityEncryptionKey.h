//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDActivityKey.h"

__attribute__((visibility("hidden")))
@interface SDActivityEncryptionKey : SDActivityKey
{
}

+ (id)newEncryptionKey;	// IMP=0x0000000100121214
- (unsigned char)getTagWhileEncryptingBytesInPlace:(unsigned char [10])arg1 counterValue:(unsigned char [2])arg2 forAdvertisementWithVersion:(unsigned char)arg3;	// IMP=0x0000000100121410
- (void)prepareForNewEncryptionRequest;	// IMP=0x00000001001213ac

@end

