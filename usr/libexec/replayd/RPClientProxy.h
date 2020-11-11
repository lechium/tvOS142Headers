//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPClientProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface RPClientProxy : NSObject <RPClientProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001a708
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (oneway void)recordingTimerDidUpdate:(id)arg1;	// IMP=0x000000010001a5f4
- (oneway void)recordingDidPause;	// IMP=0x000000010001a50c
- (oneway void)shouldResumeSessionType:(id)arg1;	// IMP=0x000000010001a40c
- (oneway void)recordingLockInterrupted:(id)arg1;	// IMP=0x000000010001a30c
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;	// IMP=0x000000010001a184
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;	// IMP=0x0000000100019ff4
- (oneway void)updateBroadcastURL:(id)arg1;	// IMP=0x0000000100019ef4
- (oneway void)updateBroadcastServiceInfo:(id)arg1;	// IMP=0x0000000100019df4
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;	// IMP=0x0000000100019cd0
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;	// IMP=0x0000000100019bd0
- (void)dealloc;	// IMP=0x0000000100019b48
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100019ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
