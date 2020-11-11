/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NaturalLanguage/NLModelImpl.h>

@class NLEmbedding, NSData;

@interface NLModelImplE : NLModelImpl {

	NLEmbedding* _embedding;
	NSData* _embeddingData;

}
-(unsigned long long)systemVersion;
-(id)modelData;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8 ;
-(id)initWithModelTrainer:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)embedding;
-(id)embeddingData;
@end
