/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMFHTTPServerDelegate <NSObject>
@required
-(void)server:(id)arg1 didOpenConnection:(id)arg2;
-(void)server:(id)arg1 didCloseConnection:(id)arg2;
-(void)server:(id)arg1 didStopWithError:(id)arg2;
-(BOOL)server:(id)arg1 shouldAcceptConnection:(id)arg2;

@end

