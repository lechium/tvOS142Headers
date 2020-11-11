/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, PHPhotoLibrary, NSArray, NSDictionary, PHACoreDuetDatasetStorage, PGManager, PGFeatureTransformersForFeatureExtractors;

@interface PHADatasetBuilder : NSObject {

	long long _policy;
	long long _labelPolicy;
	long long _fingerprintVersion;
	NSString* _inputName;
	NSString* _labelName;
	NSString* _positivesDatasetName;
	NSString* _positivesSubsetName;
	NSString* _negativesDatasetName;
	NSString* _negativesSubsetName;
	NSNumber* _totalNumberOfSamples;
	NSNumber* _oversamplingRate;
	PHPhotoLibrary* _photoLibrary;
	NSArray* _augmenters;
	NSDictionary* _filtersByDatasetName;
	NSArray* _positiveLocalIdentifiers;
	NSArray* _negativeLocalIdentifiers;
	PHACoreDuetDatasetStorage* _datasetStore;
	PGManager* _graphManager;
	PGFeatureTransformersForFeatureExtractors* _transformersForFeatureExtractors;

}

@property (nonatomic,retain) NSArray * positiveLocalIdentifiers;                                                          //@synthesize positiveLocalIdentifiers=_positiveLocalIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * negativeLocalIdentifiers;                                                          //@synthesize negativeLocalIdentifiers=_negativeLocalIdentifiers - In the implementation block
@property (nonatomic,retain) PHACoreDuetDatasetStorage * datasetStore;                                                    //@synthesize datasetStore=_datasetStore - In the implementation block
@property (nonatomic,retain) PGManager * graphManager;                                                                    //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,readonly) PGFeatureTransformersForFeatureExtractors * transformersForFeatureExtractors;              //@synthesize transformersForFeatureExtractors=_transformersForFeatureExtractors - In the implementation block
@property (nonatomic,readonly) long long policy;                                                                          //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) long long labelPolicy;                                                                     //@synthesize labelPolicy=_labelPolicy - In the implementation block
@property (nonatomic,readonly) long long fingerprintVersion;                                                              //@synthesize fingerprintVersion=_fingerprintVersion - In the implementation block
@property (nonatomic,readonly) NSString * inputName;                                                                      //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSString * labelName;                                                                      //@synthesize labelName=_labelName - In the implementation block
@property (nonatomic,readonly) NSString * positivesDatasetName;                                                           //@synthesize positivesDatasetName=_positivesDatasetName - In the implementation block
@property (nonatomic,readonly) NSString * positivesSubsetName;                                                            //@synthesize positivesSubsetName=_positivesSubsetName - In the implementation block
@property (nonatomic,readonly) NSString * negativesDatasetName;                                                           //@synthesize negativesDatasetName=_negativesDatasetName - In the implementation block
@property (nonatomic,readonly) NSString * negativesSubsetName;                                                            //@synthesize negativesSubsetName=_negativesSubsetName - In the implementation block
@property (nonatomic,readonly) NSNumber * totalNumberOfSamples;                                                           //@synthesize totalNumberOfSamples=_totalNumberOfSamples - In the implementation block
@property (nonatomic,readonly) NSNumber * oversamplingRate;                                                               //@synthesize oversamplingRate=_oversamplingRate - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                             //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * augmenters;                                                                      //@synthesize augmenters=_augmenters - In the implementation block
@property (nonatomic,readonly) NSDictionary * filtersByDatasetName;                                                       //@synthesize filtersByDatasetName=_filtersByDatasetName - In the implementation block
+(long long)labelPolicyForLabelPolicyName:(id)arg1 ;
+(id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
+(id)labelVectorsForLabelPolicy:(long long)arg1 ;
+(long long)datasetBuilderPolicyForPolicyName:(id)arg1 ;
-(long long)policy;
-(PHPhotoLibrary *)photoLibrary;
-(NSString *)inputName;
-(NSString *)labelName;
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
-(PGManager *)graphManager;
-(id)initWithFingerprintVersion:(long long)arg1 policy:(long long)arg2 labelPolicy:(long long)arg3 inputName:(id)arg4 labelName:(id)arg5 positivesDatasetName:(id)arg6 positivesSubsetName:(id)arg7 negativesDatasetName:(id)arg8 negativesSubsetName:(id)arg9 totalNumberOfSamples:(id)arg10 oversamplingRate:(id)arg11 photoLibrary:(id)arg12 graphManager:(id)arg13 transformersForFeatureExtractors:(id)arg14 augmenters:(id)arg15 filtersByDatasetName:(id)arg16 ;
-(NSArray *)positiveLocalIdentifiers;
-(NSArray *)negativeLocalIdentifiers;
-(id)datasetWithError:(id*)arg1 ;
-(id)_numberOfSamplesPerClassWithError:(id*)arg1 ;
-(unsigned long long)_minAvailableNumberOfSamples;
-(id)_fingerprintsForDatasetName:(id)arg1 localIdentifiers:(id)arg2 labelName:(id)arg3 numberOfSamples:(id)arg4 filters:(id)arg5 error:(id*)arg6 ;
-(id)_mergeLocalIdentifiersFromPositiveLocalIdentifiers:(id)arg1 negativeLocalIdentifiers:(id)arg2 numberOfPositiveSamples:(id)arg3 numberOfNegativeSamples:(id)arg4 error:(id*)arg5 ;
-(id)_datasetForLocalIdentifiers:(id)arg1 positiveFingerprints:(id)arg2 negativeFingerprints:(id)arg3 error:(id*)arg4 ;
-(id)_samplesOfCount:(unsigned long long)arg1 fromLocalIdentifiers:(id)arg2 filterPredicateForKeyword:(id)arg3 error:(id*)arg4 ;
-(id)_randomSamplesOfCount:(unsigned long long)arg1 filterPredicateForKeyword:(id)arg2 labelName:(id)arg3 error:(id*)arg4 ;
-(id)_filterDataSamples:(id)arg1 filters:(id)arg2 numberOfSamples:(id)arg3 error:(id*)arg4 ;
-(long long)_validatePHObject:(id)arg1 withFeatureValidator:(id)arg2 error:(id*)arg3 ;
-(id)_localIdentifiersForCoreDuetDatasetName:(id)arg1 subsetName:(id)arg2 ;
-(id)_fetchObjectsForFingerprintVersion:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_fetchObjectsForFingerprintVersion:(long long)arg1 options:(id)arg2 localIdentifiers:(id)arg3 error:(id*)arg4 ;
-(id)_fingerprintsForObjects:(id)arg1 fingerprintVersion:(long long)arg2 error:(id*)arg3 ;
-(id)_performAugmentationsOnLabeledSamples:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isFeatureNameForAssetPredicateWithFeatureName:(id)arg1 ;
-(id)_assetPropertiesPredicateForKeywordFromFeatureExtractorFilters:(id)arg1 ;
-(id)_currentFetchOptionPropertySet;
-(id)_localIdentifiersToExcludeForLabel:(id)arg1 ;
-(long long)labelPolicy;
-(long long)fingerprintVersion;
-(NSString *)positivesDatasetName;
-(NSString *)positivesSubsetName;
-(NSString *)negativesDatasetName;
-(NSString *)negativesSubsetName;
-(NSNumber *)totalNumberOfSamples;
-(NSNumber *)oversamplingRate;
-(NSArray *)augmenters;
-(NSDictionary *)filtersByDatasetName;
-(void)setPositiveLocalIdentifiers:(NSArray *)arg1 ;
-(void)setNegativeLocalIdentifiers:(NSArray *)arg1 ;
-(PHACoreDuetDatasetStorage *)datasetStore;
-(void)setDatasetStore:(PHACoreDuetDatasetStorage *)arg1 ;
-(void)setGraphManager:(PGManager *)arg1 ;
-(PGFeatureTransformersForFeatureExtractors *)transformersForFeatureExtractors;
@end

