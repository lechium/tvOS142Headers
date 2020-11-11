/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemMusicDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowMusicService;
	NSNumber* _payloadAllowRadioService;
	NSNumber* _payloadAllowMusicArtistActivity;
	NSNumber* _payloadAllowMusicVideos;

}

@property (nonatomic,copy) NSNumber * payloadAllowMusicService;                     //@synthesize payloadAllowMusicService=_payloadAllowMusicService - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowRadioService;                     //@synthesize payloadAllowRadioService=_payloadAllowRadioService - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowMusicArtistActivity;              //@synthesize payloadAllowMusicArtistActivity=_payloadAllowMusicArtistActivity - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowMusicVideos;                      //@synthesize payloadAllowMusicVideos=_payloadAllowMusicVideos - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withAllowMusicService:(id)arg2 withAllowRadioService:(id)arg3 withAllowMusicArtistActivity:(id)arg4 withAllowMusicVideos:(id)arg5 ;
+(id)buildWithIdentifier:(id)arg1 withAllowMusicService:(id)arg2 withAllowRadioService:(id)arg3 withAllowMusicArtistActivity:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowMusicService:(NSNumber *)arg1 ;
-(void)setPayloadAllowRadioService:(NSNumber *)arg1 ;
-(void)setPayloadAllowMusicArtistActivity:(NSNumber *)arg1 ;
-(void)setPayloadAllowMusicVideos:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowMusicService;
-(NSNumber *)payloadAllowRadioService;
-(NSNumber *)payloadAllowMusicArtistActivity;
-(NSNumber *)payloadAllowMusicVideos;
@end

