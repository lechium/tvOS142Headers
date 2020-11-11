/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSNotificationScheduleRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_dateFormatter;
-(void)performMigration;
-(id)allBundleIdentifiers;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)scheduleForBundleIdentifier:(id)arg1 ;
-(void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_scheduleForBundleIdentifier:(id)arg1 ;
-(void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeScheduleForBundleIdentifier:(id)arg1 ;
-(void)removeScheduleForBundleIdentifier:(id)arg1 ;
@end

