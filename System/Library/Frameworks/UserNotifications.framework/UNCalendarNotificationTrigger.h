/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,copy,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithDateMatchingComponents:(id)arg1 repeats:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)nextTriggerDate;
-(id)_initWithDateComponents:(id)arg1 repeats:(BOOL)arg2 ;
-(NSDateComponents *)dateComponents;
@end

