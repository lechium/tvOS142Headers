/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface ETOptimizerDefinition : NSObject {

	long long _type;
	NSDictionary* _optimizationParameters;

}

@property (readonly) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * optimizationParameters;              //@synthesize optimizationParameters=_optimizationParameters - In the implementation block
-(long long)type;
-(NSDictionary *)optimizationParameters;
-(id)initWithOptimizationAlgorithm:(long long)arg1 parameters:(id)arg2 error:(id*)arg3 ;
@end

