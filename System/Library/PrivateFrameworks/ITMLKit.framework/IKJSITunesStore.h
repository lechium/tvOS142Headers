/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSITunesStore.h>

@protocol IKJSITunesStore <JSExport>
@end

#import <libobjc.A.dylib/_IKJSITunesStoreProxy.h>

@class NSNumber, NSDictionary, SSMetricsController, NSString, IKURLBagCache;

@interface IKJSITunesStore : IKJSObject <NSObject, IKJSITunesStore, _IKJSITunesStoreProxy> {

	NSNumber* _lastAccountDSID;
	NSDictionary* _lastKnownStatusDictionary;
	SSMetricsController* _metricsController;
	NSString* _storeFrontSuffix;
	id _ssAccountStoreChangedToken;
	id _subscriptionStatusDidChangeToken;
	id _urlBagCacheUpdateToken;
	NSString* _cookieURL;
	IKURLBagCache* _bagCache;

}

@property (nonatomic,retain) IKURLBagCache * bagCache;              //@synthesize bagCache=_bagCache - In the implementation block
@property (nonatomic,retain) NSString * cookieURL;                  //@synthesize cookieURL=_cookieURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setITunesStoreHeaders:(id)arg1 ;
+(void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2 ;
-(void)dealloc;
-(void)setCookie:(id)arg1 ;
-(id)userAgent;
-(id)cookie;
-(id)DSID;
-(BOOL)isManagedAppleID;
-(id)eligibilityForService:(id)arg1 ;
-(void)setStorefront:(id)arg1 ;
-(id)accountInfo;
-(id)storefront;
-(id)initWithAppContext:(id)arg1 ;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2 ;
-(void)flushUnreportedEvents;
-(void)clearCookies;
-(void)getServiceEligibility:(id)arg1 :(id)arg2 ;
-(void)loadStoreContent:(id)arg1 :(id)arg2 ;
-(void)evaluateScripts:(id)arg1 :(id)arg2 ;
-(void)authenticate:(id)arg1 :(id)arg2 ;
-(void)signOut;
-(void)updateServiceEligibility:(id)arg1 ;
-(void)fetchMarketingItem:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5 ;
-(void)openMarketingItem:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)openDynamicUIURL:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(NSString *)arg1 ;
-(id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2 ;
-(void)_bagCacheUpdated;
-(void)_accountStoreChanged;
-(void)_subscriptionStatusDidChanged:(id)arg1 ;
-(id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(BOOL)arg2 ;
-(IKURLBagCache *)bagCache;
-(id)asPrivateIKJSITunesStore;
-(void)setBagCache:(IKURLBagCache *)arg1 ;
@end
