//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString, NSURLRequest;

@interface RTCCachedURLRequest : NSObject <NSSecureCoding>
{
    NSDate *_dateToExpedite;	// 8 = 0x8
    NSURLRequest *_cachedRequest;	// 16 = 0x10
    NSString *_filePath;	// 24 = 0x18
    unsigned long long _nextOffset;	// 32 = 0x20
    _Bool _isRealtime;	// 40 = 0x28
    CDUnknownBlockType _eventCompletion;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000049cc
@property(copy, nonatomic) CDUnknownBlockType eventCompletion; // @synthesize eventCompletion=_eventCompletion;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSURLRequest *cachedRequest; // @synthesize cachedRequest=_cachedRequest;
@property(nonatomic) unsigned long long nextOffset; // @synthesize nextOffset=_nextOffset;
@property(readonly, nonatomic) _Bool isExpedited;
- (_Bool)isRealtime;	// IMP=0x0000000100004a6c
- (void)setIsRealtime:(_Bool)arg1;	// IMP=0x0000000100004a64
- (id)dateToExpedite;	// IMP=0x0000000100004a5c
- (void)setDateToExpedite:(id)arg1;	// IMP=0x0000000100004a20
- (id)description;	// IMP=0x00000001000049d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100004920
- (void)dealloc;	// IMP=0x0000000100004880
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100004744
- (id)initWithURLRequest:(id)arg1 expediteAfterInterval:(double)arg2 isRealtime:(_Bool)arg3;	// IMP=0x0000000100004654

@end

