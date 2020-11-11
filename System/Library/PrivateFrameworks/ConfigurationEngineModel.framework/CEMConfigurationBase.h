/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

@interface CEMConfigurationBase : CEMDeclarationBase
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)declarationClass;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(id)synthesizeProfilePayloadOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3 ;
-(id)profilePayloadsByTypeWithAssetProviders:(id)arg1 ;
-(id)payloadUUIDWithIdentifier:(id)arg1 outUUIDs:(id)arg2 oldUUIDs:(id)arg3 ;
-(id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3 ;
@end

