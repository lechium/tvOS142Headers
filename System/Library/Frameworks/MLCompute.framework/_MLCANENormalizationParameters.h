/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface _MLCANENormalizationParameters : NSObject {

	NSDictionary* _normalizationParams;
	NSDictionary* _neuronParams;

}

@property (nonatomic,retain,readonly) NSDictionary * normalizationParams;              //@synthesize normalizationParams=_normalizationParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * neuronParams;                     //@synthesize neuronParams=_neuronParams - In the implementation block
+(id)normalizationUnitParametersWith:(id)arg1 neuronParams:(id)arg2 ;
-(NSDictionary *)neuronParams;
-(id)initWithNormalizationParams:(id)arg1 neuronParams:(id)arg2 ;
-(NSDictionary *)normalizationParams;
@end

