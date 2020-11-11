/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	double _offset;
	double _minimumObservableOffset;
	double _maximumObservableOffset;

}

@property (nonatomic,readonly) double offset;                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double minimumObservableOffset;                    //@synthesize minimumObservableOffset=_minimumObservableOffset - In the implementation block
@property (assign,nonatomic) double maximumObservableOffset;                    //@synthesize maximumObservableOffset=_maximumObservableOffset - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)offset;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(void)updateMinMaxDelayWithSampleRate:(float)arg1 micDelay:(float)arg2 refDelay:(float)arg3 eclen:(float)arg4 ;
-(void)setMinimumObservableOffset:(double)arg1 ;
-(double)minimumObservableOffset;
-(void)setMaximumObservableOffset:(double)arg1 ;
-(double)maximumObservableOffset;
@end

