/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemAirPlaySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadForceAirPlayOutgoingRequestsPairingPassword;
	NSNumber* _payloadForceAirPlayIncomingRequestsPairingPassword;
	NSNumber* _payloadAllowAirPlayIncomingRequests;

}

@property (nonatomic,copy) NSNumber * payloadForceAirPlayOutgoingRequestsPairingPassword;              //@synthesize payloadForceAirPlayOutgoingRequestsPairingPassword=_payloadForceAirPlayOutgoingRequestsPairingPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceAirPlayIncomingRequestsPairingPassword;              //@synthesize payloadForceAirPlayIncomingRequestsPairingPassword=_payloadForceAirPlayIncomingRequestsPairingPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAirPlayIncomingRequests;                             //@synthesize payloadAllowAirPlayIncomingRequests=_payloadAllowAirPlayIncomingRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withForceAirPlayOutgoingRequestsPairingPassword:(id)arg2 withForceAirPlayIncomingRequestsPairingPassword:(id)arg3 withAllowAirPlayIncomingRequests:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadForceAirPlayOutgoingRequestsPairingPassword:(NSNumber *)arg1 ;
-(void)setPayloadForceAirPlayIncomingRequestsPairingPassword:(NSNumber *)arg1 ;
-(void)setPayloadAllowAirPlayIncomingRequests:(NSNumber *)arg1 ;
-(NSNumber *)payloadForceAirPlayOutgoingRequestsPairingPassword;
-(NSNumber *)payloadForceAirPlayIncomingRequestsPairingPassword;
-(NSNumber *)payloadAllowAirPlayIncomingRequests;
@end

