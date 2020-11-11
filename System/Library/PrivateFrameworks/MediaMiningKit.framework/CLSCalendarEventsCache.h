/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject {

	NSMutableSet* _years;

}

@property (nonatomic,readonly) NSMutableSet * years;              //@synthesize years=_years - In the implementation block
-(id)debugDescription;
-(id)init;
-(NSMutableSet *)years;
-(void)enumerateEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)insertEvent:(id)arg1 ;
-(id)eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)eventsForDate:(id)arg1 ;
-(BOOL)hasEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)_enumerateDaysFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_storeDayForDate:(id)arg1 createIfNeeded:(BOOL)arg2 ;
@end

