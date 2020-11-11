/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface FaceAestheticQualityFilterSVMOutput : NSObject <MLFeatureProvider> {

	long long _classLabel;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long classLabel;                         //@synthesize classLabel=_classLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;              //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(id)initWithClassLabel:(long long)arg1 classProbability:(id)arg2 ;
-(long long)classLabel;
-(void)setClassLabel:(long long)arg1 ;
-(void)setClassProbability:(NSDictionary *)arg1 ;
@end

