/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {

	NSMutableArray* _edges;
	NSMutableSet* _nodes;

}
+(id)path;
+(id)pathWithEdges:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isEmpty;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)setEdges:(id)arg1 ;
-(id)edgeAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(id)targetNode;
-(id)sourceNode;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(BOOL)isEqualToPath:(id)arg1 ;
-(unsigned long long)edgesCount;
-(unsigned long long)nodesCount;
-(id)edgesForLabel:(id)arg1 ;
-(double)edgesWeight;
-(BOOL)containsEdge:(id)arg1 ;
-(void)addFirstEdge:(id)arg1 ;
-(void)addLastEdge:(id)arg1 ;
-(void)removeFirstEdge;
-(void)removeLastEdge;
-(void)removeAllEdges;
-(id)graphRepresentation;
@end

