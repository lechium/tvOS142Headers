/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVPlayerViewControllerDelegateAVPlayerViewControllerDelegatePrivate, AVPlayerViewControllerPlaybackDelegateNSObject, AVScanningDelegate;
#import <AVKit/AVKit-Structs.h>
@class AVPlayerViewController;

@interface AVDelegateManager : NSObject {

	id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> _delegate;
	id<AVPlayerViewControllerPlaybackDelegate><NSObject> _privateDelegate;
	id<AVScanningDelegate> _scanningDelegate;
	AVPlayerViewController* _playerViewController;

}

@property (__weak,readonly) AVPlayerViewController * playerViewController;                                                           //@synthesize playerViewController=_playerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerPlaybackDelegate><NSObject> privateDelegate;                            //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVScanningDelegate> scanningDelegate;                                                         //@synthesize scanningDelegate=_scanningDelegate - In the implementation block
@property (getter=isScanningSupportedByMainDelegate,nonatomic,readonly) BOOL scanningSupportedByMainDelegate; 
@property (nonatomic,readonly) BOOL hasChannelSkipping; 
@property (nonatomic,readonly) BOOL hasCustomScanning; 
@property (nonatomic,readonly) BOOL supportsContentProposals; 
@property (nonatomic,readonly) BOOL handlesRejectContentProposal; 
-(id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate>)delegate;
-(void)setDelegate:(id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate>)arg1 ;
-(id<AVPlayerViewControllerPlaybackDelegate><NSObject>)privateDelegate;
-(void)setPrivateDelegate:(id<AVPlayerViewControllerPlaybackDelegate><NSObject>)arg1 ;
-(void)stopScanning;
-(void)skipToPreviousItem;
-(void)skipToNextItem;
-(SCD_Struct_AV1)timeToSeekAfterUserNavigatedFromTime:(SCD_Struct_AV1)arg1 toTime:(SCD_Struct_AV1)arg2 ;
-(AVPlayerViewController *)playerViewController;
-(id)initWithPlayerViewController:(id)arg1 ;
-(BOOL)isScanningSupportedByMainDelegate;
-(BOOL)shouldDismiss;
-(void)willBeginDismissalTransition;
-(void)didEndDismissalTransition;
-(void)willPresentInterstitialGroup:(id)arg1 ;
-(void)didPresentInterstitialGroup:(id)arg1 ;
-(void)willResumePlaybackAfterUserNavigatedFromTime:(SCD_Struct_AV1)arg1 toTime:(SCD_Struct_AV1)arg2 ;
-(void)willResumePlaybackAfterUserNavigatedFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)didSelectMediaSelectionOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)didSelectExternalSubtitleOptionLanguage:(id)arg1 ;
-(void)skipToNextChannel:(/*^block*/id)arg1 ;
-(void)skipToPreviousChannel:(/*^block*/id)arg1 ;
-(BOOL)hasChannelSkipping;
-(id)nextChannelInterstitialViewController;
-(id)previousChannelInterstitialViewController;
-(BOOL)hasCustomScanning;
-(long long)scanFromElapsedTime:(SCD_Struct_AV1)arg1 rate:(double)arg2 imageBlock:(/*^block*/id)arg3 ;
-(BOOL)shouldHandleScanningForPlayerItem:(id)arg1 ;
-(void)shouldPlayFromTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldSeekToTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldSeekToDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldPauseWithCompletion:(/*^block*/id)arg1 ;
-(void)shouldScanAtRate:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)didFinishScanning;
-(BOOL)supportsContentProposals;
-(void)didAcceptContentProposal:(id)arg1 ;
-(BOOL)handlesRejectContentProposal;
-(void)didRejectContentProposal:(id)arg1 ;
-(BOOL)shouldPresentContentProposal:(id)arg1 ;
-(void)willTransitionToVisibilityOfTransportBar:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)delegateIfRespondsTo:(SEL)arg1 ;
-(BOOL)_hasStopScanning;
-(id<AVScanningDelegate>)scanningDelegate;
-(void)setScanningDelegate:(id<AVScanningDelegate>)arg1 ;
@end

