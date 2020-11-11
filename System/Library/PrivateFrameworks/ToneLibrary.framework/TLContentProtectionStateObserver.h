/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface TLContentProtectionStateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSMutableDictionary* _blocksScheduledForProtectedContentUnlockedEvent;
	long long _contentProtectionStatus;
	long long _unlockedSinceBootStatus;
	int _firstUnlockNotifyToken;

}
+(id)sharedContentProtectionStateObserver;
-(id)init;
-(void)dealloc;
-(id)performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_cancelFirstUnlockNotifyToken;
-(id)_performBlockAfterProtectedContentUnlocked:(/*^block*/id)arg1 ;
-(void)_loadContentProtectionStatusIfNeeded;
-(void)_loadUnlockedSinceBootStatusIfNeeded;
-(void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1 ;
-(void)_handleFirstUnlockNotification;
-(void)_updateUnlockedSinceBootStatus;
-(long long)_queryCurrentUnlockedSinceBootStatus;
-(void)_registerFirstUnlockNotifyToken;
-(void)_assertNotRunningOnAccessQueue;
@end

