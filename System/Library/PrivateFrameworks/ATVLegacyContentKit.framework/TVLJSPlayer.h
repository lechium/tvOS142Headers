/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TVPPlaybackDelegate.h>

@class TVSStateMachine, NSArray, TVLLegacyJSContext, TVPInterstitialCollection, NSOperationQueue, NSSet, NSString;

@interface TVLJSPlayer : NSObject <TVPPlaybackDelegate> {

	unsigned long long _playlistID;
	TVSStateMachine* _playlistStateMachine;
	NSArray* _timedMetadataKeys;
	BOOL _shouldObserveTimedMetadata;
	BOOL _isObservingTimedMetadataChanges;
	BOOL _interestedInDateChanges;
	BOOL _interestedInTimeChanges;
	id _elapsedTimeObserverToken;
	BOOL _allowsSubtitleOffOption;
	TVLLegacyJSContext* context;
	NSArray* _allowedSubtitleLanguageCodes;
	TVPInterstitialCollection* _interstitialCollection;
	NSOperationQueue* _timedMetadataQueue;
	NSSet* _functions;
	double _duration;

}

@property (retain) NSArray * allowedSubtitleLanguageCodes;                          //@synthesize allowedSubtitleLanguageCodes=_allowedSubtitleLanguageCodes - In the implementation block
@property (assign) BOOL allowsSubtitleOffOption;                                    //@synthesize allowsSubtitleOffOption=_allowsSubtitleOffOption - In the implementation block
@property (nonatomic,retain) TVLLegacyJSContext * context; 
@property (retain) TVPInterstitialCollection * interstitialCollection;              //@synthesize interstitialCollection=_interstitialCollection - In the implementation block
@property (nonatomic,retain) NSOperationQueue * timedMetadataQueue;                 //@synthesize timedMetadataQueue=_timedMetadataQueue - In the implementation block
@property (nonatomic,retain) NSSet * functions;                                     //@synthesize functions=_functions - In the implementation block
@property (assign) double duration;                                                 //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TVLLegacyJSContext *)context;
-(double)duration;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(NSSet *)functions;
-(void)setFunctions:(NSSet *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)tearDown;
-(void)setup;
-(void)_stop;
-(void)_durationDidChange;
-(void)_play;
-(void)_playerStateDidChange:(id)arg1 ;
-(void)_playerStateWillChange:(id)arg1 ;
-(void)_sendQoSReportForItem:(id)arg1 ;
-(void)_playerAssetTimedMetadataDidChange;
-(void)_selectedAudioOptionDidChange;
-(void)_selectedSubtitleOptionDidChange;
-(id)_buildQualityOfServiceReport:(id)arg1 ;
-(void)_playerPlaybackError:(id)arg1 ;
-(void)_playerCurrentAssetChanged:(id)arg1 ;
-(void)_playerStartedBuffering:(id)arg1 ;
-(void)_playerBufferSufficientToPlay:(id)arg1 ;
-(void)_playerPlaybackEnded:(id)arg1 ;
-(void)_playerStallDuringPlayback:(id)arg1 ;
-(void)_playerTransportDisplayChange:(id)arg1 ;
-(void)setShouldObserveTimedMetadata:(BOOL)arg1 ;
-(void)setAllowsSubtitleOffOption:(BOOL)arg1 ;
-(void)_registerPlaylistHandlers;
-(void)_stopObservingTimedMetadataChanges;
-(void)setInterstitialCollection:(TVPInterstitialCollection *)arg1 ;
-(void)_startObservingTimedMetadataChanges;
-(NSOperationQueue *)timedMetadataQueue;
-(void)_sendNowPlayingNotification:(id)arg1 withArguments:(id)arg2 ;
-(void)_updateAsset:(id)arg1 ;
-(void)_mediaItemMetadataDidChange:(id)arg1 ;
-(void)_updateEventGroupsForEventMediaAsset:(id)arg1 ;
-(BOOL)_loadAssetsActivity;
-(void)setAllowedSubtitleLanguageCodes:(NSArray *)arg1 ;
-(BOOL)_allowedToHandleEvent:(id)arg1 player:(id)arg2 ;
-(BOOL)player:(id)arg1 shouldSeekToTime:(double*)arg2 playbackDate:(id*)arg3 ;
-(BOOL)playerShouldPlay:(id)arg1 timeFromWhichToPlay:(double*)arg2 ;
-(BOOL)playerShouldPause:(id)arg1 ;
-(BOOL)player:(id)arg1 shouldScanAtRate:(double)arg2 ;
-(BOOL)player:(id)arg1 shouldChangeMediaInDirection:(long long)arg2 ;
-(BOOL)player:(id)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2 ;
-(id)player:(id)arg1 filteredSubtitleOptionsFromOptions:(id)arg2 ;
-(void)setTimedMetatadataKeys:(id)arg1 ;
-(void)_changeToAsset:(id)arg1 ;
-(void)_stopWithReason:(id)arg1 suggestion:(id)arg2 ;
-(void)_clearSubtitleFilter;
-(NSArray *)allowedSubtitleLanguageCodes;
-(BOOL)allowsSubtitleOffOption;
-(TVPInterstitialCollection *)interstitialCollection;
-(void)setTimedMetadataQueue:(NSOperationQueue *)arg1 ;
@end

