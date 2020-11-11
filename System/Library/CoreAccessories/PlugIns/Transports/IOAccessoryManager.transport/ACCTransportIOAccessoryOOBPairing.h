/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOAccessoryManager/ACCTransportIOAccessoryBase.h>

@protocol ACCTransportIOAccessoryOOBPairingProtocol;
@class NSString, NSMutableData, NSNumber;

@interface ACCTransportIOAccessoryOOBPairing : ACCTransportIOAccessoryBase {

	char* _oobPairingInfoReadBuffer;
	unsigned long long _oobPairingInfoReadBufferLength;
	char* _oobPairingDataReadBuffer;
	unsigned long long _oobPairingDataReadBufferLength;
	int _activeType;
	id<ACCTransportIOAccessoryOOBPairingProtocol> _delegate;
	NSString* _endpointUUID;
	NSString* _parentConnectionUUID;
	NSString* _deviceVendorName;
	NSString* _deviceName;
	NSString* _deviceModelNumber;
	NSString* _deviceHardwareRevision;
	NSString* _deviceFirmwareRevision;
	NSString* _deviceSerialNumber;
	NSString* _deviceDockType;
	NSString* _deviceUID;
	NSMutableData* _deviceSupportedTypes;
	NSNumber* _supports2way;

}

@property (nonatomic,retain) NSString * deviceVendorName;                                                //@synthesize deviceVendorName=_deviceVendorName - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceModelNumber;                                               //@synthesize deviceModelNumber=_deviceModelNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceHardwareRevision;                                          //@synthesize deviceHardwareRevision=_deviceHardwareRevision - In the implementation block
@property (nonatomic,retain) NSString * deviceFirmwareRevision;                                          //@synthesize deviceFirmwareRevision=_deviceFirmwareRevision - In the implementation block
@property (nonatomic,retain) NSString * deviceSerialNumber;                                              //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceDockType;                                                  //@synthesize deviceDockType=_deviceDockType - In the implementation block
@property (nonatomic,retain) NSString * deviceUID;                                                       //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,retain) NSMutableData * deviceSupportedTypes;                                       //@synthesize deviceSupportedTypes=_deviceSupportedTypes - In the implementation block
@property (assign,nonatomic) int activeType;                                                             //@synthesize activeType=_activeType - In the implementation block
@property (nonatomic,retain) NSNumber * supports2way;                                                    //@synthesize supports2way=_supports2way - In the implementation block
@property (assign,nonatomic,__weak) id<ACCTransportIOAccessoryOOBPairingProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * endpointUUID;                                                    //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (assign,nonatomic,__weak) NSString * parentConnectionUUID;                                     //@synthesize parentConnectionUUID=_parentConnectionUUID - In the implementation block
-(id)description;
-(void)dealloc;
-(id<ACCTransportIOAccessoryOOBPairingProtocol>)delegate;
-(void)setDelegate:(id<ACCTransportIOAccessoryOOBPairingProtocol>)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setDeviceUID:(NSString *)arg1 ;
-(NSString *)deviceUID;
-(NSString *)deviceModelNumber;
-(void)setDeviceModelNumber:(NSString *)arg1 ;
-(NSString *)deviceSerialNumber;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(void)_checkAccInfo;
-(NSString *)endpointUUID;
-(void)_registerReadCallback;
-(int)_convertOOBPairingTypeFromIOAccessory:(int)arg1 ;
-(NSString *)parentConnectionUUID;
-(BOOL)supportsType:(int)arg1 ;
-(NSString *)deviceVendorName;
-(NSString *)deviceHardwareRevision;
-(NSString *)deviceFirmwareRevision;
-(NSString *)deviceDockType;
-(NSMutableData *)deviceSupportedTypes;
-(int)activeType;
-(NSNumber *)supports2way;
-(id)initWithDelegate:(id)arg1 andIOService:(unsigned)arg2 ;
-(BOOL)openServiceSession;
-(void)closeServiceSession;
-(BOOL)_handleIncomingOOBPairingInfoData:(int)arg1 ;
-(BOOL)transmitData:(id)arg1 ;
-(void)setActiveType:(int)arg1 ;
-(void)setEndpointUUID:(NSString *)arg1 ;
-(void)setParentConnectionUUID:(NSString *)arg1 ;
-(void)setDeviceVendorName:(NSString *)arg1 ;
-(void)setDeviceHardwareRevision:(NSString *)arg1 ;
-(void)setDeviceFirmwareRevision:(NSString *)arg1 ;
-(void)setDeviceDockType:(NSString *)arg1 ;
-(void)setDeviceSupportedTypes:(NSMutableData *)arg1 ;
-(void)setSupports2way:(NSNumber *)arg1 ;
@end
