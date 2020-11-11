/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSArray;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup {

	NSURL* _folderURL;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) id<CalDAVRecurrenceSplitTaskGroupDelegate> delegate; 
-(void)startTaskGroup;
-(id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
@end

