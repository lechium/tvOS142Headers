/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATFoundation/ATAssetLinkDelegate.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSMapTable, NSMutableDictionary, NSHashTable, NSObject, MSVXPCTransaction, NSString;

@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate, ICEnvironmentMonitorObserver> {

	NSMutableOrderedSet* _assetLinks;
	NSMutableOrderedSet* _assetQueue;
	NSMapTable* _assetsToLinks;
	NSMapTable* _assetsToFailedLinks;
	NSMutableDictionary* _activeTrackAssetsByAssetType;
	NSMutableDictionary* _trackAssetsPendingInstallByAssetType;
	NSMutableDictionary* _nonTrackAssetsPendingInstallByAssetType;
	NSMutableDictionary* _progressBlocksForAssetsInFlight;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _cachedThermalLevel;
	BOOL _isNetworkConstrained;
	BOOL _currentNetworkIsCellularType;
	MSVXPCTransaction* _activeDownLoadsKeepAliveTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)environmentMonitorDidChangeThermalLevel:(id)arg1 ;
-(id)allAssets;
-(void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3 ;
-(BOOL)_assetIsEnqueued:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(BOOL)_canEnqueueAsset:(id)arg1 ;
-(void)_assetsDidChange;
-(void)enqueueAssets:(id)arg1 ;
-(void)_prioritizeAsset:(id)arg1 onLinkClass:(Class)arg2 ;
-(void)cancelAssets:(id)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelAssets:(id)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateCountsForFinishedTrackAssetTypes:(id)arg1 ;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 cancelPendingAssetsInBatch:(BOOL)arg5 ;
-(void)_addFailedLink:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)_shouldReleaseKeepAliveTransaction;
-(unsigned long long)_getMaxThermalPressureThreshold;
-(BOOL)_canEnqueueAsset:(id)arg1 onLink:(id)arg2 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)_handleEnqueue:(id)arg1 onLink:(id)arg2 withPriority:(BOOL)arg3 ;
-(void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2 ;
-(void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2 ;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 ;
-(void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3 ;
-(void)assetLink:(id)arg1 didPauseAsseDownload:(id)arg2 error:(id)arg3 ;
-(void)assetLinkDidChange:(id)arg1 ;
-(void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2 ;
-(void)assetLink:(id)arg1 didUpdateDownloadPauseReasonForAssets:(id)arg2 ;
-(void)addAssetLink:(id)arg1 ;
-(void)removeAssetLink:(id)arg1 ;
-(id)allAssetLinks;
-(void)enqueueAssets:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueAssetForStoreDownload:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prioritizeAssetWithStoreForLibraryIdentifier:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelAllAssetsMatchingPredicate:(id)arg1 excludeActiveDownloads:(BOOL)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)assetIsEnqueued:(id)arg1 ;
-(id)filteredAssetsToDownloadForAssets:(id)arg1 ;
-(void)installCompleteForAssets:(id)arg1 ;
-(void)dispatchBlockOnControllerQueue:(/*^block*/id)arg1 ;
@end

