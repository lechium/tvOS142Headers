/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureExportedInterface.h>

@protocol OS_dispatch_queue, PGPictureInPictureProxyDelegate, PGPictureInPictureViewController;
@class NSString, NSArray, PGPlaybackState, PGRunLoopObserver, NSXPCConnection, NSObject, PGHostedWindow, UIViewController;

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface> {

	CGSize _preferredContentSize;
	CGRect _initialLayerFrame;
	NSString* _sceneSessionPersistentIdentifier;
	BOOL _isPictureInPicturePossible;
	BOOL _isPictureInPictureActive;
	BOOL _isPictureInPictureSuspended;
	BOOL _pictureInPictureShouldStartWhenEnteringBackground;
	BOOL _pictureInPictureWasStartedWhenEnteringBackground;
	BOOL _shouldCancelActivePictureInPictureOnStart;
	BOOL _shouldPullCancellationPolicyOnStart;
	BOOL _isDeactivatingPictureInPicture;
	id _windowSceneActivationStateObserver;
	double _playbackProgress;
	double _playbackRate;
	NSArray* _loadedTimeRanges;
	PGPlaybackState* _playbackState;
	PGPlaybackState* _playbackStateAccordingToRemoteObject;
	PGRunLoopObserver* _runLoopObserver;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	PGHostedWindow* _hostedWindow;
	UIViewController* _rootViewController;
	BOOL _isStartingStoppingOrCancellingPictureInPicture;
	BOOL _isHostedWindowSizeChangeDuringPinchGesture;
	unsigned long long _resourcesUsageReductionReasons;
	BOOL _isInterrupted;
	id<PGPictureInPictureProxyDelegate> _delegate;
	SCD_Struct_PG9 _delegateRespondsTo;
	BOOL _pictureInPictureStashedOrUnderLock;
	BOOL _stashed;
	long long _controlsStyle;
	UIViewController*<PGPictureInPictureViewController> _viewController;
	/*^block*/id __pipStopUserInterfaceRestoreContinuationBlock;
	/*^block*/id __pipStopFinalStageCompletionHandler;

}

