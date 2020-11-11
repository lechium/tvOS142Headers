/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue, NSMutableDictionary, NSMapTable, GKResourceCache;

@interface GKResourceLoader : NSObject {

	long long _requestCountMap[3];
	BOOL _isInBackground;
	NSOperationQueue* _accessQueue;
	NSOperationQueue* _notificationQueue;
	NSOperationQueue* _requestQueue;
	NSMutableDictionary* _pendingOperations;
	NSMapTable* _requestsByCacheKey;
	GKResourceCache* _cachedResources;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingOperations;              //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (nonatomic,readonly) NSMapTable * requestsByCacheKey;                      //@synthesize requestsByCacheKey=_requestsByCacheKey - In the implementation block
@property (nonatomic,readonly) GKResourceCache * cachedResources;                    //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * accessQueue;                       //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * notificationQueue;                 //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestQueue;                      //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
@property (nonatomic,readonly) BOOL isInBackground;                                  //@synthesize isInBackground=_isInBackground - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)requestQueue;
-(void)_commonInit;
-(BOOL)isInBackground;
-(NSOperationQueue *)accessQueue;
-(NSOperationQueue *)notificationQueue;
-(BOOL)isIdle;
-(NSMutableDictionary *)pendingOperations;
-(void)cancelAllRequests;
-(GKResourceCache *)cachedResources;
-(NSMapTable *)requestsByCacheKey;
-(id)requestKeyForCacheKey:(id)arg1 ;
-(void)postDidLoadAllForReason:(long long)arg1 ;
-(void)reprioritizeOperations;
-(void)updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(long long)currentQualityOfService;
-(void)finishLoadForRequest:(id)arg1 withResource:(id)arg2 error:(id)arg3 ;
-(void)postDidBeginLoadingIfIdle;
-(void)postDidIdleIfIdle;
-(id)initWithRequestQueue:(id)arg1 accessQueue:(id)arg2 notificationQueue:(id)arg3 cacheLimit:(long long)arg4 ;
-(id)initWithParentResourceLoader:(id)arg1 ;
-(void)addResource:(id)arg1 forCacheKey:(id)arg2 ;
-(void)removeResourcesForCacheKey:(id)arg1 ;
-(id)cachedResourcesForCacheKey:(id)arg1 ;
-(void)removeAllCachedResources;
-(void)cancelRequestForCacheKey:(id)arg1 ;
-(void)enterBackground;
-(void)enterForeground;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(BOOL)setReason:(long long)arg1 forRequestWithKey:(id)arg2 ;
@end

