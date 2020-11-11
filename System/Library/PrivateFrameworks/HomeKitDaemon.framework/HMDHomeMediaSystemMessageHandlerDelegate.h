/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDHomeMediaSystemMessageHandlerDelegate
@required
-(void)messageHandlerAddMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(/*^block*/id)arg8;
-(void)messageHandlerRemoveMediaSystem:(id)arg1 builderSession:(id)arg2 completion:(/*^block*/id)arg3;
-(void)messageHandlerUpdateMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(/*^block*/id)arg8;

@end

