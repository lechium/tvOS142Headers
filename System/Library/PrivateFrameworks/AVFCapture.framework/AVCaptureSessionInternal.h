/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSString, FigCaptureSessionConfiguration, NSMutableArray, NSHashTable, AVCaptureSessionConfiguration, NSError, AVRunLoopCondition;

@interface AVCaptureSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	int beginConfigRefCount;
	FigCaptureSessionConfiguration* sessionConfig;
	OpaqueFigCaptureSessionRef figCaptureSession;
	BOOL figCaptureSessionRunning;
	BOOL figCaptureSessionStarted;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSHashTable* videoPreviewLayers;
	NSMutableArray* connections;
	NSMutableArray* committedAVCaptureSessionConfigurations;
	AVCaptureSessionConfiguration* liveAVCaptureSessionConfiguration;
	NSError* stopError;
	BOOL running;
	BOOL interrupted;
	BOOL usesApplicationAudioSession;
	BOOL automaticallyConfiguresApplicationAudioSession;
	BOOL automaticallyConfiguresCaptureDeviceForWideColor;
	AVRunLoopCondition* runLoopCondition;
	BOOL waitingForFigCaptureSessionToStart;
	BOOL waitingForFigCaptureSessionToStop;
	BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
	OpaqueCMClockRef masterClock;
	BOOL notifiesOnMainThread;
	NSMutableArray* devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
	BOOL authorizedToUseCameraInMultipleForegroundAppLayout;

}
@end

