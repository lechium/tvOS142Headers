/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5WiFiStatus, W5AWDLStatus, W5BluetoothStatus, W5NetworkStatus, W5PowerStatus;

@interface W5Status : NSObject <NSCopying, NSSecureCoding> {

	W5WiFiStatus* _wifi;
	W5AWDLStatus* _awdl;
	W5BluetoothStatus* _bluetooth;
	W5NetworkStatus* _network;
	W5PowerStatus* _power;

}

@property (nonatomic,copy) W5WiFiStatus * wifi;                        //@synthesize wifi=_wifi - In the implementation block
@property (nonatomic,copy) W5AWDLStatus * awdl;                        //@synthesize awdl=_awdl - In the implementation block
@property (nonatomic,copy) W5BluetoothStatus * bluetooth;              //@synthesize bluetooth=_bluetooth - In the implementation block
@property (nonatomic,copy) W5NetworkStatus * network;                  //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) W5PowerStatus * power;                      //@synthesize power=_power - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(W5PowerStatus *)power;
-(W5NetworkStatus *)network;
-(W5WiFiStatus *)wifi;
-(void)setWifi:(W5WiFiStatus *)arg1 ;
-(void)setPower:(W5PowerStatus *)arg1 ;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(void)setNetwork:(W5NetworkStatus *)arg1 ;
-(void)setBluetooth:(W5BluetoothStatus *)arg1 ;
-(W5AWDLStatus *)awdl;
-(W5BluetoothStatus *)bluetooth;
-(void)setAwdl:(W5AWDLStatus *)arg1 ;
@end

