/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MAElementFilter.h>

@class KGEdgeFilter, MARelation;

@interface MAEdgeFilter : MAElementFilter

@property (nonatomic,readonly) KGEdgeFilter * kgEdgeFilter; 
@property (nonatomic,readonly) MARelation * outRelation; 
@property (nonatomic,readonly) MARelation * inRelation; 
@property (nonatomic,readonly) MARelation * anyDirectionRelation; 
+(BOOL)scanInstance:(out id*)arg1 withScanner:(id)arg2 ;
-(void)appendVisualStringToString:(id)arg1 ;
-(BOOL)matchesEdge:(id)arg1 ;
-(KGEdgeFilter *)kgEdgeFilter;
-(MARelation *)outRelation;
-(MARelation *)inRelation;
-(MARelation *)anyDirectionRelation;
@end

