/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFContentLibraryFiltering : NSObject
+(void)performCustomFilteringUsingContentPredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2 forQuery:(id)arg3 withInput:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
+(void)performFallbackFilteringWithItems:(id)arg1 withContentPredicates:(id)arg2 compoundPredicateType:(unsigned long long)arg3 originalQuery:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
+(void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 compoundPredicate:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
+(void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end
