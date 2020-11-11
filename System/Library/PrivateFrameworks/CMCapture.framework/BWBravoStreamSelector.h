/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BWFigVideoCaptureStream;

@interface BWBravoStreamSelector : NSObject {

	BWFigVideoCaptureStream* _wideStream;
	BWFigVideoCaptureStream* _teleStream;
	BWFigVideoCaptureStream* _superWideStream;
	float _teleMaxAEGain;
	float _teleAEGainHysteresisLag;
	int _teleToWideFocusDistance;
	int _wideToTeleFocusDistance;
	BOOL _usesLensMakersFocusDistance;
	int _teleMaxSubsequentFramesAtMaxGain;
	BWFigVideoCaptureStream* _currentMasterStream;
	BWFigVideoCaptureStream* _recommendedMasterStream;
	int _selectionBehavior;
	BWFigVideoCaptureStream* _slaveStreamBlockingFocusAndExposureStability;
	BOOL _allowSwitchesWithFineMovement;
	float _previousZoomFactor;
	long long _timeOfLastZoomFactorChange;
	BOOL _waitingForSlaveFocusAfterZoomChange;
	int _teleMaxGainReachedCounter;
	float _minFocusDistanceChangeForSceneChange;
	float _minLuxLevelChangeForSceneChange;
	BOOL _resetSceneChangeMonitoring;
	BOOL _sceneChangeDetected;
	int _initialLuxLevel;
	float _initialFocusDistance;
	BOOL _lockWhenExposureAndFocusAreStable;
	BWFigVideoCaptureStream* _lockedStream;

}

@property (getter=isLensMakersFocusDistanceRequired,nonatomic,readonly) BOOL lensMakersFocusDistanceRequired;              //@synthesize usesLensMakersFocusDistance=_usesLensMakersFocusDistance - In the implementation block
@property (assign,nonatomic) float teleMaxAEGain; 
@property (assign,nonatomic) int selectionBehavior; 
@property (nonatomic,readonly) BWFigVideoCaptureStream * slaveStreamBlockingFocusAndExposureStability;                     //@synthesize slaveStreamBlockingFocusAndExposureStability=_slaveStreamBlockingFocusAndExposureStability - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)unlock;
-(void)_updateSceneChangeMonitorWithFrameStatisticsByPortType:(id)arg1 fromMasterStream:(id)arg2 zoomFactor:(float)arg3 ;
-(id)_preferredMasterStreamForFrameStatisticsByPortType:(id)arg1 ;
-(BOOL)_selectionBehaviorAllowsSwitchOverTo:(id)arg1 forFrameStatisticsByPortType:(id)arg2 zoomFactor:(float)arg3 blockedByExposureFocusStability:(BOOL*)arg4 ;
-(void)_attemptLockWithFrameStatistics:(id)arg1 ;
-(BOOL)_exposureAllowsSwitchToRecommendedMasterStream:(id)arg1 frameStatisticsByPortType:(id)arg2 ;
-(BOOL)telephotoLimitsReachedForFrameStatistiscsByPortType:(id)arg1 ;
-(BOOL)_focusIsStable:(id)arg1 ;
-(BOOL)_exposureAndFocusStableForSwitchOverTo:(id)arg1 forFrameStatisticsByPortType:(id)arg2 ;
-(id)initWithStreamSelectionAttributes:(id)arg1 wideStream:(id)arg2 teleStream:(id)arg3 superWideStream:(id)arg4 ;
-(void)setTeleMaxAEGain:(float)arg1 ;
-(float)teleMaxAEGain;
-(void)resetWithZoomFactor:(float)arg1 currentMasterStream:(id)arg2 ;
-(void)setSelectionBehavior:(int)arg1 ;
-(int)selectionBehavior;
-(id)recommendMasterStreamUsingCurrentMasterStream:(id)arg1 frameStatisticsByPortType:(id)arg2 zoomFactor:(float)arg3 ;
-(void)lockWhenExposureAndFocusAreStable;
-(BOOL)isLensMakersFocusDistanceRequired;
-(BWFigVideoCaptureStream *)slaveStreamBlockingFocusAndExposureStability;
@end