@property (assign,getter=isPictureInPictureStashed,nonatomic) BOOL stashed;                                                      //@synthesize stashed=_stashed - In the implementation block
@property (nonatomic,copy) id _pipStopUserInterfaceRestoreContinuationBlock;                                                     //@synthesize _pipStopUserInterfaceRestoreContinuationBlock=__pipStopUserInterfaceRestoreContinuationBlock - In the implementation block
@property (nonatomic,copy) id _pipStopFinalStageCompletionHandler;                                                               //@synthesize _pipStopFinalStageCompletionHandler=__pipStopFinalStageCompletionHandler - In the implementation block
@property (assign,nonatomic) long long controlsStyle;                                                                            //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (nonatomic,readonly) UIViewController*<PGPictureInPictureViewController> viewController;                               //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<PGPictureInPictureProxyDelegate> delegate; 
@property (getter=isPictureInPicturePossible,nonatomic,readonly) BOOL pictureInPicturePossible; 
@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive; 
@property (getter=isPictureInPictureSuspended,nonatomic,readonly) BOOL pictureInPictureSuspended; 
@property (getter=isPictureInPictureInterrupted,nonatomic,readonly) BOOL pictureInPictureInterrupted; 
@property (assign,nonatomic) BOOL pictureInPictureShouldStartWhenEnteringBackground; 
@property (nonatomic,readonly) BOOL pictureInPictureWasStartedWhenEnteringBackground; 
@property (nonatomic,readonly) PGPlaybackState * playbackState; 
@property (getter=isPictureInPictureStashedOrUnderLock,nonatomic,readonly) BOOL pictureInPictureStashedOrUnderLock;              //@synthesize pictureInPictureStashedOrUnderLock=_pictureInPictureStashedOrUnderLock - In the implementation block
@property (nonatomic,readonly) unsigned long long resourcesUsageReductionReasons;                                                //@synthesize resourcesUsageReductionReasons=_resourcesUsageReductionReasons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPictureInPictureActive;
+(BOOL)isPictureInPictureSupported;
+(void)_updatePictureInPictureActive:(BOOL)arg1 ;
+(id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<PGPictureInPictureProxyDelegate>)delegate;
-(void)setDelegate:(id<PGPictureInPictureProxyDelegate>)arg1 ;
-(id)loadedTimeRanges;
-(void)setLoadedTimeRanges:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)playbackRate;
-(UIViewController*<PGPictureInPictureViewController>)viewController;
-(PGPlaybackState *)playbackState;
-(double)playbackProgress;
-(BOOL)isPictureInPictureActive;
-(oneway void)handleCommand:(id)arg1 ;
-(void)rotateContentContainer:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)updatePictureInPicturePossible:(BOOL)arg1 ;
-(oneway void)pictureInPictureCancelled;
-(oneway void)updateHostedWindowSize:(CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4 ;
-(oneway void)hostedWindowSizeChangeBegan;
-(oneway void)hostedWindowSizeChangeEnded;
-(oneway void)actionButtonTapped;
-(oneway void)setStashedOrUnderLock:(BOOL)arg1 ;
-(oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1 ;
-(BOOL)isPictureInPicturePossible;
-(void)setStashed:(BOOL)arg1 ;
-(long long)controlsStyle;
-(BOOL)isCameraActive;
-(void)setCameraActive:(BOOL)arg1 ;
-(BOOL)canSwitchCamera;
-(void)setCanSwitchCamera:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(id)initWithControlsStyle:(long long)arg1 viewController:(id)arg2 ;
-(void)_updatePlaybackStateContentTypeIfNeeded;
-(void)_beginDeactivatingPictureInPicture;
-(void)_endDeactivatingPictureInPictureIfNeededWithAnimationType:(long long)arg1 stopReason:(long long)arg2 ;
-(void)_stopObservingWindowSceneActivationState;
-(void)_updateFaceTimePlaybackStateUsingBlock:(/*^block*/id)arg1 ;
-(void)_updateAutoPIPSettingsAndNotifyRemoteObjectIfNeeded;
-(id)_expectedScene;
-(CGRect)_viewFrameForTransitionAnimationAssumeApplicationActive:(BOOL)arg1 ;
-(void)_addWindowSceneActivationStateObserverIfNeeded:(id)arg1 ;
-(id)_sceneSessionPersistentIdentifierForTransitionAnimationAssumeApplicationActive:(BOOL)arg1 ;
-(void)_startPictureInPictureAnimated:(BOOL)arg1 enteringBackground:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_stopPictureInPictureAnimated:(BOOL)arg1 restoreUserInterface:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updatePlaybackStateUsingBlock:(/*^block*/id)arg1 ;
-(void)setControlsStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_setMaybeNeedsUpdatePlaybackState;
-(void)__coordinateStartAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)__updateCancellationPolicyWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)__didStartWithAnimationType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__actuallyStartWithAnimationType:(long long)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)__setupStartWithAnimationType:(long long)arg1 initialLayerFrame:(CGRect)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(long long)_interfaceOrientationForTransitionAnimationAssumeApplicationActive:(BOOL)arg1 ;
-(void)_resetPlaybackStateAccordingToRemoteObject;
-(id)_generatePlaybackStateDiffAndMarkAsSent;
-(void)__actuallyStopAnimated:(BOOL)arg1 reason:(long long)arg2 finalLayerFrame:(CGRect)arg3 finalInterfaceOrientation:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)__restoreUserInterfaceAnimated:(BOOL)arg1 reason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__setupStopAnimated:(BOOL)arg1 needsApplicationActivation:(BOOL)arg2 waitForApplicationActivation:(BOOL)arg3 successHandler:(/*^block*/id)arg4 failureHandler:(/*^block*/id)arg5 ;
-(BOOL)_isViewControllerWindowSceneActive;
-(void)__actuallyStopAnimated:(BOOL)arg1 reason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__setupStopAnimated:(BOOL)arg1 needsApplicationActivation:(BOOL)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)__waitForApplicationActivationWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(id)_sourceScene;
-(void)_beginDeactivatingPictureInPictureWithAnimationType:(long long)arg1 stopReason:(long long)arg2 ;
-(void)_endDeactivatingPictureInPictureIfNeededWithAnimationType:(long long)arg1 stopReason:(long long)arg2 cleanupHandlerOrNil:(/*^block*/id)arg3 ;
-(BOOL)_setStashedOrUnderLockIfNeeded:(BOOL)arg1 ;
-(void)_setResourcesUsageReductionReasons:(unsigned long long)arg1 ;
-(void)_legacyPictureInPictureInterruptionEnded;
-(void)__cleanupWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_executeDelegateCallbackBlock:(/*^block*/id)arg1 assumeApplicationActive:(BOOL)arg2 ;
-(void)_updateAutoPIPSettingsAndNotifyRemoteObject;
-(void)viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
-(void)windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
-(void)_updatePlaybackStateIfNeeded;
-(void)set_pipStopUserInterfaceRestoreContinuationBlock:(id)arg1 ;
-(void)_twoStageStopForPictureInPictureRestoreWithContinueAfterUserInterfaceRestoreBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)set_pipStopFinalStageCompletionHandler:(id)arg1 ;
-(void)_notifyActionButtonTapped;
-(void)_legacyPictureInPictureInterruptionBegan;
-(void)skipForwardButtonTappedWithTimeInterval:(double)arg1 ;
-(BOOL)isPictureInPictureSuspended;
-(BOOL)isPictureInPictureInterrupted;
-(BOOL)pictureInPictureShouldStartWhenEnteringBackground;
-(void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 ;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(void)preferredContentSizeDidChangeForViewController;
-(void)startPictureInPicture;
-(void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2 ;
-(void)setControlsStyle:(long long)arg1 ;
-(BOOL)isPictureInPictureStashedOrUnderLock;
-(unsigned long long)resourcesUsageReductionReasons;
-(BOOL)isPictureInPictureStashed;
-(id)_pipStopUserInterfaceRestoreContinuationBlock;
-(id)_pipStopFinalStageCompletionHandler;
@end

