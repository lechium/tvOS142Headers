/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDVideoStreamInterfaceDelegate <NSObject>
@required
-(void)videoStream:(id)arg1 didStart:(id)arg2;
-(void)videoStream:(id)arg1 didStop:(id)arg2;
-(void)videoStreamDidNetworkImprove:(id)arg1;
-(void)videoStreamDidNetworkDeteriorate:(id)arg1;
-(void)videoStreamDidUpdateConfiguration:(id)arg1;

@end
