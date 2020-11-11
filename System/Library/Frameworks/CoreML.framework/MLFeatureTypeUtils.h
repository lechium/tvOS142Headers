/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MLFeatureTypeUtils : NSObject
+(id)descriptionForType:(long long)arg1 ;
+(long long)featureTypeForObject:(id)arg1 ;
+(long long)featureTypeForValuesInArray:(id)arg1 error:(id*)arg2 ;
+(id)featureDescriptionWithName:(id)arg1 consistentWithFeatureValues:(id)arg2 error:(id*)arg3 ;
+(id)featureValuesWithConsistentTypeFromArray:(id)arg1 error:(id*)arg2 ;
+(BOOL)canShapeArrayBePromotedFrom:(id)arg1 to:(id)arg2 ;
@end

