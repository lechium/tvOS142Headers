/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol PTEditingServerDataSource <NSObject>
@property (nonatomic,readonly) NSDictionary * domainInfoByID; 
@property (nonatomic,readonly) NSDictionary * testRecipeInfoByID; 
@required
-(id)rootSettingsArchiveForDomainID:(id)arg1;
-(id)rootSettingsProxyDefinitionForDomainID:(id)arg1;
-(id)activeTestRecipeID;
-(NSDictionary *)domainInfoByID;
-(NSDictionary *)testRecipeInfoByID;

@end
