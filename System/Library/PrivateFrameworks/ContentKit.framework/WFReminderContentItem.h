/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class REMReminder, REMStore;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass> {

	REMReminder* _reminder;
	REMStore* _reminderStore;

}

@property (nonatomic,readonly) REMReminder * reminder;                //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) REMStore * reminderStore;              //@synthesize reminderStore=_reminderStore - In the implementation block
-(REMStore *)reminderStore;
-(REMReminder *)reminder;
@end

