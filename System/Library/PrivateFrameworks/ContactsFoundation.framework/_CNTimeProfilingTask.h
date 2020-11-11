/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNTask.h>

@protocol CNTimeProvider, CNTaskTimeProfileLogging;
@class CNTask;

@interface _CNTimeProfilingTask : CNTask {

	CNTask* _task;
	id<CNTimeProvider> _timeProvider;
	id<CNTaskTimeProfileLogging> _logger;

}

@property (readonly) CNTask * task;                                    //@synthesize task=_task - In the implementation block
@property (readonly) id<CNTimeProvider> timeProvider;                  //@synthesize timeProvider=_timeProvider - In the implementation block
@property (readonly) id<CNTaskTimeProfileLogging> logger;              //@synthesize logger=_logger - In the implementation block
-(id)init;
-(id)run;
-(id)initWithName:(id)arg1 ;
-(id<CNTaskTimeProfileLogging>)logger;
-(CNTask *)task;
-(id<CNTimeProvider>)timeProvider;
-(id)initWithTask:(id)arg1 timeProvider:(id)arg2 os_log:(id)arg3 ;
-(id)initWithTask:(id)arg1 timeProvider:(id)arg2 logger:(id)arg3 ;
@end

