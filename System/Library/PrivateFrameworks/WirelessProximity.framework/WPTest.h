/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WirelessProximity/WPClient.h>

@protocol WPTestDelegate;
@class NSMutableDictionary;

@interface WPTest : WPClient {

	id<WPTestDelegate> _delegate;
	NSMutableDictionary* _transfers;

}

@property (assign,nonatomic,__weak) id<WPTestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * transfers;                           //@synthesize transfers=_transfers - In the implementation block
+(long long)holdVouchers;
-(id)init;
-(void)invalidate;
-(id<WPTestDelegate>)delegate;
-(void)setDelegate:(id<WPTestDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopAdvertisingOfType:(unsigned char)arg1 ;
-(void)stopScanningForType:(unsigned char)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2 ;
-(NSMutableDictionary *)transfers;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)startAdvertisingOfType:(unsigned char)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 options:(id)arg5 ;
-(void)startScanningForType:(unsigned char)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7 scanCache:(BOOL)arg8 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)connectedDeviceOverLEPipe:(id)arg1 ;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2 ;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
@end

