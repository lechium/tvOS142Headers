/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsClientContext : NSObject {

	A@ _cfprefsd;
	CFDictionaryRef _suiteCache;
	CFSetRef _observedSources;
	NSObject*<OS_xpc_object> _entitlements;
	CFBooleanRef _sandboxed;
	os_unfair_lock_s _lock;
	char _isPlatformBinary;
	BOOL _impersonatingAnotherProcess;
	BOOL _hasInFlightKVONotifications;
	BOOL _didDeferKVONotifications;
	BOOL _valid;

}
@end

