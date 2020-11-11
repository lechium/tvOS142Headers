/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FMNSXPCConnectionConfigurable.h>

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable> {

	BOOL _machService;
	NSString* _serviceName;
	NSXPCInterface* _remoteInterface;
	NSXPCInterface* _exportedInterface;
	unsigned long long _options;

}

@property (nonatomic,retain) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteInterface;                //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL machService;                                //@synthesize machService=_machService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fmipConfiguration;
+(id)helperConfiguration;
+(id)identityConfiguration;
+(id)emergencyCallInfoPublisherConfiguration;
+(id)userNotificationConfiguration;
+(id)btDiscoveryConfiguration;
+(id)eraseDeviceServiceConfiguration;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)serviceName;
-(NSXPCInterface *)exportedInterface;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)machService;
-(NSXPCInterface *)remoteInterface;
-(void)setMachService:(BOOL)arg1 ;
-(void)setRemoteInterface:(NSXPCInterface *)arg1 ;
@end

