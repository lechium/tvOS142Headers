/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, EKEventStore, EKCalendarNotification, EKObjectID;

@interface EKCalendarNotificationReference : NSObject {

	NSDate* _date;
	EKEventStore* _eventStore;
	EKCalendarNotification* _notification;
	int _type;
	EKObjectID* _objectID;

}

@property (nonatomic,readonly) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) EKCalendarNotification * notification; 
@property (nonatomic,readonly) EKObjectID * objectID;                              //@synthesize objectID=_objectID - In the implementation block
-(id)description;
-(int)type;
-(EKObjectID *)objectID;
-(EKCalendarNotification *)notification;
-(id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4 ;
-(long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2 ;
-(id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3 ;
@end

