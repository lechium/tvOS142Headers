/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginProxyAuthenticationRequest;

@interface HMDRemoteLoginReceiverProxyAuthentication : HMDRemoteLoginReceiverAuthentication {

	HMDRemoteLoginProxyAuthenticationRequest* _request;

}

@property (nonatomic,readonly) HMDRemoteLoginProxyAuthenticationRequest * request;              //@synthesize request=_request - In the implementation block
+(id)logCategory;
-(id)description;
-(void)dealloc;
-(HMDRemoteLoginProxyAuthenticationRequest *)request;
-(void)_authenticate;
-(void)authenticate;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6 ;
@end

