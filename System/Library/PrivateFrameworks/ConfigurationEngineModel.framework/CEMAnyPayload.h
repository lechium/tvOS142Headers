/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMAnyPayload : CEMPayloadBase {

	NSDictionary* _payloadKeys;

}

@property (copy) NSDictionary * payloadKeys;              //@synthesize payloadKeys=_payloadKeys - In the implementation block
+(id)buildFromDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(id)serializePayload;
-(NSDictionary *)payloadKeys;
-(void)setPayloadKeys:(NSDictionary *)arg1 ;
@end

