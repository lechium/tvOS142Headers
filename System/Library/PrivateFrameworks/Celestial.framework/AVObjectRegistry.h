/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {

	NSHashTable* _registeredObjects;
	NSRecursiveLock* _lock;

}
+(id)defaultObjectRegistry;
-(id)init;
-(void)dealloc;
-(void)registerObject:(id)arg1 ;
-(BOOL)safeRetainObject:(id)arg1 ;
-(void)safeInvokeWithDescription:(id)arg1 ;
-(void)safeInvokeWithDescriptionDelayed:(id)arg1 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4 ;
-(void)registerObjectForSafeRetain:(id)arg1 ;
-(void)unregisterObject:(id)arg1 ;
-(void)safePerformTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4 ;
-(void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
-(void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4 ;
@end

