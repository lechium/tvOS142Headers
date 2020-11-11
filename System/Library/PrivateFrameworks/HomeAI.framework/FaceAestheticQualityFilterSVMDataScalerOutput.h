/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface FaceAestheticQualityFilterSVMDataScalerOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _transformed_features;

}

@property (nonatomic,retain) MLMultiArray * transformed_features;              //@synthesize transformed_features=_transformed_features - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithTransformed_features:(id)arg1 ;
-(MLMultiArray *)transformed_features;
-(void)setTransformed_features:(MLMultiArray *)arg1 ;
@end

