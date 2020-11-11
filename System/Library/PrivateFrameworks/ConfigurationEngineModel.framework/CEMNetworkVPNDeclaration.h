/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, CEMNetworkVPNDeclaration_VendorConfig, CEMNetworkVPNDeclaration_VPN, CEMNetworkVPNDeclaration_IPv4, CEMNetworkVPNDeclaration_PPP, CEMNetworkVPNDeclaration_IPSec, CEMNetworkVPNDeclaration_IKEv2, CEMNetworkVPNDeclaration_Proxies, CEMNetworkVPNDeclaration_AlwaysOn, NSNumber, CEMNetworkVPNDeclaration_DNS;

@interface CEMNetworkVPNDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadVPNType;
	NSString* _payloadVPNSubType;
	NSString* _payloadUserDefinedName;
	CEMNetworkVPNDeclaration_VendorConfig* _payloadVendorConfig;
	CEMNetworkVPNDeclaration_VPN* _payloadVPN;
	CEMNetworkVPNDeclaration_IPv4* _payloadIPv4;
	CEMNetworkVPNDeclaration_PPP* _payloadPPP;
	CEMNetworkVPNDeclaration_IPSec* _payloadIPSec;
	CEMNetworkVPNDeclaration_IKEv2* _payloadIKEv2;
	CEMNetworkVPNDeclaration_Proxies* _payloadProxies;
	CEMNetworkVPNDeclaration_AlwaysOn* _payloadAlwaysOn;
	NSNumber* _payloadDisconnectOnIdle;
	NSNumber* _payloadDisconnectOnIdleTimer;
	CEMNetworkVPNDeclaration_DNS* _payloadDNS;

}

@property (nonatomic,copy) NSString * payloadVPNType;                                                //@synthesize payloadVPNType=_payloadVPNType - In the implementation block
@property (nonatomic,copy) NSString * payloadVPNSubType;                                             //@synthesize payloadVPNSubType=_payloadVPNSubType - In the implementation block
@property (nonatomic,copy) NSString * payloadUserDefinedName;                                        //@synthesize payloadUserDefinedName=_payloadUserDefinedName - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_VendorConfig * payloadVendorConfig;              //@synthesize payloadVendorConfig=_payloadVendorConfig - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_VPN * payloadVPN;                                //@synthesize payloadVPN=_payloadVPN - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_IPv4 * payloadIPv4;                              //@synthesize payloadIPv4=_payloadIPv4 - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_PPP * payloadPPP;                                //@synthesize payloadPPP=_payloadPPP - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_IPSec * payloadIPSec;                            //@synthesize payloadIPSec=_payloadIPSec - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_IKEv2 * payloadIKEv2;                            //@synthesize payloadIKEv2=_payloadIKEv2 - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_Proxies * payloadProxies;                        //@synthesize payloadProxies=_payloadProxies - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_AlwaysOn * payloadAlwaysOn;                      //@synthesize payloadAlwaysOn=_payloadAlwaysOn - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisconnectOnIdle;                                       //@synthesize payloadDisconnectOnIdle=_payloadDisconnectOnIdle - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDisconnectOnIdleTimer;                                  //@synthesize payloadDisconnectOnIdleTimer=_payloadDisconnectOnIdleTimer - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_DNS * payloadDNS;                                //@synthesize payloadDNS=_payloadDNS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withVPNType:(id)arg2 withVPNSubType:(id)arg3 withUserDefinedName:(id)arg4 withVendorConfig:(id)arg5 withVPN:(id)arg6 withIPv4:(id)arg7 withPPP:(id)arg8 withIPSec:(id)arg9 withIKEv2:(id)arg10 withProxies:(id)arg11 withAlwaysOn:(id)arg12 withDisconnectOnIdle:(id)arg13 withDisconnectOnIdleTimer:(id)arg14 withDNS:(id)arg15 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNType:(id)arg2 withUserDefinedName:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadVPNType:(NSString *)arg1 ;
-(void)setPayloadVPNSubType:(NSString *)arg1 ;
-(void)setPayloadUserDefinedName:(NSString *)arg1 ;
-(void)setPayloadVendorConfig:(CEMNetworkVPNDeclaration_VendorConfig *)arg1 ;
-(void)setPayloadVPN:(CEMNetworkVPNDeclaration_VPN *)arg1 ;
-(void)setPayloadIPv4:(CEMNetworkVPNDeclaration_IPv4 *)arg1 ;
-(void)setPayloadPPP:(CEMNetworkVPNDeclaration_PPP *)arg1 ;
-(void)setPayloadIPSec:(CEMNetworkVPNDeclaration_IPSec *)arg1 ;
-(void)setPayloadIKEv2:(CEMNetworkVPNDeclaration_IKEv2 *)arg1 ;
-(void)setPayloadProxies:(CEMNetworkVPNDeclaration_Proxies *)arg1 ;
-(void)setPayloadAlwaysOn:(CEMNetworkVPNDeclaration_AlwaysOn *)arg1 ;
-(void)setPayloadDisconnectOnIdle:(NSNumber *)arg1 ;
-(void)setPayloadDisconnectOnIdleTimer:(NSNumber *)arg1 ;
-(void)setPayloadDNS:(CEMNetworkVPNDeclaration_DNS *)arg1 ;
-(NSString *)payloadVPNType;
-(NSString *)payloadVPNSubType;
-(NSString *)payloadUserDefinedName;
-(CEMNetworkVPNDeclaration_VendorConfig *)payloadVendorConfig;
-(CEMNetworkVPNDeclaration_VPN *)payloadVPN;
-(CEMNetworkVPNDeclaration_IPv4 *)payloadIPv4;
-(CEMNetworkVPNDeclaration_PPP *)payloadPPP;
-(CEMNetworkVPNDeclaration_IPSec *)payloadIPSec;
-(CEMNetworkVPNDeclaration_IKEv2 *)payloadIKEv2;
-(CEMNetworkVPNDeclaration_Proxies *)payloadProxies;
-(CEMNetworkVPNDeclaration_AlwaysOn *)payloadAlwaysOn;
-(NSNumber *)payloadDisconnectOnIdle;
-(NSNumber *)payloadDisconnectOnIdleTimer;
-(CEMNetworkVPNDeclaration_DNS *)payloadDNS;
@end

