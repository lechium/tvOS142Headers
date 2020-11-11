//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BTPBrowser : NSObject
{
    unsigned int _srcIfIndex;	// 8 = 0x8
    unsigned int _dstIfIndex;	// 12 = 0xc
    struct _DNSServiceRef_t *_sdRefBrowse;	// 16 = 0x10
    NSString *_bonjourType;	// 24 = 0x18
    NSMutableDictionary *_resolvers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000042d8
@property(retain, nonatomic) NSMutableDictionary *resolvers; // @synthesize resolvers=_resolvers;
@property(retain, nonatomic) NSString *bonjourType; // @synthesize bonjourType=_bonjourType;
@property(nonatomic) unsigned int dstIfIndex; // @synthesize dstIfIndex=_dstIfIndex;
@property(nonatomic) unsigned int srcIfIndex; // @synthesize srcIfIndex=_srcIfIndex;
@property(nonatomic) struct _DNSServiceRef_t *sdRefBrowse; // @synthesize sdRefBrowse=_sdRefBrowse;
- (void)handleReplyName:(id)arg1 type:(id)arg2 domain:(id)arg3 ifIndex:(unsigned int)arg4 add:(_Bool)arg5;	// IMP=0x000000010000400c
- (void)dealloc;	// IMP=0x0000000100003f88
- (void)stop;	// IMP=0x0000000100003e28
- (_Bool)start;	// IMP=0x0000000100003c90
- (id)initWithSrcIfIndex:(unsigned int)arg1 dstIfIndex:(unsigned int)arg2 bonjourType:(id)arg3;	// IMP=0x0000000100003b94

@end

