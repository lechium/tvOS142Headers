/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, CEMAnyPayload;

@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase {

	NSString* _payloadLabel;
	NSString* _payloadUrl;
	NSNumber* _payloadFileType;
	CEMAnyPayload* _payloadFileData;

}

@property (nonatomic,copy) NSString * payloadLabel;                      //@synthesize payloadLabel=_payloadLabel - In the implementation block
@property (nonatomic,copy) NSString * payloadUrl;                        //@synthesize payloadUrl=_payloadUrl - In the implementation block
@property (nonatomic,copy) NSNumber * payloadFileType;                   //@synthesize payloadFileType=_payloadFileType - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadFileData;              //@synthesize payloadFileData=_payloadFileData - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithLabel:(id)arg1 withUrl:(id)arg2 withFileType:(id)arg3 withFileData:(id)arg4 ;
+(id)buildRequiredOnlyWithLabel:(id)arg1 withFileType:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)payloadFileType;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLabel:(NSString *)arg1 ;
-(NSString *)payloadLabel;
-(void)setPayloadUrl:(NSString *)arg1 ;
-(void)setPayloadFileType:(NSNumber *)arg1 ;
-(void)setPayloadFileData:(CEMAnyPayload *)arg1 ;
-(NSString *)payloadUrl;
-(CEMAnyPayload *)payloadFileData;
@end

