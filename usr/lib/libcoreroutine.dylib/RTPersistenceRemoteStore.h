/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPersistentStoreCoordinator, NSManagedObjectID, RTDarwinNotificationHelper;

@interface RTPersistenceRemoteStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectID* _currentDeviceManagedObjectId;
	RTDarwinNotificationHelper* _notificationHelper;

}
-(id)init;
-(id)createManagedObjectContext;
-(id)initWithReadOnly:(BOOL)arg1 ;
-(id)_createManagedObjectContext;
-(void)updateCurrentDeviceMOIDWithContext:(id)arg1 ;
@end
