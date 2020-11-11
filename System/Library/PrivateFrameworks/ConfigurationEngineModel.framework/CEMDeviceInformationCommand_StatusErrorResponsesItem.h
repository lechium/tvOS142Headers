/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase {

	NSString* _statusCode;
	NSArray* _statusErrorChain;

}

@property (nonatomic,copy) NSString * statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSArray * statusErrorChain;              //@synthesize statusErrorChain=_statusErrorChain - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithCode:(id)arg1 withErrorChain:(id)arg2 ;
+(id)buildRequiredOnlyWithCode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusCode;
-(void)setStatusCode:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusErrorChain:(NSArray *)arg1 ;
-(NSArray *)statusErrorChain;
@end
