/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>

@protocol CSContinuousVoiceTriggerDelegate, OS_dispatch_queue;
@class CSAudioTimeConverter, NSObject, CSAsset, CSKeywordAnalyzerNDAPI, NSString;

@interface CSContinuousVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate> {

	float _keywordThreshold;
	float _twoShotThreshold;
	float _lastScore;
	id<CSContinuousVoiceTriggerDelegate> _delegate;
	CSAudioTimeConverter* _audioTimeConverter;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzer;
	long long _mode;
	unsigned long long _analyzedSampleCount;
	unsigned long long _triggerEndSampleCount;
	unsigned long long _twoShotDecisionWaitSamples;
	unsigned long long _activeChannel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                            //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzer;                          //@synthesize keywordAnalyzer=_keywordAnalyzer - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                            //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long analyzedSampleCount;                            //@synthesize analyzedSampleCount=_analyzedSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEndSampleCount;                          //@synthesize triggerEndSampleCount=_triggerEndSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long twoShotDecisionWaitSamples;                     //@synthesize twoShotDecisionWaitSamples=_twoShotDecisionWaitSamples - In the implementation block
@property (assign,nonatomic) float twoShotThreshold;                                            //@synthesize twoShotThreshold=_twoShotThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                  //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) float lastScore;                                                   //@synthesize lastScore=_lastScore - In the implementation block
@property (assign,nonatomic,__weak) id<CSContinuousVoiceTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CSAudioTimeConverter * audioTimeConverter;                         //@synthesize audioTimeConverter=_audioTimeConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSContinuousVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSContinuousVoiceTriggerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)start;
-(void)_reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(long long)mode;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)setAsset:(id)arg1 ;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(float)lastScore;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzer;
-(void)setKeywordAnalyzer:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)_shotAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(void)startDetectTwoShot:(id)arg1 ;
-(void)processAudioSamples:(id)arg1 ;
-(CSAudioTimeConverter *)audioTimeConverter;
-(void)setAudioTimeConverter:(CSAudioTimeConverter *)arg1 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(unsigned long long)analyzedSampleCount;
-(void)setAnalyzedSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)triggerEndSampleCount;
-(void)setTriggerEndSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)twoShotDecisionWaitSamples;
-(void)setTwoShotDecisionWaitSamples:(unsigned long long)arg1 ;
-(float)twoShotThreshold;
-(void)setTwoShotThreshold:(float)arg1 ;
-(void)setLastScore:(float)arg1 ;
@end

