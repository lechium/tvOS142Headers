//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString;

@interface PBSystemOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _animated;	// 16 = 0x10
    NSDictionary *_clientOptions;	// 24 = 0x18
    _Bool _clientInitiated;	// 32 = 0x20
}

+ (id)dismissalRequestForAllSessions;	// IMP=0x00000001001a974c
+ (id)dismissalRequestForSession:(id)arg1;	// IMP=0x00000001001a9674
- (void).cxx_destruct;	// IMP=0x00000001001a9a70
- (_Bool)_clientInitiated;	// IMP=0x00000001001a9a4c
@property(readonly, copy, nonatomic) NSDictionary *clientOptions;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a9988
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a995c
- (id)initWithRequest:(id)arg1;	// IMP=0x00000001001a97a8

@end

