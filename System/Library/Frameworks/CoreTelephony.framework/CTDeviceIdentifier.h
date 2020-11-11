/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTDeviceIdentifier : NSObject <NSSecureCoding> {

	NSString* _deviceName;
	unsigned long long _deviceType;
	NSString* _EID;
	NSString* _IMEI;

}

@property (nonatomic,retain) NSString * deviceName;                      //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * EID;                             //@synthesize EID=_EID - In the implementation block
@property (nonatomic,retain) NSString * IMEI;                            //@synthesize IMEI=_IMEI - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)IMEI;
-(void)setIMEI:(NSString *)arg1 ;
-(NSString *)EID;
-(void)setEID:(NSString *)arg1 ;
-(unsigned long long)deviceType;
-(id)initWithDeviceType:(unsigned long long)arg1 EID:(id)arg2 IMEI:(id)arg3 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setDeviceType:(unsigned long long)arg1 ;
@end

