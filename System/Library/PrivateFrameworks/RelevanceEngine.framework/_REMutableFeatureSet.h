/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REMutableFeatureSet.h>

@class NSMutableSet;

@interface _REMutableFeatureSet : REMutableFeatureSet {

	NSMutableSet* _names;
	NSMutableSet* _features;

}
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RE28*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithFeature:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 ;
-(id)featureWithName:(id)arg1 ;
-(void)addFeature:(id)arg1 ;
-(BOOL)containsFeature:(id)arg1 ;
-(void)removeFeature:(id)arg1 ;
-(void)removeAllFeatures;
@end

