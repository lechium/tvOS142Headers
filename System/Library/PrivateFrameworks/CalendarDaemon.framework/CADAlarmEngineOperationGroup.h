/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADAlarmEngineInterface.h>

@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(BOOL)_hasAccessToAlarmsOnCalendar:(void*)arg1 ;
-(void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseGetLocationBasedAlarmsWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(/*^block*/id)arg1 ;
@end
