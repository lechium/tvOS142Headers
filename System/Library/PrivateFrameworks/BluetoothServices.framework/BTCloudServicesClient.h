/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSXPCListenerEndpoint;

@interface BTCloudServicesClient : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_ensureXPCStarted;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)accountInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)createDeviceRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)modifyDeviceRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteDeviceRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deviceRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deviceRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)createDeviceSupportInformationRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)modifyDeviceSupportInformationRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteDeviceSupportInformationRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deviceSupportInformationRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deviceSupportInformationRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)createMagicSettingsRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)modifyMagicSettingsRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMagicSettingsRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)magicSettingsRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)magicSettingsRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudPairingIdentifierForPeripheral:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

