/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSHTTPCookieStorage.h>

@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage {

	unsigned long long _acceptPolicy;
	BOOL _behavesLikeNS;
	NSHTTPCookie2Storage* _store;

}
-(id)init;
-(void)dealloc;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(id)_initWithCFHTTPCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_cookieStorage;
-(void)setCookie:(id)arg1 ;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4 ;
-(void)_testingOfStoringOfCookie:(id)arg1 ;
-(void)storeCookies:(id)arg1 forTask:(id)arg2 ;
-(void)_saveCookies:(/*^block*/id)arg1 ;
-(void)_saveCookies;
-(id)cookies;
-(id)cookiesForURL:(id)arg1 ;
-(void)getCookiesForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_getCookiesForPartition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCookie:(id)arg1 ;
-(void)removeCookiesSinceDate:(id)arg1 ;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(unsigned long long)cookieAcceptPolicy;
-(void)_setPrivateBrowsingEnabled:(BOOL)arg1 ;
@end

