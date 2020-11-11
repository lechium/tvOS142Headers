/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMDLogEventDispatcher;


@protocol HMDLogEventSubmitting <NSObject>
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
@optional
-(void)submitLogEvent:(id)arg1;
-(void)submitLogEvent:(id)arg1 error:(id)arg2;
-(HMDLogEventDispatcher *)logEventDispatcher;

@end
