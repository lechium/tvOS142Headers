//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (MZAdditions)
+ (id)MZStringByMD5HashingString:(id)arg1;	// IMP=0x00000001000527f0
+ (id)MZStringFromDigestData:(id)arg1;	// IMP=0x000000010005270c
- (id)MZDataByDeflatingWithGZip;	// IMP=0x00000001000529a4
- (id)MZDataByInflatingWithGZip;	// IMP=0x0000000100052998
- (id)MZDataByDeflatingWithNoZipHeader;	// IMP=0x0000000100052988
- (id)MZDataByInflatingWithNoZipHeader;	// IMP=0x000000010005297c
- (id)_MZDataByDeflatingWithCompression:(unsigned long long)arg1;	// IMP=0x000000010005244c
- (id)_MZDataByInflating;	// IMP=0x00000001000522a8
@end

