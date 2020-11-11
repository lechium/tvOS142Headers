/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSProgress;

@interface PXCPLSyncActivity : PXObservable {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _syncProgressState;
	id _syncProgressSubscriber;
	NSProgress* _syncProgress;
	BOOL _isSyncing;

}

@property (nonatomic,readonly) BOOL isSyncing;              //@synthesize isSyncing=_isSyncing - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isSyncing;
-(void)setIsSyncing:(BOOL)arg1 ;
-(void)_setSyncProgress:(id)arg1 ;
-(void)_setSyncProgressState:(unsigned long long)arg1 ;
-(void)_queue_subscribeToSyncProgress;
-(void)_unsubscribeFromSyncProgress;
-(void)_updateIsSyncing;
-(void)_updateSyncProgressState;
@end

