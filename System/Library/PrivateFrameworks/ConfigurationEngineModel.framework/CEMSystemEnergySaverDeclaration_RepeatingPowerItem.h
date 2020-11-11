/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase {

	NSString* _payloadEventtype;
	NSNumber* _payloadWeekdays;
	NSNumber* _payloadTime;

}

@property (nonatomic,copy) NSString * payloadEventtype;              //@synthesize payloadEventtype=_payloadEventtype - In the implementation block
@property (nonatomic,copy) NSNumber * payloadWeekdays;               //@synthesize payloadWeekdays=_payloadWeekdays - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTime;                   //@synthesize payloadTime=_payloadTime - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithEventtype:(id)arg1 withWeekdays:(id)arg2 withTime:(id)arg3 ;
+(id)buildRequiredOnlyWithEventtype:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEventtype:(NSString *)arg1 ;
-(void)setPayloadWeekdays:(NSNumber *)arg1 ;
-(void)setPayloadTime:(NSNumber *)arg1 ;
-(NSString *)payloadEventtype;
-(NSNumber *)payloadWeekdays;
-(NSNumber *)payloadTime;
@end
