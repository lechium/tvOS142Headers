//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface MSDPricingUpdateController : NSObject
{
    _Bool _switchModeAfterCompletion;	// 8 = 0x8
    _Bool _needUpdate;	// 9 = 0x9
    _Bool _canceled;	// 10 = 0xa
    int _state;	// 12 = 0xc
    NSTimer *_heartBeatMonitor;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100031568
- (void).cxx_destruct;	// IMP=0x0000000100032130
@property _Bool canceled; // @synthesize canceled=_canceled;
@property int state; // @synthesize state=_state;
@property(retain, nonatomic) NSTimer *heartBeatMonitor; // @synthesize heartBeatMonitor=_heartBeatMonitor;
@property _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property _Bool switchModeAfterCompletion; // @synthesize switchModeAfterCompletion=_switchModeAfterCompletion;
- (void)pricingUpdateTimeOut:(id)arg1;	// IMP=0x0000000100031ef4
- (void)restartMonitor;	// IMP=0x0000000100031d4c
- (void)stopMonitor;	// IMP=0x0000000100031c6c
@property(readonly) _Bool completed;
- (void)operationCanceled;	// IMP=0x0000000100031b58
- (void)receivedOtherMessages:(id)arg1 fromRequest:(id)arg2;	// IMP=0x0000000100031ae0
- (void)receivedCompletionNotice:(id)arg1 fromRequest:(id)arg2;	// IMP=0x0000000100031960
- (void)receivedHeartBeat:(id)arg1 fromRequest:(id)arg2;	// IMP=0x00000001000317e8
- (void)receivedUpdateRequest:(id)arg1 fromRequest:(id)arg2;	// IMP=0x00000001000315d4

@end

