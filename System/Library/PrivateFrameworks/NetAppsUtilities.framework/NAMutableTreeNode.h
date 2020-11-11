/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode

@property (nonatomic,retain) id representedObject; 
@property (nonatomic,copy) NSSet * childNodes; 
-(void)addChild:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)setChildNodes:(NSSet *)arg1 ;
-(void)removeChildrenPassingTest:(/*^block*/id)arg1 ;
@end

