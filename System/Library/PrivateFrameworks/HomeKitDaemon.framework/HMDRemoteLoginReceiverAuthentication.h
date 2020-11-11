/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@protocol HMDRemoteLoginReceiverAuthenticationDelegate;
@interface HMDRemoteLoginReceiverAuthentication : HMDRemoteLoginAuthentication {

	id<HMDRemoteLoginReceiverAuthenticationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<HMDRemoteLoginReceiverAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)logCategory;
-(id<HMDRemoteLoginReceiverAuthenticationDelegate>)delegate;
-(void)_saveRemoteVerifiedAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 ;
-(void)_completedAuthenticationRequest:(id)arg1 loggedInAccount:(id)arg2 ;
-(void)_authenticateAccount:(id)arg1 targetedAccountType:(unsigned long long)arg2 ;
-(void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAuthenticationResults:(id)arg1 error:(id)arg2 targetedAccountType:(unsigned long long)arg3 ;
-(void)_authenticateForAccountType:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

