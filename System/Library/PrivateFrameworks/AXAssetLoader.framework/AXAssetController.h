/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AXAssetLoader/AXAssetLoader-Structs.h>
@class NSHashTable, NSArray, NSMutableSet, NSObject, AXDispatchTimer, AXAssetPolicy;

@interface AXAssetController : NSObject {

	os_unfair_lock_s _assetsLock;
	NSHashTable* _observers;
	NSArray* _cachedAvailableAssets;
	NSMutableSet* _cachedInProgressAssets;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	AXDispatchTimer* _refreshDispatchTimer;
	int _notifyToken;
	BOOL _userInitiated;
	AXAssetPolicy* _assetPolicy;
	NSObject*<OS_dispatch_queue> _mobileAssetQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> mobileAssetQueue;              //@synthesize mobileAssetQueue=_mobileAssetQueue - In the implementation block
@property (nonatomic,readonly) AXAssetPolicy * assetPolicy;                                //@synthesize assetPolicy=_assetPolicy - In the implementation block
@property (assign,nonatomic) BOOL userInitiated;                                           //@synthesize userInitiated=_userInitiated - In the implementation block
@property (nonatomic,readonly) BOOL hasInProgressDownloads; 
+(id)assetControllerWithPolicy:(id)arg1 ;
+(id)assetControllerWithPolicy:(id)arg1 qosClass:(unsigned)arg2 ;
-(id)description;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(void)registerForNotifications;
-(void)refreshAssetsByForceUpdatingCatalog:(BOOL)arg1 updatingCatalogIfNeeded:(BOOL)arg2 ;
-(void)logError:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(AXAssetPolicy *)assetPolicy;
-(BOOL)hasInProgressDownloads;
-(void)purgeAssets:(id)arg1 ;
-(void)downloadAssets:(id)arg1 successStartBlock:(/*^block*/id)arg2 ;
-(id)_initWithAssetPolicy:(id)arg1 qosClass:(unsigned)arg2 ;
-(void)_refreshQueue_refreshAssets:(BOOL)arg1 ;
-(void)deregisterForNotifications;
-(void)refreshAssetsByForceUpdatingCatalog:(BOOL)arg1 updatingCatalogIfNeeded:(BOOL)arg2 catalogRefreshOverrideTimeout:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)mobileAssetQueue;
-(void)_updateCatalogWithOverrideTimeout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_refreshAssets:(BOOL)arg1 ;
-(void)performWithinLock:(/*^block*/id)arg1 ;
-(void)_queue_downloadAssets:(id)arg1 successStartBlock:(/*^block*/id)arg2 ;
-(void)_queue_purgeAssets:(id)arg1 ;
-(void)_queue_updateDownloadPriorityIfNecessary;
-(void)_handleAssetProgressUpdate:(id)arg1 progressNotification:(id)arg2 ;
-(void)performBlockOnAssetObservers:(/*^block*/id)arg1 ;
-(void)addInProgressAsset:(id)arg1 ;
-(void)logDebug:(id)arg1 ;
-(void)removeInProgressAsset:(id)arg1 ;
-(void)replaceCachedAssetsWithAssets:(id)arg1 error:(id)arg2 ;
-(void)_handleAssetDownloadStarted:(id)arg1 ;
-(void)_handleAssetDownloadCompletion:(id)arg1 downloadResult:(long long)arg2 ;
-(void)getCachedAvailableAssets:(/*^block*/id)arg1 ;
-(void)getCachedDownloadedAssets:(/*^block*/id)arg1 ;
@end

