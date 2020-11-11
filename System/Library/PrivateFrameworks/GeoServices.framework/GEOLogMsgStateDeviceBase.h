/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {

	int _deviceBatteryState;
	int _deviceInterfaceOrientation;
	BOOL _deviceInVehicle;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation; 
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState; 
@property (assign,nonatomic) BOOL hasDeviceInVehicle; 
@property (assign,nonatomic) BOOL deviceInVehicle; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(void)setDeviceBatteryState:(int)arg1 ;
-(void)setDeviceInVehicle:(BOOL)arg1 ;
-(int)deviceInterfaceOrientation;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(id)deviceInterfaceOrientationAsString:(int)arg1 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg1 ;
-(int)deviceBatteryState;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(BOOL)hasDeviceBatteryState;
-(id)deviceBatteryStateAsString:(int)arg1 ;
-(int)StringAsDeviceBatteryState:(id)arg1 ;
-(BOOL)deviceInVehicle;
-(void)setHasDeviceInVehicle:(BOOL)arg1 ;
-(BOOL)hasDeviceInVehicle;
@end
