/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeatureValue.h>

@class NSString;

@interface _REStringFeatureValue : REFeatureValue {

	NSString* _value;

}
+(id)featureValueWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValue;
-(unsigned long long)type;
-(id)initWithValue:(id)arg1 ;
-(unsigned long long)_integralFeatureValue;
@end

