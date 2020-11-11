/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMLMetricsProvider.h>

@class NSString, NSMutableArray;

@interface REMLEntropyMetric : NSObject <REMLMetricsProvider> {

	NSString* _metricName;
	NSString* _predictionFeatureName;
	NSString* _truthFeatureName;
	long long _arrayFeatureIndex;
	long long _numExamples;
	double _sumTruth;
	double _sumPrediction;
	double _logScore;
	double _normalizedLogScore;
	unsigned long long _calibrationCurveNumBuckets;
	NSMutableArray* _calibrationCurveTotal;
	NSMutableArray* _calibrationCurveTrue;

}
-(id)name;
-(void)reset;
-(void)createCheckpoint;
-(void)resetToLastCheckpointBeforeDate:(id)arg1 ;
-(void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3 ;
-(double)getDoubleFromFeatureValue:(id)arg1 ;
-(id)initWithName:(id)arg1 featureName:(id)arg2 ;
-(id)meanEntropy;
-(id)meanNormalizedEntropy;
-(id)meanTruth;
-(id)meanPrediction;
-(long long)numberOfExamples;
-(unsigned long long)calibrationCurveNumBuckets;
-(id)calibrationCurveTotal;
-(id)calibrationCurveTrue;
@end

