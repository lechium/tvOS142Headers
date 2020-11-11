//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPApplicationStateObserver-Protocol.h"
#import "RPSystemStateObserver-Protocol.h"

@class FBSDisplayLayoutMonitor, NSDate, NSNumber, NSString, RPApplicationStateMonitor, RPReportingAgent;
@protocol RPClientProtocol, RPSessionDelegate;

@interface RPSession : NSObject <RPSystemStateObserver, RPApplicationStateObserver>
{
    int _callingPID;	// 8 = 0x8
    id <RPClientProtocol> _clientProxy;	// 16 = 0x10
    id <RPSessionDelegate> _delegate;	// 24 = 0x18
    CDStruct_1b6d18a9 _lastSampleTimestamp;	// 32 = 0x20
    CDStruct_1b6d18a9 _sampleTimeOffset;	// 56 = 0x38
    _Bool _sessionIsResuming;	// 80 = 0x50
    int _sessionType;	// 84 = 0x54
    _Bool _isExempt;	// 88 = 0x58
    NSDate *_lastExemptTime;	// 96 = 0x60
    struct __CFUserNotification *_userNotificationStopRecording;	// 104 = 0x68
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 112 = 0x70
    RPApplicationStateMonitor *_applicationStateMonitor;	// 120 = 0x78
    long long _levelOneElementCount;	// 128 = 0x80
    int _lockToResetToken;	// 136 = 0x88
    double _privacyAcknowledgementAlertTimeoutMinutes;	// 144 = 0x90
    _Bool _didAcceptMicrophonePermission;	// 152 = 0x98
    _Bool _didAcceptCameraPermission;	// 153 = 0x99
    _Bool _deviceLocked;	// 154 = 0x9a
    _Bool _microphoneEnabled;	// 155 = 0x9b
    _Bool _cameraEnabled;	// 156 = 0x9c
    int _sessionState;	// 160 = 0xa0
    NSString *_bundleID;	// 168 = 0xa8
    NSNumber *_contextID;	// 176 = 0xb0
    RPReportingAgent *_reportingAgent;	// 184 = 0xb8
    struct CGSize _windowSize;	// 192 = 0xc0
}

