/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSRayIntersector/MPSPolygonAccelerationStructure.h>

@interface MPSQuadrilateralAccelerationStructure : MPSPolygonAccelerationStructure

@property (assign,nonatomic) unsigned long long quadrilateralCount; 
-(id)initWithDevice:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(id)vertexBuffer;
-(void)setPolygonType:(unsigned long long)arg1 ;
-(unsigned long long)quadrilateralCount;
-(void)setQuadrilateralCount:(unsigned long long)arg1 ;
@end

