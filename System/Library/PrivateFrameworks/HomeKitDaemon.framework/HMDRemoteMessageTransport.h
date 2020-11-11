/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccountRegistry, NSString;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging> {

	int _transportType;
	HMDAccountRegistry* _accountRegistry;
	long long _qualityOfService;

}

@property (nonatomic,readonly) int transportType;                                 //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) HMDAccountRegistry * accountRegistry;              //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
@property (nonatomic,readonly) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)restriction;
+(id)remoteMessageFromMessage:(id)arg1 secure:(BOOL)arg2 accountRegistry:(id)arg3 ;
+(id)remoteMessageTransportsForProductInfo:(id)arg1 ;
-(id)init;
-(BOOL)isSecure;
-(void)start;
-(long long)qualityOfService;
-(int)transportType;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)initWithAccountRegistry:(id)arg1 ;
-(id)remoteMessageFromMessage:(id)arg1 ;
-(HMDAccountRegistry *)accountRegistry;
-(id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2 ;
-(BOOL)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2 ;
-(void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1 ;
-(long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3 ;
@end

