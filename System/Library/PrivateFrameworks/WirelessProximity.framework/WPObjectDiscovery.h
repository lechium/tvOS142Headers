/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WirelessProximity/WPClient.h>

@protocol WPObjectDiscoveryDelegate, OS_dispatch_queue;
@class NSObject;

@interface WPObjectDiscovery : WPClient {

	id<WPObjectDiscoveryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<WPObjectDiscoveryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)invalidate;
-(id<WPObjectDiscoveryDelegate>)delegate;
-(void)setDelegate:(id<WPObjectDiscoveryDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startScanning;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)stopScanning;
-(void)startScanningWithMode:(long long)arg1 ;
-(void)startScanningWithMode:(long long)arg1 Timeout:(double)arg2 ;
-(void)devicesDiscovered:(id)arg1 ;
@end
