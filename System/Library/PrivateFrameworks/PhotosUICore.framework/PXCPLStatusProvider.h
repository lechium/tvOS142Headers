/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/PXAssetCountObserverDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCPLStatusProvider.h>
@class PXCPLStatus;


@protocol PXCPLStatusProvider <NSObject>
@property (nonatomic,readonly) PXCPLStatus * status; 
@required
-(PXCPLStatus *)status;

@end


@protocol OS_dispatch_queue;
@class PXCPLStatus, NSObject, CPLStatus, PXCPLSyncActivity, PXAssetCountObserver, PHPhotoLibrary, PLPhotoLibrary, NSString;

@interface PXCPLStatusProvider : PXObservable <CPLStatusDelegate, PXAssetCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider> {

	PXCPLStatus* _status;
	NSObject*<OS_dispatch_queue> _serialUpdateQueue;
	CPLStatus* _cplStatus;
	PXCPLSyncActivity* _syncActivity;
	PXAssetCountObserver* _numberOfReferencedItemsObserver;
	unsigned long long _numberOfReferencedItems;
	BOOL _hasCloudQuotaOffer;
	BOOL _cloudQuotaOfferHasAssetCounts;
	PHPhotoLibrary* _ph_photoLibrary;
	PLPhotoLibrary* _pl_photoLibrary;
	unsigned long long _needsUpdate;
	double _lastUpdate;
	BOOL _isUpdating;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PXCPLStatus * status;                //@synthesize status=_status - In the implementation block
+(id)currentStatusProvider;
-(id)init;
-(PXCPLStatus *)status;
-(void)statusDidChange:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)assetCountObserver:(id)arg1 didChangeNumberOfAssets:(long long)arg2 ;
-(id)_initWithInitialUpdateType:(unsigned long long)arg1 isSynchronous:(BOOL)arg2 ;
-(id)_initWithInitialSynchronousUpdateType:(unsigned long long)arg1 ;
-(void)_setStatus:(id)arg1 producedForUpdateType:(unsigned long long)arg2 ;
-(id)_updateStatus:(id)arg1 requestedTypes:(unsigned long long)arg2 ;
-(void)_performUpdate;
-(void)_schedulePendingUpdates;
-(void)_scheduleUpdateForType:(unsigned long long)arg1 ;
-(void)_powerStateDidChange:(id)arg1 ;
@end

