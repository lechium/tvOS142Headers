/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class NSDictionary, NSMutableArray, NSMutableDictionary, MLModelConfiguration, NSURL, NSNumber;

@interface _PSPersonalizationEvaluation : NSObject {

	NSDictionary* _recipe;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableArray* _featureDictArrayForAllShareEvents;
	NSMutableArray* _sampledFeatureVectors;
	NSMutableDictionary* _sampledFeatureVectorsForSplits;
	NSMutableDictionary* _MLFeatureProvidersForMLModels;
	NSDictionary* _selectedFeaturesConfig;
	NSMutableArray* _results;
	MLModelConfiguration* _adaptableModelConfiguration;
	NSURL* _intermediateCompiledModelURL;
	NSNumber* _trainDataCount;
	NSNumber* _testDataCount;
	NSNumber* _batchSize;
	NSNumber* _topN;
	NSNumber* _epoc;
	NSNumber* _evaluationIterationCount;
	NSNumber* _testSplitPercent;
	NSNumber* _swapOK;
	NSNumber* _accuracyGainThresholdForSwap;
	NSNumber* _engagementRateGainThresholdForSwap;
	NSNumber* _minimumTestDataSizeForSwap;
	NSNumber* _numClasses;
	NSNumber* _numTrees;
	NSNumber* _maxDepth;
	NSNumber* _learningRate;
	NSNumber* _minChildWeight;
	NSNumber* _recipeID;
	NSNumber* _minSampleCountForAdaptation;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                           //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * featureDictArrayForAllShareEvents;                //@synthesize featureDictArrayForAllShareEvents=_featureDictArrayForAllShareEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * sampledFeatureVectors;                            //@synthesize sampledFeatureVectors=_sampledFeatureVectors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sampledFeatureVectorsForSplits;              //@synthesize sampledFeatureVectorsForSplits=_sampledFeatureVectorsForSplits - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * MLFeatureProvidersForMLModels;               //@synthesize MLFeatureProvidersForMLModels=_MLFeatureProvidersForMLModels - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedFeaturesConfig;                             //@synthesize selectedFeaturesConfig=_selectedFeaturesConfig - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                                          //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * adaptableModelConfiguration;                //@synthesize adaptableModelConfiguration=_adaptableModelConfiguration - In the implementation block
@property (nonatomic,retain) NSURL * intermediateCompiledModelURL;                              //@synthesize intermediateCompiledModelURL=_intermediateCompiledModelURL - In the implementation block
@property (nonatomic,retain) NSNumber * trainDataCount;                                         //@synthesize trainDataCount=_trainDataCount - In the implementation block
@property (nonatomic,retain) NSNumber * testDataCount;                                          //@synthesize testDataCount=_testDataCount - In the implementation block
@property (nonatomic,retain) NSNumber * batchSize;                                              //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSNumber * topN;                                                   //@synthesize topN=_topN - In the implementation block
@property (nonatomic,retain) NSNumber * epoc;                                                   //@synthesize epoc=_epoc - In the implementation block
@property (nonatomic,retain) NSNumber * evaluationIterationCount;                               //@synthesize evaluationIterationCount=_evaluationIterationCount - In the implementation block
@property (nonatomic,retain) NSNumber * testSplitPercent;                                       //@synthesize testSplitPercent=_testSplitPercent - In the implementation block
@property (nonatomic,retain) NSNumber * swapOK;                                                 //@synthesize swapOK=_swapOK - In the implementation block
@property (nonatomic,retain) NSNumber * accuracyGainThresholdForSwap;                           //@synthesize accuracyGainThresholdForSwap=_accuracyGainThresholdForSwap - In the implementation block
@property (nonatomic,retain) NSNumber * engagementRateGainThresholdForSwap;                     //@synthesize engagementRateGainThresholdForSwap=_engagementRateGainThresholdForSwap - In the implementation block
@property (nonatomic,retain) NSNumber * minimumTestDataSizeForSwap;                             //@synthesize minimumTestDataSizeForSwap=_minimumTestDataSizeForSwap - In the implementation block
@property (nonatomic,retain) NSNumber * numClasses;                                             //@synthesize numClasses=_numClasses - In the implementation block
@property (nonatomic,retain) NSNumber * numTrees;                                               //@synthesize numTrees=_numTrees - In the implementation block
@property (nonatomic,retain) NSNumber * maxDepth;                                               //@synthesize maxDepth=_maxDepth - In the implementation block
@property (nonatomic,retain) NSNumber * learningRate;                                           //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,retain) NSNumber * minChildWeight;                                         //@synthesize minChildWeight=_minChildWeight - In the implementation block
@property (nonatomic,retain) NSNumber * recipeID;                                               //@synthesize recipeID=_recipeID - In the implementation block
@property (nonatomic,retain) NSNumber * minSampleCountForAdaptation;                            //@synthesize minSampleCountForAdaptation=_minSampleCountForAdaptation - In the implementation block
@property (nonatomic,readonly) NSDictionary * recipe;                                           //@synthesize recipe=_recipe - In the implementation block
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSNumber *)batchSize;
-(void)setBatchSize:(NSNumber *)arg1 ;
-(void)setLearningRate:(NSNumber *)arg1 ;
-(NSNumber *)learningRate;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(NSNumber *)recipeID;
-(void)setRecipeID:(NSNumber *)arg1 ;
-(NSNumber *)maxDepth;
-(NSNumber *)numTrees;
-(NSNumber *)numClasses;
-(NSNumber *)minChildWeight;
-(void)setNumClasses:(NSNumber *)arg1 ;
-(NSDictionary *)recipe;
-(void)setAdaptableModelConfiguration:(MLModelConfiguration *)arg1 ;
-(MLModelConfiguration *)adaptableModelConfiguration;
-(id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)arg1 adaptableModelDeployPath:(id)arg2 ;
-(void)setEvaluationIterationCount:(NSNumber *)arg1 ;
-(void)setTestSplitPercent:(NSNumber *)arg1 ;
-(void)setTopN:(NSNumber *)arg1 ;
-(void)setEpoc:(NSNumber *)arg1 ;
-(void)setSwapOK:(NSNumber *)arg1 ;
-(void)setAccuracyGainThresholdForSwap:(NSNumber *)arg1 ;
-(void)setEngagementRateGainThresholdForSwap:(NSNumber *)arg1 ;
-(void)setMinimumTestDataSizeForSwap:(NSNumber *)arg1 ;
-(void)setMinSampleCountForAdaptation:(NSNumber *)arg1 ;
-(void)setNumTrees:(NSNumber *)arg1 ;
-(void)setMaxDepth:(NSNumber *)arg1 ;
-(void)setMinChildWeight:(NSNumber *)arg1 ;
-(void)setParametersFromRecipe;
-(id)loadDefaultModel;
-(void)setSelectedFeaturesConfig:(NSDictionary *)arg1 ;
-(void)processData;
-(NSMutableArray *)featureDictArrayForAllShareEvents;
-(NSNumber *)evaluationIterationCount;
-(id)loadAdaptableModelUnderDirectory:(id)arg1 ;
-(void)sampleFromData;
-(NSMutableArray *)sampledFeatureVectors;
-(NSNumber *)minSampleCountForAdaptation;
-(void)getSamplesWithTestSplitPercent;
-(NSMutableDictionary *)sampledFeatureVectorsForSplits;
-(void)setTestDataCount:(NSNumber *)arg1 ;
-(void)setTrainDataCount:(NSNumber *)arg1 ;
-(NSNumber *)testDataCount;
-(NSNumber *)trainDataCount;
-(NSURL *)intermediateCompiledModelURL;
-(id)updateMLModelWithURL:(id)arg1 overDataSplit:(id)arg2 ;
-(id)evaluateClassicMLModel:(id)arg1 ;
-(id)engagementSimulationWithMLModel:(id)arg1 mlModelType:(id)arg2 labelName:(id)arg3 ;
-(NSNumber *)swapOK;
-(NSNumber *)accuracyGainThresholdForSwap;
-(NSNumber *)engagementRateGainThresholdForSwap;
-(NSNumber *)minimumTestDataSizeForSwap;
-(BOOL)cloneAdaptableModel:(id)arg1 toFilePath:(id)arg2 originalXgboostModelName:(id)arg3 clonedXgboostModelName:(id)arg4 ;
-(void)setupAdaptableModelConfig;
-(void)setIntermediateCompiledModelURL:(NSURL *)arg1 ;
-(void)setMLFeatureProvidersForMLModels:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)MLFeatureProvidersForMLModels;
-(void)setFeatureDictArrayForAllShareEvents:(NSMutableArray *)arg1 ;
-(id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1 forMLModel:(id)arg2 ;
-(void)setSampledFeatureVectors:(NSMutableArray *)arg1 ;
-(unsigned long long)bucketedValue:(unsigned long long)arg1 ;
-(void)setSampledFeatureVectorsForSplits:(NSMutableDictionary *)arg1 ;
-(NSNumber *)testSplitPercent;
-(NSNumber *)topN;
-(NSDictionary *)selectedFeaturesConfig;
-(id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2 ;
-(id)measureTestAccuracyOf:(id)arg1 againstTrueValuesOf:(id)arg2 labelName:(id)arg3 ;
-(NSNumber *)epoc;
-(void)adaptMLModel:(id)arg1 overDataSplit:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4 ;
-(id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4 ;
-(void)adaptMLModel:(id)arg1 withTrainingData:(id)arg2 ;
-(id)initWithRecipe:(id)arg1 knowledgeStore:(id)arg2 ;
-(id)runAdaptationAndEvaluation;
@end

