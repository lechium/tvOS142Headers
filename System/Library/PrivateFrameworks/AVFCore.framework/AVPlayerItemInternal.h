/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AVPlayerItemDelegate, NSObjectNSCopying, AVLoggingIdentifier;
#import <AVFCore/AVFCore-Structs.h>
@class NSURL, NSObject, AVWeakReference, NSArray, AVAsset, NSMutableArray, NSMutableDictionary, AVAudioMix, NSError, NSDictionary, NSString, NSDate, AVMediaSelection, AVPlayerItem, AVPlayerConnection, AVVideoComposition, AVCustomVideoCompositorSession;

@interface AVPlayerItemInternal : NSObject {

	NSURL* URL;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVWeakReference* weakReference;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> figPlaybackItemAccessorQueue;
	NSObject*<OS_dispatch_queue> figPlaybackItemSetterQueue;
	NSObject*<OS_dispatch_queue> seekQueue;
	OpaqueFigSimpleMutexRef seekIDMutex;
	OpaqueVTPixelBufferAttributesMediatorRef pixelBufferAttributeMediator;
	OpaqueCMTimebaseRef proxyUnfoldedTimebase;
	OpaqueCMTimebaseRef proxyFoldedTimebase;
	NSArray* automaticallyLoadedAssetKeys;
	BOOL wasInitializedWithURL;
	AVAsset* asset;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSArray* cachedTracks;
	NSArray* tracks;
	NSMutableArray* syncLayers;
	NSArray* itemOutputs;
	NSMutableArray* itemVideoOutputs;
	NSMutableDictionary* itemLegibleOutputsForKeys;
	NSMutableDictionary* itemMetadataOutputsForKeys;
	BOOL suppressesVideoLayers;
	OpaqueCMTimebaseRef foldedTimebase;
	OpaqueCMTimebaseRef unfoldedFigTimebase;
	BOOL didBecomeReadyForInspectionOfTracks;
	BOOL didBecomeReadyForInspectionOfPresentationSize;
	BOOL didBecomeReadyForInspectionOfDuration;
	BOOL figAssetDidBecomeReadyForInspectionOfMediaSelectionOptions;
	BOOL didBecomeReadyForInspectionOfRecommendedTimeOffsetFromLive;
	AVAsset* assetWithFigPlaybackItem;
	NSArray* trackIDsForAssetWithFigPlaybackItem;
	BOOL needTimedMetadataNotification;
	BOOL didBecomeReadyForBasicInspection;
	id<AVPlayerItemDelegate> delegate;
	AVAudioMix* audioMix;
	long long status;
	NSError* error;
	SCD_Struct_AV6 forwardPlaybackEndTime;
	SCD_Struct_AV6 reversePlaybackEndTime;
	SCD_Struct_AV6 advanceTimeForOverlappedPlayback;
	BOOL advanceTimeForOverlappedPlaybackWasSet;
	BOOL preservesTimeOffsetFromLive;
	SCD_Struct_AV6 configuredTimeOffsetFromLive;
	SCD_Struct_AV6 recommendedTimeOffsetFromLive;
	SCD_Struct_AV6 duration;
	BOOL seekingWaitsForVideoCompositionRendering;
	NSArray* textStyleRules;
	NSArray* textHighlightArray;
	CFStringRef initialFigTimePitchAlgorithm;
	BOOL canUseNetworkResourcesForLiveStreamingWhilePaused;
	SCD_Struct_AV6 maximumForwardBufferDuration;
	SCD_Struct_AV6 maximumTrailingBufferDuration;
	double preferredPeakBitRate;
	int startsOnFirstEligibleVariant;
	NSArray* itemCollectors;
	NSMutableArray* itemMetadataCollectors;
	unsigned RTCReportingFlags;
	NSDictionary* gaplessInfo;
	float soundCheckVolumeNormalization;
	float volumeAdjustment;
	NSDictionary* loudnessInfo;
	opaqueMTAudioProcessingTapRef audioProcessingTap;
	BOOL initialLimitReadAhead;
	unsigned long long restrictions;
	NSString* mediaKind;
	BOOL prefersSDRVideo;
	BOOL prefersSDRVideoWasSet;
	BOOL reversesMoreVideoFramesInMemory;
	BOOL reversesMoreVideoFramesInMemoryWasSet;
	BOOL aggressivelyCachesVideoFrames;
	BOOL aggressivelyCachesVideoFramesWasSet;
	BOOL decodesAllFramesDuringOrdinaryPlayback;
	BOOL decodesAllFramesDuringOrdinaryPlaybackWasSet;
	BOOL initialContinuesPlayingDuringPrerollForSeek;
	BOOL initialContinuesPlayingDuringPrerollForRateChange;
	BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
	BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
	SCD_Struct_AV6 minimumIntervalForIFrameOnlyPlayback;
	BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
	float speedThresholdForIFrameOnlyPlayback;
	BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
	NSDate* initialDate;
	NSDate* initialEstimatedDate;
	BOOL requiresAccessLog;
	BOOL suppressesAudioOnlyVariants;
	NSArray* imageQueueInterpolationCurve;
	BOOL imageQueueInterpolationCurveWasSet;
	BOOL blendsVideoFrames;
	BOOL blendsVideoFramesWasSet;
	BOOL appliesPerFrameHDRDisplayMetadata;
	BOOL appliesPerFrameHDRDisplayMetadataWasSet;
	NSString* videoApertureMode;
	BOOL usesMinimalLatencyForVideoCompositionRendering;
	BOOL initialAlwaysMonitorsPlayability;
	long long initialPlaybackLikelyToKeepUpTrigger;
	BOOL savesDownloadedDataToDiskWhenDone;
	BOOL networkUsuallyExceedsMaxBitRate;
	BOOL allowProgressiveSwitchUp;
	BOOL allowProgressiveStartup;
	BOOL allowProgressiveResume;
	CGSize IFramePrefetchTargetDimensions;
	id<NSObject><NSCopying> AVKitData;
	BOOL playHapticTracks;
	CGSize preferredMaximumResolution;
	CGSize preferredMinimumResolution;
	BOOL canPlayFastForward;
	BOOL canPlayFastReverse;
	BOOL canPlayReverse;
	BOOL canPlaySlowReverse;
	BOOL canPlaySlowForward;
	BOOL canStepForward;
	BOOL canStepBackward;
	CGSize presentationSize;
	BOOL playbackBufferEmpty;
	BOOL playbackBufferFull;
	BOOL playbackLikelyToKeepUp;
	BOOL restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
	BOOL nonForcedSubtitlesEnabled;
	BOOL hasEnabledVideo;
	BOOL hasVideo;
	BOOL hasEnabledAudio;
	BOOL hasEnqueuedVideoFrame;
	BOOL externalProtectionRequested;
	NSArray* seekableTimeRanges;
	double seekableTimeRangesLastModifiedTime;
	NSArray* loadedTimeRanges;
	SCD_Struct_AV7 loopTimeRange;
	id<AVLoggingIdentifier> loggingIdentifier;
	AVMediaSelection* currentMediaSelection;
	BOOL needToSeekAfterCreatingFigPlaybackItem;
	SCD_Struct_AV6 initialTime;
	unsigned initialSetTimeFlags;
	SCD_Struct_AV6 initialMinSnapTime;
	SCD_Struct_AV6 initialMaxSnapTime;
	unsigned nextSeekIDToGenerate;
	int pendingSeekID;
	/*^block*/id seekCompletionHandler;
	AVPlayerItem* previousItem;
	AVPlayerItem* nextItem;
	AVPlayerConnection* playerConnection;
	BOOL initialWillNeverSeekBackwardsHint;
	AVVideoComposition* videoComposition;
	AVWeakReference* clientsOriginalVideoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	void* figVideoCompositor;
	int eqPreset;
	NSDictionary* rampInOutInfo;
	NSDictionary* audibleDRMInfo;
	long long initialVariantIndex;
	NSMutableDictionary* mediaOptionsSelectedByClient;
	NSString* serviceIdentifier;
	NSArray* timedMetadata;
	NSMutableArray* handlersToCallWhenReadyForEnqueueing;
	BOOL haveInitialSamples;
	BOOL haveCPEProtector;
	BOOL didInformObserversAboutAvailabilityOfTracks;
	BOOL didFireKVOForAssetForNonStreamingItem;
	AVAudioMix* mostRecentlyAppliedAudioMix;
	AVWeakReference* playerReference;
	BOOL didSetAssetToAssetWithFigPlaybackItem;
	OpaqueFigCPEProtectorRef figCPEProtector;
	NSString* videoEnhancementMode;

}
@end

