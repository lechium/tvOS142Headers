/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Espresso/Espresso-Structs.h>
@class ETModelDef, ETOptimizerDef, ETImageDescriptorExtractor;

@interface ETTask : NSObject {

	shared_ptr<Espresso::net>* network;
	BOOL _dumpData;
	ETModelDef* _model;
	ETOptimizerDef* _optimizer;
	ETImageDescriptorExtractor* _extractor;

}

@property (nonatomic,retain) ETModelDef * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) ETOptimizerDef * optimizer;                          //@synthesize optimizer=_optimizer - In the implementation block
@property (nonatomic,retain) ETImageDescriptorExtractor * extractor;              //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) BOOL dumpData;                                       //@synthesize dumpData=_dumpData - In the implementation block
-(id)init;
-(ETModelDef *)model;
-(void)setModel:(ETModelDef *)arg1 ;
-(void)setOptimizer:(ETOptimizerDef *)arg1 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(BOOL)arg4 ;
-(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)reinitializeVariables;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3 extractor:(id)arg4 ;
-(float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(/*^block*/id)arg3 ;
-(float)fit:(id)arg1 numberOfBatches:(unsigned)arg2 withProgress:(/*^block*/id)arg3 ;
-(id)evaluate:(id)arg1 ;
-(BOOL)runBatches:(id)arg1 numberOfBatches:(unsigned)arg2 outputNames:(id)arg3 batchCallback:(/*^block*/id)arg4 ;
-(BOOL)fit:(id)arg1 numberOfBatches:(unsigned)arg2 outputNames:(id)arg3 batchCallback:(/*^block*/id)arg4 ;
-(BOOL)fit:(id)arg1 numberOfEpochs:(int)arg2 outputNames:(id)arg3 batchCallback:(/*^block*/id)arg4 ;
-(BOOL)runInference:(id)arg1 outputNames:(id)arg2 batchCallback:(/*^block*/id)arg3 ;
-(void)saveNetwork:(id)arg1 ;
-(void)saveNetwork:(id)arg1 revertToInferenceMode:(BOOL)arg2 ;
-(BOOL)moveToGPU:(int)arg1 error:(id*)arg2 ;
-(ETOptimizerDef *)optimizer;
-(ETImageDescriptorExtractor *)extractor;
-(void)setExtractor:(ETImageDescriptorExtractor *)arg1 ;
-(BOOL)dumpData;
-(void)setDumpData:(BOOL)arg1 ;
@end
