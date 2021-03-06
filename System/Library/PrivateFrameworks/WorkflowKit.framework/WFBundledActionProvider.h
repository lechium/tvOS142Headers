/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionProvider.h>

@class NSSet;

@interface WFBundledActionProvider : WFActionProvider

@property (nonatomic,readonly) NSSet * identifiersOfActionsDisabledOnWatch; 
-(id)currentVersion;
-(id)cacheURL;
-(void)updateCache:(/*^block*/id)arg1 ;
-(id)cacheDirectoryURL;
-(void)deleteCache;
-(NSSet *)identifiersOfActionsDisabledOnWatch;
-(id)actionDefinitionsWithIdentifiers:(id)arg1 ;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg1 ;
-(id)bundledURL;
-(id)createAllAvailableActions;
@end

