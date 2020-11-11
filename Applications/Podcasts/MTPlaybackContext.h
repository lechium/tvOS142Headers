//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface MTPlaybackContext : NSObject <NSCopying>
{
    _Bool _interactive;	// 8 = 0x8
    _Bool _interruptEvent;	// 9 = 0x9
    unsigned long long _source;	// 16 = 0x10
    unsigned long long _presentationType;	// 24 = 0x18
    unsigned long long _upNextQueueIntent;	// 32 = 0x20
}

+ (id)contextWithReason:(unsigned long long)arg1;	// IMP=0x0000000100144b00
+ (id)defaultContext;	// IMP=0x0000000100144a98
@property(nonatomic) unsigned long long upNextQueueIntent; // @synthesize upNextQueueIntent=_upNextQueueIntent;
@property(nonatomic) unsigned long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) _Bool interruptEvent; // @synthesize interruptEvent=_interruptEvent;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100144b6c
- (_Bool)playbackIsUserRequested;	// IMP=0x0000000100144b48

@end

