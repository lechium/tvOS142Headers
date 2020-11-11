/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class TVISScreenSaverConfiguration, TVISScreenSaverServiceProxy, NSObject, NSHashTable;

@interface TVISScreenSaverServiceController : NSObject {

	TVISScreenSaverConfiguration* _currentConfiguration;
	TVISScreenSaverServiceProxy* _serviceProxy;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) TVISScreenSaverServiceProxy * serviceProxy;                       //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                         //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                       //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) TVISScreenSaverConfiguration * currentConfiguration;              //@synthesize currentConfiguration=_currentConfiguration - In the implementation block
@property (nonatomic,readonly) id<TVISScreenSaver> activeScreenSaver; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(TVISScreenSaverConfiguration *)currentConfiguration;
-(TVISScreenSaverServiceProxy *)serviceProxy;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(id<TVISScreenSaver>)activeScreenSaver;
-(void)_configureRemoteProxy:(id)arg1 ;
-(void)forceDownloadAssetsWithIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleUpdateWithConfiguration:(id)arg1 error:(id)arg2 ;
-(void)_updateActiveScreenSaver;
-(void)_notifyObserversConfigurationDidUpdate:(id)arg1 ;
-(void)activateCategoryWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deactivateCategoryWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

