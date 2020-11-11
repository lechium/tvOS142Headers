/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADObjectInterface.h>

@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADObjectExists:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObjectsExist:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObject:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getStringPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getNumberPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getDatePropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getDataPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(id)arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObjectIsManaged:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

