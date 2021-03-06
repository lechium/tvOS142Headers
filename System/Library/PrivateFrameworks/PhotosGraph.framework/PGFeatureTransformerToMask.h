/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeatureSliceTransformer.h>

@interface PGFeatureTransformerToMask : PGFeatureSliceTransformer {

	float _maskingValue;

}

@property (nonatomic,readonly) float maskingValue;              //@synthesize maskingValue=_maskingValue - In the implementation block
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)initWithMaskingFloatValue:(float)arg1 ;
-(id)initWithMaskingFloatValue:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(float)maskingValue;
@end

