/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDatabaseResultFetchOperation.h>

@class NSFetchRequest;

@interface WFDatabaseResultFetchRequestOperation : WFDatabaseResultFetchOperation {

	NSFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(id)description;
-(NSFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 ;
-(id)entity;
-(id)resultsWithContext:(id)arg1 error:(id*)arg2 ;
-(long long)countWithContext:(id)arg1 error:(id*)arg2 ;
@end
