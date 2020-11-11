/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSString, NSMutableArray, NSArray, NSDate;

@interface CADNotificationGatheringContext : NSObject {

	NSString* _sourceExternalIdentifier;
	BOOL _excludingDelegateSources;
	BOOL _filteredByShowsNotificationsFlag;
	NSMutableArray* _notificationTypes;
	NSMutableArray* _rowIDs;
	NSMutableArray* _occurrenceDates;
	double _earliestExpirationDate;
	CalDatabase* _database;
	double _now;

}

@property (nonatomic,readonly) CalDatabase* database;                              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSArray * notificationTypes; 
@property (nonatomic,readonly) NSArray * rowIDs; 
@property (nonatomic,readonly) NSArray * occurrenceDates; 
@property (nonatomic,readonly) double now;                                         //@synthesize now=_now - In the implementation block
@property (nonatomic,readonly) NSDate * earliestExpiringNotification; 
-(double)now;
-(CalDatabase*)database;
-(id)initWithDatabase:(CalDatabase*)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 filteredByShowsNotificationsFlag:(BOOL)arg4 ;
-(NSArray *)notificationTypes;
-(NSDate *)earliestExpiringNotification;
-(NSArray *)rowIDs;
-(NSArray *)occurrenceDates;
-(BOOL)shouldSkipNotificationForStore:(const void*)arg1 ;
-(double)expirationTimestampForEvent:(const void*)arg1 withInitialOccurrenceDate:(double)arg2 ;
-(void)addNotificationWithType:(int)arg1 rowID:(int)arg2 occurrenceDate:(double)arg3 expirationDate:(double)arg4 ;
-(void)addNotificationWithType:(int)arg1 rowID:(int)arg2 expirationDate:(double)arg3 ;
-(double)expirationTimestampForEvent:(const void*)arg1 ;
-(double)expirationTimestampForRecurrence:(const void*)arg1 event:(const void*)arg2 ;
-(double)endDateOfLastOccurrenceInCacheForEvent:(const void*)arg1 ;
@end

