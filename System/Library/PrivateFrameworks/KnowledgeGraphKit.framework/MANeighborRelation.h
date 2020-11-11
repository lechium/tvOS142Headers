/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MARelation.h>

@class MAEdgeFilter;

@interface MANeighborRelation : MARelation {

	unsigned long long _edgeType;
	MAEdgeFilter* _edgeFilter;

}

@property (nonatomic,readonly) unsigned long long edgeType;                 //@synthesize edgeType=_edgeType - In the implementation block
@property (nonatomic,copy,readonly) MAEdgeFilter * edgeFilter;              //@synthesize edgeFilter=_edgeFilter - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)inverse;
-(unsigned long long)edgeType;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)initWithEdgeType:(unsigned long long)arg1 edgeFilter:(id)arg2 ;
-(id)adjacencySetFromSourceNodeIdentifiers:(id)arg1 graphStore:(id)arg2 error:(id*)arg3 ;
-(MAEdgeFilter *)edgeFilter;
@end
