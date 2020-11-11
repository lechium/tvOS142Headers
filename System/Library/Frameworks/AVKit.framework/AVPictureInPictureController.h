/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVPictureInPicturePlatformAdapterDelegate.h>
#import <AVKit/AVPictureInPictureControlsStyleAppearance.h>

@protocol AVPictureInPictureControllerDelegate, AVPictureInPictureContentSource, AVPictureInPicturePrerollDelegate;
@class AVPlayerLayer, AVPictureInPicturePlatformAdapter, AVObservationController, AVPlayerController, AVPictureInPictureControllerContentSource, AVPictureInPictureViewController, NSString;

@interface AVPictureInPictureController : NSObject <AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureControlsStyleAppearance> {

	BOOL _microphoneEnabled;
	BOOL _requiresLinearPlayback;
	BOOL _pictureInPicturePossible;
	BOOL _pictureInPictureActive;
	BOOL _pictureInPictureSuspended;
	BOOL _canStopPictureInPicture;
	BOOL _otherPictureInPictureActive;
	BOOL _wantsImmediateAssetInspection;
	BOOL _wasPlayingWhenPictureInPictureInterruptionBegan;
	BOOL _wantsResourceReduction;
	BOOL _retainsSourceDuringPictureInPicturePlayback;
	BOOL _allowsPictureInPicturePlayback;
	BOOL _allowsPictureInPictureFromInlineWhenEnteringBackground;
	BOOL _pictureInPictureWasStartedWhenEnteringBackground;
	BOOL _canStartAutomaticallyWhenEnteringBackground;
	long long _controlsStyle;
	AVPlayerLayer* _playerLayer;
	id<AVPictureInPictureControllerDelegate> _delegate;
	AVPictureInPicturePlatformAdapter* _platformAdapter;
	AVObservationController* _observationController;
	id<AVPictureInPictureContentSource> _sourceIfRetainedDuringPictureInPicturePlayback;
	id _playerControllerIsPlayingObservationToken;
	id<AVPictureInPictureContentSource> _source;
	AVPlayerController* _playerController;
	id<AVPictureInPicturePrerollDelegate> _prerollDelegate;
	AVPictureInPictureControllerContentSource* _contentSource;

}

