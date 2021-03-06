/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAP2AccessoryServerBrowserDelegate <NSObject>
@optional
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didLoseUnpairedAccessoryServer:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didLosePairedAccessoryServer:(id)arg2 error:(id)arg3;

@required
-(void)accessoryServerBrowser:(id)arg1 didDiscoverUnpairedAccessoryServer:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didDiscoverPairedAccessoryServer:(id)arg2;

@end

