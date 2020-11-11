/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface> {

	BOOL _allowsEmptyValueForFeature;
	REFeature* _feature;
	long long _relation;
	unsigned long long _value;

}

@property (nonatomic,readonly) REFeature * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) long long relation;                    //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)value;
-(REFeature *)feature;
-(long long)relation;
-(id)_dependentFeatures;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(unsigned long long)arg3 ;
@end

