/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface KGPerformChangesRequest : NSObject

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)recordNodeRequest:(id)arg1 ;
-(void)recordEdgeRequest:(id)arg1 ;
-(BOOL)_applyChangesForGraph:(id)arg1 error:(id*)arg2 ;
-(BOOL)commitRequestInGraph:(id)arg1 error:(id*)arg2 ;
@end

