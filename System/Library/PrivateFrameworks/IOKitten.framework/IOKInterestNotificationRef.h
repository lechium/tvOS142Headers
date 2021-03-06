/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOKitten/IOKitten-Structs.h>
@class IOKInterestNotification;

@interface IOKInterestNotificationRef : NSObject {

	os_unfair_recursive_lock_s _lock;
	IOKInterestNotification* _notification;

}

@property (assign,nonatomic) IOKInterestNotification * notification;              //@synthesize notification=_notification - In the implementation block
-(id)init;
-(void)lock;
-(void)unlock;
-(IOKInterestNotification *)notification;
-(void)setNotification:(IOKInterestNotification *)arg1 ;
@end