@property (nonatomic,readonly) AVPictureInPicturePlatformAdapter * platformAdapter;                                           //@synthesize platformAdapter=_platformAdapter - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                               //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) id<AVPictureInPictureContentSource> sourceIfRetainedDuringPictureInPicturePlayback;              //@synthesize sourceIfRetainedDuringPictureInPicturePlayback=_sourceIfRetainedDuringPictureInPicturePlayback - In the implementation block
@property (nonatomic,retain) id playerControllerIsPlayingObservationToken;                                                    //@synthesize playerControllerIsPlayingObservationToken=_playerControllerIsPlayingObservationToken - In the implementation block
@property (assign,getter=isPictureInPicturePossible,nonatomic) BOOL pictureInPicturePossible;                                 //@synthesize pictureInPicturePossible=_pictureInPicturePossible - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) BOOL pictureInPictureActive;                                     //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,getter=isPictureInPictureSuspended,nonatomic) BOOL pictureInPictureSuspended;                               //@synthesize pictureInPictureSuspended=_pictureInPictureSuspended - In the implementation block
@property (assign,getter=isOtherPictureInPictureActive,nonatomic) BOOL otherPictureInPictureActive;                           //@synthesize otherPictureInPictureActive=_otherPictureInPictureActive - In the implementation block
@property (assign,setter=_setCanStopPictureInPicture:,nonatomic) BOOL canStopPictureInPicture;                                //@synthesize canStopPictureInPicture=_canStopPictureInPicture - In the implementation block
@property (assign,nonatomic) BOOL wantsImmediateAssetInspection;                                                              //@synthesize wantsImmediateAssetInspection=_wantsImmediateAssetInspection - In the implementation block
@property (assign,nonatomic) BOOL wasPlayingWhenPictureInPictureInterruptionBegan;                                            //@synthesize wasPlayingWhenPictureInPictureInterruptionBegan=_wasPlayingWhenPictureInPictureInterruptionBegan - In the implementation block
@property (nonatomic,__weak,readonly) id<AVPictureInPictureContentSource> source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) AVPictureInPictureViewController * pictureInPictureViewController; 
@property (nonatomic,readonly) BOOL wantsResourceReduction;                                                                   //@synthesize wantsResourceReduction=_wantsResourceReduction - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                                           //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL retainsSourceDuringPictureInPicturePlayback;                                                //@synthesize retainsSourceDuringPictureInPicturePlayback=_retainsSourceDuringPictureInPicturePlayback - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                             //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPictureFromInlineWhenEnteringBackground;                                     //@synthesize allowsPictureInPictureFromInlineWhenEnteringBackground=_allowsPictureInPictureFromInlineWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;                                           //@synthesize pictureInPictureWasStartedWhenEnteringBackground=_pictureInPictureWasStartedWhenEnteringBackground - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                               //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (assign,nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground;                                                //@synthesize canStartAutomaticallyWhenEnteringBackground=_canStartAutomaticallyWhenEnteringBackground - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPicturePrerollDelegate> prerollDelegate;                                    //@synthesize prerollDelegate=_prerollDelegate - In the implementation block
@property (nonatomic,retain) AVPictureInPictureControllerContentSource * contentSource;                                       //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * playerLayer;                                                                   //@synthesize playerLayer=_playerLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                                     //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long controlsStyle;                                                                         //@synthesize controlsStyle=_controlsStyle - In the implementation block
+(BOOL)isPictureInPictureSupported;
+(id)_imageNamed:(id)arg1 compatibileWithTraitCollection:(id)arg2 ;
+(id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg1 ;
+(id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg1 ;
+(id)pictureInPictureButtonStartImage;
+(id)pictureInPictureButtonStopImage;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<AVPictureInPictureControllerDelegate>)delegate;
-(void)setDelegate:(id<AVPictureInPictureControllerDelegate>)arg1 ;
-(id<AVPictureInPictureContentSource>)source;
-(id)initWithSource:(id)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(BOOL)isPictureInPictureActive;
-(void)stopPictureInPicture;
-(id)initWithPlayerLayer:(id)arg1 ;
-(AVPictureInPictureViewController *)pictureInPictureViewController;
-(BOOL)canStopPictureInPicture;
-(void)setPictureInPicturePossible:(BOOL)arg1 ;
-(BOOL)isPictureInPicturePossible;
-(long long)controlsStyle;
-(BOOL)requiresLinearPlayback;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(BOOL)isPictureInPictureSuspended;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(void)startPictureInPicture;
-(void)setControlsStyle:(long long)arg1 ;
-(BOOL)allowsPictureInPicturePlayback;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(/*^block*/id)arg2 ;
-(void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(BOOL)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3 ;
-(void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
-(void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;
-(void)_commonInitWithSource:(id)arg1 ;
-(void)stopPictureInPictureEvenWhenInBackground;
-(void)contentSourceVideoRectInWindowChanged;
-(void)setAllowsPictureInPictureFromInlineWhenEnteringBackground:(BOOL)arg1 ;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(void)setOtherPictureInPictureActive:(BOOL)arg1 ;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(void)setCanStartAutomaticallyWhenEnteringBackground:(BOOL)arg1 ;
-(void)startObservingPlayerController:(id)arg1 ;
-(void)stopObservingPlayerController:(id)arg1 ;
-(id)sampleBufferDisplayLayer;
-(void)reloadPrerollAttributes;
-(id)_delegateIfRespondsToSelector:(SEL)arg1 ;
-(void)_stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)_observePlayerLayer:(id)arg1 ;
-(BOOL)isMicrophoneEnabled;
-(void)setPictureInPictureSuspended:(BOOL)arg1 ;
-(void)_setCanStopPictureInPicture:(BOOL)arg1 ;
-(AVPictureInPicturePlatformAdapter *)platformAdapter;
-(AVObservationController *)observationController;
-(id<AVPictureInPictureContentSource>)sourceIfRetainedDuringPictureInPicturePlayback;
-(void)setSourceIfRetainedDuringPictureInPicturePlayback:(id<AVPictureInPictureContentSource>)arg1 ;
-(id)playerControllerIsPlayingObservationToken;
-(void)setPlayerControllerIsPlayingObservationToken:(id)arg1 ;
-(BOOL)isOtherPictureInPictureActive;
-(BOOL)wantsImmediateAssetInspection;
-(void)setWantsImmediateAssetInspection:(BOOL)arg1 ;
-(BOOL)wasPlayingWhenPictureInPictureInterruptionBegan;
-(void)setWasPlayingWhenPictureInPictureInterruptionBegan:(BOOL)arg1 ;
-(BOOL)wantsResourceReduction;
-(BOOL)retainsSourceDuringPictureInPicturePlayback;
-(void)setRetainsSourceDuringPictureInPicturePlayback:(BOOL)arg1 ;
-(BOOL)allowsPictureInPictureFromInlineWhenEnteringBackground;
-(void)setPictureInPictureWasStartedWhenEnteringBackground:(BOOL)arg1 ;
-(BOOL)canStartAutomaticallyWhenEnteringBackground;
-(id<AVPictureInPicturePrerollDelegate>)prerollDelegate;
-(void)setPrerollDelegate:(id<AVPictureInPicturePrerollDelegate>)arg1 ;
-(AVPictureInPictureControllerContentSource *)contentSource;
-(void)setContentSource:(AVPictureInPictureControllerContentSource *)arg1 ;
@end

