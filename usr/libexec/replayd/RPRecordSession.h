//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPSession.h"

#import "RPCaptureManagerProtocol-Protocol.h"

@class NSURL, RPMovieWriter;

@interface RPRecordSession : RPSession <RPCaptureManagerProtocol>
{
    RPMovieWriter *_movieWriter;	// 88 = 0x58
    NSURL *_currentRecordingURL;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100039dd4
- (void)handleResumeContextIDFailure;	// IMP=0x0000000100039b8c
- (void)handleDeviceRestrictionWarning;	// IMP=0x0000000100039944
- (void)handleDeviceLockedWarning;	// IMP=0x0000000100039864
- (void)handleDisplayWarning;	// IMP=0x000000010003961c
- (void)handleClientApplicationDidEnterForeground;	// IMP=0x0000000100039504
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x0000000100039414
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039080
- (void)captureDidFailWithError:(id)arg1;	// IMP=0x0000000100038f3c
- (void)didCaptureSampleWithType:(int)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withTransformFlags:(unsigned long long)arg3;	// IMP=0x0000000100038db4
- (void)presentAcknowledgmentWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038898
- (id)dispatchCaptureQueue;	// IMP=0x0000000100038828
- (void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000386ac
- (void)pauseSession;	// IMP=0x0000000100038524
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003805c
- (void)startRecordingWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2 contextID:(id)arg3 windowSize:(struct CGSize)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100037db0
- (id)outputPath;	// IMP=0x0000000100037d18

@end
