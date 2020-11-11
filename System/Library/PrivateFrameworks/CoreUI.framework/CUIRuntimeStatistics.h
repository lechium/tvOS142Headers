/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface CUIRuntimeStatistics : NSObject {

	Aq _wasted_size;
	Aq _total_size;
	Aq _shortCircuitImageLookup;
	Aq _total_lookup;
	Aq _total_probes;
	Aq _total_initial_lookups;
	Aq _missed_lookup;
	NSObject*<OS_dispatch_queue> _queue;
	int _notify_token;

}
+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(id)init;
-(void)dealloc;
-(void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2 ;
-(void)incrementStatisticDidShortCircuitImageLookup;
-(void)incrementStatisticLookup;
-(void)incrementStaticsInitialLookup;
-(void)incrementStaticsProbe;
-(long long)shortCircuitImageLookup;
-(void)incrementMissedLookup;
@end

