/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@class NSMutableArray, CBCentralManager, NSString;

@interface GCControllerCBDelegate : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	NSMutableArray* _foundPeripherals;
	NSMutableArray* _connectedPeripherals;
	CBCentralManager* _centralManager;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CBCentralManager * centralManager;              //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2 ;
-(void)stopScan;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(void)startScan;
-(void)fireCompletionHandler;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)startScanWithTimeout:(double)arg1 ;
-(CBCentralManager *)centralManager;
@end