+ (unsigned long long)getRecordedFileSizeForMovieWriter:(id)arg1;	// IMP=0x0000000100011064
- (void).cxx_destruct;	// IMP=0x0000000100011698
@property(retain, nonatomic) RPReportingAgent *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSNumber *contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) int sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) _Bool cameraEnabled; // @synthesize cameraEnabled=_cameraEnabled;
@property(nonatomic) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
- (void)handleResumeCaptureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001160c
- (void)handleResumeContextIDFailure;	// IMP=0x0000000100011608
- (void)handleTimerDidUpdate:(id)arg1;	// IMP=0x0000000100011604
- (void)handleSystemAlertStop;	// IMP=0x0000000100011600
- (void)handleFrontmostApplicationDidChange:(id)arg1;	// IMP=0x00000001000115fc
- (void)handleClientApplicationDidEnterForeground;	// IMP=0x00000001000115f8
- (void)handleClientApplicationDidEnterBackground;	// IMP=0x00000001000115f4
- (void)handleDeviceRestrictionWarning;	// IMP=0x00000001000115f0
- (void)handleDeviceLockedWarning;	// IMP=0x00000001000115ec
- (void)handleIncomingCallWarning;	// IMP=0x00000001000115e8
- (void)handleDisplayWarning;	// IMP=0x00000001000115e4
- (void)handleMemoryWarning;	// IMP=0x00000001000115e0
- (void)clientApplicationDidEnterForeground;	// IMP=0x00000001000114d0
- (void)clientApplicationDidEnterBackground;	// IMP=0x00000001000113b0
- (void)frontmostApplicationDidChange:(id)arg1;	// IMP=0x0000000100011280
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;	// IMP=0x000000010001127c
- (_Bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010001125c
- (void)timerDidUpdate:(id)arg1;	// IMP=0x0000000100011250
- (void)checkAndPlaySystemSessionSoundForRecordingOn:(_Bool)arg1;	// IMP=0x0000000100011004
- (_Bool)showAlertRecordingCaptureSessionWithError:(id)arg1;	// IMP=0x0000000100010fe4
- (void)sessionReportCameraUsage:(long long)arg1;	// IMP=0x0000000100010fe0
- (id)serviceNameForReporting;	// IMP=0x0000000100010f74
- (_Bool)showStopSystemSessionAlert;	// IMP=0x0000000100010f6c
- (_Bool)shouldBypassAlertForTest;	// IMP=0x0000000100010f18
- (id)getNotificationBodyTextForSessionType:(int)arg1 cameraEnabled:(_Bool)arg2 microphoneEnabled:(_Bool)arg3;	// IMP=0x0000000100010d20
- (id)getNotificationTitleTextForSessionType:(int)arg1 bundleID:(id)arg2;	// IMP=0x0000000100010bcc
- (id)showAcknowledgementAlertWithMicrophone:(_Bool)arg1 camera:(_Bool)arg2;	// IMP=0x0000000100010158
- (_Bool)clientHasTestEntitlement;	// IMP=0x000000010000ffb4
- (_Bool)shouldSupressAlert;	// IMP=0x000000010000fdc4
- (_Bool)getAcknowledgementAlertResultsWithMicrophone:(_Bool)arg1 cameraEnabled:(_Bool)arg2;	// IMP=0x000000010000fa60
- (id)checkApplicationForegroundRequirement;	// IMP=0x000000010000f95c
- (id)checkSufficientFreeSpace;	// IMP=0x000000010000f830
- (id)getCallingConnectionBundleID;	// IMP=0x000000010000f790
- (_Bool)checkContextIDsMatch:(id)arg1;	// IMP=0x000000010000f590
- (id)checkContextIDRequirement;	// IMP=0x000000010000f448
- (id)checkDeviceLockedRequirement;	// IMP=0x000000010000f358
- (id)checkCaptureRequirementsWithMicrophoneEnabled:(_Bool)arg1 cameraEnabled:(_Bool)arg2;	// IMP=0x000000010000f160
- (void)handleUpdateDisplayLayout:(id)arg1;	// IMP=0x000000010000ef5c
- (void)setUpFrontBoardServices;	// IMP=0x000000010000ef58
- (void)checkAndPlaySystemSessionSound:(_Bool)arg1;	// IMP=0x000000010000eed4
- (struct CGAffineTransform)CGAffineTransformFromFigTransformFlags:(unsigned long long)arg1;	// IMP=0x000000010000ec48
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2 movieWriter:(id)arg3;	// IMP=0x000000010000ead4
- (void)updatePauseOffsetForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withSampleType:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e970
- (void)updatePauseOffsetFromVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010000e898
- (void)resumeSessionWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e500
- (void)pauseSession;	// IMP=0x000000010000e3ec
- (void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x000000010000e218
- (void)notifyClientSessionDidStopWithError:(long long)arg1 movieURL:(id)arg2 showAlert:(_Bool)arg3;	// IMP=0x000000010000e15c
- (void)updateClientProxy:(id)arg1 callingPID:(int)arg2 bundleID:(id)arg3;	// IMP=0x000000010000df1c
- (void)startAcknowledgementAlertTimer;	// IMP=0x000000010000dd8c
- (void)checkForAcknowledgementAlertTimeout;	// IMP=0x000000010000dba0
- (void)reportSummaryEvent:(long long)arg1 recordedFileSize:(long long)arg2;	// IMP=0x000000010000da90
- (void)reportSessionEndReason:(id)arg1;	// IMP=0x000000010000da0c
- (void)removeObserversForSession;	// IMP=0x000000010000d7dc
- (void)addObserversForSession;	// IMP=0x000000010000d6dc
- (void)startWithContextID:(id)arg1 windowSize:(struct CGSize)arg2;	// IMP=0x000000010000d508
- (void)dealloc;	// IMP=0x000000010000d3ec
- (void)invalidate;	// IMP=0x000000010000d2bc
- (id)initWithClientProxy:(id)arg1 sessionType:(int)arg2 callingPID:(int)arg3 bundleID:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010000cf78

@end
