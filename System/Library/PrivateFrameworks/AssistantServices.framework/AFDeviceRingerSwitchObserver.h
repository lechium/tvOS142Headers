/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AFNotifyObserver, NSHashTable, NSString;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	AFNotifyObserver* _notifyObserver;
	NSHashTable* _listeners;
	BOOL _isActive;

}

@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(id)init;
-(long long)state;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)_updateStateWithNotifyState:(unsigned long long)arg1 ;
@end

