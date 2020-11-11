/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase {

	NSString* _payloadTVDeviceID;

}

@property (nonatomic,copy) NSString * payloadTVDeviceID;              //@synthesize payloadTVDeviceID=_payloadTVDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTVDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithTVDeviceID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTVDeviceID:(NSString *)arg1 ;
-(NSString *)payloadTVDeviceID;
@end

