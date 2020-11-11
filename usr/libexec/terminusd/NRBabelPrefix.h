//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRBabelPrefix : NSObject
{
    unsigned char _plen;	// 8 = 0x8
    struct in6_addr _prefixInner;	// 12 = 0xc
}

@property(nonatomic) unsigned char plen; // @synthesize plen=_plen;
@property(nonatomic) struct in6_addr prefixInner; // @synthesize prefixInner=_prefixInner;
- (unsigned char)writeToAE:(char *)arg1 plen:(char *)arg2 prefix:(char *)arg3;	// IMP=0x000000010006ddcc
- (void)writePrefix:(struct in6_addr *)arg1;	// IMP=0x000000010006ddc0
- (_Bool)isContainedInPrefix:(id)arg1;	// IMP=0x000000010006dd34
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010006dcc0
- (id)descriptionWithoutPlen;	// IMP=0x000000010006dbc0
- (id)description;	// IMP=0x000000010006da70
- (_Bool)matchesPrefix:(const struct in6_addr *)arg1 plen:(unsigned char)arg2;	// IMP=0x000000010006d984
- (id)initWithPrefix:(const struct in6_addr *)arg1 plen:(unsigned char)arg2;	// IMP=0x000000010006d7e4

@end

