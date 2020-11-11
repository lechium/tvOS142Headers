//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBSMediaRemoteSiriContext, RPSiriAudioSession;
@protocol OS_dispatch_queue, PBSMediaRemoteServiceInterface, RPMessageable;

@interface RPSiriDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    RPSiriAudioSession *_siriAudioSession;	// 16 = 0x10
    PBSMediaRemoteSiriContext *_siriContext;	// 24 = 0x18
    id <PBSMediaRemoteServiceInterface> _siriProxy;	// 32 = 0x20
    _Bool _siriStarted;	// 40 = 0x28
    id <RPMessageable> _messenger;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010004ff6c
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)_handleSiriStop:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fcfc
- (void)_handleSiriStart:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f718
- (void)_handleSiriAudio:(id)arg1;	// IMP=0x000000010004f680
- (void)invalidate;	// IMP=0x000000010004f590
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x000000010004f1ec
- (id)init;	// IMP=0x000000010004f184

@end

