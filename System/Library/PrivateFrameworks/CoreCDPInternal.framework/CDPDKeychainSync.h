/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CDPDCircleProxy;
@interface CDPDKeychainSync : NSObject {

	id<CDPDCircleProxy> _circleProxy;

}
+(id)keyChainSync;
+(id)keyChainSyncWithProxy:(id)arg1 ;
+(id)_defaultUserVisibleViewSet;
-(BOOL)isUserVisibleKeychainSyncEnabled;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeNonViewAwarePeersFromCircleWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)synchronizeKeychainViewSetWithOtherPeers:(id*)arg1 ;
-(BOOL)matchKeychainViewState:(BOOL)arg1 ;
-(BOOL)_isThisDeviceInCircle;
-(BOOL)_setKeychainSyncState:(BOOL)arg1 ;
-(void)_preflightCircleStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_processAuthFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

