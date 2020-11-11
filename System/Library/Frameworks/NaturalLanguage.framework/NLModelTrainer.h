/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NLModelTrainerDelegate;
@class NLModelConfiguration, NLDataSet, NSDictionary, NLModel, NSError;

@interface NLModelTrainer : NSObject {

	NLModelConfiguration* _configuration;
	NLDataSet* _dataSet;
	NSDictionary* _options;
	NLModel* _model;
	NSError* _trainingError;
	id<NLModelTrainerDelegate> _delegate;
	BOOL _delegateRespondsToLogMessage;
	BOOL _delegateRespondsToShouldStop;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) NLDataSet * dataSet; 
@property (copy,readonly) NSDictionary * options; 
@property (readonly) id<NLModelTrainerDelegate> delegate; 
@property (copy,readonly) NLModel * trainedModel; 
@property (copy,readonly) NSError * trainingError; 
@property (copy,readonly) NSDictionary * testResults; 
+(id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(id<NLModelTrainerDelegate>)delegate;
-(NLModelConfiguration *)configuration;
-(NSDictionary *)options;
-(id)model;
-(void)setModel:(id)arg1 ;
-(NLDataSet *)dataSet;
-(void)logMessage:(id)arg1 ;
-(BOOL)shouldStop;
-(void)trainModel;
-(NLModel *)trainedModel;
-(NSError *)trainingError;
-(id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(Class)modelImplClass;
-(void)setTrainingError:(NSError *)arg1 ;
-(NSDictionary *)testResults;
-(void)trainer:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)trainerShouldStop:(id)arg1 ;
@end
