//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKSandboxExtension : NSObject
{
    long long _handle;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100021124
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property long long handle; // @synthesize handle=_handle;
- (void)expel;	// IMP=0x0000000100021048
- (void)consume;	// IMP=0x0000000100020f30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100020e74
- (void)dealloc;	// IMP=0x0000000100020e28
- (id)initWithExtension:(id)arg1;	// IMP=0x0000000100020da8

@end

