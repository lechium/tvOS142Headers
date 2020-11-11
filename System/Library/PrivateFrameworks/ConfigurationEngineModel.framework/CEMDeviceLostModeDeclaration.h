/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMDeviceLostModeDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadEnable;
	NSString* _payloadMessage;
	NSString* _payloadPhoneNumber;
	NSString* _payloadFootnote;

}

@property (nonatomic,copy) NSNumber * payloadEnable;                   //@synthesize payloadEnable=_payloadEnable - In the implementation block
@property (nonatomic,copy) NSString * payloadMessage;                  //@synthesize payloadMessage=_payloadMessage - In the implementation block
@property (nonatomic,copy) NSString * payloadPhoneNumber;              //@synthesize payloadPhoneNumber=_payloadPhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * payloadFootnote;                 //@synthesize payloadFootnote=_payloadFootnote - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withMessage:(id)arg3 withPhoneNumber:(id)arg4 withFootnote:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnable:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadMessage:(NSString *)arg1 ;
-(NSString *)payloadMessage;
-(void)setPayloadPhoneNumber:(NSString *)arg1 ;
-(NSString *)payloadPhoneNumber;
-(void)setPayloadEnable:(NSNumber *)arg1 ;
-(void)setPayloadFootnote:(NSString *)arg1 ;
-(NSNumber *)payloadEnable;
-(NSString *)payloadFootnote;
@end

