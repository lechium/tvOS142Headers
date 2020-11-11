/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase {

	NSString* _payloadServiceName;
	NSString* _payloadAction;

}

@property (nonatomic,copy) NSString * payloadServiceName;              //@synthesize payloadServiceName=_payloadServiceName - In the implementation block
@property (nonatomic,copy) NSString * payloadAction;                   //@synthesize payloadAction=_payloadAction - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithServiceName:(id)arg1 withAction:(id)arg2 ;
+(id)buildRequiredOnlyWithServiceName:(id)arg1 withAction:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAction:(NSString *)arg1 ;
-(NSString *)payloadAction;
-(void)setPayloadServiceName:(NSString *)arg1 ;
-(NSString *)payloadServiceName;
@end

