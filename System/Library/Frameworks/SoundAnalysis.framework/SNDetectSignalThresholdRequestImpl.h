/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	unsigned _blockSize;
	double _sampleRate;
	double _magnitudeThreshold;

}

@property (assign,nonatomic) double sampleRate;                                 //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned blockSize;                                //@synthesize blockSize=_blockSize - In the implementation block
@property (assign,nonatomic) double magnitudeThreshold;                         //@synthesize magnitudeThreshold=_magnitudeThreshold - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(double)sampleRate;
-(void)setSampleRate:(double)arg1 ;
-(unsigned)blockSize;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(id)initWithSampleRate:(double)arg1 blockSize:(int)arg2 magnitudeThreshold:(double)arg3 ;
-(void)setBlockSize:(unsigned)arg1 ;
-(double)magnitudeThreshold;
-(void)setMagnitudeThreshold:(double)arg1 ;
@end

