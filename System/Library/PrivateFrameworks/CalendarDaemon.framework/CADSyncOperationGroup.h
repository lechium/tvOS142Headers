/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSyncInterface.h>

@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(void)CADDatabaseGetDeletableCalendars:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetDeletableSources:(/*^block*/id)arg1 ;
@end

