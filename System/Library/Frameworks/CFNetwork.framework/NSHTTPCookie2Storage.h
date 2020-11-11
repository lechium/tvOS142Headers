/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSPersistentHTTPCookie2Storage, NSMemoryHTTPCookie2Storage, NSObject;

@interface NSHTTPCookie2Storage : NSObject {

	NSPersistentHTTPCookie2Storage* persistentStore;
	NSMemoryHTTPCookie2Storage* memoryStore;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _defaultNotificationHandler;

}
+(id)sharedNSHTTPCookie2Storage;
-(id)init;
-(void)deleteAllCookiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteCookie:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getCookiesWithFilter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAllCookiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCookies:(id)arg1 withFilter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCookie:(id)arg1 withFilter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initInNSMemoryHTTPCookie2Storage;
-(id)initWithPath:(id)arg1 ;
-(id)initWithIdentifyingData:(id)arg1 ;
-(id)identifyingData;
-(void)deleteCookiesWithFilter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

