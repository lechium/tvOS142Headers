/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEAppProxyProviderContainerDelegate
@required
-(void)container:(id)arg1 didStartWithError:(id)arg2;
-(void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2;
-(void)container:(id)arg1 didFailWithError:(id)arg2;
-(void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

