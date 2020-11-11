/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDevice.h>
@class NSString;


@protocol IKJSDevice <JSExport>
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
@required
-(NSString *)systemVersion;
-(NSString *)productType;
-(BOOL)isNetworkReachable;
-(NSString *)model;
-(NSString *)appIdentifier;
-(NSString *)vendorIdentifier;
-(NSString *)appVersion;
-(BOOL)isAdvertisingTrackingEnabled;
-(NSString *)advertisingIdentifier;

@end

#import <libobjc.A.dylib/_IKJSDeviceProxy.h>

@protocol IKAppDeviceConfig;
@class NSString;

@interface IKJSDevice : IKJSObject <NSObject, IKJSDevice, _IKJSDeviceProxy> {

	id _networkPropertiesChangedToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
-(void)dealloc;
-(NSString *)systemVersion;
-(NSString *)productType;
-(BOOL)isNetworkReachable;
-(NSString *)model;
-(id)networkType;
-(id)vendorID;
-(NSString *)appIdentifier;
-(NSString *)vendorIdentifier;
-(NSString *)appVersion;
-(id)pixelRatio;
-(BOOL)isSeedBuild;
-(BOOL)isInAirplaneMode;
-(BOOL)isAdvertisingTrackingEnabled;
-(NSString *)advertisingIdentifier;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(BOOL)runningAnInternalBuild;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(id)capacity:(id)arg1 ;
-(double)lastNetworkChangedTime;
-(BOOL)isInRetailDemoMode;
-(id)osBuildNumber;
-(id)asPrivateIKJSDevice;
@end

