/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreML/CoreML-Structs.h>
@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject {

	TreeEnsembleClassifier* _trc;
	MLTreeEnsembleClassifier* _treeClassifier;
	NSMutableArray* __attributes;
	NSMutableOrderedSet* __objectStore;

}

@property (nonatomic,retain) NSMutableArray * _attributes;                    //@synthesize _attributes=__attributes - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _objectStore;              //@synthesize _objectStore=__objectStore - In the implementation block
-(void)dealloc;
-(id)_init;
-(NSMutableArray *)_attributes;
-(id)_initWithFlattenedTree:(id)arg1 ;
-(BOOL)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2 ;
-(void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2 ;
-(id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2 ;
-(void)set_attributes:(NSMutableArray *)arg1 ;
-(NSMutableOrderedSet *)_objectStore;
-(void)set_objectStore:(NSMutableOrderedSet *)arg1 ;
@end

