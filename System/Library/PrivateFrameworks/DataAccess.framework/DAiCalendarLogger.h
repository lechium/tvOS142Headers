/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICSLoggingDelegate.h>

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
+(id)sharedLogger;
-(void)logICSMessage:(id)arg1 atLevel:(long long)arg2 ;
-(void)registerWithiCalendar;
@end

