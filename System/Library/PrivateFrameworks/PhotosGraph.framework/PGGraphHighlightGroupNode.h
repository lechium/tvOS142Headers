/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphHighlightNode.h>

@class PGGraphHighlightTypeNode, NSArray;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly) PGGraphHighlightTypeNode * typeNode; 
@property (readonly) NSArray * highlightNodes; 
@property (readonly) NSArray * sortedHighlightNodes; 
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
-(id)label;
-(BOOL)isAggregation;
-(PGGraphHighlightTypeNode *)typeNode;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(BOOL)isPartOfTrip;
-(BOOL)isPartOfLongTrip;
-(BOOL)isPartOfShortTrip;
-(BOOL)isPartOfAggregation;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)momentNodes;
-(NSArray *)highlightNodes;
-(NSArray *)sortedHighlightNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
@end

