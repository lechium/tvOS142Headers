/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@interface PGGraphAnniversaryEdge : PGGraphPropertylessEdge {

	float _weight;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(unsigned short)domain;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg1 toPersonNode:(id)arg2 weight:(float)arg3 ;
@end

