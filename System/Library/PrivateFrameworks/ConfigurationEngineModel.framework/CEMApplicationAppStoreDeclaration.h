/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMAssetBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMAssetBaseDescriptor, NSString, NSNumber;

@interface CEMApplicationAppStoreDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {

	CEMAssetBaseDescriptor* _payloadDescriptor;
	NSString* _payloadBundleIdentifier;
	NSNumber* _payloadITunesStoreID;

}

@property (nonatomic,copy) CEMAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) NSString * payloadBundleIdentifier;                      //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * payloadITunesStoreID;                         //@synthesize payloadITunesStoreID=_payloadITunesStoreID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withITunesStoreID:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withITunesStoreID:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDescriptor:(CEMAssetBaseDescriptor *)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(CEMAssetBaseDescriptor *)payloadDescriptor;
-(NSString *)payloadBundleIdentifier;
-(void)setPayloadITunesStoreID:(NSNumber *)arg1 ;
-(NSNumber *)payloadITunesStoreID;
@end

