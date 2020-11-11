/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/MLModel.h>

@protocol MLCustomModel;
@class NSObject;

@interface MLCustomModelWrapper : MLModel {

	NSObject*<MLCustomModel> _customModel;

}

@property (retain) NSObject*<MLCustomModel> customModel;              //@synthesize customModel=_customModel - In the implementation block
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3 ;
-(NSObject*<MLCustomModel>)customModel;
-(void)setCustomModel:(NSObject*<MLCustomModel>)arg1 ;
@end

