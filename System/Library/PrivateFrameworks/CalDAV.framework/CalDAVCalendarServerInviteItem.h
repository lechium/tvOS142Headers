/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem {

	NSMutableSet* _users;

}

@property (nonatomic,retain) NSMutableSet * users;              //@synthesize users=_users - In the implementation block
-(id)init;
-(NSMutableSet *)users;
-(void)setUsers:(NSMutableSet *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)addUser:(id)arg1 ;
@end

