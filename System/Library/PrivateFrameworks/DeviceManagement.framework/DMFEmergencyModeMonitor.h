/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedMonitor;
+(id)remoteInterface;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)emergencyModeStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)enableEmergencyModeWithError:(id*)arg1 ;
-(BOOL)enableEmergencyModeForDuration:(double)arg1 withError:(id*)arg2 ;
-(BOOL)disableEmergencyModeWithError:(id*)arg1 ;
-(id)emergencyModeStatusWithError:(id*)arg1 ;
@end

