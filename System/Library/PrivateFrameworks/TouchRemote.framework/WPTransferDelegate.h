/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WPTransferDelegate <NSObject>
@required
-(void)transferDidFailToStartAdvertising:(id)arg1;
-(void)transferDidFailToStartScanning:(id)arg1;
-(void)transferDidFailWithError:(id)arg1;
-(id)transferDidReceiveData:(id)arg1;
-(void)transferComplete;
-(void)transferDidUpdateAdvertiserState:(id)arg1;
-(void)transferDidUpdateScannerState:(id)arg1;

@end

