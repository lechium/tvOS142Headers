/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CWFXPCListenerDelegate <NSObject>
@required
-(void)XPCListener:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;
-(void)XPCListener:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3;
-(void)XPCListener:(id)arg1 invalidatedXPCConnection:(id)arg2;

@end
