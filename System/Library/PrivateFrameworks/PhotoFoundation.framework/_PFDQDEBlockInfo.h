/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PFDispatchQueueStatisticsBlockInfo.h>

@class _PFDQDECallSite;

@interface _PFDQDEBlockInfo : PFDispatchQueueStatisticsBlockInfo {

	_PFDQDECallSite* _callSite;

}

@property (readonly) _PFDQDECallSite * callSite;              //@synthesize callSite=_callSite - In the implementation block
-(id)init;
-(id)backtraceWithPrefix:(id)arg1 ;
-(_PFDQDECallSite *)callSite;
@end
