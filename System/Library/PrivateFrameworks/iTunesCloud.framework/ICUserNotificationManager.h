/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMapTable, NSObject;

@interface ICUserNotificationManager : NSObject {

	NSMapTable* _contextForUserNotification;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)sharedManager;
-(id)init;
-(void)displayUserNotification:(CFUserNotificationRef)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleCallbackForUserNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
@end
