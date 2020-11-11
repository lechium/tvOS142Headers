/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject, CPMLModelEvaluate;

@interface CPMLModel : NSObject {

	NSString* _savedPlistPath;
	NSString* _modelPath;
	NSObject*<OS_dispatch_queue> _dispatch_queue;
	void* _mData;
	unsigned long long _totalBytesIntSection;
	unsigned long long _totalBytesRealSection;
	double* _realBase;
	CPMLModelEvaluate* cpModelEvaluate;

}

@property (retain) CPMLModelEvaluate * cpModelEvaluate; 
+(id)initCPModelPath:(id)arg1 withConfiguration:(id)arg2 ;
-(BOOL)reset;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setCpModelEvaluate:(CPMLModelEvaluate *)arg1 ;
-(id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2 ;
-(void)initializeModel:(id)arg1 withConfiguration:(id)arg2 ;
-(id)getPropertyList;
-(id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2 ;
-(id)evalString:(id)arg1 ;
-(id)evalNSObjectV:(id)arg1 ;
-(id)evalArray:(id)arg1 ;
-(id)evalDict:(id)arg1 ;
-(void)boundResult:(id)arg1 ;
-(void)setCPMLAlgorithm:(id)arg1 ;
-(void)setCPMLAlgorithmEngine:(id)arg1 ;
-(BOOL)updateModelWithDB:(id)arg1 ;
-(BOOL)updateModelWithCPDB:(id)arg1 ;
-(CPMLModelEvaluate *)cpModelEvaluate;
@end

