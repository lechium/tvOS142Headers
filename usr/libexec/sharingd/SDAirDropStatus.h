//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SDAirDropStatusDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropStatus : NSObject
{
    _Bool _started;	// 8 = 0x8
    NSMutableDictionary *_properties;	// 16 = 0x10
    id <SDAirDropStatusDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100086800
@property __weak id <SDAirDropStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00000001000867cc
- (void)start;	// IMP=0x00000001000867ac
- (void)somethingChanged:(id)arg1;	// IMP=0x00000001000867a0
- (void)setStatusAndNotify;	// IMP=0x00000001000866d4
- (void)dealloc;	// IMP=0x0000000100086688
- (id)init;	// IMP=0x0000000100086620

@end

