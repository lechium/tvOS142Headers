/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSData, CBCentralManager, CBPeripheralManager, NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface CUBluetoothClient : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate> {

	NSData* _btAdvertisingAddress;
	CBCentralManager* _btCentralManager;
	BOOL _btCentralManagerNeeded;
	CBPeripheralManager* _btPeripheralManager;
	BOOL _btPeripheralManagerNeeded;
	BOOL _btConnectionEventsNeeded;
	BOOL _btConnectionDevicesInitialized;
	SCD_Struct_CU7* _btAccessoryCallbacks;
	BOOL _btAccessoryEventsNeeded;
	BOOL _btAccessoryEventsRegistered;
	BTAccessoryManagerImplRef _btAccessoryManager;
	BTSessionImplRef _btSession;
	BOOL _btSessionAddedServiceCallback;
	BOOL _btSessionAttaching;
	BOOL _btSessionNeeded;
	BOOL _btSessionStarted;
	BTLocalDeviceImplRef _btLocalDevice;
	NSData* _btLocalDeviceAddr;
	BOOL _btLocalDeviceAddrNeeded;
	SCD_Struct_CU10* _btLocalDeviceCallbacks;
	BOOL _btLocalDeviceCallbacksNeeded;
	BOOL _btLocalDeviceCallbacksRegistered;
	BTPairingAgentImplRef _btPairingAgent;
	BOOL _btPairingAgentNeeded;
	BOOL _btPairingAgentStarted;
	NSMutableDictionary* _btConnectedDevices;
	NSMutableDictionary* _btPairedDevices;
	BOOL _btPairedDevicesInitialized;
	NSMutableArray* _findDeviceRequests;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableArray* _relayMessages;
	NSMutableArray* _updateDevicesRequests;
	LogCategory* _ucat;
	int _bluetoothState;
	unsigned _flags;
	unsigned _requiredServices;
	unsigned _statusFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _bluetoothAddressChangedHandler;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _deviceConnectedHandler;
	/*^block*/id _deviceDisconnectedHandler;
	/*^block*/id _deviceEventHandler;
	/*^block*/id _devicePairedHandler;
	/*^block*/id _deviceUnpairedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _relayMessageReceivedHandler;
	/*^block*/id _updateTipiHandler;

}

@property (assign,nonatomic) int bluetoothState;                                      //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned requiredServices;                               //@synthesize requiredServices=_requiredServices - In the implementation block
@property (assign,nonatomic) unsigned statusFlags;                                    //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,copy) id bluetoothAddressChangedHandler;                         //@synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,copy) id deviceConnectedHandler;                                 //@synthesize deviceConnectedHandler=_deviceConnectedHandler - In the implementation block
@property (nonatomic,copy) id deviceDisconnectedHandler;                              //@synthesize deviceDisconnectedHandler=_deviceDisconnectedHandler - In the implementation block
@property (nonatomic,copy) id deviceEventHandler;                                     //@synthesize deviceEventHandler=_deviceEventHandler - In the implementation block
@property (nonatomic,copy) id devicePairedHandler;                                    //@synthesize devicePairedHandler=_devicePairedHandler - In the implementation block
@property (nonatomic,copy) id deviceUnpairedHandler;                                  //@synthesize deviceUnpairedHandler=_deviceUnpairedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id relayMessageReceivedHandler;                            //@synthesize relayMessageReceivedHandler=_relayMessageReceivedHandler - In the implementation block
@property (nonatomic,copy) id updateTipiHandler;                                      //@synthesize updateTipiHandler=_updateTipiHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(unsigned)flags;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)activate;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setFlags:(unsigned)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(int)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(unsigned)statusFlags;
-(void)setBluetoothState:(int)arg1 ;
-(BTDeviceImplRef)_btDeviceWithID:(id)arg1 error:(id*)arg2 ;
-(void)_btEnsureStopped;
-(unsigned)requiredServices;
-(void)setRequiredServices:(unsigned)arg1 ;
-(void)_externalInvokeBlock:(/*^block*/id)arg1 ;
-(id)_internalDispatchQueue;
-(void)findDeviceByAddress:(SCD_Struct_CU6)arg1 completion:(/*^block*/id)arg2 ;
-(void)_findDeviceByAddress:(SCD_Struct_CU6)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processFindDeviceRequests;
-(void)sendRelayMessage:(id)arg1 ;
-(void)_sendRelayMessage:(id)arg1 ;
-(void)_completeRelayMessage:(id)arg1 error:(id)arg2 ;
-(void)_processRelayMessages;
-(void)_processRelayMessage:(id)arg1 ;
-(void)setDeviceFlags:(unsigned)arg1 mask:(unsigned)arg2 deviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setDeviceFlags:(unsigned)arg1 mask:(unsigned)arg2 deviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDeviceState:(unsigned)arg1 deviceID:(id)arg2 peerAddress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setDeviceState:(unsigned)arg1 deviceID:(id)arg2 peerAddress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_processRequestSetDeviceState:(id)arg1 ;
-(void)setHighPriority:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setHighPriority:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHijackState:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setHijackState:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAccessoryID:(id)arg1 connectionDeviceAddresses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateAccessoryID:(id)arg1 connectionDeviceAddresses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_completeUpdateAccessoryDevicesRequest:(id)arg1 error:(id)arg2 ;
-(void)_processUpdateAccessoryDevicesRequests;
-(void)_processRequestSetHighPriorityState:(id)arg1 ;
-(void)_processRequestSetHijackState:(id)arg1 ;
-(void)_processUpdateAccessoryDevicesRequest:(id)arg1 ;
-(void)_btEnsureStarted;
-(void)_btAccessoryNameChanged:(BTDeviceImplRef)arg1 ;
-(void)_btAccessoryStreamStateChanged:(int)arg1 device:(BTDeviceImplRef)arg2 ;
-(void)_btAccessoryPlacementChanged:(BTAccessoryManagerImplRef)arg1 device:(BTDeviceImplRef)arg2 ;
-(id)_createCUBluetoothDeviceWithBTDevice:(BTDeviceImplRef)arg1 ;
-(void)_handleBluetoothAddressChanged;
-(void)_handleConnectedDevicesInit;
-(void)_handleDeviceConnected:(BTDeviceImplRef)arg1 ;
-(void)_handleDeviceDisconnected:(BTDeviceImplRef)arg1 reason:(int)arg2 ;
-(void)_handleDeviceEvent:(unsigned)arg1 device:(BTDeviceImplRef)arg2 ;
-(void)_handlePairingStatusChanged;
-(void)updateDevice:(id)arg1 btDevice:(BTDeviceImplRef)arg2 ;
-(void)updateStatusFlags;
-(void)setStatusFlags:(unsigned)arg1 ;
-(id)bluetoothAddressChangedHandler;
-(void)setBluetoothAddressChangedHandler:(id)arg1 ;
-(id)deviceConnectedHandler;
-(void)setDeviceConnectedHandler:(id)arg1 ;
-(id)deviceDisconnectedHandler;
-(void)setDeviceDisconnectedHandler:(id)arg1 ;
-(id)deviceEventHandler;
-(void)setDeviceEventHandler:(id)arg1 ;
-(id)devicePairedHandler;
-(void)setDevicePairedHandler:(id)arg1 ;
-(id)deviceUnpairedHandler;
-(void)setDeviceUnpairedHandler:(id)arg1 ;
-(id)relayMessageReceivedHandler;
-(void)setRelayMessageReceivedHandler:(id)arg1 ;
-(id)updateTipiHandler;
-(void)setUpdateTipiHandler:(id)arg1 ;
@end

