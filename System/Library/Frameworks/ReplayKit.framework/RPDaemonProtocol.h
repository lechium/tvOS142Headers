/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RPDaemonProtocol <NSObject>
@optional
-(oneway void)stopInAppRecordingWithUrl:(id)arg1 extensionToken:(id)arg2 handler:(/*^block*/id)arg3;
-(oneway void)saveVideo:(id)arg1 extensionToken:(id)arg2 handler:(/*^block*/id)arg3;

@required
-(oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5;
-(oneway void)stopInAppRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)discardInAppRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)pauseInAppRecording;
-(oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5;
-(oneway void)stopInAppCaptureWithHandler:(/*^block*/id)arg1;
-(oneway void)pauseInAppCapture;
-(oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 listenerEndpoint:(id)arg5 withHandler:(/*^block*/id)arg6;
-(oneway void)stopInAppBroadcastWithHandler:(/*^block*/id)arg1;
-(oneway void)pauseInAppBroadcast;
-(oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setBroadcastURL:(id)arg1;
-(oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5;
-(oneway void)stopSystemRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)stopSystemRecordingWithURLHandler:(/*^block*/id)arg1;
-(oneway void)startClipBufferingWithMicrophoneEnabled:(BOOL)arg1 windowSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3;
-(oneway void)stopClipBufferingWithHandler:(/*^block*/id)arg1;
-(oneway void)generateClipWithSeconds:(double)arg1 handler:(/*^block*/id)arg2;
-(oneway void)saveVideoToCameraRoll:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)saveVideo:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
-(oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(/*^block*/id)arg5;
-(oneway void)getSystemBroadcastExtensionInfo:(/*^block*/id)arg1;
-(oneway void)macApplicationDidResignActive;
-(oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(BOOL)arg2;
-(oneway void)stopCurrentActiveSessionWithHandler:(/*^block*/id)arg1;
-(oneway void)stopAllActiveClients;

@end

