/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPEventStorage, _PASLock, PPCalendarInternPool, NSObject;

@interface PPEventCache : NSObject {

	PPEventStorage* _storage;
	_PASLock* _data;
	PPCalendarInternPool* _calendarInternPool;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureStatus;

}
-(void)removeAllObjects;
-(id)initWithEventStorage:(id)arg1 ;
-(void)setExtraSecondsToBackfill:(unsigned long long)arg1 ;
-(void)_handleMemoryPressureStatus;
-(id)objectForRange:(NSRange)arg1 ;
-(id)evictEventWithIdentifier:(id)arg1 ;
-(id)refreshCacheWithChanges:(id)arg1 changesContainDeletion:(BOOL*)arg2 ;
-(void)_refreshCachedEvent:(id)arg1 ;
-(void)evictAllEventsNotInRange:(NSRange)arg1 ;
-(void)evictAllEventsNotInRanges:(id)arg1 ;
-(void)setEventHighlight:(id)arg1 ;
-(id)cachedEventHighlightForEvent:(id)arg1 rankingOptions:(int)arg2 ;
@end
