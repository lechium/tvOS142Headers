/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@interface _NSXPCStorePredicateRemapper : NSObject <NSPredicateVisitor>
+(void)initialize;
+(id)defaultInstance;
-(id)init;
-(void)dealloc;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
@end

