/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVServices/TVServices-Structs.h>
@interface TVSDevice : NSObject
+(id)systemVersion;
+(id)uniqueID;
+(id)productType;
+(id)deviceName;
+(BOOL)isActivated;
+(id)serialNumber;
+(BOOL)_isDevFused;
+(id)modelNumber;
+(id)systemReleaseType;
+(id)regionInfo;
+(id)systemBuildVersion;
+(BOOL)runningAnInternalBuild;
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
+(BOOL)supportsTouchRemote;
+(id)configurationInfo;
+(id)getMobileGestaltData:(CFStringRef)arg1 ;
+(id)marketingPartNumber;
+(id)HDMIFirmwareVersion;
+(unsigned long long)getMobileGestaltUnsignedLongLong:(CFStringRef)arg1 ;
+(BOOL)getMobileGestaltBoolean:(CFStringRef)arg1 ;
+(unsigned long long)_totalDiskCapacity;
+(id)uniqueIDData;
+(id)inverseUniqueID;
+(id)bonjourID;
+(id)userDeviceName;
+(BOOL)supports1080p;
+(BOOL)supportsUHDAndHDR;
+(BOOL)supportsBluetoothLECapablity;
+(BOOL)supportsApplicationStorage;
+(BOOL)runningACustomerBuild;
+(unsigned long long)applicationCapacity;
+(unsigned long long)deviceCapacity;
+(BOOL)isFactoryActivated;
+(id)valueForNVRAMVariable:(id)arg1 ;
@end

